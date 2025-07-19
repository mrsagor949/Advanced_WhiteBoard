// Fill out your copyright notice in the Description page of Project Settings.

#include "Actor/WhiteboardActor.h"
#include "Camera/CameraComponent.h"
#include "Engine/Canvas.h"
#include "Engine/TextureRenderTarget2D.h"
#include "Kismet/KismetRenderingLibrary.h"
#include "Net/UnrealNetwork.h"
#include "Materials/MaterialInstanceDynamic.h"
#include "Components/BoxComponent.h"
#include "GameFramework/PlayerController.h"
#include "Misc/FileHelper.h"
#include "Engine/Engine.h"
#include "Controller/AWhiteboard_Player_Controller.h"

// Sets default values
AWhiteboardActor::AWhiteboardActor()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
    bReplicates = true;
    
    // IMPORTANT: Set this to false to allow proper ownership transfer
    bAlwaysRelevant = false;
    
    // Set net update frequency for better responsiveness
    SetNetUpdateFrequency(10.0f);
    SetMinNetUpdateFrequency(2.0f);
    
	// Replicate this actor
	SetReplicates(true);
    AActor::SetReplicateMovement(true);

    // Create root component
    RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("RootComponent"));
    
    // Create whiteboard mesh
    WhiteboardMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("WhiteboardMesh"));
    WhiteboardMesh->SetupAttachment(RootComponent);
    WhiteboardMesh->SetRelativeRotation(FRotator(0.0f, 0.0f, 0.0f));
    WhiteboardMesh->SetCollisionProfileName(TEXT("BlockAll"));
    
    // Create interaction volume
    InteractionVolume = CreateDefaultSubobject<UBoxComponent>(TEXT("InteractionVolume"));
    InteractionVolume->SetupAttachment(RootComponent);
    InteractionVolume->SetBoxExtent(FVector(InteractionDistance, InteractionDistance, InteractionDistance));
    InteractionVolume->SetCollisionProfileName(TEXT("Trigger"));
    
    // Create camera
    WhiteboardCamera = CreateDefaultSubobject<UCameraComponent>(TEXT("WhiteboardCamera"));
    WhiteboardCamera->SetupAttachment(WhiteboardMesh);
    WhiteboardCamera->SetRelativeLocation(FVector(0.0f, 125.0f, 50.0f));
    WhiteboardCamera->SetRelativeRotation(FRotator(0.0f, -90.0f, 0.0f));
    
    // Initialize drawing properties
    CurrentTool = EDrawingTool::Brush;
    CurrentColor = FLinearColor::Black;
    BrushSize = 5.0f;
    SelectedBrushTextureIndex = 0;
    SelectedFigureTextureIndex = 0;
    
    // Initialize drawing state
    bIsDrawing = false;
    bIsDrawingShape = false;
    bCanInteract = false;
    InteractingPawns.Empty();
    
    CurrentHistoryIndex = -1;
    NextStrokeID = 0;
}

// Called when the game starts or when spawned
void AWhiteboardActor::BeginPlay()
{
	Super::BeginPlay();
    

    // Bind overlap events
    InteractionVolume->OnComponentBeginOverlap.AddDynamic(this, &AWhiteboardActor::OnTriggerBeginOverlap);
    InteractionVolume->OnComponentEndOverlap.AddDynamic(this, &AWhiteboardActor::OnTriggerEndOverlap);

    InitializeWhiteboard();
    CreatePreviewCanvas();
}

void AWhiteboardActor::InitializeWhiteboard()
{
    // Create render target if it doesn't exist
    if (!DrawingCanvas)
    {
        DrawingCanvas = UKismetRenderingLibrary::CreateRenderTarget2D(
            GetWorld(), CanvasWidth, CanvasHeight, RTF_RGBA8);
    }
    
    // Clear the canvas
    UKismetRenderingLibrary::ClearRenderTarget2D(GetWorld(), DrawingCanvas, FLinearColor::White);
    
    // Create dynamic material instance and set the render target
    if (WhiteboardMesh->GetStaticMesh())
    {
        UMaterialInterface* Material = WhiteboardMesh->GetMaterial(InitMaterialIndex);
        if (Material)
        {
            UMaterialInstanceDynamic* DynamicMaterial = UMaterialInstanceDynamic::Create(Material, this);
            DynamicMaterial->SetTextureParameterValue(TEXT("DrawingTexture"), DrawingCanvas);
            WhiteboardMesh->SetMaterial(InitMaterialIndex, DynamicMaterial); 
        }
    }
}

void AWhiteboardActor::CreatePreviewCanvas()
{
    if (!PreviewCanvas)
    {
        PreviewCanvas = UKismetRenderingLibrary::CreateRenderTarget2D(
            GetWorld(), CanvasWidth, CanvasHeight, RTF_RGBA8);
    }
    UKismetRenderingLibrary::ClearRenderTarget2D(GetWorld(), PreviewCanvas, FLinearColor::Transparent);
}

bool AWhiteboardActor::IsShapeTool(EDrawingTool Tool) const
{
    return Tool == EDrawingTool::Line || Tool == EDrawingTool::Rectangle || Tool == EDrawingTool::Circle;
}

// Called every frame
void AWhiteboardActor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AWhiteboardActor::OnConstruction(const FTransform& Transform)
{
    Super::OnConstruction(Transform);
    InteractionVolume->SetBoxExtent(FVector(InteractionDistance, InteractionDistance, InteractionDistance));
}

void AWhiteboardActor::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    // Replicate drawing properties
    DOREPLIFETIME(AWhiteboardActor, CurrentTool);
    DOREPLIFETIME(AWhiteboardActor, CurrentColor);
    DOREPLIFETIME(AWhiteboardActor, BrushSize);
    DOREPLIFETIME(AWhiteboardActor, SelectedBrushTextureIndex);
    DOREPLIFETIME(AWhiteboardActor, SelectedFigureTextureIndex);
    DOREPLIFETIME(AWhiteboardActor, CurrentTextString);
    
    // Replicate drawing history with RepNotify
    DOREPLIFETIME_CONDITION_NOTIFY(AWhiteboardActor, StrokeHistory, COND_None, REPNOTIFY_Always);
    DOREPLIFETIME(AWhiteboardActor, CurrentHistoryIndex);
    DOREPLIFETIME(AWhiteboardActor, NextStrokeID);
    
    // Replicate interaction state
    DOREPLIFETIME(AWhiteboardActor, InteractingPawns);
    DOREPLIFETIME(AWhiteboardActor, MaxInteractingPlayers);
}

void AWhiteboardActor::OnRep_StrokeHistory()
{
    // Redraw canvas when stroke history is replicated
    RedrawCanvas();
}

void AWhiteboardActor::OnRep_InteractingPawns()
{
    // Handle interaction state changes on clients
    UE_LOG(LogTemp, Warning, TEXT("OnRep_InteractingPawns - %d players interacting"), InteractingPawns.Num());
}







// NEW: Request interaction through PlayerController
void AWhiteboardActor::RequestInteraction(APawn* Player)
{
    UE_LOG(LogTemp, Warning, TEXT("RequestInteraction called - Player: %s, Role: %d"), 
           Player ? *Player->GetName() : TEXT("None"), (int32)GetLocalRole());

    if (!Player)
    {
        UE_LOG(LogTemp, Error, TEXT("RequestInteraction failed - Invalid player"));
        return;
    }

    // Get the player controller
    APlayerController* PC = Cast<APlayerController>(Player->GetController());
    if (!PC)
    {
        UE_LOG(LogTemp, Error, TEXT("RequestInteraction failed - No PlayerController"));
        return;
    }

    // Call RPC through PlayerController (which has proper ownership)
    if (HasAuthority())
    {
        // We're on the server, call directly
        StartInteraction(Player);
    }
    else
    {
        // We're on client, call server RPC through PlayerController
        if (AWhiteboardController* YourPC = Cast<AWhiteboardController>(PC))
        {
            YourPC->Server_RequestWhiteboardInteraction(this, Player);
        }
        else
        {
            UE_LOG(LogTemp, Error, TEXT("PlayerController is not of type AYourPlayerController"));
        }
    }
}

// NEW: Request end interaction through PlayerController
void AWhiteboardActor::RequestEndInteraction(APawn* Player)
{
    if (!Player)
    {
        UE_LOG(LogTemp, Error, TEXT("RequestEndInteraction failed - Invalid player"));
        return;
    }

    APlayerController* PC = Cast<APlayerController>(Player->GetController());
    if (!PC)
    {
        UE_LOG(LogTemp, Error, TEXT("RequestEndInteraction failed - No PlayerController"));
        return;
    }

    if (HasAuthority())
    {
        EndInteractionForPlayer(Player);
    }
    else
    {
        if (AWhiteboardController* YourPC = Cast<AWhiteboardController>(PC))
        {
            YourPC->Server_EndWhiteboardInteraction(this, Player);
        }
    }
}

// NEW: Validation function for client-side prediction
bool AWhiteboardActor::CanPlayerInteract(APawn* Player) const
{
    if (!Player) return false;
    
    // Check distance
    float Distance = FVector::Distance(Player->GetActorLocation(), GetActorLocation());
    if (Distance > InteractionDistance) 
    {
        UE_LOG(LogTemp, Log, TEXT("Player too far: %f > %f"), Distance, InteractionDistance);
        return false;
    }
    
    // Check if already interacting
    if (InteractingPawns.Contains(Player)) 
    {
        UE_LOG(LogTemp, Log, TEXT("Player already interacting"));
        return true; // Already interacting is OK
    }
    
    // Check player limit
    if (!CanAcceptMorePlayers()) 
    {
        UE_LOG(LogTemp, Log, TEXT("Cannot accept more players: %d/%d"), InteractingPawns.Num(), MaxInteractingPlayers);
        return false;
    }
    
    return true;
}

// Drawing Tool Functions
void AWhiteboardActor::SetCurrentTool(EDrawingTool NewTool)
{
    if (HasAuthority())
    {
        CurrentTool = NewTool;
    }
    else
    {
        if (APlayerController* PC = GetWorld()->GetFirstPlayerController())
        {
            if (AWhiteboardController* YourPC = Cast<AWhiteboardController>(PC))
            {
                YourPC->Server_WhiteboardSetCurrentTool(this, NewTool);
            }
        }
    }
}

void AWhiteboardActor::SetCurrentColor(FLinearColor NewColor)
{
    if (HasAuthority())
    {
        CurrentColor = NewColor;
    }
    else
    {
        if (APlayerController* PC = GetWorld()->GetFirstPlayerController())
        {
            if (AWhiteboardController* YourPC = Cast<AWhiteboardController>(PC))
            {
                YourPC->Server_WhiteboardSetCurrentColor(this, NewColor);
            }
        }
    }
}

void AWhiteboardActor::SetBrushSize(float NewSize)
{
    if (HasAuthority())
    {
        BrushSize = FMath::Clamp(NewSize, 1.0f, 100.0f);
    }
    else
    {
        if (APlayerController* PC = GetWorld()->GetFirstPlayerController())
        {
            if (AWhiteboardController* YourPC = Cast<AWhiteboardController>(PC))
            {
                YourPC->Server_WhiteboardSetBrushSize(this, NewSize);
            }
        }
    }
}

void AWhiteboardActor::SetBrushTexture(int32 TextureIndex)
{
    if (HasAuthority())
    {
        if (BrushTextures.IsValidIndex(TextureIndex))
        {
            SelectedBrushTextureIndex = TextureIndex;
        }
    }
    else
    {
        if (APlayerController* PC = GetWorld()->GetFirstPlayerController())
        {
            if (AWhiteboardController* YourPC = Cast<AWhiteboardController>(PC))
            {
                YourPC->Server_WhiteboardSetBrushTexture(this, TextureIndex);
            }
        }
    }
}

void AWhiteboardActor::SetFigureTexture(int32 TextureIndex)
{
    if (HasAuthority())
    {
        if (FigureTextures.IsValidIndex(TextureIndex))
        {
            SelectedFigureTextureIndex = TextureIndex;
        }
    }
    else
    {
        if (APlayerController* PC = GetWorld()->GetFirstPlayerController())
        {
            if (AWhiteboardController* YourPC = Cast<AWhiteboardController>(PC))
            {
                YourPC->Server_WhiteboardSetFigureTexture(this, TextureIndex);
            }
        }
    }
}

bool AWhiteboardActor::IsPlayerInRange(APlayerController* PlayerController) const
{
    if (!PlayerController)
    {
        return false;
    }
    
    APawn* Pawn = PlayerController->GetPawn();
    if (!Pawn)
    {
        return false;
    }
    
    float Distance = FVector::Distance(Pawn->GetActorLocation(), GetActorLocation());
    return Distance <= InteractionDistance;
}

FVector2D AWhiteboardActor::WorldToCanvasPosition(const FVector& WorldPosition) const
{
    // Convert world position to local space
    FVector LocalPosition = WhiteboardMesh->GetComponentTransform().InverseTransformPosition(WorldPosition);
    
    // Map local position to UV coordinates (0-1 range)
    float U = (LocalPosition.Y + WhiteboardWidth * 0.5f) / WhiteboardWidth;
    float V = (-LocalPosition.Z + WhiteboardHeight * 0.5f) / WhiteboardHeight;
    
    // Clamp UV coordinates
    U = FMath::Clamp(U, 0.0f, 1.0f);
    V = FMath::Clamp(V, 0.0f, 1.0f);
    
    // Map UV coordinates to canvas pixels
    FVector2D CanvasPosition;
    CanvasPosition.X = U * CanvasWidth;
    CanvasPosition.Y = V * CanvasHeight;
    
    return CanvasPosition;
}

void AWhiteboardActor::ClearWhiteboard()
{
    if (HasAuthority())
    {
        UKismetRenderingLibrary::ClearRenderTarget2D(GetWorld(), DrawingCanvas, FLinearColor::White);
        StrokeHistory.Empty();
        CurrentHistoryIndex = -1;
        NextStrokeID = 0;
        
        // Notify all clients
        Multicast_ClearWhiteboard();
    }
    else
    {
        if (APlayerController* PC = GetWorld()->GetFirstPlayerController())
        {
            if (AWhiteboardController* YourPC = Cast<AWhiteboardController>(PC))
            {
                YourPC->Server_WhiteboardClearWhiteboard(this);
            }
        }
    }
}

void AWhiteboardActor::Undo()
{
    if (HasAuthority())
    {
        if (CurrentHistoryIndex >= 0)
        {
            CurrentHistoryIndex--;
            RedrawCanvas();
            
            // Notify all clients
            Multicast_UpdateHistory(StrokeHistory, CurrentHistoryIndex);
        }
    }
    else
    {
        if (APlayerController* PC = GetWorld()->GetFirstPlayerController())
        {
            if (AWhiteboardController* YourPC = Cast<AWhiteboardController>(PC))
            {
                YourPC->Server_WhiteboardUndo(this);
            }
        }
    }
}

void AWhiteboardActor::Redo()
{
    if (HasAuthority())
    {
        if (CurrentHistoryIndex < StrokeHistory.Num() - 1)
        {
            CurrentHistoryIndex++;
            RedrawCanvas();
            
            // Notify all clients
            Multicast_UpdateHistory(StrokeHistory, CurrentHistoryIndex);
        }
    }
    else
    {
        if (APlayerController* PC = GetWorld()->GetFirstPlayerController())
        {
            if (AWhiteboardController* YourPC = Cast<AWhiteboardController>(PC))
            {
                YourPC->Server_WhiteboardRedo(this);
            }
        }
    }
}

void AWhiteboardActor::ExportToPNG(const FString& FilePath)
{
    UTexture2D* Texture = RenderTargetToTexture2D(DrawingCanvas);
    if (Texture)
    {
        // Implementation for PNG export would go here
        // This requires additional image processing libraries
        UE_LOG(LogTemp, Display, TEXT("PNG export functionality needs to be implemented"));
    }
}

void AWhiteboardActor::ExportToSVG(const FString& FilePath)
{
    FString FullPath = FPaths::ProjectSavedDir() / FilePath;
    GenerateSVGFromStrokes(FullPath);
}

// Drawing Functions - FIXED for shape tools
void AWhiteboardActor::StartDrawing(const FVector2D& CanvasPosition)
{
    if (GetLocalRole() == ROLE_Authority)
    {
        if (bIsDrawing)
        {
            EndDrawing();
        }
        
        bIsDrawing = true;
        
        // Initialize new stroke
        CurrentStroke = FStroke();
        CurrentStroke.StrokeID = NextStrokeID++;
        CurrentStroke.Tool = CurrentTool;
        CurrentStroke.Color = CurrentColor;
        CurrentStroke.Size = BrushSize;
        CurrentStroke.StartPosition = CanvasPosition;
        CurrentStroke.EndPosition = CanvasPosition;
        CurrentStroke.bIsComplete = false;
        
        if (BrushTextures.IsValidIndex(SelectedBrushTextureIndex))
        {
            CurrentStroke.BrushTexture = BrushTextures[SelectedBrushTextureIndex];
        }

        if (FigureTextures.IsValidIndex(SelectedFigureTextureIndex))
        {
            CurrentStroke.FigureTexture = FigureTextures[SelectedFigureTextureIndex];
        }
        
        FDrawingPoint Point(CanvasPosition, 1.0f, CurrentColor, BrushSize, CurrentTool, CurrentStroke.StrokeID);
        CurrentStroke.Points.Add(Point);

        if (CurrentTool == EDrawingTool::Text)
        {
            AddText(CanvasPosition, CurrentTextString);
            bIsDrawing = false; 
            return;
        }
        else if (CurrentTool == EDrawingTool::Texture || CurrentTool == EDrawingTool::Figure)
        {
            DrawFigure(CanvasPosition, SelectedFigureTextureIndex);
            bIsDrawing = false;
            return;
        }
        // Handle shape tools differently
        else if (IsShapeTool(CurrentTool))
        {
            bIsDrawingShape = true;
        }
        else
        {
            // For brush tools, draw immediately
            DrawStroke(CurrentStroke);
        }
        
        // Notify all clients to start drawing
        Multicast_StartDrawing(CanvasPosition, CurrentTool, CurrentColor, BrushSize, SelectedBrushTextureIndex, SelectedFigureTextureIndex, CurrentStroke.StrokeID);
    }
    else
    {
        UE_LOG(LogTemp, Warning, TEXT("Client StartDrawing - Sending RPC to server through PlayerController"));
        if (APlayerController* PC = GetWorld()->GetFirstPlayerController())
        {
            if (AWhiteboardController* YourPC = Cast<AWhiteboardController>(PC))
            {
                YourPC->Server_WhiteboardStartDrawing(this, CanvasPosition, CurrentTool, CurrentColor, BrushSize, SelectedBrushTextureIndex, SelectedFigureTextureIndex);
            }
        }
    }
}

void AWhiteboardActor::ContinueDrawing(const FVector2D& CanvasPosition)
{
    if (GetLocalRole() == ROLE_Authority)
    {
        if (!bIsDrawing)
        {
            return;
        }
        
        CurrentStroke.EndPosition = CanvasPosition;
        
        if (IsShapeTool(CurrentTool))
        {
            // For shape tools, update preview
            if (bIsDrawingShape)
            {
                // Clear previous preview and draw new one
                ClearShapePreview();
                DrawShapePreview(CurrentStroke.StartPosition, CurrentStroke.EndPosition, 
                               CurrentTool, CurrentColor, BrushSize);
                
                // Notify clients to update preview
                Multicast_UpdateShapePreview(CurrentStroke.StartPosition, CurrentStroke.EndPosition, 
                                           CurrentTool, CurrentColor, BrushSize, CurrentStroke.StrokeID);
            }
        }
        else
        {
            // For brush tools, continue drawing as before
            FDrawingPoint Point(CanvasPosition, 1.0f, CurrentColor, BrushSize, CurrentTool, CurrentStroke.StrokeID);
            CurrentStroke.Points.Add(Point);
            
            // Draw line between last two points
            if (CurrentStroke.Points.Num() >= 2)
            {
                DrawStroke(CurrentStroke);
            }
        }
        
        // Notify all clients
        Multicast_ContinueDrawing(CanvasPosition, CurrentStroke.StrokeID);
    }
    else
    {
        if (APlayerController* PC = GetWorld()->GetFirstPlayerController())
        {
            if (AWhiteboardController* YourPC = Cast<AWhiteboardController>(PC))
            {
                YourPC->Server_WhiteboardContinueDrawing(this, CanvasPosition);
            }
        }
    }
}

void AWhiteboardActor::EndDrawing()
{
    if (GetLocalRole() == ROLE_Authority)
    {
        if (!bIsDrawing)
        {
            return;
        }
        
        bIsDrawing = false;
        
        if (IsShapeTool(CurrentTool) && bIsDrawingShape)
        {
            // For shape tools, finalize the shape
            bIsDrawingShape = false;
            CurrentStroke.bIsComplete = true;
            
            // Clear preview
            ClearShapePreview();
            
            // Add end point for shapes
            if (CurrentStroke.Points.Num() == 1)
            {
                FDrawingPoint EndPoint(CurrentStroke.EndPosition, 1.0f, CurrentColor, BrushSize, CurrentTool, CurrentStroke.StrokeID);
                CurrentStroke.Points.Add(EndPoint);
            }
            
            // Draw the final shape
            DrawShape(CurrentStroke);
        }
        
        // Add stroke to history
        if (CurrentHistoryIndex < StrokeHistory.Num() - 1)
        {
            StrokeHistory.RemoveAt(CurrentHistoryIndex + 1, StrokeHistory.Num() - CurrentHistoryIndex - 1);
        }
        
        StrokeHistory.Add(CurrentStroke);
        CurrentHistoryIndex = StrokeHistory.Num() - 1;
        
        // Notify all clients
        Multicast_EndDrawing(CurrentStroke.StrokeID);
        
        // Clear current stroke
        CurrentStroke = FStroke();
    }
    else
    {
        if (APlayerController* PC = GetWorld()->GetFirstPlayerController())
        {
            if (AWhiteboardController* YourPC = Cast<AWhiteboardController>(PC))
            {
                YourPC->Server_WhiteboardEndDrawing(this);
            }
        }
    }
}

void AWhiteboardActor::SetTextString(const FString& NewTextString)
{
    if (HasAuthority())
    {
        CurrentTextString = NewTextString;
    }
    else
    {
        if (APlayerController* PC = GetWorld()->GetFirstPlayerController())
        {
            if (AWhiteboardController* YourPC = Cast<AWhiteboardController>(PC))
            {
                YourPC->Server_WhiteboardSetTextString(this, NewTextString);
            }
        }
    }
}

void AWhiteboardActor::Server_SetTextString_Implementation(const FString& NewTextString)
{
    CurrentTextString = NewTextString;
}

// NEW: Shape preview functions
void AWhiteboardActor::DrawShapePreview(const FVector2D& StartPos, const FVector2D& EndPos, EDrawingTool Tool, FLinearColor Color, float Size)
{
    if (!PreviewCanvas)
    {
        CreatePreviewCanvas();
    }
    
    UCanvas* Canvas = nullptr;
    FVector2D CanvasSize;
    FDrawToRenderTargetContext Context;
    UKismetRenderingLibrary::BeginDrawCanvasToRenderTarget(GetWorld(), PreviewCanvas, Canvas, CanvasSize, Context);
    
    if (Canvas)
    {
        switch (Tool)
        {
            case EDrawingTool::Line:
                Canvas->K2_DrawLine(StartPos, EndPos, Size, Color);
                break;
                
            case EDrawingTool::Rectangle:
                {
                    float Left = FMath::Min(StartPos.X, EndPos.X);
                    float Top = FMath::Min(StartPos.Y, EndPos.Y);
                    float Right = FMath::Max(StartPos.X, EndPos.X);
                    float Bottom = FMath::Max(StartPos.Y, EndPos.Y);
                    
                    Canvas->K2_DrawLine(FVector2D(Left, Top), FVector2D(Right, Top), Size, Color);
                    Canvas->K2_DrawLine(FVector2D(Right, Top), FVector2D(Right, Bottom), Size, Color);
                    Canvas->K2_DrawLine(FVector2D(Right, Bottom), FVector2D(Left, Bottom), Size, Color);
                    Canvas->K2_DrawLine(FVector2D(Left, Bottom), FVector2D(Left, Top), Size, Color);
                }
                break;
                
            case EDrawingTool::Circle:
                {
                    float CenterX = (StartPos.X + EndPos.X) / 2.0f;
                    float CenterY = (StartPos.Y + EndPos.Y) / 2.0f;
                    float Radius = FVector2D::Distance(StartPos, EndPos) / 2.0f;
                    
                    int32 NumSegments = 32;
                    TArray<FVector2D> Points;
                    
                    for (int32 i = 0; i <= NumSegments; i++)
                    {
                        float Angle = 2.0f * PI * i / NumSegments;
                        float X = CenterX + Radius * FMath::Cos(Angle);
                        float Y = CenterY + Radius * FMath::Sin(Angle);
                        Points.Add(FVector2D(X, Y));
                    }
                    
                    for (int32 i = 0; i < Points.Num() - 1; i++)
                    {
                        Canvas->K2_DrawLine(Points[i], Points[i + 1], Size, Color);
                    }
                }
                break;
        }
    }
    
    UKismetRenderingLibrary::EndDrawCanvasToRenderTarget(GetWorld(), Context);
    
    // Composite preview onto main canvas temporarily
    UpdateCanvasMaterial();
}

void AWhiteboardActor::ClearShapePreview()
{
    if (PreviewCanvas)
    {
        UKismetRenderingLibrary::ClearRenderTarget2D(GetWorld(), PreviewCanvas, FLinearColor::Transparent);
    }
}

void AWhiteboardActor::DrawShape(const FStroke& Stroke)
{
    if (Stroke.Points.Num() < 2)
    {
        return;
    }
    
    UCanvas* Canvas = nullptr;
    FVector2D CanvasSize;
    FDrawToRenderTargetContext Context;
    UKismetRenderingLibrary::BeginDrawCanvasToRenderTarget(GetWorld(), DrawingCanvas, Canvas, CanvasSize, Context);
    
    if (Canvas)
    {
        FVector2D StartPos = Stroke.Points[0].Position;
        FVector2D EndPos = Stroke.Points[Stroke.Points.Num() - 1].Position;
        
        switch (Stroke.Tool)
        {
            case EDrawingTool::Line:
                Canvas->K2_DrawLine(StartPos, EndPos, Stroke.Size, Stroke.Color);
                break;
                
            case EDrawingTool::Rectangle:
                {
                    float Left = FMath::Min(StartPos.X, EndPos.X);
                    float Top = FMath::Min(StartPos.Y, EndPos.Y);
                    float Right = FMath::Max(StartPos.X, EndPos.X);
                    float Bottom = FMath::Max(StartPos.Y, EndPos.Y);
                    
                    Canvas->K2_DrawLine(FVector2D(Left, Top), FVector2D(Right, Top), Stroke.Size, Stroke.Color);
                    Canvas->K2_DrawLine(FVector2D(Right, Top), FVector2D(Right, Bottom), Stroke.Size, Stroke.Color);
                    Canvas->K2_DrawLine(FVector2D(Right, Bottom), FVector2D(Left, Bottom), Stroke.Size, Stroke.Color);
                    Canvas->K2_DrawLine(FVector2D(Left, Bottom), FVector2D(Left, Top), Stroke.Size, Stroke.Color);
                }
                break;
                
            case EDrawingTool::Circle:
                {
                    float CenterX = (StartPos.X + EndPos.X) / 2.0f;
                    float CenterY = (StartPos.Y + EndPos.Y) / 2.0f;
                    float Radius = FVector2D::Distance(StartPos, EndPos) / 2.0f;
                    
                    int32 NumSegments = 32;
                    TArray<FVector2D> Points;
                    
                    for (int32 i = 0; i <= NumSegments; i++)
                    {
                        float Angle = 2.0f * PI * i / NumSegments;
                        float X = CenterX + Radius * FMath::Cos(Angle);
                        float Y = CenterY + Radius * FMath::Sin(Angle);
                        Points.Add(FVector2D(X, Y));
                    }
                    
                    for (int32 i = 0; i < Points.Num() - 1; i++)
                    {
                        Canvas->K2_DrawLine(Points[i], Points[i + 1], Stroke.Size, Stroke.Color);
                    }
                }
                break;
        }
    }
    
    UKismetRenderingLibrary::EndDrawCanvasToRenderTarget(GetWorld(), Context);
    UpdateCanvasMaterial();
}

void AWhiteboardActor::AddText(const FVector2D& CanvasPosition, const FString& Text)
{
    if (Text.IsEmpty())
    {
        return;
    }
    
    if (HasAuthority())
    {
        // Create a new stroke for text
        FStroke TextStroke;
        TextStroke.StrokeID = NextStrokeID++;
        TextStroke.Tool = EDrawingTool::Text;
        TextStroke.Color = CurrentColor;
        TextStroke.Size = BrushSize;
        TextStroke.TextContent = Text;
        
        FDrawingPoint Point(CanvasPosition, 1.0f, CurrentColor, BrushSize, EDrawingTool::Text, TextStroke.StrokeID);
        TextStroke.Points.Add(Point);
        
        // Draw text on canvas
        DrawStroke(TextStroke);
        
        // Add to history
        if (CurrentHistoryIndex < StrokeHistory.Num() - 1)
        {
            StrokeHistory.RemoveAt(CurrentHistoryIndex + 1, StrokeHistory.Num() - CurrentHistoryIndex - 1);
        }
        
        StrokeHistory.Add(TextStroke);
        CurrentHistoryIndex = StrokeHistory.Num() - 1;
        
        // Notify all clients
        Multicast_UpdateDrawing(TextStroke);
    }
    else
    {
        // Send to server
        if (APlayerController* PC = GetWorld()->GetFirstPlayerController())
        {
            if (AWhiteboardController* YourPC = Cast<AWhiteboardController>(PC))
            {
                YourPC->Server_WhiteboardAddText(this, CanvasPosition, Text, CurrentColor, BrushSize);
            }
        }
    }
}

void AWhiteboardActor::DrawFigure(const FVector2D& CanvasPosition, const int32 SelectedFigureIndex)
{
    if (HasAuthority())
    {
        // Create a new stroke for figure
        FStroke FigureStroke;
        FigureStroke.StrokeID = NextStrokeID++;
        FigureStroke.Tool = EDrawingTool::Figure;
        FigureStroke.Color = CurrentColor;
        FigureStroke.Size = BrushSize;
        FigureStroke.FigureTexture = FigureTextures[SelectedFigureIndex];
        
        FDrawingPoint Point(CanvasPosition, 1.0f, CurrentColor, BrushSize, EDrawingTool::Figure, FigureStroke.StrokeID);
        FigureStroke.Points.Add(Point);
        
        // Draw figure on canvas
        DrawStroke(FigureStroke);
        
        // Add to history
        if (CurrentHistoryIndex < StrokeHistory.Num() - 1)
        {
            StrokeHistory.RemoveAt(CurrentHistoryIndex + 1, StrokeHistory.Num() - CurrentHistoryIndex - 1);
        }
        
        StrokeHistory.Add(FigureStroke);
        CurrentHistoryIndex = StrokeHistory.Num() - 1;
        
        // Notify all clients
        Multicast_UpdateDrawing(FigureStroke);
    }
    else
    {
        // Send to server
        if (APlayerController* PC = GetWorld()->GetFirstPlayerController())
        {
            if (AWhiteboardController* YourPC = Cast<AWhiteboardController>(PC))
            {
                YourPC->Server_WhiteboardDrawFigure(this, CanvasPosition, SelectedFigureIndex, CurrentColor, BrushSize);
            }
        }
    }
}

// Server RPC Implementations
void AWhiteboardActor::Server_StartDrawing_Implementation(const FVector2D& CanvasPosition, EDrawingTool Tool, FLinearColor Color, float Size, int32 BrushTextureIndex, int32 FigureTextureIndex)
{
    // Update current drawing properties
    CurrentTool = Tool;
    CurrentColor = Color;
    BrushSize = FMath::Clamp(Size, 1.0f, 100.0f);
    
    if (BrushTextures.IsValidIndex(BrushTextureIndex))
    {
        SelectedBrushTextureIndex = BrushTextureIndex;
    }

    if (FigureTextures.IsValidIndex(FigureTextureIndex))
    {
        SelectedFigureTextureIndex = FigureTextureIndex;
    }
    
    StartDrawing(CanvasPosition);
}

void AWhiteboardActor::Server_ContinueDrawing_Implementation(const FVector2D& CanvasPosition)
{
    ContinueDrawing(CanvasPosition);
}

void AWhiteboardActor::Server_EndDrawing_Implementation()
{
    EndDrawing();
}

void AWhiteboardActor::Server_AddText_Implementation(const FVector2D& CanvasPosition, const FString& Text, FLinearColor Color, float Size)
{
    CurrentColor = Color;
    BrushSize = FMath::Clamp(Size, 1.0f, 100.0f);
    AddText(CanvasPosition, Text);
}

void AWhiteboardActor::Server_DrawFigure_Implementation(const FVector2D& CanvasPosition, int32 SelectedFigureIndex, FLinearColor Color, float Size)
{
    CurrentColor = Color;
    BrushSize = FMath::Clamp(Size, 1.0f, 100.0f);
    DrawFigure(CanvasPosition, SelectedFigureIndex);
}

void AWhiteboardActor::Server_ClearWhiteboard_Implementation()
{
    ClearWhiteboard();
}

void AWhiteboardActor::Server_Undo_Implementation()
{
    Undo();
}

void AWhiteboardActor::Server_Redo_Implementation()
{
    Redo();
}

void AWhiteboardActor::Server_SetCurrentTool_Implementation(EDrawingTool NewTool)
{
    CurrentTool = NewTool;
}

void AWhiteboardActor::Server_SetCurrentColor_Implementation(FLinearColor NewColor)
{
    CurrentColor = NewColor;
}

void AWhiteboardActor::Server_SetBrushSize_Implementation(float NewSize)
{
    BrushSize = FMath::Clamp(NewSize, 1.0f, 100.0f);
}

void AWhiteboardActor::Server_SetBrushTexture_Implementation(int32 TextureIndex)
{
    if (BrushTextures.IsValidIndex(TextureIndex))
    {
        SelectedBrushTextureIndex = TextureIndex;
    }
}

void AWhiteboardActor::Server_SetFigureTexture_Implementation(int32 TextureIndex)
{
    if (FigureTextures.IsValidIndex(TextureIndex))
    {
        SelectedFigureTextureIndex = TextureIndex;
    }
}

// Multicast RPC Implementations
void AWhiteboardActor::Multicast_StartDrawing_Implementation(const FVector2D& CanvasPosition, EDrawingTool Tool, FLinearColor Color, float Size, int32 BrushTextureIndex, int32 FigureTextureIndex, int32 StrokeID)
{
    if (GetLocalRole() != ROLE_Authority)
    {
        PendingStrokes.Empty();
        
        bIsDrawing = true;
        
        CurrentStroke = FStroke();
        CurrentStroke.StrokeID = StrokeID;
        CurrentStroke.Tool = Tool;
        CurrentStroke.Color = Color;
        CurrentStroke.Size = Size;
        CurrentStroke.StartPosition = CanvasPosition;
        CurrentStroke.EndPosition = CanvasPosition;
        
        if (BrushTextures.IsValidIndex(BrushTextureIndex))
        {
            CurrentStroke.BrushTexture = BrushTextures[BrushTextureIndex];
        }

        if (FigureTextures.IsValidIndex(FigureTextureIndex))
        {
            CurrentStroke.FigureTexture = FigureTextures[FigureTextureIndex];
        }
        
        FDrawingPoint Point(CanvasPosition, 1.0f, Color, Size, Tool, StrokeID);
        CurrentStroke.Points.Add(Point);
        
        if (IsShapeTool(Tool))
        {
            bIsDrawingShape = true;
            // Don't draw anything yet for shapes
        }
        else
        {
            DrawStroke(CurrentStroke);
        }
    }
}

void AWhiteboardActor::Multicast_ContinueDrawing_Implementation(const FVector2D& CanvasPosition, int32 StrokeID)
{
    if (!HasAuthority() && bIsDrawing && CurrentStroke.StrokeID == StrokeID)
    {
        CurrentStroke.EndPosition = CanvasPosition;
        
        if (IsShapeTool(CurrentStroke.Tool))
        {
            // Shape preview is handled by Multicast_UpdateShapePreview
        }
        else
        {
            FDrawingPoint Point(CanvasPosition, 1.0f, CurrentStroke.Color, CurrentStroke.Size, CurrentStroke.Tool, StrokeID);
            CurrentStroke.Points.Add(Point);
            
            if (CurrentStroke.Points.Num() >= 2)
            {
                DrawStroke(CurrentStroke);
            }
        }
    }
}

void AWhiteboardActor::Multicast_EndDrawing_Implementation(int32 StrokeID)
{
    if (!HasAuthority() && bIsDrawing && CurrentStroke.StrokeID == StrokeID)
    {
        bIsDrawing = false;
        
        if (IsShapeTool(CurrentStroke.Tool) && bIsDrawingShape)
        {
            bIsDrawingShape = false;
            CurrentStroke.bIsComplete = true;
            
            ClearShapePreview();
            
            if (CurrentStroke.Points.Num() == 1)
            {
                FDrawingPoint EndPoint(CurrentStroke.EndPosition, 1.0f, CurrentStroke.Color, CurrentStroke.Size, CurrentStroke.Tool, StrokeID);
                CurrentStroke.Points.Add(EndPoint);
            }
            
            DrawShape(CurrentStroke);
        }
        
        if (CurrentHistoryIndex < StrokeHistory.Num() - 1)
        {
            StrokeHistory.RemoveAt(CurrentHistoryIndex + 1, StrokeHistory.Num() - CurrentHistoryIndex - 1);
        }
        
        StrokeHistory.Add(CurrentStroke);
        CurrentHistoryIndex = StrokeHistory.Num() - 1;
        
        CurrentStroke = FStroke();
    }
}

void AWhiteboardActor::Multicast_UpdateDrawing_Implementation(const FStroke& NewStroke)
{
    if (!HasAuthority())
    {
        DrawStroke(NewStroke);
        
        // Update local history
        if (CurrentHistoryIndex < StrokeHistory.Num() - 1)
        {
            StrokeHistory.RemoveAt(CurrentHistoryIndex + 1, StrokeHistory.Num() - CurrentHistoryIndex - 1);
        }
        
        StrokeHistory.Add(NewStroke);
        CurrentHistoryIndex = StrokeHistory.Num() - 1;
    }
}

void AWhiteboardActor::Multicast_ClearWhiteboard_Implementation()
{
    if (!HasAuthority())
    {
        UKismetRenderingLibrary::ClearRenderTarget2D(GetWorld(), DrawingCanvas, FLinearColor::White);
        StrokeHistory.Empty();
        CurrentHistoryIndex = -1;
        NextStrokeID = 0;
        PendingStrokes.Empty();
    }
}

void AWhiteboardActor::Multicast_UpdateHistory_Implementation(const TArray<FStroke>& NewHistory, int32 NewHistoryIndex)
{
    if (!HasAuthority())
    {
        StrokeHistory = NewHistory;
        CurrentHistoryIndex = NewHistoryIndex;
        RedrawCanvas();
    }
}

void AWhiteboardActor::Multicast_SyncWhiteboardState_Implementation(const TArray<FStroke>& History, int32 HistoryIndex)
{
    if (!HasAuthority())
    {
        StrokeHistory = History;
        CurrentHistoryIndex = HistoryIndex;
        RedrawCanvas();
    }
}

void AWhiteboardActor::Multicast_UpdateShapePreview_Implementation(const FVector2D& StartPos, const FVector2D& EndPos, EDrawingTool Tool, FLinearColor Color, float Size, int32 StrokeID)
{
    if (!HasAuthority())
    {
        ClearShapePreview();
        DrawShapePreview(StartPos, EndPos, Tool, Color, Size);
    }
}

void AWhiteboardActor::Client_SyncWhiteboardState_Implementation(const TArray<FStroke>& History, int32 HistoryIndex)
{
    StrokeHistory = History;
    CurrentHistoryIndex = HistoryIndex;
    RedrawCanvas();
}

// Interaction Functions
void AWhiteboardActor::StartInteraction(APawn* Player)
{
    UE_LOG(LogTemp, Warning, TEXT("StartInteraction called - Player: %s, Role: %d, HasAuthority: %s"), 
           Player ? *Player->GetName() : TEXT("None"), 
           (int32)GetLocalRole(),
           HasAuthority() ? TEXT("True") : TEXT("False"));
    
    if (GetLocalRole() == ROLE_Authority)
    {
        if (!Player) 
        {
            UE_LOG(LogTemp, Error, TEXT("StartInteraction failed - Invalid player"));
            return;
        }

        // Check if player is already interacting
        if (InteractingPawns.Contains(Player))
        {
            UE_LOG(LogTemp, Warning, TEXT("Player %s is already interacting"), *Player->GetName());
            return;
        }

        // Check if we can accept more players
        if (!CanAcceptMorePlayers())
        {
            UE_LOG(LogTemp, Warning, TEXT("Cannot accept more players - limit reached (%d/%d)"), 
                   InteractingPawns.Num(), MaxInteractingPlayers);
            return;
        }

        // Check if player is in range (server-side validation)
        float Distance = FVector::Distance(Player->GetActorLocation(), GetActorLocation());
        if (Distance > InteractionDistance)
        {
            UE_LOG(LogTemp, Error, TEXT("StartInteraction failed - Player too far: %f > %f"), 
                   Distance, InteractionDistance);
            return;
        }

        // Add player to interacting list
        InteractingPawns.Add(Player);
        bCanInteract = true;

        // Switch to whiteboard camera
        APlayerController* PC = Cast<APlayerController>(Player->GetController());
        if (PC)
        {
            FViewTargetTransitionParams Param;
            Param.BlendFunction = VTBlend_Cubic;
            Param.BlendTime = 1.5f;
            Param.BlendExp = 2.0f;
            Param.bLockOutgoing = true;
            
            PC->SetViewTarget(this, Param);
            PC->bShowMouseCursor = true;
            PC->bEnableClickEvents = true;
            PC->bEnableMouseOverEvents = true;
            
            // Sync whiteboard state to the interacting client
            Client_SyncWhiteboardState(StrokeHistory, CurrentHistoryIndex);
            
            UE_LOG(LogTemp, Warning, TEXT("Successfully started interaction for player: %s (%d/%d players)"), 
                   *Player->GetName(), InteractingPawns.Num(), MaxInteractingPlayers);
        }

        // Call Blueprint events
        OnInteractionStarted(Player);
        OnPlayerJoinedInteraction(Player);
    }
    else
    {
        RequestInteraction(Player);
    }
}

void AWhiteboardActor::EndInteraction()
{
    // End interaction for the local player
    if (APlayerController* PC = GetWorld()->GetFirstPlayerController())
    {
        if (APawn* LocalPawn = PC->GetPawn())
        {
            EndInteractionForPlayer(LocalPawn);
        }
    }
}

void AWhiteboardActor::EndInteractionForPlayer(APawn* Player)
{
    if (HasAuthority())
    {
        if (!Player || !InteractingPawns.Contains(Player))
        {
            return;
        }

        if (APlayerController* PC = Cast<APlayerController>(Player->GetController()))
        {
            // Switch back to player camera
            PC->SetViewTarget(Player);
            PC->bShowMouseCursor = false;
            PC->bEnableClickEvents = false;
            PC->bEnableMouseOverEvents = false;
            
            // Re-enable player movement
            Player->EnableInput(PC);
        }

        // Remove player from interacting list
        InteractingPawns.Remove(Player);

        // Call Blueprint events
        OnInteractionEnded(Player);
        OnPlayerLeftInteraction(Player);
        
        UE_LOG(LogTemp, Warning, TEXT("Player %s ended interaction (%d/%d players remaining)"), 
               *Player->GetName(), InteractingPawns.Num(), MaxInteractingPlayers);
    }
    // Remove the else block - clients should use RequestEndInteraction instead
}

bool AWhiteboardActor::IsPlayerInteracting(APawn* Player) const
{
    return InteractingPawns.Contains(Player);
}

int32 AWhiteboardActor::GetInteractingPlayerCount() const
{
    return InteractingPawns.Num();
}

bool AWhiteboardActor::CanAcceptMorePlayers() const
{
    return InteractingPawns.Num() < MaxInteractingPlayers;
}

void AWhiteboardActor::RemoveInteractingPlayer(APawn* Player)
{
    if (HasAuthority())
    {
        EndInteractionForPlayer(Player);
    }
}

// Event Handlers
void AWhiteboardActor::OnTriggerBeginOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor,
                                             UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
    if (APawn* Pawn = Cast<APawn>(OtherActor))
    {
        // Only set bCanInteract on the server, but allow clients to detect overlap
        if (HasAuthority())
        {
            bCanInteract = true;
        }
        
        // Always call the Blueprint event for UI updates
        OnPlayerEnteredRange(Pawn);
        
        UE_LOG(LogTemp, Warning, TEXT("Player %s entered whiteboard range - Role: %d"), 
               *Pawn->GetName(), (int32)GetLocalRole());
    }
}

void AWhiteboardActor::OnTriggerEndOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor,
    UPrimitiveComponent* OtherComp, int32 OtherBodyIndex)
{
    if (APawn* Pawn = Cast<APawn>(OtherActor))
    {
        // Only modify bCanInteract on server
        if (HasAuthority())
        {
            // End interaction if this pawn was interacting
            if (InteractingPawns.Contains(Pawn))
            {
                EndInteractionForPlayer(Pawn);
            }
            
            // Set bCanInteract to false only if no players are in range
            TArray<AActor*> OverlappingActors;
            InteractionVolume->GetOverlappingActors(OverlappingActors, APawn::StaticClass());
            bCanInteract = OverlappingActors.Num() > 0;
        }
        
        // Always call the Blueprint event
        OnPlayerExitedRange(Pawn);
        
        UE_LOG(LogTemp, Warning, TEXT("Player %s exited whiteboard range - Role: %d"), 
               *Pawn->GetName(), (int32)GetLocalRole());
    }
}

// Client Drawing Functions
bool AWhiteboardActor::CanClientDraw() const
{
    if (GetLocalRole() == ROLE_Authority)
    {
        return true;
    }
    
    // Check if local player is in the interacting players list
    if (APlayerController* PC = GetWorld()->GetFirstPlayerController())
    {
        if (APawn* LocalPawn = PC->GetPawn())
        {
            return bCanInteract && InteractingPawns.Contains(LocalPawn);
        }
    }
    
    return false;
}

void AWhiteboardActor::ClientStartDrawing(const FVector2D& CanvasPosition)
{
    UE_LOG(LogTemp, Warning, TEXT("ClientStartDrawing called - CanvasPos: %s"), *CanvasPosition.ToString());
    
    // Client prediction - draw immediately for responsiveness
    if (GetLocalRole() != ROLE_Authority)
    {
        // Clear any existing pending strokes
        PendingStrokes.Empty();
        
        FStroke PredictedStroke;
        PredictedStroke.StrokeID = -1; // Temporary ID for prediction
        PredictedStroke.Tool = CurrentTool;
        PredictedStroke.Color = CurrentColor;
        PredictedStroke.Size = BrushSize;
        
        FDrawingPoint Point(CanvasPosition, 1.0f, CurrentColor, BrushSize, CurrentTool, -1);
        PredictedStroke.Points.Add(Point);
        
        PendingStrokes.Add(PredictedStroke);
        
        // Draw immediately for client prediction
        DrawStroke(PredictedStroke);
    }
    
    // Always send to server
    StartDrawing(CanvasPosition);
}

void AWhiteboardActor::ClientContinueDrawing(const FVector2D& CanvasPosition)
{
    // Client prediction
    if (GetLocalRole() != ROLE_Authority && PendingStrokes.Num() > 0)
    {
        FStroke& PredictedStroke = PendingStrokes.Last();
        FDrawingPoint Point(CanvasPosition, 1.0f, CurrentColor, BrushSize, CurrentTool, -1);
        
        if (PredictedStroke.Points.Num() > 0)
        {
            DrawStroke(PredictedStroke);
        }
        
        PredictedStroke.Points.Add(Point);
    }
    
    // Send to server
    ContinueDrawing(CanvasPosition);
}

void AWhiteboardActor::ClientEndDrawing()
{
    // Clear client prediction
    if (GetLocalRole() != ROLE_Authority)
    {
        PendingStrokes.Empty();
    }
    
    // Send to server
    EndDrawing();
}

void AWhiteboardActor::DebugNetworkState()
{
    FString RoleString;
    switch(GetLocalRole())
    {
        case ROLE_None: RoleString = TEXT("None"); break;
        case ROLE_SimulatedProxy: RoleString = TEXT("SimulatedProxy"); break;
        case ROLE_AutonomousProxy: RoleString = TEXT("AutonomousProxy"); break;
        case ROLE_Authority: RoleString = TEXT("Authority"); break;
    }
    
    UE_LOG(LogTemp, Warning, TEXT("Whiteboard Debug - Role: %s, CanInteract: %s, InteractingPlayers: %d, Owner: %s"), 
           *RoleString, 
           bCanInteract ? TEXT("True") : TEXT("False"),
           InteractingPawns.Num(),
           GetOwner() ? *GetOwner()->GetName() : TEXT("None"));
}

bool AWhiteboardActor::CanInteractLocally(APawn* Player) const
{
    if (!Player)
    {
        return false;
    }
    
    // Check distance locally
    float Distance = FVector::Distance(Player->GetActorLocation(), GetActorLocation());
    bool bInRange = Distance <= InteractionDistance;
    
    // Check if we can accept more players (unless player is already interacting)
    bool bCanAcceptPlayer = CanAcceptMorePlayers() || IsPlayerInteracting(Player);
    
    UE_LOG(LogTemp, Log, TEXT("CanInteractLocally - Distance: %f, InRange: %s, CanAcceptPlayer: %s, InteractingPlayers: %d/%d"), 
           Distance, bInRange ? TEXT("True") : TEXT("False"), 
           bCanAcceptPlayer ? TEXT("True") : TEXT("False"),
           InteractingPawns.Num(), MaxInteractingPlayers);
    
    return bInRange && bCanAcceptPlayer;
}

// Drawing Implementation Functions
void AWhiteboardActor::DrawStroke(const FStroke& Stroke)
{
    if (Stroke.Points.Num() == 0)
    {
        return;
    }
    
    // Handle shape tools
    if (IsShapeTool(Stroke.Tool) && Stroke.bIsComplete)
    {
        DrawShape(Stroke);
        return;
    }
    
    // Handle other tools (brush, pencil, eraser, text, texture)
    switch (Stroke.Tool)
    {
        case EDrawingTool::Text:
            if (!Stroke.TextContent.IsEmpty() && Stroke.Points.Num() > 0)
            {
                UCanvas* Canvas = nullptr;
                FVector2D CanvasSize;
                FDrawToRenderTargetContext Context;
                UKismetRenderingLibrary::BeginDrawCanvasToRenderTarget(GetWorld(), DrawingCanvas, Canvas, CanvasSize, Context);
                
                if (Canvas)
                {
                    UFont* Font = GEngine->GetSmallFont();
                    float TextScale = Stroke.Size / 10.0f;
                    
                    Canvas->K2_DrawText(Font, FText::FromString(Stroke.TextContent).ToString(), 
                        Stroke.Points[0].Position, FVector2D(TextScale, TextScale), 
                        Stroke.Color, 1.0f, FLinearColor::Black, 
                        FVector2D::ZeroVector, true, true, true, 
                        FLinearColor(0, 0, 0, 0));
                }
                
                UKismetRenderingLibrary::EndDrawCanvasToRenderTarget(GetWorld(), Context);
            }
            break;
        
        case EDrawingTool::Figure:
            if (Stroke.FigureTexture && Stroke.Points.Num() > 0)
            {
                UCanvas* Canvas = nullptr;
                FVector2D CanvasSize;
                FDrawToRenderTargetContext Context;
                UKismetRenderingLibrary::BeginDrawCanvasToRenderTarget(GetWorld(), DrawingCanvas, Canvas, CanvasSize, Context);
                    
                if (Canvas)
                {
                    Canvas->K2_DrawTexture(
                        Stroke.FigureTexture,
                        Stroke.Points[0].Position - FVector2D(Stroke.Size / 2, Stroke.Size / 2),
                        FVector2D(Stroke.Size * 5, Stroke.Size * 5),
                        FVector2D::ZeroVector,
                        FVector2D::UnitVector,
                        Stroke.Color
                    );
                }
                    
                UKismetRenderingLibrary::EndDrawCanvasToRenderTarget(GetWorld(), Context);
            }
            break;
                
        default:  // Brush, Pencil, Eraser, Texture
            if (Stroke.Points.Num() >= 1)
            {
                UCanvas* Canvas = nullptr;
                FVector2D CanvasSize;
                FDrawToRenderTargetContext Context;
                UKismetRenderingLibrary::BeginDrawCanvasToRenderTarget(GetWorld(), DrawingCanvas, Canvas, CanvasSize, Context);
                
                if (Canvas)
                {
                    if (Stroke.Points.Num() == 1)
                    {
                        // Single point - draw a dot
                        const FDrawingPoint& Point = Stroke.Points[0];
                        FLinearColor DrawColor = (Stroke.Tool == EDrawingTool::Eraser) ? FLinearColor::White : Stroke.Color;
                        
                        Canvas->K2_DrawLine(Point.Position, Point.Position, Stroke.Size, DrawColor);
                    }
                    else
                    {
                        // Multiple points - draw lines between them
                        for (int32 i = 0; i < Stroke.Points.Num() - 1; i++)
                        {
                            const FDrawingPoint& Point1 = Stroke.Points[i];
                            const FDrawingPoint& Point2 = Stroke.Points[i + 1];
                            
                            if (Stroke.Tool == EDrawingTool::Texture && Stroke.BrushTexture)
                            {
                                // Draw textured line
                                float Distance = FVector2D::Distance(Point1.Position, Point2.Position);
                                FVector2D Direction = (Point2.Position - Point1.Position).GetSafeNormal();
                                
                                for (float t = 0; t < Distance; t += Stroke.Size * 0.5f)
                                {
                                    FVector2D Pos = Point1.Position + Direction * t;
                                    
                                    Canvas->K2_DrawTexture(
                                        Stroke.BrushTexture,
                                        Pos - FVector2D(Stroke.Size / 2, Stroke.Size / 2),
                                        FVector2D(Stroke.Size, Stroke.Size),
                                        FVector2D::ZeroVector,
                                        FVector2D::UnitVector,
                                        Stroke.Color
                                    );
                                }
                            }
                            else
                            {
                                // Draw line
                                FLinearColor LineColor = (Stroke.Tool == EDrawingTool::Eraser) ? FLinearColor::White : Stroke.Color;
                                
                                Canvas->K2_DrawLine(
                                    Point1.Position,
                                    Point2.Position,
                                    Stroke.Size,
                                    LineColor
                                );
                            }
                        }
                    }
                }
                
                UKismetRenderingLibrary::EndDrawCanvasToRenderTarget(GetWorld(), Context);
            }
            break;
    }
    
    // Update material
    UpdateCanvasMaterial();
}

void AWhiteboardActor::RedrawCanvas()
{
    // Clear canvas
    UKismetRenderingLibrary::ClearRenderTarget2D(GetWorld(), DrawingCanvas, FLinearColor::White);
    
    // Redraw all strokes up to current history index
    for (int32 i = 0; i <= CurrentHistoryIndex; i++)
    {
        if (StrokeHistory.IsValidIndex(i))
        {
            DrawStroke(StrokeHistory[i]);
        }
    }
    
    // Update material
    UpdateCanvasMaterial();
}

void AWhiteboardActor::UpdateCanvasMaterial()
{
    if (WhiteboardMesh->GetStaticMesh())
    {
        UMaterialInstanceDynamic* DynamicMaterial = Cast<UMaterialInstanceDynamic>(WhiteboardMesh->GetMaterial(InitMaterialIndex));
        if (DynamicMaterial)
        {
            DynamicMaterial->SetTextureParameterValue(TEXT("DrawingTexture"), DrawingCanvas);
        }
    }
}

// Helper Functions
UTexture2D* AWhiteboardActor::RenderTargetToTexture2D(UTextureRenderTarget2D* RenderTarget)
{
    if (!RenderTarget)
    {
        return nullptr;
    }
    
    // Read the render target surface data back
    TArray<FColor> RawData;
    FRenderTarget* RenderTargetResource = RenderTarget->GameThread_GetRenderTargetResource();
    if (!RenderTargetResource)
    {
        return nullptr;
    }
    
    // Read the render target surface data back
    FReadSurfaceDataFlags ReadSurfaceDataFlags;
    ReadSurfaceDataFlags.SetLinearToGamma(false);
    
    if (!RenderTargetResource->ReadPixels(RawData, ReadSurfaceDataFlags))
    {
        UE_LOG(LogTemp, Error, TEXT("Failed to read pixels from render target"));
        return nullptr;
    }
    
    if (RawData.Num() == 0)
    {
        UE_LOG(LogTemp, Error, TEXT("No pixel data read from render target"));
        return nullptr;
    }
    
    // Create a new texture and copy the data
    UTexture2D* Texture = UTexture2D::CreateTransient(RenderTarget->SizeX, RenderTarget->SizeY, PF_B8G8R8A8);
    if (!Texture)
    {
        UE_LOG(LogTemp, Error, TEXT("Failed to create transient texture"));
        return nullptr;
    }
    
    // Lock the texture for writing
    void* TextureData = Texture->GetPlatformData()->Mips[0].BulkData.Lock(LOCK_READ_WRITE);
    if (!TextureData)
    {
        UE_LOG(LogTemp, Error, TEXT("Failed to lock texture data for writing"));
        return nullptr;
    }
    
    // Copy the data
    const int32 DataSize = RawData.Num() * sizeof(FColor);
    FMemory::Memcpy(TextureData, RawData.GetData(), DataSize);
    
    // Unlock the texture
    Texture->GetPlatformData()->Mips[0].BulkData.Unlock();
    
    // Update the texture
    Texture->UpdateResource();
    
    return Texture;
}

void AWhiteboardActor::GenerateSVGFromStrokes(const FString& FilePath)
{
    FString SVGContent = TEXT("<?xml version=\"1.0\" encoding=\"UTF-8\" standalone=\"no\"?>\n");
    SVGContent += FString::Printf(TEXT("<svg width=\"%d\" height=\"%d\" xmlns=\"http://www.w3.org/2000/svg\">\n"), 
                                 CanvasWidth, CanvasHeight);
    
    // Add background
    SVGContent += FString::Printf(TEXT("<rect width=\"%d\" height=\"%d\" fill=\"white\"/>\n"), 
                                 CanvasWidth, CanvasHeight);
    
    // Process each stroke
    for (int32 i = 0; i <= CurrentHistoryIndex; i++)
    {
        if (!StrokeHistory.IsValidIndex(i))
        {
            continue;
        }
        
        const FStroke& Stroke = StrokeHistory[i];
        
        if (Stroke.Points.Num() == 0)
        {
            continue;
        }
        
        FString ColorStr = FString::Printf(TEXT("rgb(%d,%d,%d)"), 
                                          FMath::RoundToInt(Stroke.Color.R * 255), 
                                          FMath::RoundToInt(Stroke.Color.G * 255), 
                                          FMath::RoundToInt(Stroke.Color.B * 255));
        
        switch (Stroke.Tool)
        {
            case EDrawingTool::Text:
                if (!Stroke.TextContent.IsEmpty() && Stroke.Points.Num() > 0)
                {
                    SVGContent += FString::Printf(TEXT("<text x=\"%f\" y=\"%f\" font-size=\"%f\" fill=\"%s\">%s</text>\n"),
                                                 Stroke.Points[0].Position.X,
                                                 Stroke.Points[0].Position.Y,
                                                 Stroke.Size,
                                                 *ColorStr,
                                                 *Stroke.TextContent);
                }
                break;
                
            case EDrawingTool::Line:
                if (Stroke.Points.Num() >= 2)
                {
                    SVGContent += FString::Printf(TEXT("<line x1=\"%f\" y1=\"%f\" x2=\"%f\" y2=\"%f\" stroke=\"%s\" stroke-width=\"%f\"/>\n"),
                                                 Stroke.Points[0].Position.X,
                                                 Stroke.Points[0].Position.Y,
                                                 Stroke.Points[Stroke.Points.Num() - 1].Position.X,
                                                 Stroke.Points[Stroke.Points.Num() - 1].Position.Y,
                                                 *ColorStr,
                                                 Stroke.Size);
                }
                break;
                
            case EDrawingTool::Rectangle:
                if (Stroke.Points.Num() >= 2)
                {
                    float Left = FMath::Min(Stroke.Points[0].Position.X, Stroke.Points[Stroke.Points.Num() - 1].Position.X);
                    float Top = FMath::Min(Stroke.Points[0].Position.Y, Stroke.Points[Stroke.Points.Num() - 1].Position.Y);
                    float Width = FMath::Abs(Stroke.Points[Stroke.Points.Num() - 1].Position.X - Stroke.Points[0].Position.X);
                    float Height = FMath::Abs(Stroke.Points[Stroke.Points.Num() - 1].Position.Y - Stroke.Points[0].Position.Y);
                    
                    SVGContent += FString::Printf(TEXT("<rect x=\"%f\" y=\"%f\" width=\"%f\" height=\"%f\" stroke=\"%s\" stroke-width=\"%f\" fill=\"none\"/>\n"),
                                                 Left, Top, Width, Height, *ColorStr, Stroke.Size);
                }
                break;
                
            case EDrawingTool::Circle:
                if (Stroke.Points.Num() >= 2)
                {
                    float CenterX = (Stroke.Points[0].Position.X + Stroke.Points[Stroke.Points.Num() - 1].Position.X) / 2.0f;
                    float CenterY = (Stroke.Points[0].Position.Y + Stroke.Points[Stroke.Points.Num() - 1].Position.Y) / 2.0f;
                    float Radius = FVector2D::Distance(Stroke.Points[0].Position, Stroke.Points[Stroke.Points.Num() - 1].Position) / 2.0f;
                    
                    SVGContent += FString::Printf(TEXT("<circle cx=\"%f\" cy=\"%f\" r=\"%f\" stroke=\"%s\" stroke-width=\"%f\" fill=\"none\"/>\n"),
                                                 CenterX, CenterY, Radius, *ColorStr, Stroke.Size);
                }
                break;
                
            default:  // Brush, Pencil, Eraser
                if (Stroke.Points.Num() >= 2)
                {
                    // Create path
                    FString PathData = FString::Printf(TEXT("M %f %f "), Stroke.Points[0].Position.X, Stroke.Points[0].Position.Y);
                    
                    for (int32 j = 1; j < Stroke.Points.Num(); j++)
                    {
                        PathData += FString::Printf(TEXT("L %f %f "), Stroke.Points[j].Position.X, Stroke.Points[j].Position.Y);
                    }
                    
                    FString StrokeColorStr = (Stroke.Tool == EDrawingTool::Eraser) ? TEXT("white") : ColorStr;
                    
                    SVGContent += FString::Printf(TEXT("<path d=\"%s\" stroke=\"%s\" stroke-width=\"%f\" fill=\"none\" stroke-linecap=\"round\" stroke-linejoin=\"round\"/>\n"),
                                                 *PathData, *StrokeColorStr, Stroke.Size);
                }
                break;
        }
    }
    
    SVGContent += TEXT("</svg>");
    
    // Save to file
    FFileHelper::SaveStringToFile(SVGContent, *FilePath);
    UE_LOG(LogTemp, Display, TEXT("Successfully exported whiteboard to SVG: %s"), *FilePath);
}

void AWhiteboardActor::SyncNewClient(APlayerController* NewClient)
{
    if (!NewClient || !HasAuthority())
    {
        return;
    }
    
    // Send current whiteboard state to the new client
    if (APawn* ClientPawn = NewClient->GetPawn())
    {
        Client_SyncWhiteboardState(StrokeHistory, CurrentHistoryIndex);
    }
}
