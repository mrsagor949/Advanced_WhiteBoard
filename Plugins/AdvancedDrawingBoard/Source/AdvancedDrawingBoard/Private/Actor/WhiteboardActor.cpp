// Developer : Masud Raihan Sagor
// What'sApp Number : +8801964998545
// Email : www.mrsagor2021@gmail.com
// Copyright Sparkelon @2025, Inc. All Rights Reserved.

#include "Actor/WhiteboardActor.h"
#include "Whiteboard_Defines.h"
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
#include "Library/Whiteboard_Types.h"

//////////////////////////////////////////////// SET DEFAULT VALUES ////////////////////////////
AWhiteboardActor::AWhiteboardActor()
{
    PrimaryActorTick.bCanEverTick = true;
    bReplicates = true;
    bAlwaysRelevant = false;
    SetNetUpdateFrequency(10.0f);
    SetMinNetUpdateFrequency(2.0f);
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
    
    // Initialize drawing state
    bIsDrawing = false;
    bCanInteract = false;
    InteractingPawns.Empty();
    PreviewCanvas = nullptr;

    // Initialize History ID
    CurrentHistoryIndex = -1;
    NextStrokeID = 0;
}

//////////////////////////////////////////////// ON CONSTRUCTION //////////////////////////////
void AWhiteboardActor::OnConstruction(const FTransform& Transform)
{
    Super::OnConstruction(Transform);
    InteractionVolume->SetBoxExtent(FVector(InteractionDistance, InteractionDistance, InteractionDistance));
}

//////////////////////////////////////////////// BEGIN PLAY /////////////////////////////////
void AWhiteboardActor::BeginPlay()
{
	Super::BeginPlay();

    
    // Initialize maps
    ActiveStrokes.Empty();
    ClientPredictedStrokes.Empty();
    PlayerShapeDrawingStates.Empty();
    LocalPlayerStatesCache.Empty();
    
    // Bind overlap events
    InteractionVolume->OnComponentBeginOverlap.AddDynamic(this, &AWhiteboardActor::OnTriggerBeginOverlap);
    InteractionVolume->OnComponentEndOverlap.AddDynamic(this, &AWhiteboardActor::OnTriggerEndOverlap);

    
    FTimerHandle InitTimer;
    GetWorld()->GetTimerManager().SetTimer(InitTimer, this, &AWhiteboardActor::DelayedInitialize, 0.5f, false);
    
}

//////////////////////////////////////////GET LIFETIME REPLICATED ////////////////////////////////
void AWhiteboardActor::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    DOREPLIFETIME(AWhiteboardActor, PlayerDrawingStates)
    
    DOREPLIFETIME_CONDITION_NOTIFY(AWhiteboardActor, StrokeHistory, COND_None, REPNOTIFY_Always);
    DOREPLIFETIME(AWhiteboardActor, CurrentHistoryIndex);
    DOREPLIFETIME(AWhiteboardActor, NextStrokeID);

    DOREPLIFETIME(AWhiteboardActor, bIsInitialized);
    DOREPLIFETIME(AWhiteboardActor, DrawingCanvas);
    
    // Replicate interaction state
    DOREPLIFETIME(AWhiteboardActor, InteractingPawns);
    DOREPLIFETIME(AWhiteboardActor, MaxInteractingPlayers);
    
}

/////////////////////////////////////INITIALIZE THE WHITEBOARD /////////////////////////////////
void AWhiteboardActor::InitializeWhiteboard()
{
    
    if (!GetWorld())
    {
        return;
    }

    
    // All machines create their own canvases
    CreateCanvases();
    
    // All machines setup material
    SetupMaterial();

    // Server marks as initialized and tells clients to initialize
    if (HasAuthority())
    {
        bIsInitialized = true;
        
        // Tell clients to initialize via multicast
        Multicast_ForceClientInitialization();
        
        // Also redraw all existing strokes so clients get the full canvas state
        RedrawAllStrokes();
    }
    else
    {
        Server_RequestCanvasInitialization();
    }
}

// Server Request For Canvas Initialization
void AWhiteboardActor::Server_RequestCanvasInitialization_Implementation()
{
    // Client is requesting initialization - force all clients to reinitialize
    if (HasAuthority())
    {
        Multicast_ForceClientInitialization();
    }
}

// Client Initialize Canvas
void AWhiteboardActor::Client_InitializeCanvases_Implementation()
{
    // Force client to initialize
    ForceClientInitialization();
}

// Multicast Force Initialization
void AWhiteboardActor::Multicast_ForceClientInitialization_Implementation()
{
    // This runs on ALL CLIENTS when called from server
    if (!HasAuthority()) // Only execute on clients, not server
    {
        ForceClientInitialization();
    }
}

// Force Client Initialization
void AWhiteboardActor::ForceClientInitialization()
{
    // Mark as not initialized first
    bIsInitialized = false;
    
    // Clean up existing canvases
    if (DrawingCanvas)
    {
        DrawingCanvas = nullptr;
    }
    if (PreviewCanvas)
    {
        PreviewCanvas = nullptr;
    }
    
    // Create new canvases
    CreateCanvases();
    SetupMaterial();
    
    // Mark as initialized
    bIsInitialized = true;
    
    // Redraw all strokes from history to sync with server
    RedrawAllStrokesFromHistory();
}

// Create Canvas
void AWhiteboardActor::CreateCanvases()
{
    // Create render targets if they don't exist
    if (!DrawingCanvas)
    {
        DrawingCanvas = UKismetRenderingLibrary::CreateRenderTarget2D(
            GetWorld(), CanvasWidth, CanvasHeight, RTF_RGBA8);
        
        if (!DrawingCanvas)
        {
            return;
        }
    }

    if (!PreviewCanvas)
    {
        PreviewCanvas = UKismetRenderingLibrary::CreateRenderTarget2D(
            GetWorld(), CanvasWidth, CanvasHeight, RTF_RGBA8);
            
        if (!PreviewCanvas)
        {
            return;
        }
    }
    
    // Clear the canvases
    UKismetRenderingLibrary::ClearRenderTarget2D(GetWorld(), DrawingCanvas, FLinearColor::White);
    UKismetRenderingLibrary::ClearRenderTarget2D(GetWorld(), PreviewCanvas, FLinearColor::Transparent);
}

// Setup Material
void AWhiteboardActor::SetupMaterial()
{
    if (WhiteboardMesh && WhiteboardMesh->GetStaticMesh())
    {
        if (UMaterialInterface* WhiteboardMaterial = WhiteboardMesh->GetMaterial(InitMaterialIndex))
        {
            UMaterialInstanceDynamic* DynamicMaterial = UMaterialInstanceDynamic::Create(WhiteboardMaterial, this);
            if (DynamicMaterial)
            {
                DynamicMaterial->SetTextureParameterValue(TEXT("DrawingTexture"), DrawingCanvas);
                DynamicMaterial->SetTextureParameterValue(TEXT("PreviewTexture"), PreviewCanvas);
                DynamicMaterial->SetScalarParameterValue(TEXT("PreviewAlpha"), 1.0f);
                
                WhiteboardMesh->SetMaterial(InitMaterialIndex, DynamicMaterial);
                UE_LOG(LogWDS, Warning, TEXT("SetupMaterial: Material setup complete for role %d"), (int32)GetLocalRole());
            }
        }
        else
        {
            UE_LOG(LogWDS, Error, TEXT("SetupMaterial: Whiteboard material is null!"));
        }
    }
    else
    {
        UE_LOG(LogWDS, Error, TEXT("SetupMaterial: WhiteboardMesh or its static mesh is null!"));
    }
}

// Redraw All Stockes From History
void AWhiteboardActor::RedrawAllStrokesFromHistory()
{
    if (!HasAuthority()) // Only clients need to redraw from history
    {
        // Clear canvas first
        if (DrawingCanvas)
        {
            UKismetRenderingLibrary::ClearRenderTarget2D(GetWorld(), DrawingCanvas, FLinearColor::White);
        }
        
        // Redraw all strokes in history
        for (const FStroke& Stroke : StrokeHistory)
        {
            DrawStroke(Stroke);
        }
    }
}

// Redraw All Stocks
void AWhiteboardActor::RedrawAllStrokes()
{
    if (HasAuthority()) // Only server should call this
    {
        // Clear canvas first
        if (DrawingCanvas)
        {
            UKismetRenderingLibrary::ClearRenderTarget2D(GetWorld(), DrawingCanvas, FLinearColor::White);
        }
        
        // Redraw all strokes in history
        for (const FStroke& Stroke : StrokeHistory)
        {
            DrawStroke(Stroke);
        }
    }
}

// Check And Repair Initialization
void AWhiteboardActor::CheckAndRepairInitialization()
{
    if (!bIsInitialized || !DrawingCanvas || !PreviewCanvas)
    {
        InitializeWhiteboard();
    }
}

// Delay Start Initialization
void AWhiteboardActor::DelayedInitialize()
{
    // Initialize default state for local player if available
    if (APawn* LocalPlayer = GetDrawingPlayer())
    {
        InitializeDefaultPlayerState(LocalPlayer);
    }
    
    InitializeWhiteboard();
}

// On Rep Drawing Canvas Redraw 
void AWhiteboardActor::OnRep_DrawingCanvas()
{
    if (DrawingCanvas)
    {
        RedrawCanvas();
    }
}

//////////////////////////////////// IS SHAPE TOOL /////////////////////////////////
bool AWhiteboardActor::IsShapeTool(const EDrawingTool Tool)
{
    return Tool == EDrawingTool::Line || Tool == EDrawingTool::Rectangle || Tool == EDrawingTool::Circle;
}

void AWhiteboardActor::OnRep_PlayerDrawingStates()
{
    UE_LOG(LogWDS, Warning, TEXT("OnRep_PlayerDrawingStates: Replicated data updated with %d entries"), 
           PlayerDrawingStates.Num());
    
    // Clear and rebuild all caches
   // CurrentPlayerStates.Empty();
    LocalPlayerStatesCache.Empty();
    
    for (const FReplicatedPlayerDrawingState& ReplicatedState : PlayerDrawingStates)
    {
        if (ReplicatedState.Player && IsValid(ReplicatedState.Player))
        {
            FPlayerDrawingState ValidatedState = ReplicatedState.DrawingState;
            ValidatedState.ValidateAndClamp();
            ValidatedState.Player = ReplicatedState.Player;
            
           // CurrentPlayerStates.Add(ReplicatedState.Player, ValidatedState);
            LocalPlayerStatesCache.Add(ReplicatedState.Player, ValidatedState);

            UE_LOG(LogWDS, Warning, TEXT("  Player %s: Tool=%d, Color=%s, BrushSize=%.1f"), 
                   *ReplicatedState.Player->GetName(), 
                   (int32)ValidatedState.CurrentTool,
                   *ValidatedState.CurrentColor.ToString(),
                   ValidatedState.BrushSize);
        }
        else
        {
            UE_LOG(LogWDS, Warning, TEXT("  Invalid player entry in replicated states"));
        }
    }
}

/////////////////////////////////////////////////////////////////////////////////
//////////////////////////////// UPDATE DRAWING TOOLS //////////////////////////
////////////////////////////////////////////////////////////////////////////////
// Get Player Drawing State
FPlayerDrawingState AWhiteboardActor::GetPlayerDrawingState(APawn* Player) const
{
    if (!Player || !IsValid(Player))
    {
        return FPlayerDrawingState();
    }
    
    // 1. Check local cache first
    if (LocalPlayerStatesCache.Contains(Player))
    {
        return LocalPlayerStatesCache[Player];
    }
    
    // 2. Check replicated array
    for (const FReplicatedPlayerDrawingState& ReplicatedState : PlayerDrawingStates)
    {
        if (ReplicatedState.Player == Player && IsValid(ReplicatedState.Player))
        {
            return ReplicatedState.DrawingState;
        }
    }
    
    // 3. Return default state (don't cache in const function)
    FPlayerDrawingState DefaultState;
    DefaultState.Player = Player;
    DefaultState.CurrentTool = EDrawingTool::Pencil;
    DefaultState.CurrentColor = FLinearColor::Black;
    DefaultState.BrushSize = 5.0f;
    DefaultState.SelectedBrushTextureIndex = 0;
    DefaultState.SelectedFigureTextureIndex = 0;
    DefaultState.CurrentTextString = FString();
    
    return DefaultState;
}

///// Update Player Drawing State
void AWhiteboardActor::UpdatePlayerDrawingState(APawn* Player, const FPlayerDrawingState& NewState)
{
    if (!Player) return;
    
    bool bFound = false;
    
    // Update existing state
    for (FReplicatedPlayerDrawingState& State : PlayerDrawingStates)
    {
        if (State.Player == Player)
        {
            State.DrawingState = NewState;
            bFound = true;
            break;
        }
    }
    
    // Add new state if not found
    if (!bFound)
    {
        PlayerDrawingStates.Add(FReplicatedPlayerDrawingState(Player, NewState));
    }
    
    // Update local cache
    LocalPlayerStatesCache.Add(Player, NewState);
}

/// Server Update Drawing Tools
void AWhiteboardActor::Server_UpdatePlayerDrawingState_Implementation(APawn* Player,
    const FPlayerDrawingState& NewState)
{
    if (!Player || !HasAuthority()) 
    {
        UE_LOG(LogWDS, Error, TEXT("Server_UpdatePlayerDrawingState: Invalid player or no authority"));
        return;
    }
    
    UE_LOG(LogWDS, Warning, TEXT("Server_UpdatePlayerDrawingState: Received from player %s"), *Player->GetName());
    
    // Server validates and updates the state
    FPlayerDrawingState ValidatedState = NewState;
    ValidatedState.ValidateAndClamp();
    ValidatedState.Player = Player; // Ensure player reference is maintained
    
    UpdatePlayerDrawingState(Player, ValidatedState);
    
    // Multicast the update to all clients to ensure synchronization
    Multicast_UpdatePlayerToolState(Player, ValidatedState);
}

// ADD THIS NEW FUNCTION: Multicast tool state updates
void AWhiteboardActor::Multicast_UpdatePlayerToolState_Implementation(APawn* Player, const FPlayerDrawingState& NewState)
{
    if (!Player) return;
    
    // Skip if this is the server (already handled)
    if (HasAuthority())
    {
        return;
    }
    
    UE_LOG(LogWDS, Warning, TEXT("Multicast_UpdatePlayerToolState: Player %s, Tool: %d, Color: %s"), 
           *Player->GetName(), 
           (int32)NewState.CurrentTool,
           *NewState.CurrentColor.ToString());
    
    // Update local state for this client
    UpdatePlayerDrawingState(Player, NewState);
}

/////////////////////////////////////////////////////////////////////////////////
//////////////////////////////// SET DRAWING TOOLS //////////////////////////////
////////////////////////////////////////////////////////////////////////////////

// Set Player Tools 
void AWhiteboardActor::SetPlayerTool(EDrawingTool NewTool)
{
    APawn* DrawingPlayer = GetDrawingPlayer();
    
    if (!DrawingPlayer) 
    {
        UE_LOG(LogWDS, Warning, TEXT("SetPlayerTool: No valid drawing player"));
        return;
    }
    
    FPlayerDrawingState State = GetPlayerDrawingState(DrawingPlayer);
    State.CurrentTool = NewTool;
    
    UE_LOG(LogWDS, Warning, TEXT("SetPlayerTool: Setting tool to %d for player %s"), 
           (int32)NewTool, *DrawingPlayer->GetName());
    
    // Update locally first for responsiveness
    UpdatePlayerDrawingState(DrawingPlayer, State);
    
    // Send to server regardless of role - server will validate and multicast
    Server_UpdatePlayerDrawingState(DrawingPlayer, State);
    
    DebugPlayerToolState(DrawingPlayer);
}

// Set Player Current Drawing Color
void AWhiteboardActor::SetPlayerColor(APawn* Player, FLinearColor NewColor)
{
    APawn* DrawingPlayer = GetDrawingPlayer();
    
    if (!DrawingPlayer) 
    {
        UE_LOG(LogWDS, Warning, TEXT("SetPlayerColor: No valid drawing player"));
        return;
    }
    
    FPlayerDrawingState State = GetPlayerDrawingState(DrawingPlayer);
    State.CurrentColor = NewColor;
    
    UE_LOG(LogWDS, Warning, TEXT("SetPlayerColor: Setting color to %s for player %s"), 
           *NewColor.ToString(), *DrawingPlayer->GetName());
    
    // Update locally first for responsiveness
    UpdatePlayerDrawingState(DrawingPlayer, State);
    
    // Send to server regardless of role
    Server_UpdatePlayerDrawingState(DrawingPlayer, State);
    
    DebugPlayerToolState(DrawingPlayer);
}

// Set Player Current Brush Size
void AWhiteboardActor::SetPlayerBrushSize(APawn* Player, float NewSize)
{
    APawn* DrawingPlayer = GetDrawingPlayer();
    
    if (!DrawingPlayer) 
    {
        UE_LOG(LogWDS, Warning, TEXT("SetPlayerBrushSize: No valid drawing player"));
        return;
    }
    
    FPlayerDrawingState State = GetPlayerDrawingState(DrawingPlayer);
    State.BrushSize = FMath::Clamp(NewSize, 1.0f, 100.0f);
    
    UE_LOG(LogWDS, Warning, TEXT("SetPlayerBrushSize: Setting brush size to %.1f for player %s"), 
           State.BrushSize, *DrawingPlayer->GetName());
    
    // Update locally first for responsiveness
    UpdatePlayerDrawingState(DrawingPlayer, State);
    
    // Send to server regardless of role
    Server_UpdatePlayerDrawingState(DrawingPlayer, State);
    
    DebugPlayerToolState(DrawingPlayer);
}

// Set Player Current Selected Brush Texture
void AWhiteboardActor::SetPlayerBrushTextureIndex(APawn* Player, int32 TextureIndex)
{
    APawn* DrawingPlayer = GetDrawingPlayer();
    if (!DrawingPlayer) return;
    
    FPlayerDrawingState State = GetPlayerDrawingState(DrawingPlayer);
    State.SelectedBrushTextureIndex = FMath::Clamp(TextureIndex, 0, BrushTextures.Num() - 1);
    
    UpdatePlayerDrawingState(DrawingPlayer, State);
    Server_UpdatePlayerDrawingState(DrawingPlayer, State);
    DebugPlayerToolState(DrawingPlayer);
}

// Set Player Current Selected Figure Texture
void AWhiteboardActor::SetPlayerFigureTextureIndex(APawn* Player, int32 TextureIndex)
{
    APawn* DrawingPlayer = GetDrawingPlayer();
    if (!DrawingPlayer) return;
    
    FPlayerDrawingState State = GetPlayerDrawingState(DrawingPlayer);
    State.SelectedFigureTextureIndex = FMath::Clamp(TextureIndex, 0, FigureTextures.Num() - 1);
    
    UpdatePlayerDrawingState(DrawingPlayer, State);
    Server_UpdatePlayerDrawingState(DrawingPlayer, State);
    DebugPlayerToolState(DrawingPlayer);
}

// Set Player Current Text String
void AWhiteboardActor::SetPlayerTextString(APawn* Player, const FString& NewTextString)
{
    APawn* DrawingPlayer = GetDrawingPlayer();
    
    if (!DrawingPlayer) return;
    
    FPlayerDrawingState State = GetPlayerDrawingState(DrawingPlayer);
    State.CurrentTextString = NewTextString;
    
    // Update locally first for responsiveness
    UpdatePlayerDrawingState(DrawingPlayer, State);
    
    // If we're a client, tell the server about our change
    if (GetLocalRole() == ROLE_AutonomousProxy)
    {
        Server_UpdatePlayerDrawingState(DrawingPlayer, State);
    }
    DebugPlayerToolState(DrawingPlayer);
}

// Get Player Current Drawing Tools
EDrawingTool AWhiteboardActor::GetCurrentTool() const
{
    APawn* Player = GetDrawingPlayer();
    if (!Player) return EDrawingTool::Pencil;
    
    return GetPlayerDrawingState(Player).CurrentTool;
}

/////////////////////////////////////////////////////////////////////////////////
//////////////////////////////// GET DRAWING TOOLS //////////////////////////////
////////////////////////////////////////////////////////////////////////////////

// Get Player Current Drawing Color
FLinearColor AWhiteboardActor::GetCurrentColor() const
{
    APawn* Player = GetDrawingPlayer();
    if (!Player) return FLinearColor::Black;
    
    return GetPlayerDrawingState(Player).CurrentColor;
}

// Get Player Current Drawing Brush Size
float AWhiteboardActor::GetBrushSize() const
{
    APawn* Player = GetDrawingPlayer();
    if (!Player) return 5.0f;
    return GetPlayerDrawingState(Player).BrushSize;
}

// Get Player Current Drawing Selected Brush Texture Index
int32 AWhiteboardActor::GetSelectedBrushTextureIndex(APawn* Player) const
{
    if (!Player) return 0;
    return GetPlayerDrawingState(Player).SelectedBrushTextureIndex;
}

// Get Player Current Drawing Selected Figure Texture Index
int32 AWhiteboardActor::GetSelectedFigureTextureIndex(APawn* Player) const
{
    if (!Player) return 0;
    return GetPlayerDrawingState(Player).SelectedFigureTextureIndex;
}

// Get Player Current Drawing Text String
FString AWhiteboardActor::GetCurrentTextString(APawn* Player) const
{
    if (!Player) return FString();
    return GetPlayerDrawingState(Player).CurrentTextString;
}


// Internal helper to get current drawing player
APawn* AWhiteboardActor::GetDrawingPlayer() const
{
    // More robust player detection
    if (UWorld* World = GetWorld())
    {
        if (APlayerController* PC = World->GetFirstPlayerController())
        {
            APawn* LocalPawn = PC->GetPawn();
            if (LocalPawn && IsPlayerInteracting(LocalPawn))
            {
                return LocalPawn;
            }
        }
    }
    return nullptr;
}

FVector2D AWhiteboardActor::CalculateDrawingCenterOffset(EDrawingTool Tool, float BrushSize, UTexture2D* BrushTexture,
    UTexture2D* FigureTexture)
{
     FVector2D CenterOffset = FVector2D::ZeroVector;
    
    switch (Tool)
    {
    case EDrawingTool::Pencil:
    case EDrawingTool::Brush:
    case EDrawingTool::Eraser:
    case EDrawingTool::Line:
    case EDrawingTool::Rectangle:
    case EDrawingTool::Circle:
        // For basic tools, center based on brush size
        // These tools typically draw from center by default
        CenterOffset = FVector2D(0.0f, 0.0f);
        break;
        
    case EDrawingTool::Texture:
        if (BrushTexture)
        {
            // Center the texture based on its dimensions and brush size
            FVector2D TextureSize = FVector2D(BrushTexture->GetSizeX(), BrushTexture->GetSizeY());
            FVector2D ScaledSize = TextureSize * (BrushSize / 100.0f); // Adjust scale as needed
            CenterOffset = -ScaledSize * 0.5f; // Offset to center
        }
        else
        {
            // Fallback: center based on brush size
            CenterOffset = FVector2D(-BrushSize * 0.5f, -BrushSize * 0.5f);
        }
        break;
        
    case EDrawingTool::Figure:
        if (FigureTexture)
        {
            // Center the figure based on its dimensions and brush size
            FVector2D FigureSize = FVector2D(FigureTexture->GetSizeX(), FigureTexture->GetSizeY());
            FVector2D ScaledSize = FigureSize * (BrushSize / 100.0f); // Adjust scale as needed
            CenterOffset = -ScaledSize * 0.5f; // Offset to center
        }
        else
        {
            // Fallback: center based on brush size
            CenterOffset = FVector2D(-BrushSize * 0.5f, -BrushSize * 0.5f);
        }
        break;
        
    case EDrawingTool::Text:
        {
            // For text, estimate center based on brush size (font size)
            // You might want to adjust this based on your text rendering system
            float TextHeight = BrushSize * 2.0f; // Estimate text height
            float TextWidth = BrushSize * 0.6f; // Estimate average character width
            
            // Center the text (adjust these values based on your text alignment)
            CenterOffset = FVector2D(-TextWidth * 0.5f, -TextHeight * 0.5f);
        }
        break;
        
    default:
        CenterOffset = FVector2D::ZeroVector;
        break;
    }
    
    return CenterOffset;
}

FVector2D AWhiteboardActor::GetCenteredCanvasPosition(const FVector2D& RawCanvasPosition, EDrawingTool Tool,
    float BrushSize, UTexture2D* BrushTexture, UTexture2D* FigureTexture)
{
    FVector2D CenterOffset = CalculateDrawingCenterOffset(Tool, BrushSize, BrushTexture, FigureTexture);
    return RawCanvasPosition + CenterOffset;
}


void AWhiteboardActor::OnRep_StrokeHistory()
{
    // Redraw canvas when stroke history is replicated
    RedrawCanvas();
}

void AWhiteboardActor::Multicast_DrawStroke_Implementation(const FStroke& Stroke)
{
    if (!HasAuthority()) // Only clients should process this
    {
        // Check if we already have this stroke in history to avoid duplicates
        bool bStrokeExists = false;
        for (const FStroke& ExistingStroke : StrokeHistory)
        {
            if (ExistingStroke.StrokeID == Stroke.StrokeID)
            {
                bStrokeExists = true;
                break;
            }
        }
        
        if (!bStrokeExists)
        {
            // Draw the stroke on client
           // DrawStrokeInternal(Stroke);
            
            // Add to client's history
            if (CurrentHistoryIndex < StrokeHistory.Num() - 1)
            {
                StrokeHistory.RemoveAt(CurrentHistoryIndex + 1, StrokeHistory.Num() - CurrentHistoryIndex - 1);
            }
            
            StrokeHistory.Add(Stroke);
            CurrentHistoryIndex = StrokeHistory.Num() - 1;
        }
    }
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

///////////////////////////////////// START DRAWING ////////////////////////
void AWhiteboardActor::PlayerStartDrawing(const FVector2D& CanvasPosition)
{
   APawn* DrawingPlayer = GetDrawingPlayer();
    
    if (!DrawingPlayer || !CanClientDraw())
    {
        UE_LOG(LogWDS, Error, TEXT("PlayerStartDrawing: No valid player or cannot draw"));
        return;
    }

    FPlayerDrawingState PlayerState = GetPlayerDrawingState(DrawingPlayer);

    // Calculate centered position for the current tool
    FVector2D CenteredPosition = GetCenteredCanvasPosition(
        CanvasPosition, 
        PlayerState.CurrentTool, 
        PlayerState.BrushSize,
        BrushTextures.IsValidIndex(PlayerState.SelectedBrushTextureIndex) ? BrushTextures[PlayerState.SelectedBrushTextureIndex] : nullptr,
        FigureTextures.IsValidIndex(PlayerState.SelectedFigureTextureIndex) ? FigureTextures[PlayerState.SelectedFigureTextureIndex] : nullptr
    );
    
    if (PlayerState.CurrentTool == EDrawingTool::Text || 
        PlayerState.CurrentTool == EDrawingTool::Texture || 
        PlayerState.CurrentTool == EDrawingTool::Figure)
    {
        CreateAndCompleteStroke(DrawingPlayer, CenteredPosition, PlayerState);
        return; 
    }

    // Client prediction - keep existing code
    if (GetLocalRole() != ROLE_Authority)
    {
        UE_LOG(LogWDS, Warning, TEXT("Client prediction: Starting drawing for player %s"), *DrawingPlayer->GetName());
        
        FStroke PredictedStroke;
        PredictedStroke.StrokeID = -1; // Temporary ID for prediction
        PredictedStroke.DrawingPlayer = DrawingPlayer;
        PredictedStroke.Tool = PlayerState.CurrentTool;
        PredictedStroke.Color = PlayerState.CurrentColor;
        PredictedStroke.Size = PlayerState.BrushSize;
        PredictedStroke.StartPosition = CanvasPosition;
        PredictedStroke.EndPosition = CanvasPosition;
        PredictedStroke.bIsComplete = false;

        // Set textures
        if (BrushTextures.IsValidIndex(PlayerState.SelectedBrushTextureIndex))
        {
            PredictedStroke.BrushTexture = BrushTextures[PlayerState.SelectedBrushTextureIndex];
        }
        if (FigureTextures.IsValidIndex(PlayerState.SelectedFigureTextureIndex))
        {
            PredictedStroke.FigureTexture = FigureTextures[PlayerState.SelectedFigureTextureIndex];
        }
        
        // Add first point
        FDrawingPoint Point(CanvasPosition, 1.0f, PlayerState.CurrentColor, 
                           PlayerState.BrushSize, PlayerState.CurrentTool, -1);
        PredictedStroke.Points.Add(Point);

        // Store in client prediction
        ClientPredictedStrokes.Add(DrawingPlayer, PredictedStroke);

        // Draw immediately for client prediction
        bool bIsShape = IsShapeTool(PlayerState.CurrentTool);
        if (!bIsShape)
        {
            DrawStroke(PredictedStroke);
        }
        else
        {
            // For shape tools, draw initial preview
            DrawShapePreview(CanvasPosition, CanvasPosition, PlayerState.CurrentTool, 
                           PlayerState.CurrentColor, PlayerState.BrushSize);
        }
    }

    
    // Send to server WITH CURRENT PARAMETERS
    if (APlayerController* PC = GetWorld()->GetFirstPlayerController())
    {
        if (AWhiteboardController* WBController = Cast<AWhiteboardController>(PC))
        {
            // Update the controller RPC to include parameters
            WBController->Server_WhiteboardStartDrawing(DrawingPlayer, this, CanvasPosition, 
                                                       PlayerState.CurrentTool, PlayerState.CurrentColor, 
                                                       PlayerState.BrushSize, PlayerState.SelectedBrushTextureIndex, 
                                                       PlayerState.SelectedFigureTextureIndex);
        }
    }
    
}

void AWhiteboardActor::Server_StartDrawing_Implementation(APawn* DrawingPlayer, const FVector2D& CanvasPosition, 
                        EDrawingTool Tool, FLinearColor Color, float BrushSize, 
                        int32 BrushTextureIndex, int32 FigureTextureIndex)
{
   if (!DrawingPlayer || !HasAuthority())
    {
        UE_LOG(LogWDS, Error, TEXT("Server_StartDrawing: Invalid player or no authority"));
        return;
    }

    UE_LOG(LogWDS, Warning, TEXT("Server_StartDrawing: Received from player %s with tool %d, color %s, size %f"), 
           *DrawingPlayer->GetName(), (int32)Tool, *Color.ToString(), BrushSize);

    // USE THE PARAMETERS FROM CLIENT, not local state
    FPlayerDrawingState PlayerState = GetPlayerDrawingState(DrawingPlayer);
    
    // Update server's state with client's parameters (optional, for consistency)
    PlayerState.CurrentTool = Tool;
    PlayerState.CurrentColor = Color;
    PlayerState.BrushSize = BrushSize;
    PlayerState.SelectedBrushTextureIndex = BrushTextureIndex;
    PlayerState.SelectedFigureTextureIndex = FigureTextureIndex;
    UpdatePlayerDrawingState(DrawingPlayer, PlayerState);

    // Create new stroke USING CLIENT PARAMETERS
    FStroke NewStroke;
    NewStroke.StrokeID = NextStrokeID++;
    NewStroke.DrawingPlayer = DrawingPlayer;
    NewStroke.Tool = Tool;  // Use client tool
    NewStroke.Color = Color; // Use client color
    NewStroke.Size = BrushSize; // Use client brush size
    NewStroke.StartPosition = CanvasPosition;
    NewStroke.EndPosition = CanvasPosition;
    NewStroke.bIsComplete = false;

    // Set textures using client indices
    if (BrushTextures.IsValidIndex(BrushTextureIndex))
    {
        NewStroke.BrushTexture = BrushTextures[BrushTextureIndex];
    }
    if (FigureTextures.IsValidIndex(FigureTextureIndex))
    {
        NewStroke.FigureTexture = FigureTextures[FigureTextureIndex];
    }
    
    // Add first point
    FDrawingPoint Point(CanvasPosition, 1.0f, Color, BrushSize, Tool, NewStroke.StrokeID);
    NewStroke.Points.Add(Point);

    // Store current stroke for this player
    ActiveStrokes.Add(DrawingPlayer, NewStroke);

    // Set shape drawing state
    bool bIsShape = IsShapeTool(Tool); // Use client tool
    PlayerShapeDrawingStates.Add(DrawingPlayer, bIsShape);

    if (!bIsShape)
    {
        DrawStroke(NewStroke);
        
        if (CurrentHistoryIndex < StrokeHistory.Num() - 1)
        {
            StrokeHistory.RemoveAt(CurrentHistoryIndex + 1, StrokeHistory.Num() - CurrentHistoryIndex - 1);
        }
        StrokeHistory.Add(NewStroke);
        CurrentHistoryIndex = StrokeHistory.Num() - 1;
    }

    // Multicast to all clients WITH CLIENT PARAMETERS
    Multicast_StartDrawing(DrawingPlayer, CanvasPosition, NewStroke.StrokeID, 
                          Tool, Color, BrushSize, BrushTextureIndex, FigureTextureIndex);
}

void AWhiteboardActor::Multicast_StartDrawing_Implementation(APawn* DrawingPlayer, const FVector2D& CanvasPosition, 
                           int32 StrokeID, EDrawingTool Tool, FLinearColor Color, 
                           float BrushSize, int32 BrushTextureIndex, int32 FigureTextureIndex)
{
    if (HasAuthority()) 
    {
        return;
    }

    UE_LOG(LogWDS, Warning, TEXT("Multicast_StartDrawing: Player %s with tool %d, color %s"), 
           *DrawingPlayer->GetName(), (int32)Tool, *Color.ToString());

    // Clear any client prediction for this player
    ClientPredictedStrokes.Remove(DrawingPlayer);

    // Update local player state with received parameters
    FPlayerDrawingState PlayerState = GetPlayerDrawingState(DrawingPlayer);
    PlayerState.CurrentTool = Tool;
    PlayerState.CurrentColor = Color;
    PlayerState.BrushSize = BrushSize;
    PlayerState.SelectedBrushTextureIndex = BrushTextureIndex;
    PlayerState.SelectedFigureTextureIndex = FigureTextureIndex;
    UpdatePlayerDrawingState(DrawingPlayer, PlayerState);

    // Create stroke from SERVER DATA (using the parameters sent by server)
    FStroke ClientStroke;
    ClientStroke.StrokeID = StrokeID;
    ClientStroke.DrawingPlayer = DrawingPlayer;
    ClientStroke.Tool = Tool;  // Use server-sent tool
    ClientStroke.Color = Color; // Use server-sent color
    ClientStroke.Size = BrushSize; // Use server-sent size
    ClientStroke.StartPosition = CanvasPosition;
    ClientStroke.EndPosition = CanvasPosition;
    ClientStroke.bIsComplete = false;

    // Set textures from server indices
    if (BrushTextures.IsValidIndex(BrushTextureIndex))
    {
        ClientStroke.BrushTexture = BrushTextures[BrushTextureIndex];
    }
    if (FigureTextures.IsValidIndex(FigureTextureIndex))
    {
        ClientStroke.FigureTexture = FigureTextures[FigureTextureIndex];
    }
    
    FDrawingPoint Point(CanvasPosition, 1.0f, Color, BrushSize, Tool, StrokeID);
    ClientStroke.Points.Add(Point);

    ActiveStrokes.Add(DrawingPlayer, ClientStroke);

    bool bIsShape = IsShapeTool(Tool);
    PlayerShapeDrawingStates.Add(DrawingPlayer, bIsShape);

    if (!bIsShape)
    {
        DrawStroke(ClientStroke);
    }
}

///////////////////////////////////////////// UPDATE DRAWING ////////////////////////

void AWhiteboardActor::PlayerUpdateDrawing(const FVector2D& CanvasPosition)
{
    APawn* DrawingPlayer = GetDrawingPlayer();
    
    if (!DrawingPlayer || !CanClientDraw())
    {
        UE_LOG(LogWDS, Warning, TEXT("PlayerUpdateDrawing: Invalid player or cannot draw"));
        return;
    }

    FPlayerDrawingState PlayerState = GetPlayerDrawingState(DrawingPlayer);

    // CRITICAL: Skip update for immediate tools
    if (PlayerState.CurrentTool == EDrawingTool::Text || 
        PlayerState.CurrentTool == EDrawingTool::Texture || 
        PlayerState.CurrentTool == EDrawingTool::Figure)
    {
        UE_LOG(LogWDS, VeryVerbose, TEXT("PlayerUpdateDrawing: Skipping update for immediate tool %d"), (int32)PlayerState.CurrentTool);
        return; // Don't process updates for immediate tools
    }
    
    // Client prediction - including shape preview
    if (GetLocalRole() != ROLE_Authority)
    {
        FStroke* PredictedStroke = ClientPredictedStrokes.Find(DrawingPlayer);
        if (PredictedStroke)
        {
            // Handle shape tools differently
            bool bIsShape = IsShapeTool(PlayerState.CurrentTool);
            
            if (bIsShape)
            {
                // For shape tools, update preview
                ClearShapePreview();
                DrawShapePreview(PredictedStroke->StartPosition, CanvasPosition, 
                               PlayerState.CurrentTool, PlayerState.CurrentColor, 
                               PlayerState.BrushSize);
            }
            else
            {
                // For freehand tools, add points normally
                FDrawingPoint NewPoint(CanvasPosition, 1.0f, PredictedStroke->Color, 
                                     PredictedStroke->Size, PredictedStroke->Tool, PredictedStroke->StrokeID);
                PredictedStroke->Points.Add(NewPoint);
                PredictedStroke->EndPosition = CanvasPosition;

                // Draw the new segment
                if (PredictedStroke->Points.Num() >= 2)
                {
                    DrawStroke(*PredictedStroke);
                }
            }
            
            UE_LOG(LogWDS, VeryVerbose, TEXT("Client prediction: Updated stroke with %d points, isShape: %d"), 
                   PredictedStroke->Points.Num(), bIsShape);
        }
        else if (IsShapeTool(PlayerState.CurrentTool))
        {
            // If no predicted stroke but we're using a shape tool, create one for preview
            PreviewStroke.StrokeID = -1;
            PreviewStroke.DrawingPlayer = DrawingPlayer;
            PreviewStroke.Tool = PlayerState.CurrentTool;
            PreviewStroke.Color = PlayerState.CurrentColor;
            PreviewStroke.Size = PlayerState.BrushSize;
            PreviewStroke.StartPosition = CanvasPosition;
            PreviewStroke.EndPosition = CanvasPosition;
            PreviewStroke.bIsComplete = false;

            // Add first point
            FDrawingPoint Point(CanvasPosition, 1.0f, PlayerState.CurrentColor, 
                               PlayerState.BrushSize, PlayerState.CurrentTool, -1);
            PreviewStroke.Points.Add(Point);

            ClientPredictedStrokes.Add(DrawingPlayer, PreviewStroke);
            
            // Draw initial preview (just a point)
            DrawShapePreview(CanvasPosition, CanvasPosition, PlayerState.CurrentTool, 
                           PlayerState.CurrentColor, PlayerState.BrushSize);
        }
    }

    // Send to server WITH CURRENT PARAMETERS
    if (APlayerController* PC = GetWorld()->GetFirstPlayerController())
    {
        if (AWhiteboardController* WBController = Cast<AWhiteboardController>(PC))
        {
            WBController->Server_WhiteboardUpdateDrawing(DrawingPlayer, this, CanvasPosition, 
                                                        PlayerState.CurrentTool, PlayerState.CurrentColor, 
                                                        PlayerState.BrushSize);
        }
    }
    
}

void AWhiteboardActor::Server_UpdateDrawing_Implementation(APawn* DrawingPlayer, const FVector2D& CanvasPosition, 
                         EDrawingTool Tool, FLinearColor Color, float BrushSize)
{
   if (!DrawingPlayer || !HasAuthority())
    {
        UE_LOG(LogWDS, Error, TEXT("Server_UpdateDrawing: Invalid player or no authority"));
        return;
    }

    UE_LOG(LogWDS, VeryVerbose, TEXT("Server_UpdateDrawing: Player %s with tool %d"), 
           *DrawingPlayer->GetName(), (int32)Tool);

    // Update server state with client parameters
    FPlayerDrawingState PlayerState = GetPlayerDrawingState(DrawingPlayer);
    PlayerState.CurrentTool = Tool;
    PlayerState.CurrentColor = Color;
    PlayerState.BrushSize = BrushSize;
    UpdatePlayerDrawingState(DrawingPlayer, PlayerState);

    FStroke* CurrentStroke = ActiveStrokes.Find(DrawingPlayer);

    if (!CurrentStroke)
    {
        // Create new stroke with CLIENT PARAMETERS
        FStroke NewStroke;
        NewStroke.StrokeID = NextStrokeID++;
        NewStroke.DrawingPlayer = DrawingPlayer;
        NewStroke.Tool = Tool;
        NewStroke.Color = Color;
        NewStroke.Size = BrushSize;
        NewStroke.StartPosition = CanvasPosition;
        NewStroke.EndPosition = CanvasPosition;
        NewStroke.bIsComplete = false;

        // Set textures from server state (or you could pass these in UpdateDrawing too)
        if (BrushTextures.IsValidIndex(PlayerState.SelectedBrushTextureIndex))
        {
            NewStroke.BrushTexture = BrushTextures[PlayerState.SelectedBrushTextureIndex];
        }
        if (FigureTextures.IsValidIndex(PlayerState.SelectedFigureTextureIndex))
        {
            NewStroke.FigureTexture = FigureTextures[PlayerState.SelectedFigureTextureIndex];
        }
        
        FDrawingPoint Point(CanvasPosition, 1.0f, Color, BrushSize, Tool, NewStroke.StrokeID);
        NewStroke.Points.Add(Point);

        ActiveStrokes.Add(DrawingPlayer, NewStroke);
        CurrentStroke = ActiveStrokes.Find(DrawingPlayer);
        
        bool bIsShape = IsShapeTool(Tool);
        PlayerShapeDrawingStates.Add(DrawingPlayer, bIsShape);
    }

    if (!CurrentStroke)
    {
        UE_LOG(LogWDS, Error, TEXT("Server_UpdateDrawing: Failed to create stroke"));
        return;
    }

    // Update stroke with client parameters (in case tool changed mid-stroke)
    CurrentStroke->Tool = Tool;
    CurrentStroke->Color = Color;
    CurrentStroke->Size = BrushSize;
    CurrentStroke->EndPosition = CanvasPosition;

    bool* IsDrawingShapePtr = PlayerShapeDrawingStates.Find(DrawingPlayer);
    bool bIsDrawingShape = IsDrawingShapePtr ? *IsDrawingShapePtr : false;
    
    if (bIsDrawingShape)
    {
       ClearShapePreview();
       DrawShapePreview(CurrentStroke->StartPosition, CanvasPosition, Tool, Color, BrushSize);
    }
    else
    {
        FDrawingPoint Point(CanvasPosition, 1.0f, Color, BrushSize, Tool, CurrentStroke->StrokeID);
        CurrentStroke->Points.Add(Point);

        if (CurrentStroke->Points.Num() >= 2)
        {
            DrawStroke(*CurrentStroke);
            
            if (CurrentHistoryIndex < StrokeHistory.Num() - 1)
            {
                StrokeHistory.RemoveAt(CurrentHistoryIndex + 1, StrokeHistory.Num() - CurrentHistoryIndex - 1);
            }
            
            if (StrokeHistory.Num() > 0 && StrokeHistory.Last().StrokeID == CurrentStroke->StrokeID)
            {
                StrokeHistory.Last() = *CurrentStroke;
            }
            else
            {
                StrokeHistory.Add(*CurrentStroke);
            }
            CurrentHistoryIndex = StrokeHistory.Num() - 1;
        }
    }

    // Multicast with CLIENT PARAMETERS
    Multicast_UpdateDrawing(DrawingPlayer, CanvasPosition, CurrentStroke->StrokeID, Tool, Color, BrushSize);
}

void AWhiteboardActor::Multicast_UpdateDrawing_Implementation(APawn* DrawingPlayer, const FVector2D& CanvasPosition, 
                            int32 StrokeID, EDrawingTool Tool, FLinearColor Color, float BrushSize)
{
   if (HasAuthority())
    {
        return;
    }

    UE_LOG(LogWDS, VeryVerbose, TEXT("Multicast_UpdateDrawing: Player %s with tool %d"), 
           *DrawingPlayer->GetName(), (int32)Tool);

    // Update local player state
    FPlayerDrawingState PlayerState = GetPlayerDrawingState(DrawingPlayer);
    PlayerState.CurrentTool = Tool;
    PlayerState.CurrentColor = Color;
    PlayerState.BrushSize = BrushSize;
    UpdatePlayerDrawingState(DrawingPlayer, PlayerState);

    FStroke* CurrentStroke = ActiveStrokes.Find(DrawingPlayer);

    if (!CurrentStroke || CurrentStroke->StrokeID != StrokeID)
    {
        // Create new stroke with SERVER PARAMETERS
        FStroke NewStroke;
        NewStroke.StrokeID = StrokeID;
        NewStroke.DrawingPlayer = DrawingPlayer;
        NewStroke.Tool = Tool;
        NewStroke.Color = Color;
        NewStroke.Size = BrushSize;
        NewStroke.StartPosition = CanvasPosition;
        NewStroke.EndPosition = CanvasPosition;
        NewStroke.bIsComplete = false;

        // Set textures from local state
        if (BrushTextures.IsValidIndex(PlayerState.SelectedBrushTextureIndex))
        {
            NewStroke.BrushTexture = BrushTextures[PlayerState.SelectedBrushTextureIndex];
        }
        if (FigureTextures.IsValidIndex(PlayerState.SelectedFigureTextureIndex))
        {
            NewStroke.FigureTexture = FigureTextures[PlayerState.SelectedFigureTextureIndex];
        }
        
        FDrawingPoint Point(CanvasPosition, 1.0f, Color, BrushSize, Tool, StrokeID);
        NewStroke.Points.Add(Point);

        ActiveStrokes.Add(DrawingPlayer, NewStroke);
        CurrentStroke = ActiveStrokes.Find(DrawingPlayer);
    }

    if (!CurrentStroke)
    {
        return;
    }

    // Update stroke with server parameters
    CurrentStroke->Tool = Tool;
    CurrentStroke->Color = Color;
    CurrentStroke->Size = BrushSize;
    CurrentStroke->EndPosition = CanvasPosition;

    bool* IsDrawingShapePtr = PlayerShapeDrawingStates.Find(DrawingPlayer);
    bool bIsDrawingShape = IsDrawingShapePtr ? *IsDrawingShapePtr : false;

    
    if (bIsDrawingShape)
    {
      //  ClearShapePreview();
      //  DrawShapePreview(CurrentStroke->StartPosition, CanvasPosition, Tool, Color, BrushSize);
    }
    else
    {
        FDrawingPoint Point(CanvasPosition, 1.0f, Color, BrushSize, Tool, StrokeID);
        CurrentStroke->Points.Add(Point);

        if (CurrentStroke->Points.Num() >= 2)
        {
            DrawStroke(*CurrentStroke);
        }
    }
}


///////////////////////////////////////////// END DRAWING ////////////////////////

void AWhiteboardActor::PlayerEndDrawing()
{
    APawn* DrawingPlayer = GetDrawingPlayer();
    
    if (!DrawingPlayer)
    {
        UE_LOG(LogWDS, Warning, TEXT("PlayerEndDrawing: No valid player"));
        return;
    }

    UE_LOG(LogWDS, Warning, TEXT("PlayerEndDrawing: Player %s"), *DrawingPlayer->GetName());

    FPlayerDrawingState PlayerState = GetPlayerDrawingState(DrawingPlayer);
    
    if (PlayerState.CurrentTool == EDrawingTool::Text || 
        PlayerState.CurrentTool == EDrawingTool::Texture || 
        PlayerState.CurrentTool == EDrawingTool::Figure)
    {
        UE_LOG(LogWDS, VeryVerbose, TEXT("PlayerEndDrawing: Skipping end for immediate tool %d"), (int32)PlayerState.CurrentTool);
        return; // Don't process end for immediate tools
    }
    
    // Clear client prediction and shape preview
    if (GetLocalRole() != ROLE_Authority)
    {
        FStroke* PredictedStroke = ClientPredictedStrokes.Find(DrawingPlayer);
        if (PredictedStroke)
        {
            UE_LOG(LogWDS, Warning, TEXT("Clearing predicted stroke with %d points"), PredictedStroke->Points.Num());
        }
        ClientPredictedStrokes.Remove(DrawingPlayer);
        ClearShapePreview(); 
    }

    if (APlayerController* PC = GetWorld()->GetFirstPlayerController())
    {
        if (AWhiteboardController* WBController = Cast<AWhiteboardController>(PC))
        {
            WBController->Server_WhiteboardEndDrawing(DrawingPlayer, this);
        }
    }
    
    // Send to server
//    Server_EndDrawing(DrawingPlayer);
}

void AWhiteboardActor::Server_EndDrawing_Implementation(APawn* DrawingPlayer)
{
   if (!DrawingPlayer || !HasAuthority())
    {
        UE_LOG(LogWDS, Error, TEXT("Server_EndDrawing: Invalid player or no authority"));
        return;
    }

    UE_LOG(LogWDS, Warning, TEXT("Server_EndDrawing: Player %s"), *DrawingPlayer->GetName());

    FStroke* CurrentStroke = ActiveStrokes.Find(DrawingPlayer);
    
    if (!CurrentStroke)
    {
        UE_LOG(LogWDS, Warning, TEXT("Server_EndDrawing: No current stroke for player %s"), *DrawingPlayer->GetName());
        return;
    }

    FPlayerDrawingState PlayerState = GetPlayerDrawingState(DrawingPlayer);

    // Finalize the stroke
    CurrentStroke->bIsComplete = true;

    bool* IsDrawingShapePtr = PlayerShapeDrawingStates.Find(DrawingPlayer);
    bool bIsDrawingShape = IsDrawingShapePtr ? *IsDrawingShapePtr : false;
    
    if (bIsDrawingShape)
    {
        // Finalize shape - add end point
        ClearShapePreview();
        
        if (CurrentStroke->Points.Num() == 1)
        {
            FDrawingPoint EndPoint(CurrentStroke->EndPosition, 1.0f, PlayerState.CurrentColor, 
                                  PlayerState.BrushSize, PlayerState.CurrentTool, CurrentStroke->StrokeID);
            CurrentStroke->Points.Add(EndPoint);
        }
        
        // Draw the final shape
        DrawStroke(*CurrentStroke);
    }

    // Add to history (for shapes or to finalize freehand)
    if (CurrentHistoryIndex < StrokeHistory.Num() - 1)
    {
        StrokeHistory.RemoveAt(CurrentHistoryIndex + 1, StrokeHistory.Num() - CurrentHistoryIndex - 1);
    }

    // Replace existing stroke or add new one
    bool bFound = false;
    for (int32 i = 0; i < StrokeHistory.Num(); i++)
    {
        if (StrokeHistory[i].StrokeID == CurrentStroke->StrokeID)
        {
            StrokeHistory[i] = *CurrentStroke;
            bFound = true;
            break;
        }
    }
    
    if (!bFound)
    {
        StrokeHistory.Add(*CurrentStroke);
    }
    
    CurrentHistoryIndex = StrokeHistory.Num() - 1;

    UE_LOG(LogWDS, Warning, TEXT("Server_EndDrawing: Completed stroke %d for player %s with %d points, history index: %d"), 
           CurrentStroke->StrokeID, *DrawingPlayer->GetName(), CurrentStroke->Points.Num(), CurrentHistoryIndex);

    // Multicast to all clients
    Multicast_EndDrawing(DrawingPlayer, *CurrentStroke);

    // Clean up
    ActiveStrokes.Remove(DrawingPlayer);
    PlayerShapeDrawingStates.Remove(DrawingPlayer);
}

void AWhiteboardActor::Multicast_EndDrawing_Implementation(APawn* DrawingPlayer, const FStroke& CompletedStroke)
{
    // Skip if this is the server
    if (HasAuthority())
    {
        return;
    }

    UE_LOG(LogWDS, Warning, TEXT("Multicast_EndDrawing: Received stroke %d for player %s"), 
           CompletedStroke.StrokeID, *DrawingPlayer->GetName());

    // Remove from current strokes
    CurrentStrokes.Remove(DrawingPlayer);
    PlayerDrawingShapes.Remove(DrawingPlayer);
    //ClearShapePreview(DrawingPlayer);

    // Add to history
    if (CurrentHistoryIndex < StrokeHistory.Num() - 1)
    {
        StrokeHistory.RemoveAt(CurrentHistoryIndex + 1, StrokeHistory.Num() - CurrentHistoryIndex - 1);
    }

    StrokeHistory.Add(CompletedStroke);
    CurrentHistoryIndex = StrokeHistory.Num() - 1;

    // Draw the completed stroke
    DrawStroke(CompletedStroke);
}

/*
void AWhiteboardActor::AddText(const FVector2D& CanvasPosition, const FString& Text)
{
    /*
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
                YourPC->Server_WhiteboardAddText(this, CanvasPosition, CurrentTextString, CurrentColor, BrushSize);
            }
        }
    }  
}

*/

/////////////////////////////////////////////////////// DRAW FIGURE //////////////////////////////////////////

// Draw Figure
void AWhiteboardActor::CreateAndCompleteStroke(APawn* DrawingPlayer, const FVector2D& CanvasPosition, const FPlayerDrawingState& PlayerState)
{
     // Create a completed stroke for immediate tools
    FStroke ImmediateStroke;
    ImmediateStroke.StrokeID = (GetLocalRole() == ROLE_Authority) ? NextStrokeID++ : -1;
    ImmediateStroke.DrawingPlayer = DrawingPlayer;
    ImmediateStroke.Tool = PlayerState.CurrentTool;
    ImmediateStroke.Color = PlayerState.CurrentColor;
    ImmediateStroke.Size = PlayerState.BrushSize;
    ImmediateStroke.StartPosition = CanvasPosition;
    ImmediateStroke.EndPosition = CanvasPosition;
    ImmediateStroke.bIsComplete = true; // Mark as complete immediately

    if (PlayerState.CurrentTextString != "")
    {
        ImmediateStroke.TextContent = PlayerState.CurrentTextString;
    }
    
    // Set appropriate textures
    if (PlayerState.CurrentTool == EDrawingTool::Texture)
    {
        if (BrushTextures.IsValidIndex(PlayerState.SelectedBrushTextureIndex))
        {
            ImmediateStroke.BrushTexture = BrushTextures[PlayerState.SelectedBrushTextureIndex];
        }
    }
    else if (PlayerState.CurrentTool == EDrawingTool::Figure)
    {
        if (FigureTextures.IsValidIndex(PlayerState.SelectedFigureTextureIndex))
        {
            ImmediateStroke.FigureTexture = FigureTextures[PlayerState.SelectedFigureTextureIndex];
        }
    }

    // Add the single point
    FDrawingPoint Point(CanvasPosition, 1.0f, PlayerState.CurrentColor, 
                       PlayerState.BrushSize, PlayerState.CurrentTool, ImmediateStroke.StrokeID);
    ImmediateStroke.Points.Add(Point);

    // Handle based on authority
    if (GetLocalRole() == ROLE_Authority)
    {
        // Server: Add to history and draw
        if (CurrentHistoryIndex < StrokeHistory.Num() - 1)
        {
            StrokeHistory.RemoveAt(CurrentHistoryIndex + 1, StrokeHistory.Num() - CurrentHistoryIndex - 1);
        }
        StrokeHistory.Add(ImmediateStroke);
        CurrentHistoryIndex = StrokeHistory.Num() - 1;

        DrawStroke(ImmediateStroke);
        
        // Multicast to all clients
        Multicast_DrawCompletedStroke(ImmediateStroke);
    }
    else
    {
        // Client: Predict locally and send to server
        DrawStroke(ImmediateStroke);
        
        // Send to server to replicate to other clients
        if (APlayerController* PC = GetWorld()->GetFirstPlayerController())
        {
            if (AWhiteboardController* WBController = Cast<AWhiteboardController>(PC))
            {
                WBController->Server_WhiteboardDrawImmediateStroke(DrawingPlayer, this, ImmediateStroke);
            }
        }
    }
}
// Server Draw Figure
void AWhiteboardActor::Server_DrawImmediateStroke_Implementation(APawn* DrawingPlayer, const FStroke& ImmediateStroke)
{
    if (!DrawingPlayer || !HasAuthority())
    {
        UE_LOG(LogWDS, Error, TEXT("Server_DrawImmediateStroke: Invalid player or no authority"));
        return;
    }

    // Create a server version with proper ID
    FStroke ServerStroke = ImmediateStroke;
    ServerStroke.StrokeID = NextStrokeID++;
    ServerStroke.DrawingPlayer = DrawingPlayer;

    // Add to history
    if (CurrentHistoryIndex < StrokeHistory.Num() - 1)
    {
        StrokeHistory.RemoveAt(CurrentHistoryIndex + 1, StrokeHistory.Num() - CurrentHistoryIndex - 1);
    }
    StrokeHistory.Add(ServerStroke);
    CurrentHistoryIndex = StrokeHistory.Num() - 1;

    // Draw locally
    DrawStroke(ServerStroke);

    // Multicast to all clients
    Multicast_DrawCompletedStroke(ServerStroke);
}


void AWhiteboardActor::Multicast_DrawCompletedStroke_Implementation(const FStroke& CompletedStroke)
{
    if (HasAuthority())
    {
        return; // Server already handled this
    }

    UE_LOG(LogWDS, Warning, TEXT("Multicast_DrawCompletedStroke: Received completed stroke %d for player %s, tool: %d"), 
           CompletedStroke.StrokeID, 
           CompletedStroke.DrawingPlayer ? *CompletedStroke.DrawingPlayer->GetName() : TEXT("None"),
           (int32)CompletedStroke.Tool);

    // Clear any client prediction for this player
    if (CompletedStroke.DrawingPlayer)
    {
        ClientPredictedStrokes.Remove(CompletedStroke.DrawingPlayer);
    }

    // Check if this stroke already exists in history
    bool bStrokeExists = false;
    for (int32 i = 0; i < StrokeHistory.Num(); i++)
    {
        if (StrokeHistory[i].StrokeID == CompletedStroke.StrokeID)
        {
            StrokeHistory[i] = CompletedStroke;
            bStrokeExists = true;
            break;
        }
    }

    // If not exists, add to history
    if (!bStrokeExists)
    {
        if (CurrentHistoryIndex < StrokeHistory.Num() - 1)
        {
            StrokeHistory.RemoveAt(CurrentHistoryIndex + 1, StrokeHistory.Num() - CurrentHistoryIndex - 1);
        }
        StrokeHistory.Add(CompletedStroke);
        CurrentHistoryIndex = StrokeHistory.Num() - 1;
    }

    // Draw the completed stroke
    DrawStroke(CompletedStroke);

    UE_LOG(LogWDS, Warning, TEXT("Multicast_DrawCompletedStroke: Successfully drew stroke %d with %d points"), 
           CompletedStroke.StrokeID, CompletedStroke.Points.Num());
    
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

void AWhiteboardActor::Multicast_UpdateDrawingCanvas_Implementation(const FStroke& NewStroke)
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

void AWhiteboardActor::Client_SyncWhiteboardState_Implementation(const TArray<FStroke>& History, int32 HistoryIndex)
{
    SyncWhiteboardState(History,HistoryIndex);
}

void AWhiteboardActor::SyncWhiteboardState(const TArray<FStroke>& History, int32 HistoryIndex)
{
    StrokeHistory = History;
    CurrentHistoryIndex = HistoryIndex;
    RedrawCanvas();
}

void AWhiteboardActor::ClientStartDrawing(const FVector2D& CanvasPosition)
{
    /*
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
    */
}

/*
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
    UpdateDrawing(CanvasPosition);
}
*/

//////////////////////////////////////// WHITEBOARD PROPERTIES ///////////////////////////////////////

UStaticMeshComponent* AWhiteboardActor::GetWhiteboardMesh() const
{
    return  WhiteboardMesh;
}

int32 AWhiteboardActor::GetCanvasWidth() const
{
    return CanvasWidth;
}

int32 AWhiteboardActor::GetCanvasHeight() const
{
    return  CanvasHeight;
}

UCameraComponent* AWhiteboardActor::GetWhiteboardCamera() const
{
    return WhiteboardCamera;
}

FVector2D AWhiteboardActor::WorldToCanvasPosition(const FVector& WorldPosition) const
{
    if (!WhiteboardMesh)
    {
        return FVector2D::ZeroVector;
    }

    // Get mesh bounds
    FBoxSphereBounds MeshBounds = WhiteboardMesh->GetStaticMesh()->GetBounds();
    FVector MeshExtent = MeshBounds.BoxExtent;
    
    // Transform world position to local whiteboard space
    FVector LocalPosition = GetTransform().InverseTransformPosition(WorldPosition);
    
    // Calculate normalized coordinates
    float U = (LocalPosition.Y + MeshExtent.Y) / (2.0f * MeshExtent.Y);
    float V = (LocalPosition.Z + MeshExtent.Z) / (2.0f * MeshExtent.Z);
    
    // Flip V coordinate to match standard UV mapping (0 at bottom, 1 at top)
    V = 1.0f - V;
    
    // Clamp to ensure within bounds
    U = FMath::Clamp(U, 0.0f, 1.0f);
    V = FMath::Clamp(V, 0.0f, 1.0f);
    
    // Convert to canvas pixel coordinates
    return FVector2D(U * CanvasWidth, V * CanvasHeight);
}

//////////////////////////////////////// DRAWING STOCK ////////////////////////

// Draw Stock
void AWhiteboardActor::DrawStroke(const FStroke& Stroke)
{
    // initialization check
    if (!bIsInitialized || !DrawingCanvas || !GetWorld())
    {
        UE_LOG(LogWDS, Warning, TEXT("DrawStroke: Whiteboard not initialized, attempting recovery"));
        CheckAndRepairInitialization();
        
        if (!bIsInitialized || !DrawingCanvas)
        {
            UE_LOG(LogWDS, Error, TEXT("DrawStroke: Recovery failed"));
            return;
        }
    }

    if (Stroke.Points.Num() == 0)
    {
        UE_LOG(LogWDS, Warning, TEXT("DrawStroke: Stroke has no points!"));
        return;
    }
    UE_LOG(LogWDS, Verbose, TEXT("DrawStroke: Drawing stroke %d with %d points, tool: %d"), 
           Stroke.StrokeID, Stroke.Points.Num(), (int32)Stroke.Tool);
    
    // Handle different tool types
    if (IsShapeTool(Stroke.Tool) && Stroke.bIsComplete)
    {
        DrawShape(Stroke);
    }
    else
    {
        switch (Stroke.Tool)
        {
        case EDrawingTool::Text:
            DrawTextStroke(Stroke);
            break;
        case EDrawingTool::Figure:
            DrawFigureStroke(Stroke);
            break;
        case EDrawingTool::Texture:
            DrawFigureStroke(Stroke);
            break;
        default:  
            DrawFreehandStroke(Stroke);
            break;
        }
    }

    // Update material
    UpdateCanvasMaterial();
}

////////////////////////////// DRAWING SHAPE AND PREVIEW ///////////////////////

// Draw Shape
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

    FVector2D StartPos = Stroke.Points[0].Position;
    FVector2D EndPos = Stroke.Points[Stroke.Points.Num() - 1].Position;
    FLinearColor DrawColor = Stroke.Color;
    float LineThickness = Stroke.Size;

   switch (Stroke.Tool)
        {
            // Draw Line Preview
            case EDrawingTool::Line:
                Canvas->K2_DrawLine(StartPos, EndPos, LineThickness, DrawColor);
                break;

            // Draw Rectangle Preview
            case EDrawingTool::Rectangle:
                {
                    float Left = FMath::Min(StartPos.X, EndPos.X);
                    float Top = FMath::Min(StartPos.Y, EndPos.Y);
                    float Right = FMath::Max(StartPos.X, EndPos.X);
                    float Bottom = FMath::Max(StartPos.Y, EndPos.Y);
                    
                    Canvas->K2_DrawLine(FVector2D(Left, Top), FVector2D(Right, Top), LineThickness, DrawColor);
                    Canvas->K2_DrawLine(FVector2D(Right, Top), FVector2D(Right, Bottom), LineThickness, DrawColor);
                    Canvas->K2_DrawLine(FVector2D(Right, Bottom), FVector2D(Left, Bottom), LineThickness, DrawColor);
                    Canvas->K2_DrawLine(FVector2D(Left, Bottom), FVector2D(Left, Top), LineThickness, DrawColor);
                }
                break;

            // Draw Circle Preview
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
                        Canvas->K2_DrawLine(Points[i], Points[i + 1], LineThickness, DrawColor);
                    }
                }
                break;
        default:  Canvas->K2_DrawLine(StartPos, EndPos, LineThickness, DrawColor);
            break;
        }
    
    UKismetRenderingLibrary::EndDrawCanvasToRenderTarget(GetWorld(), Context);

    // Update Canvas Material
    UpdateCanvasMaterial();
}

// Draw Preview Shape
void AWhiteboardActor::DrawShapePreview(const FVector2D& StartPos, const FVector2D& EndPos, EDrawingTool Tool, FLinearColor Color, float Size)
{
    if (!PreviewCanvas)
    {
        return;
    }

    // Clear previous preview
    UKismetRenderingLibrary::ClearRenderTarget2D(GetWorld(), PreviewCanvas, FLinearColor::Transparent);
    
    UCanvas* Canvas = nullptr;
    FVector2D CanvasSize;
    FDrawToRenderTargetContext Context;
    UKismetRenderingLibrary::BeginDrawCanvasToRenderTarget(GetWorld(), PreviewCanvas, Canvas, CanvasSize, Context);
    
    if (Canvas)
    {
        switch (Tool)
        {
            // Draw Line Preview
        case EDrawingTool::Line:
                Canvas->K2_DrawLine(StartPos, EndPos, Size, FLinearColor::Red);
                break;

            // Draw Rectangle Preview
            case EDrawingTool::Rectangle:
                {
                    float Left = FMath::Min(StartPos.X, EndPos.X);
                    float Top = FMath::Min(StartPos.Y, EndPos.Y);
                    float Right = FMath::Max(StartPos.X, EndPos.X);
                    float Bottom = FMath::Max(StartPos.Y, EndPos.Y);
                    
                    Canvas->K2_DrawLine(FVector2D(Left, Top), FVector2D(Right, Top), Size, FLinearColor::Red);
                    Canvas->K2_DrawLine(FVector2D(Right, Top), FVector2D(Right, Bottom), Size, FLinearColor::Red);
                    Canvas->K2_DrawLine(FVector2D(Right, Bottom), FVector2D(Left, Bottom), Size, FLinearColor::Red);
                    Canvas->K2_DrawLine(FVector2D(Left, Bottom), FVector2D(Left, Top), Size, FLinearColor::Red);
                }
                break;

            // Draw Circle Preview
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
                        Canvas->K2_DrawLine(Points[i], Points[i + 1], Size, FLinearColor::Red);
                    }
                }
                break;
        default:  Canvas->K2_DrawLine(StartPos, EndPos, Size, FLinearColor::Red);
            break;
        }
    }
    
    UKismetRenderingLibrary::EndDrawCanvasToRenderTarget(GetWorld(), Context);
    
    // Update The Material To Show Preview Figure
    UpdateCanvasMaterial();
}

// Clear Shape Preview
void AWhiteboardActor::ClearShapePreview()
{
    if (PreviewCanvas)
    {
        UKismetRenderingLibrary::ClearRenderTarget2D(GetWorld(), PreviewCanvas, FLinearColor::Transparent);
    }
}

////////////////////////////// DRAWING FIGURE ///////////////////////

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

//////////////////////////////////////// Interaction ///////////////////////////////////////

// NEW: Request interaction through PlayerController
void AWhiteboardActor::RequestInteraction(APawn* Player)
{
    if (!Player)
    {
        return;
    }
    
    // Get the player controller
    APlayerController* PC = Cast<APlayerController>(Player->GetController());
    if (!PC)
    {
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
        if (AWhiteboardController* WBController = Cast<AWhiteboardController>(PC))
        {
            WBController->Server_RequestWhiteboardInteraction(this, Player);
        }
    }
}

// NEW: Request end interaction through PlayerController
void AWhiteboardActor::RequestEndInteraction(APawn* Player)
{
    if (!Player)
    {
        return;
    }

    APlayerController* PC = Cast<APlayerController>(Player->GetController());
    if (!PC)
    {
        return;
    }

    if (HasAuthority())
    {
        EndInteractionForPlayer(Player);
    }
    else
    {
        if (AWhiteboardController* WBController = Cast<AWhiteboardController>(PC))
        {
            WBController->Server_EndWhiteboardInteraction(this, Player);
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
        UE_LOG(LogWDS, Log, TEXT("Player too far: %f > %f"), Distance, InteractionDistance);
        return false;
    }
    
    // Check if already interacting
    if (InteractingPawns.Contains(Player)) 
    {
        return true; // Already interacting is OK
    }
    
    // Check player limit
    if (!CanAcceptMorePlayers()) 
    {
        UE_LOG(LogWDS, Log, TEXT("Cannot accept more players: %d/%d"), InteractingPawns.Num(), MaxInteractingPlayers);
        return false;
    }
    
    return true;
}

// Interaction Functions
void AWhiteboardActor::StartInteraction(APawn* Player)
{
    if (!HasAuthority() || !Player)
    {
        return;
    }

    if (!CanPlayerInteract(Player))
    {
        UE_LOG(LogTemp, Warning, TEXT("Player cannot interact with whiteboard"));
        return;
    }

    InteractingPawns.AddUnique(Player);
    
    UE_LOG(LogTemp, Warning, TEXT("Player %s started interacting with whiteboard"), *Player->GetName());

    // Setup UI for the interacting player
    if (APlayerController* PC = Cast<APlayerController>(Player->GetController()))
    {
        Client_SetupInteractionUI(Player);
        
        if (AWhiteboardController* WPC = Cast<AWhiteboardController>(PC))
        {
            WPC->SetupWhiteboardInputMode(Player);
        }
    }

    // Sync current state to new client
    SyncNewClient(Cast<APlayerController>(Player->GetController()));
    
    // Call Blueprint events
    OnInteractionStarted(Player);
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

void AWhiteboardActor::EndInteractionForPlayer(APawn* Player)
{
    
    if (!HasAuthority() || !Player)
    {
        return;
    }

    if (InteractingPawns.Contains(Player))
    {
        InteractingPawns.Remove(Player);
        
        UE_LOG(LogTemp, Warning, TEXT("Player %s ended interaction with whiteboard"), *Player->GetName());

        APlayerController* PC = Cast<APlayerController>(Player->GetController());
        if (PC)
        {
            if (AWhiteboardController* WPC = Cast<AWhiteboardController>(PC))
            {
               WPC->Client_CleanupInteractionUI(Player);
                WPC->RestoreGameInputMode(Player);
            }
            else
            {
                Client_CleanupInteractionUI(Player);
            }
        }

        //Multicast_OnInteractionEnded(Player);
        
        OnInteractionEnded(Player);
    }
   
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

void AWhiteboardActor::OnRep_InteractingPawns()
{
    UE_LOG(LogWDS, Warning, TEXT("OnRep_InteractingPawns: %d players interacting"), InteractingPawns.Num());
    
    // Update local interaction state
    APawn* LocalPlayer = GetDrawingPlayer();
    if (LocalPlayer)
    {
        bCanInteract = InteractingPawns.Contains(LocalPlayer);
    }
}

void AWhiteboardActor::InitializeDefaultPlayerState(APawn* Player)
{
    if (!Player || !IsValid(Player))
    {
        UE_LOG(LogWDS, Warning, TEXT("InitializeDefaultPlayerState: Invalid player"));
        return;
    }
    
    FPlayerDrawingState DefaultState;
    DefaultState.Player = Player;
    DefaultState.CurrentTool = EDrawingTool::Pencil;
    DefaultState.CurrentColor = FLinearColor::Black;
    DefaultState.BrushSize = 10.0f;
    DefaultState.SelectedBrushTextureIndex = 0;
    DefaultState.SelectedFigureTextureIndex = 0;
    DefaultState.CurrentTextString = FString();
    
    // Validate the state
    DefaultState.ValidateAndClamp();
    
    UE_LOG(LogWDS, Warning, TEXT("InitializeDefaultPlayerState: Setting default state for player %s"), 
           *Player->GetName());
    
    // Update both local cache and replicated state
    UpdatePlayerDrawingState(Player, DefaultState);
    
    // If we have authority, also update on server and multicast to clients
    if (HasAuthority())
    {
        Server_UpdatePlayerDrawingState(Player, DefaultState);
    }
}


// Check If The Client Can Draw
bool AWhiteboardActor::CanClientDraw() const
{
    APawn* LocalPlayer = GetDrawingPlayer();
    if (!LocalPlayer) return false;
    
    // Client can draw if they're interacting and whiteboard is initialized
    return bIsInitialized && DrawingCanvas && IsPlayerInteracting(LocalPlayer);
}   

void AWhiteboardActor::RemoveInteractingPlayer(APawn* Player)
{
    if (HasAuthority())
    {
        EndInteractionForPlayer(Player);
    }
}

// On Start Overlap Whiteboard Interaction AREA
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

// On End Overlap Whiteboard Interaction AREA
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

void AWhiteboardActor::SetupInteractionUI(APawn* InteractingPlayer)
{
    // Only apply to the local player
    AWhiteboardController* YourPC = Cast<AWhiteboardController>(InteractingPlayer->GetController());
    
    if (!YourPC || YourPC->GetPawn() != InteractingPlayer)
    {
        return;
    }
    
    if (YourPC)
    {
        YourPC->OnPlayerJoinedInteraction(InteractingPlayer,this);
        
    }
}

void AWhiteboardActor::CleanupInteractionUI(APawn* InteractingPlayer)
{
    
    // Only apply to the local player
    APlayerController* LocalPC = GetWorld()->GetFirstPlayerController();
    if (!LocalPC || LocalPC->GetPawn() != InteractingPlayer)
    {
        return;
    }

    if (AWhiteboardController* YourPC = Cast<AWhiteboardController>(LocalPC))
    {
        YourPC->OnPlayerLeftInteraction(InteractingPlayer,this);
    }
    
}

void AWhiteboardActor::Client_SetupInteractionUI_Implementation(APawn* InteractingPlayer)
{
    SetupInteractionUI(InteractingPlayer);
}

void AWhiteboardActor::Client_CleanupInteractionUI_Implementation(APawn* InteractingPlayer)
{
    CleanupInteractionUI(InteractingPlayer);
}

/////////////////////////// DRAWING CANVAS ///////////////////////////////////

// Re-Draw Canvas
void AWhiteboardActor::RedrawCanvas()
{
    if (!DrawingCanvas) return;
    
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

// Update Canvas Materials
void AWhiteboardActor::UpdateCanvasMaterial()
{
    if (WhiteboardMesh->GetStaticMesh())
    {
        UMaterialInstanceDynamic* DynamicMaterial = Cast<UMaterialInstanceDynamic>(WhiteboardMesh->GetMaterial(InitMaterialIndex));

        if (DynamicMaterial)
        {
            DynamicMaterial->SetTextureParameterValue(TEXT("DrawingTexture"), DrawingCanvas);
        }

        if (PreviewCanvas)
        {
            DynamicMaterial->SetTextureParameterValue(TEXT("PreviewTexture"), PreviewCanvas);
        }
        
    }
}

// Render Target To Texture 2D
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

bool AWhiteboardActor::BeginCanvasDraw(UCanvas*& OutCanvas, FVector2D& OutCanvasSize,
                                       FDrawToRenderTargetContext& OutContext, UTextureRenderTarget2D* RenderTarget)
{
    if (!RenderTarget)
    {
        return false;
    }

    if (!GetWorld())
    {
        return false;
    }

    UKismetRenderingLibrary::BeginDrawCanvasToRenderTarget(GetWorld(), RenderTarget, OutCanvas, OutCanvasSize, OutContext);
    
    if (!OutCanvas)
    {
        return false;
    }

    return true;
}
void AWhiteboardActor::EndCanvasDraw(const FDrawToRenderTargetContext& Context)
{
    if (GetWorld())
    {
        UKismetRenderingLibrary::EndDrawCanvasToRenderTarget(GetWorld(), Context);
    }
}


void AWhiteboardActor::DrawTextStroke(const FStroke& Stroke)
{
    if (Stroke.TextContent.IsEmpty() || Stroke.Points.Num() == 0)
    {
        return;
    }

    UCanvas* Canvas = nullptr;
    FVector2D CanvasSize;
    FDrawToRenderTargetContext Context;
    
    UKismetRenderingLibrary::BeginDrawCanvasToRenderTarget(GetWorld(), DrawingCanvas, Canvas, CanvasSize, Context);

    UFont* Font = GEngine->GetSmallFont();
    float TextScale = FMath::Max(Stroke.Size / 10.0f, 0.5f);
    
    Canvas->K2_DrawText(
        Font, 
        Stroke.TextContent,
        Stroke.Points[0].Position, 
        FVector2D(TextScale, TextScale), 
        Stroke.Color, 
        1.0f, 
        FLinearColor::Black, 
        FVector2D::ZeroVector, 
        true, true, true, 
        FLinearColor(0, 0, 0, 0)
    );
    
    UKismetRenderingLibrary::EndDrawCanvasToRenderTarget(GetWorld(), Context);
}

void AWhiteboardActor::DrawFigureStroke(const FStroke& Stroke)
{
    if (!Stroke.FigureTexture || Stroke.Points.Num() == 0)
    {
        return;
    }

    UCanvas* Canvas = nullptr;
    FVector2D CanvasSize;
    FDrawToRenderTargetContext Context;
    
    UKismetRenderingLibrary::BeginDrawCanvasToRenderTarget(GetWorld(), DrawingCanvas, Canvas, CanvasSize, Context);

    FVector2D DrawPosition = Stroke.Points[0].Position - FVector2D(Stroke.Size / 2, Stroke.Size / 2);
    FVector2D DrawSize = FVector2D(Stroke.Size * 5, Stroke.Size * 5);
    
    Canvas->K2_DrawTexture(
        Stroke.FigureTexture,
        DrawPosition,
        DrawSize,
        FVector2D::ZeroVector,
        FVector2D::UnitVector,
        Stroke.Color
    );
    
    UKismetRenderingLibrary::EndDrawCanvasToRenderTarget(GetWorld(), Context);
}

void AWhiteboardActor::DrawFreehandStroke(const FStroke& Stroke)
{
    if (Stroke.Points.Num() == 0)
    {
        return;
    }

    UCanvas* Canvas = nullptr;
    FVector2D CanvasSize;
    FDrawToRenderTargetContext Context;
    
    UKismetRenderingLibrary::BeginDrawCanvasToRenderTarget(GetWorld(), DrawingCanvas, Canvas, CanvasSize, Context);

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
                DrawTexturedLine(Canvas, Point1, Point2, Stroke);
            }
            else
            {
                // Draw solid line
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
    
    UKismetRenderingLibrary::EndDrawCanvasToRenderTarget(GetWorld(), Context);
}

void AWhiteboardActor::DrawTexturedLine(UCanvas* Canvas, const FDrawingPoint& Point1, const FDrawingPoint& Point2,
    const FStroke& Stroke)
{
    if (!Canvas || !Stroke.BrushTexture)
    {
        return;
    }

    float Distance = FVector2D::Distance(Point1.Position, Point2.Position);
    FVector2D Direction = (Point2.Position - Point1.Position).GetSafeNormal();
    float StepSize = FMath::Max(Stroke.Size * 0.5f, 1.0f);
    
    for (float t = 0; t < Distance; t += StepSize)
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


//////////////////////////////////////// UTILITIES ///////////////////////////////////////

// Generate SVG From Stocks
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

//////////////////////////////////////// DEBUGGING ///////////////////////////////////////

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

// Debug Player Tools States
void AWhiteboardActor::DebugPlayerToolState(APawn* Player)
{
    if (!Player) return;
    
    FPlayerDrawingState State = GetPlayerDrawingState(Player);
    
    UE_LOG(LogWDS, Warning, TEXT("=== Player Tool State Debug ==="));
    UE_LOG(LogWDS, Warning, TEXT("Player: %s"), *Player->GetName());
    UE_LOG(LogWDS, Warning, TEXT("Role: %s"), (GetLocalRole() == ROLE_Authority) ? TEXT("Server") : TEXT("Client"));
    UE_LOG(LogWDS, Warning, TEXT("Current Tool: %d"), (int32)State.CurrentTool);
    // UE_LOG(LogWDS, Warning, TEXT("Current Color: %s"), *State.CurrentColor.ToString());
    // UE_LOG(LogWDS, Warning, TEXT("Brush Size: %f"), State.BrushSize);
    UE_LOG(LogWDS, Warning, TEXT("=============================="));
}