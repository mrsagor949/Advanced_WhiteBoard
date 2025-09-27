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
    bIsDrawingShape = false;
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
    

    // Bind overlap events
    InteractionVolume->OnComponentBeginOverlap.AddDynamic(this, &AWhiteboardActor::OnTriggerBeginOverlap);
    InteractionVolume->OnComponentEndOverlap.AddDynamic(this, &AWhiteboardActor::OnTriggerEndOverlap);

    // Initialize The Whiteboard
    InitializeWhiteboard();
    
}

//////////////////////////////////////////GET LIFETIME REPLICATED ////////////////////////////////
void AWhiteboardActor::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    DOREPLIFETIME_CONDITION_NOTIFY(AWhiteboardActor, PlayerDrawingStates, COND_None, REPNOTIFY_Always)
    
    DOREPLIFETIME_CONDITION_NOTIFY(AWhiteboardActor, StrokeHistory, COND_None, REPNOTIFY_Always);
    DOREPLIFETIME(AWhiteboardActor, CurrentHistoryIndex);
    DOREPLIFETIME(AWhiteboardActor, NextStrokeID);

    DOREPLIFETIME(AWhiteboardActor, DrawingCanvas);
    
    // Replicate interaction state
    DOREPLIFETIME(AWhiteboardActor, InteractingPawns);
    DOREPLIFETIME(AWhiteboardActor, MaxInteractingPlayers);
    
}

void AWhiteboardActor::OnRep_DrawingCanvas()
{
    if (DrawingCanvas)
    {
        RedrawCanvas();
    }
}

/////////////////////////////////////INITIALIZE THE WHITEBOARD /////////////////////////////////
void AWhiteboardActor::InitializeWhiteboard()
{
    // Create render target if it doesn't exist
    if (!DrawingCanvas)
    {
        DrawingCanvas = UKismetRenderingLibrary::CreateRenderTarget2D(
            GetWorld(), CanvasWidth, CanvasHeight, RTF_RGBA8);
    }

    if (!PreviewCanvas)
    {
        PreviewCanvas = UKismetRenderingLibrary::CreateRenderTarget2D(
            GetWorld(), CanvasWidth, CanvasHeight, RTF_RGBA8);
    }
    
    // Clear the canvas
    UKismetRenderingLibrary::ClearRenderTarget2D(GetWorld(), DrawingCanvas, FLinearColor::White);
    UKismetRenderingLibrary::ClearRenderTarget2D(GetWorld(), PreviewCanvas, FLinearColor::Transparent);
    
    // Create dynamic material instance and set the render target
    if (WhiteboardMesh->GetStaticMesh())
    {
        if (UMaterialInterface* WhiteboardMaterial = WhiteboardMesh->GetMaterial(InitMaterialIndex))
        {
            UMaterialInstanceDynamic* DynamicMaterial = UMaterialInstanceDynamic::Create(WhiteboardMaterial, this);
            DynamicMaterial->SetTextureParameterValue(TEXT("DrawingTexture"), DrawingCanvas);
            DynamicMaterial->SetTextureParameterValue(TEXT("PreviewTexture"), PreviewCanvas);
            DynamicMaterial->SetScalarParameterValue(TEXT("PreviewAlpha"), 1.0f);
            
            WhiteboardMesh->SetMaterial(InitMaterialIndex, DynamicMaterial); 
        }
    }
}


//////////////////////////////////// IS SHAPE TOOL /////////////////////////////////
bool AWhiteboardActor::IsShapeTool(const EDrawingTool Tool)
{
    return Tool == EDrawingTool::Line || Tool == EDrawingTool::Rectangle || Tool == EDrawingTool::Circle;
}

void AWhiteboardActor::OnRep_PlayerDrawingStates()
{
    // Update local cache when replicated data changes
    for (const FReplicatedPlayerDrawingState& ReplicatedState : PlayerDrawingStates)
    {
        if (ReplicatedState.Player)
        {
            LocalPlayerStatesCache.Add(ReplicatedState.Player, ReplicatedState.DrawingState);
        }
    }
    
    UE_LOG(LogWDS, Warning, TEXT("OnRep_PlayerDrawingStates: Updated %d player states"), PlayerDrawingStates.Num());
}

void AWhiteboardActor::Server_UpdatePlayerTool_Implementation(APawn* Player, EDrawingTool NewTool)
{
    if (!Player || !HasAuthority()) 
    {
        UE_LOG(LogWDS, Error, TEXT("Server_UpdatePlayerTool: Invalid player or not authority"));
        return;
    }
    
    UE_LOG(LogWDS, Warning, TEXT("Server_UpdatePlayerTool: Received from client for player %s, tool %d"), 
           *Player->GetName(), (int32)NewTool);
    
    // Update server state
    FPlayerDrawingState ServerState = GetPlayerDrawingState(Player);
    ServerState.CurrentTool = NewTool;
    ServerState.ValidateAndClamp();
    UpdatePlayerDrawingState(Player, ServerState);
    
    // Multicast to all clients
    Multicast_UpdatePlayerTool(Player, NewTool);
}

void AWhiteboardActor::Multicast_UpdatePlayerTool_Implementation(APawn* Player, EDrawingTool NewTool)
{
    if (!Player) 
    {
        UE_LOG(LogWDS, Error, TEXT("Multicast_UpdatePlayerTool: Invalid player"));
        return;
    }
    
    // Don't process if this is the autonomous proxy (already handled locally)
    if (GetLocalRole() == ROLE_AutonomousProxy && Player == GetCurrentPlayer())
    {
        UE_LOG(LogWDS, Warning, TEXT("Multicast_UpdatePlayerTool: Skipping for autonomous proxy"));
        return;
    }
    
    // Update the client state
    FPlayerDrawingState ClientState = GetPlayerDrawingState(Player);
    ClientState.CurrentTool = NewTool;
    ClientState.ValidateAndClamp();
    UpdatePlayerDrawingState(Player, ClientState);
    
    // Verify synchronization
    FPlayerDrawingState VerifyState = GetPlayerDrawingState(Player);
    UE_LOG(LogWDS, Warning, TEXT("Tool update verified: %d"), (int32)VerifyState.CurrentTool);
}

//////////////////////////////////// GET PLAYER STATE /////////////////////////////////
///
FPlayerDrawingState AWhiteboardActor::GetPlayerDrawingState(APawn* Player) const
{
    if (!Player)
    {
        return FPlayerDrawingState();
    }
    
    // Check local cache first for performance
    if (const FPlayerDrawingState* CachedState = LocalPlayerStatesCache.Find(Player))
    {
        return *CachedState;
    }
    
    // Check replicated array
    for (const FReplicatedPlayerDrawingState& ReplicatedState : PlayerDrawingStates)
    {
        if (ReplicatedState.Player == Player)
        {
            // Update local cache
            const_cast<AWhiteboardActor*>(this)->LocalPlayerStatesCache.Add(Player, ReplicatedState.DrawingState);
            return ReplicatedState.DrawingState;
        }
    }
    
    // Create and cache default state
    FPlayerDrawingState DefaultState(Player);
    const_cast<AWhiteboardActor*>(this)->LocalPlayerStatesCache.Add(Player, DefaultState);
    return DefaultState;
    
}


void AWhiteboardActor::Server_UpdatePlayerDrawingState_Implementation(APawn* Player,
    const FPlayerDrawingState& NewState)
{
    // Server validates and broadcasts
   // PlayerDrawingStates.FindOrAdd(Player, NewState);
    Multicast_UpdatePlayerDrawingState(Player, NewState);
}

void AWhiteboardActor::Multicast_UpdatePlayerDrawingState_Implementation(APawn* Player,
    const FPlayerDrawingState& NewState)
{
    if (!HasAuthority()) // Only update on clients
        {
      //  PlayerDrawingStates.FindOrAdd(Player, NewState);
        }
}

// Update Player Drawing State
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


// Get Player Current Drawing Tools
EDrawingTool AWhiteboardActor::GetCurrentTool() const
{
    APawn* Player = GetCurrentPlayer();
    if (!Player) return EDrawingTool::Pencil;
    
    return GetPlayerDrawingState(Player).CurrentTool;
}


// Get Player Current Drawing Color
FLinearColor AWhiteboardActor::GetCurrentColor(APawn* Player) const
{
    if (!Player) return FLinearColor::Black;
    return GetPlayerDrawingState(Player).CurrentColor;
}

// Get Player Current Drawing Brush Size
float AWhiteboardActor::GetBrushSize(APawn* Player) const
{
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

/////////// SET PLAYER DRAWING TOOL ///////////////////////////////////////
void AWhiteboardActor::SetPlayerTool(EDrawingTool NewTool)
{
    
    APawn* Player = GetCurrentPlayer();
    
    if (!Player) 
    {
        UE_LOG(LogWDS, Error, TEXT("SetPlayerTool: No valid player found"));
        return;
    }
    
    // Update local state immediately for responsiveness
    FPlayerDrawingState CurrentState = GetPlayerDrawingState(Player);
    CurrentState.CurrentTool = NewTool;
    CurrentState.ValidateAndClamp();
    
    // Update local cache immediately
    LocalPlayerStatesCache.Add(Player, CurrentState);
    UpdatePlayerDrawingState(Player, CurrentState);
    
    // Network replication based on role
    if (GetLocalRole() == ROLE_AutonomousProxy) 
    {
        // Client controlling this pawn - send to server
        UE_LOG(LogWDS, Warning, TEXT("Client sending tool change to server"));
        Server_UpdatePlayerTool(Player, NewTool);
    }
    else if (GetLocalRole() == ROLE_Authority) 
    {
        // Server - multicast to all clients
        UE_LOG(LogWDS, Warning, TEXT("Server multicasting tool change"));
        Multicast_UpdatePlayerTool(Player, NewTool);
    }
    
    DebugPlayerToolState(Player);
}


// Server Set New Tool - FIXED IMPLEMENTATION
void AWhiteboardActor::Server_SetPlayerTool_Implementation(APawn* Player, EDrawingTool NewTool)
{
    if (!Player) return;
    
    UE_LOG(LogWDS, Warning, TEXT("Server_SetPlayerTool: Received from client for player %s, tool %d"), 
           *Player->GetName(), (int32)NewTool);
    
    // Update server state
    FPlayerDrawingState ServerState = GetPlayerDrawingState(Player);
    ServerState.CurrentTool = NewTool;
    UpdatePlayerDrawingState(Player, ServerState);
    
    // Multicast to all clients
    Multicast_UpdatePlayerToolState(Player, NewTool);
}


void AWhiteboardActor::Multicast_UpdatePlayerToolState_Implementation(APawn* Player, EDrawingTool NewTool)
{
    if (!Player) return;
    
    // Don't process if this is the server (already handled)
    if (GetLocalRole() == ROLE_Authority) return;
    
    UE_LOG(LogWDS, Warning, TEXT("Multicast_UpdatePlayerToolState: Updating player %s tool to %d"), 
           *Player->GetName(), (int32)NewTool);
    
    // Update the client state
    FPlayerDrawingState ClientState = GetPlayerDrawingState(Player);
    ClientState.CurrentTool = NewTool;
    UpdatePlayerDrawingState(Player, ClientState);
    
    // Verify synchronization
    FPlayerDrawingState VerifyState = GetPlayerDrawingState(Player);
    UE_LOG(LogWDS, Warning, TEXT("Tool update verified: %d"), (int32)VerifyState.CurrentTool);
}



// Set Player Current Drawing Color
void AWhiteboardActor::SetPlayerColor(APawn* Player, FLinearColor NewColor)
{
    if (!Player) return;
    
    FPlayerDrawingState State = GetPlayerDrawingState(Player);
    State.CurrentColor = NewColor;
    UpdatePlayerDrawingState(Player, State);
    
    if (GetLocalRole() < ROLE_Authority)
    {
        Server_UpdatePlayerDrawingState(Player, State);
    }
    else
    {
        Multicast_UpdatePlayerDrawingState(Player, State);
    }

}

// Set Player Current Brush Size
void AWhiteboardActor::SetPlayerBrushSize(APawn* Player, float NewSize)
{
    if (!Player) return;
    
    FPlayerDrawingState State = GetPlayerDrawingState(Player);
    State.BrushSize = FMath::Clamp(NewSize, 1.0f, 100.0f);
    UpdatePlayerDrawingState(Player, State);
    
    if (GetLocalRole() < ROLE_Authority)
    {
        Server_UpdatePlayerDrawingState(Player, State);
    }
    else
    {
        Multicast_UpdatePlayerDrawingState(Player, State);
    }
  
}

// Set Player Current Selected Brush Texture
void AWhiteboardActor::SetPlayerBrushTextureIndex(APawn* Player, int32 TextureIndex)
{
    if (!Player) return;
    
    FPlayerDrawingState State = GetPlayerDrawingState(Player);
    State.SelectedBrushTextureIndex = TextureIndex;
    UpdatePlayerDrawingState(Player, State);
    
    if (GetLocalRole() < ROLE_Authority)
    {
        Server_UpdatePlayerDrawingState(Player, State);
    }
    else
    {
        Multicast_UpdatePlayerDrawingState(Player, State);
    }
    

}

// Set Player Current Selected Figure Texture
void AWhiteboardActor::SetPlayerFigureTextureIndex(APawn* Player, int32 TextureIndex)
{
    if (!Player) return;
    
    FPlayerDrawingState State = GetPlayerDrawingState(Player);
    State.SelectedFigureTextureIndex = TextureIndex;
    UpdatePlayerDrawingState(Player, State);
    
    if (GetLocalRole() < ROLE_Authority)
    {
        Server_UpdatePlayerDrawingState(Player, State);
    }
    else
    {
        Multicast_UpdatePlayerDrawingState(Player, State);
    }
   
}

// Set Player Current Text String
void AWhiteboardActor::SetPlayerTextString(APawn* Player, const FString& NewTextString)
{
    if (!Player) return;
    
    FPlayerDrawingState State = GetPlayerDrawingState(Player);
    State.CurrentTextString = NewTextString;
    UpdatePlayerDrawingState(Player, State);
    
    if (GetLocalRole() < ROLE_Authority)
    {
        Server_UpdatePlayerDrawingState(Player, State);
    }
    else
    {
        Multicast_UpdatePlayerDrawingState(Player, State);
    }
}

// Internal helper to get current drawing player
APawn* AWhiteboardActor::GetDrawingPlayer() const
{
    // Try to find the local player pawn
    if (UWorld* World = GetWorld())
    {
        if (APlayerController* PC = World->GetFirstPlayerController())
        {
            return PC->GetPawn();
        }
    }
    return nullptr;
}

void AWhiteboardActor::OnRep_StrokeHistory()
{
    // Redraw canvas when stroke history is replicated
    RedrawCanvas();
}

void AWhiteboardActor::Server_HandleDrawing_Implementation(const FDrawingData& DrawingData)
{
    if (!HasAuthority() || !DrawingData.DrawingPlayer) return;
    
    UE_LOG(LogWDS, Warning, TEXT("Server_HandleDrawing: Received from client %s"), 
           *DrawingData.DrawingPlayer->GetName());
    
   
}

void AWhiteboardActor::Multicast_HandleDrawing_Implementation(const FDrawingData& DrawingData)
{
    // Only clients should process this
    if (GetLocalRole() == ROLE_Authority) return;
    
    UE_LOG(LogWDS, Warning, TEXT("Multicast_HandleDrawing: Received for player %s"), 
           DrawingData.DrawingPlayer ? *DrawingData.DrawingPlayer->GetName() : TEXT("None"));
    
    // Skip if this is our own drawing (we already predicted it)
    if (DrawingData.DrawingPlayer && DrawingData.DrawingPlayer->IsLocallyControlled()) 
    {
        UE_LOG(LogWDS, Warning, TEXT("Skipping multicast for local player prediction"));
        return;
    }
    
  
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
            DrawStrokeInternal(Stroke);
            
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

APawn* AWhiteboardActor::GetCurrentPlayer() const
{
    if (UWorld* World = GetWorld())
    {
        // First try to get the locally controlled pawn
        if (APlayerController* PC = World->GetFirstPlayerController())
        {
            APawn* LocalPawn = PC->GetPawn();
            if (LocalPawn && IsPlayerInteracting(LocalPawn))
            {
                return LocalPawn;
            }
        }
        
        // If no local interacting pawn, try to find any interacting pawn
        for (APawn* InteractingPawn : InteractingPawns)
        {
            if (InteractingPawn && InteractingPawn->IsPlayerControlled())
            {
                return InteractingPawn;
            }
        }
    }
    
    return nullptr;
}

/*
// Set Current Tools
void AWhiteboardActor::SetCurrentTool(EDrawingTool NewTool)
{
    if (CurrentTool != NewTool)
    {
        const EDrawingTool Prev = CurrentTool;
        CurrentTool = NewTool;
        OnCurrentToolsChanged(Prev);

        if (GetLocalRole() == ROLE_AutonomousProxy)
        {
            Server_SetCurrentTool(NewTool);
        }
    }
} 

// Set Server Current Tools
void AWhiteboardActor::Server_SetCurrentTool_Implementation(EDrawingTool NewTool)
{
    SetCurrentTool(NewTool);
}

// Set Current Color
void AWhiteboardActor::SetCurrentColor(FLinearColor NewColor)
{
    if (CurrentColor != NewColor)
    {
        const FLinearColor Prev = NewColor;
        CurrentColor = NewColor;
        OnCurrentToolsChanged(Prev);

        if (GetLocalRole() == ROLE_AutonomousProxy)
        {
            Server_SetCurrentColor(NewColor);
        }
    }
}

// Server Set Current Color
void AWhiteboardActor::Server_SetCurrentColor_Implementation(FLinearColor NewColor)
{
    SetCurrentColor(NewColor);
}

// Set Brush Size
void AWhiteboardActor::SetBrushSize(float NewSize)
{
   float ClampedSize = FMath::Clamp(NewSize, 1.0f, 100.0f);
    
    if (HasAuthority())
    {
       
    }
    else
    {
        BrushSize = ClampedSize;
        Server_SetBrushSize_Implementation(ClampedSize);
    }
}

// Server Set Brush Size
void AWhiteboardActor::Server_SetBrushSize_Implementation(float NewSize)
{
    if (!HasAuthority())
    {
        return;
    }
    

}


// Set Brush Textures
void AWhiteboardActor::SetBrushTexture(int32 TextureIndex)
{
    if (BrushTextures.IsValidIndex(TextureIndex))
    {
        if (HasAuthority())
        {
     
        }
        else
        {
            SelectedBrushTextureIndex = TextureIndex;
            Server_SetBrushTexture(TextureIndex);
        }
    }
}

// Server Set Brush Texture Index
void AWhiteboardActor::Server_SetBrushTexture_Implementation(int32 TextureIndex)
{
    if (!HasAuthority())
    {
        return;
    }
    
    
}


// Set Figure Textures Index
void AWhiteboardActor::SetFigureTexture(int32 TextureIndex)
{
    if (FigureTextures.IsValidIndex(TextureIndex))
    {
        if (HasAuthority())
        {
            
        }
        else
        {
            SelectedFigureTextureIndex = TextureIndex;
            Server_SetFigureTexture(TextureIndex);
        }
    }
}

void AWhiteboardActor::Server_SetFigureTexture_Implementation(int32 TextureIndex)
{
    if (!HasAuthority())
    {
        return;
    }
    
    
}

void AWhiteboardActor::SetTextString(const FString& NewTextString)
{
        if (HasAuthority())
        {
           
        }
        else
        {
            CurrentTextString = NewTextString;
            Server_SetTextString(NewTextString);
        }
}

void AWhiteboardActor::Server_SetTextString_Implementation(const FString& NewTextString)
{
    if (!HasAuthority())
    {
        return;
    }
    
}

*/

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

/////////////////////////////////////////////START DRAWING////////////////////////

// START DRAWING
void AWhiteboardActor::StartDrawing(APawn* DrawingPlayer, const FVector2D& CanvasPosition)
{
    // If player not found Return
    if (!DrawingPlayer)
    {
        return;
    }

    // If Still Drawing End the Drawing
    if (bIsDrawing)
    {
        EndDrawing();
    }

    bIsDrawing = true;

    // Current Drawing Tools
    FPlayerDrawingState PlayerState = GetPlayerDrawingState(DrawingPlayer);

    UE_LOG(LogWDS, Warning, TEXT("StartDrawing: Player %s using tool %d (Role: %s)"), 
           *DrawingPlayer->GetName(), (int32)PlayerState.CurrentTool,
          (GetLocalRole() == ROLE_Authority) ? TEXT("Server") : TEXT("Client"));

    // Create new stroke with the provided player state (not fetching again)
    CurrentStroke = FStroke();
    CurrentStroke.StrokeID = NextStrokeID++;
    CurrentStroke.Tool = PlayerState.CurrentTool;  // Use provided state
    CurrentStroke.Color = PlayerState.CurrentColor; // Use provided state
    CurrentStroke.Size = PlayerState.BrushSize;    // Use provided state
    CurrentStroke.TextContent = PlayerState.CurrentTextString;
    CurrentStroke.StartPosition = CanvasPosition;
    CurrentStroke.EndPosition = CanvasPosition;
    CurrentStroke.bIsComplete = false;
    CurrentStroke.DrawingPlayer = DrawingPlayer;
    
    // Set textures if available from provided state
    if (BrushTextures.IsValidIndex(PlayerState.SelectedBrushTextureIndex))
    {
        CurrentStroke.BrushTexture = BrushTextures[PlayerState.SelectedBrushTextureIndex];
    }
    
    if (FigureTextures.IsValidIndex(PlayerState.SelectedFigureTextureIndex))
    {
        CurrentStroke.FigureTexture = FigureTextures[PlayerState.SelectedFigureTextureIndex];
    }
    
    // Add initial point using provided state
    FDrawingPoint Point(CanvasPosition, 1.0f, PlayerState.CurrentColor, PlayerState.BrushSize, 
                       PlayerState.CurrentTool, CurrentStroke.StrokeID);
    CurrentStroke.Points.Add(Point);

    // Handle different tool types using provided state
    if (PlayerState.CurrentTool == EDrawingTool::Text)
    {
        // Handle text drawing...
        bIsDrawing = false; 
        return;
    }
    else if (IsShapeTool(PlayerState.CurrentTool))
    {
        bIsDrawingShape = true;
        // For shape tools, we'll draw on end
    }
    else
    {
        // For brush tools, draw immediately
        DrawStroke(CurrentStroke);
    }
    
    
    /*
    // Always use the drawing player's specific state
    FPlayerDrawingState PlayerState = GetPlayerDrawingState(DrawingPlayer);
    
    UE_LOG(LogWDS, Warning, TEXT("StartDrawing: Player %s using tool %d (Role: %s)"), 
           *DrawingPlayer->GetName(), (int32)PlayerState.CurrentTool,
          (GetLocalRole() == ROLE_Authority) ? TEXT("Server") : TEXT("Client"));
    
    if (GetLocalRole() == ROLE_Authority)
    {
        // SERVER: Use the drawing player's current state
        Server_HandleStartDrawing(DrawingPlayer, CanvasPosition, PlayerState);
    }
    else
    {
        // CLIENT: Send current state to server with proper player context
        UE_LOG(LogWDS, Warning, TEXT("CLIENT: StartDrawing with tool: %d - Sending to server"), 
               (int32)PlayerState.CurrentTool);

        // Send the CLIENT'S current state to server using the new RPC
        FDrawingData DrawingData(CanvasPosition, PlayerState, DrawingPlayer);
        
        if (AWhiteboardController* WBController = Cast<AWhiteboardController>(DrawingPlayer->GetController()))
        {
            WBController->Server_WhiteboardStartDrawing(DrawingPlayer,this);
        }
    }
    */
}

// SERVER START DRAWING
void AWhiteboardActor::Server_StartDrawing_Implementation(const FDrawingData& DrawingData)
{
    if (!DrawingData.DrawingPlayer || !HasAuthority()) return;
    
    // Use the tool state sent by the client
    Server_HandleStartDrawing(DrawingData.DrawingPlayer, DrawingData.CanvasPosition, DrawingData.ToolState);
}

// MULTICAST START DRAWING
void AWhiteboardActor::Multicast_StartDrawing_Implementation(const FDrawingData& DrawingData)
{
    if (!DrawingData.DrawingPlayer) 
    {
        UE_LOG(LogWDS, Error, TEXT("Multicast_StartDrawingWithState: Invalid player"));
        return;
    }
    
    // Don't process on server (already handled)
    if (GetLocalRole() == ROLE_Authority) 
    {
        return;
    }
    
    UE_LOG(LogWDS, Warning, TEXT("MULTICAST: StartDrawingWithState for player %s, tool %d"), 
           *DrawingData.DrawingPlayer->GetName(), (int32)DrawingData.ToolState.CurrentTool);
    
    // Update client state with the received state
    UpdatePlayerDrawingState(DrawingData.DrawingPlayer, DrawingData.ToolState);
    
    // Handle the drawing locally
    Server_HandleStartDrawing(DrawingData.DrawingPlayer, DrawingData.CanvasPosition, DrawingData.ToolState);

    /*
    if (!DrawingPlayer) return;
    
    // Don't process on server (already handled)
    if (GetLocalRole() == ROLE_Authority) return;
    
    UE_LOG(LogWDS, Warning, TEXT("MULTICAST: StartDrawing for player %s, stroke %d"), 
           *DrawingPlayer->GetName(), StrokeID);
    
    // Get the drawing player's state on this client
    FPlayerDrawingState PlayerState = GetPlayerDrawingState(DrawingPlayer);
    
    // Only handle if this is relevant to us (either we're the drawing player or we need to display)
    if (DrawingPlayer == GetCurrentPlayer() || GetLocalRole() == ROLE_SimulatedProxy)
    {
        PendingStrokes.Empty();
        
        bIsDrawing = true;
        
        CurrentStroke = FStroke();
        CurrentStroke.StrokeID = StrokeID;
        CurrentStroke.Tool = PlayerState.CurrentTool;
        CurrentStroke.Color = PlayerState.CurrentColor;
        CurrentStroke.Size = PlayerState.BrushSize;
        CurrentStroke.StartPosition = CanvasPosition;
        CurrentStroke.EndPosition = CanvasPosition;
        CurrentStroke.DrawingPlayer = DrawingPlayer;
        
        if (BrushTextures.IsValidIndex(PlayerState.SelectedBrushTextureIndex))
        {
            CurrentStroke.BrushTexture = BrushTextures[PlayerState.SelectedBrushTextureIndex];
        }
        
        if (FigureTextures.IsValidIndex(PlayerState.SelectedFigureTextureIndex))
        {
            CurrentStroke.FigureTexture = FigureTextures[PlayerState.SelectedFigureTextureIndex];
        }
        
        FDrawingPoint Point(CanvasPosition, 1.0f, PlayerState.CurrentColor, PlayerState.BrushSize, 
                           PlayerState.CurrentTool, StrokeID);
        CurrentStroke.Points.Add(Point);
        
        if (IsShapeTool(PlayerState.CurrentTool))
        {
            bIsDrawingShape = true;
        }
        else
        {
            DrawStroke(CurrentStroke);
        }
    }
    */
}

//SERVER HANDLE START DRAWING
void AWhiteboardActor::Server_HandleStartDrawing_Implementation(APawn* DrawingPlayer, const FVector2D& CanvasPosition,
    const FPlayerDrawingState& PlayerState)
{
     if (!HasAuthority()) return;
    
    UE_LOG(LogWDS, Warning, TEXT("SERVER: HandleStartDrawing with tool: %d"), (int32)PlayerState.CurrentTool);
    
    if (bIsDrawing)
    {
        EndDrawing();
    }
    
    bIsDrawing = true;
    
    // Create new stroke with the provided player state (not fetching again)
    CurrentStroke = FStroke();
    CurrentStroke.StrokeID = NextStrokeID++;
    CurrentStroke.Tool = PlayerState.CurrentTool;  // Use provided state
    CurrentStroke.Color = PlayerState.CurrentColor; // Use provided state
    CurrentStroke.Size = PlayerState.BrushSize;    // Use provided state
    CurrentStroke.StartPosition = CanvasPosition;
    CurrentStroke.EndPosition = CanvasPosition;
    CurrentStroke.bIsComplete = false;
    CurrentStroke.DrawingPlayer = DrawingPlayer;
    
    // Set textures if available from provided state
    if (BrushTextures.IsValidIndex(PlayerState.SelectedBrushTextureIndex))
    {
        CurrentStroke.BrushTexture = BrushTextures[PlayerState.SelectedBrushTextureIndex];
    }
    
    if (FigureTextures.IsValidIndex(PlayerState.SelectedFigureTextureIndex))
    {
        CurrentStroke.FigureTexture = FigureTextures[PlayerState.SelectedFigureTextureIndex];
    }
    
    // Add initial point using provided state
    FDrawingPoint Point(CanvasPosition, 1.0f, PlayerState.CurrentColor, PlayerState.BrushSize, 
                       PlayerState.CurrentTool, CurrentStroke.StrokeID);
    CurrentStroke.Points.Add(Point);

    // Handle different tool types using provided state
    if (PlayerState.CurrentTool == EDrawingTool::Text)
    {
        // Handle text drawing...
        bIsDrawing = false; 
        return;
    }
    else if (IsShapeTool(PlayerState.CurrentTool))
    {
        bIsDrawingShape = true;
        // For shape tools, we'll draw on end
    }
    else
    {
        // For brush tools, draw immediately
        DrawStroke(CurrentStroke);
    }
    
    // Create drawing data for multicast
    FDrawingData DrawingData(CanvasPosition, PlayerState, DrawingPlayer);
    Multicast_StartDrawing(DrawingData);
}


/////////////////////////////////////////////CONTINUE DRAWING////////////////////////

// Continue Drawing
void AWhiteboardActor::ContinueDrawing(const FVector2D& CanvasPosition)
{
    APawn* DrawingPlayer = GetCurrentPlayer();
    
    FPlayerDrawingState PlayerState = GetPlayerDrawingState(DrawingPlayer);
    CurrentStroke.EndPosition = CanvasPosition;
    
    if (IsShapeTool(PlayerState.CurrentTool))
    {
        // For shape tools, update preview
        if (bIsDrawingShape)
        {
            ClearShapePreview();
            DrawShapePreview(CurrentStroke.StartPosition, CurrentStroke.EndPosition, 
                           PlayerState.CurrentTool, PlayerState.CurrentColor, PlayerState.BrushSize);
            
            /* Multicast_UpdateShapePreview(DrawingPlayer, CurrentStroke.StartPosition, CurrentStroke.EndPosition, 
                                        PlayerState.CurrentTool, PlayerState.CurrentColor, 
                                        PlayerState.BrushSize, CurrentStroke.StrokeID);
                                        */
        }
    }
    else
    {
        // For brush tools, continue drawing
        FDrawingPoint Point(CanvasPosition, 1.0f, PlayerState.CurrentColor, 
                           PlayerState.BrushSize, PlayerState.CurrentTool, CurrentStroke.StrokeID);
        CurrentStroke.Points.Add(Point);
        
        if (CurrentStroke.Points.Num() >= 2)
        {
            DrawStroke(CurrentStroke);
        }
    }

    /*
    APawn* DrawingPlayer = GetCurrentPlayer();
    if (!DrawingPlayer) return;
    
    FPlayerDrawingState PlayerState = GetPlayerDrawingState(DrawingPlayer);
    FDrawingData DrawingData(CanvasPosition, PlayerState, DrawingPlayer);
    
    if (GetLocalRole() == ROLE_Authority)
    {
        Server_HandleContinueDrawing(DrawingPlayer, CanvasPosition);
    }
    else
    {
        if (AWhiteboardController* WBController = Cast<AWhiteboardController>(DrawingPlayer->GetController()))
        {
            WBController->Server_WhiteboardContinueDrawing(DrawingPlayer,this);
        }
    }
    */
}

// Server Continue Drawing
void AWhiteboardActor::Server_ContinueDrawing_Implementation(const FDrawingData& DrawingData)
{
    if (!DrawingData.DrawingPlayer || !HasAuthority()) return;
    
    // Update server state with client's state
    UpdatePlayerDrawingState(DrawingData.DrawingPlayer, DrawingData.ToolState);
    
    Server_HandleContinueDrawing(DrawingData.DrawingPlayer, DrawingData.CanvasPosition);
}


// Server-side continue drawing handling
void AWhiteboardActor::Server_HandleContinueDrawing_Implementation(APawn* DrawingPlayer, const FVector2D& CanvasPosition)
{
    if (!HasAuthority() || !bIsDrawing || !DrawingPlayer) return;
    
    FPlayerDrawingState PlayerState = GetPlayerDrawingState(DrawingPlayer);
    CurrentStroke.EndPosition = CanvasPosition;
    
    if (IsShapeTool(PlayerState.CurrentTool))
    {
        // For shape tools, update preview
        if (bIsDrawingShape)
        {
            ClearShapePreview();
            DrawShapePreview(CurrentStroke.StartPosition, CurrentStroke.EndPosition, 
                           PlayerState.CurrentTool, PlayerState.CurrentColor, PlayerState.BrushSize);
            
           /* Multicast_UpdateShapePreview(DrawingPlayer, CurrentStroke.StartPosition, CurrentStroke.EndPosition, 
                                       PlayerState.CurrentTool, PlayerState.CurrentColor, 
                                       PlayerState.BrushSize, CurrentStroke.StrokeID);
                                       */
        }
    }
    else
    {
        // For brush tools, continue drawing
        FDrawingPoint Point(CanvasPosition, 1.0f, PlayerState.CurrentColor, 
                           PlayerState.BrushSize, PlayerState.CurrentTool, CurrentStroke.StrokeID);
        CurrentStroke.Points.Add(Point);
        
        if (CurrentStroke.Points.Num() >= 2)
        {
            DrawStroke(CurrentStroke);
        }
    }

    FDrawingData DrawingData(CanvasPosition, PlayerState, DrawingPlayer);
    Multicast_ContinueDrawing(DrawingData);
}



// Multicast Continue Drawing
void AWhiteboardActor::Multicast_ContinueDrawing_Implementation(const FDrawingData& DrawingData)
{
    if (!DrawingData.DrawingPlayer) return;
    
    if (!HasAuthority() && bIsDrawing && CurrentStroke.DrawingPlayer == DrawingData.DrawingPlayer)
    {
        // Update client state
        UpdatePlayerDrawingState(DrawingData.DrawingPlayer, DrawingData.ToolState);
        
        FPlayerDrawingState PlayerState = GetPlayerDrawingState(DrawingData.DrawingPlayer);
        CurrentStroke.EndPosition = DrawingData.CanvasPosition;
        
        if (!IsShapeTool(PlayerState.CurrentTool))
        {
            FDrawingPoint Point(DrawingData.CanvasPosition, 1.0f, PlayerState.CurrentColor, 
                               PlayerState.BrushSize, PlayerState.CurrentTool, CurrentStroke.StrokeID);
            CurrentStroke.Points.Add(Point);
            
            if (CurrentStroke.Points.Num() >= 2)
            {
                DrawStroke(CurrentStroke);
            }
        }
    }
}

/////////////////////////////////////////////END DRAWING////////////////////////
///
void AWhiteboardActor::EndDrawing()
{
    APawn* DrawingPlayer = GetCurrentPlayer();
    if (!DrawingPlayer) return;
    
    if (GetLocalRole() == ROLE_Authority)
    {
        Server_HandleEndDrawing(DrawingPlayer);
    }
    else
    {
        if (AWhiteboardController* WBController = Cast<AWhiteboardController>(DrawingPlayer->GetController()))
        {
            WBController->Server_WhiteboardEndDrawing(DrawingPlayer, this); 
        }
        
       // Server_EndDrawing(DrawingPlayer);
    }
}


// Server End Drawing
void AWhiteboardActor::Server_EndDrawing_Implementation(APawn* DrawingPlayer)
{
    if (!DrawingPlayer || !HasAuthority()) return;
    
    Server_HandleEndDrawing(DrawingPlayer);
}


void AWhiteboardActor::Server_HandleEndDrawing_Implementation(APawn* DrawingPlayer)
{
    if (!HasAuthority() || !bIsDrawing || !DrawingPlayer) return;
    
    FPlayerDrawingState PlayerState = GetPlayerDrawingState(DrawingPlayer);
    
    bIsDrawing = false;
    
    if (IsShapeTool(PlayerState.CurrentTool) && bIsDrawingShape)
    {
        // For shape tools, finalize the shape
        bIsDrawingShape = false;
        CurrentStroke.bIsComplete = true;
        
        // Clear preview
        ClearShapePreview();
        
        // Add end point for shapes
        if (CurrentStroke.Points.Num() == 1)
        {
            FDrawingPoint EndPoint(CurrentStroke.EndPosition, 1.0f, PlayerState.CurrentColor, 
                                  PlayerState.BrushSize, PlayerState.CurrentTool, CurrentStroke.StrokeID);
            CurrentStroke.Points.Add(EndPoint);
        }
        
        // Draw the final shape
        DrawStroke(CurrentStroke); // This will now replicate properly
    }
    else
    {
        // For freehand tools, ensure the stroke is drawn
        DrawStroke(CurrentStroke);
    }
    
    // Add stroke to history on server
    if (CurrentHistoryIndex < StrokeHistory.Num() - 1)
    {
        StrokeHistory.RemoveAt(CurrentHistoryIndex + 1, StrokeHistory.Num() - CurrentHistoryIndex - 1);
    }
    
    StrokeHistory.Add(CurrentStroke);
    CurrentHistoryIndex = StrokeHistory.Num() - 1;
    
    // Notify all clients with the complete stroke
    Multicast_EndDrawing(DrawingPlayer, CurrentStroke);
    
    // Clear current stroke
    CurrentStroke = FStroke();
}


// Multicast End Drawing RPC Implementations
void AWhiteboardActor::Multicast_EndDrawing_Implementation(APawn* DrawingPlayer, const FStroke& CompletedStroke)
{
    if (!HasAuthority())
    {
        // Only process on clients
        if (bIsDrawing && CurrentStroke.StrokeID == CompletedStroke.StrokeID)
        {
            FPlayerDrawingState PlayerState = GetPlayerDrawingState(DrawingPlayer);
            
            bIsDrawing = false;
            
            if (IsShapeTool(PlayerState.CurrentTool) && bIsDrawingShape)
            {
                bIsDrawingShape = false;
                ClearShapePreview();
            }
            
            // Use the completed stroke from server
            if (CurrentHistoryIndex < StrokeHistory.Num() - 1)
            {
                StrokeHistory.RemoveAt(CurrentHistoryIndex + 1, StrokeHistory.Num() - CurrentHistoryIndex - 1);
            }
            
            StrokeHistory.Add(CompletedStroke);
            CurrentHistoryIndex = StrokeHistory.Num() - 1;
            
            // Draw the completed stroke
            DrawStrokeInternal(CompletedStroke);
            
            CurrentStroke = FStroke();
        }
    }
}



// NEW: Shape preview functions
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
    
    // Update the material to show the preview
    UpdateCanvasMaterial();
}


void AWhiteboardActor::ClearShapePreview()
{
    if (PreviewCanvas)
    {
        UKismetRenderingLibrary::ClearRenderTarget2D(GetWorld(), PreviewCanvas, FLinearColor::Transparent);
    }
}
/*
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


void AWhiteboardActor::DrawFigure(const FVector2D& CanvasPosition, const int32 SelectedFigureIndex)
{
    /*
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

*/


void AWhiteboardActor::Server_AddText_Implementation(const FVector2D& CanvasPosition, const FString& Text, FLinearColor Color, float Size)
{
    /*
    CurrentColor = Color;
    BrushSize = FMath::Clamp(Size, 1.0f, 100.0f);
    AddText(CanvasPosition, Text);
    */
  
}

void AWhiteboardActor::Server_DrawFigure_Implementation(const FVector2D& CanvasPosition, int32 SelectedFigureIndex, FLinearColor Color, float Size)
{
    /*
    CurrentColor = Color;
    BrushSize = FMath::Clamp(Size, 1.0f, 100.0f);
    DrawFigure(CanvasPosition, SelectedFigureIndex);
    */
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

void AWhiteboardActor::Multicast_UpdateShapePreview_Implementation(APawn* DrawingPlayer, const FVector2D& StartPos, const FVector2D& EndPos, EDrawingTool Tool, FLinearColor Color, float Size, int32 StrokeID)
{
    if (!HasAuthority())
    {
        // Only update preview if this is our current stroke
        if (bIsDrawing && CurrentStroke.StrokeID == StrokeID)
        {
            ClearShapePreview();
            DrawShapePreview(StartPos, EndPos, Tool, Color, Size);
        }
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
    ContinueDrawing(CanvasPosition);
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

//////////////////////////////////////// DRAWING STOCK ///////////////////////////////////////

void AWhiteboardActor::DrawStroke(const FStroke& Stroke)
{

    if (Stroke.Points.Num() == 0)
    {
        return;
    }
    
    // Only draw on the server, or if we're a client and this is a new stroke
    if (HasAuthority())
    {
        // Server draws and replicates
        DrawStrokeInternal(Stroke);
        
        // Notify all clients about the new stroke
        Multicast_DrawStroke(Stroke);
    }
    else
    {
        // Client draws locally for prediction, but server will be the authority
        DrawStrokeInternal(Stroke);
    }
    
    /*
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
    */
}

void AWhiteboardActor::DrawStrokeInternal(const FStroke& Stroke)
{
    if (!DrawingCanvas) return;
    
    // Handle shape tools
    if (IsShapeTool(Stroke.Tool) && Stroke.bIsComplete)
    {
        DrawShapeInternal(Stroke);
        return;
    }
    
    // Handle other tools (brush, pencil, eraser, text, texture)
    switch (Stroke.Tool)
    {
    case EDrawingTool::Text:
        if (!Stroke.TextContent.IsEmpty() && Stroke.Points.Num() > 0)
        {
            DrawTextInternal(Stroke);
        }
        break;
        
    case EDrawingTool::Figure:
        if (Stroke.FigureTexture && Stroke.Points.Num() > 0)
        {
            DrawFigureInternal(Stroke);
        }
        break;
                
    default:  // Brush, Pencil, Eraser, Texture
        if (Stroke.Points.Num() >= 1)
        {
            DrawFreehandInternal(Stroke);
        }
        break;
    }
    
    // Update material to show changes
    UpdateCanvasMaterial();
}

void AWhiteboardActor::DrawTextInternal(const FStroke& Stroke)
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

void AWhiteboardActor::DrawFigureInternal(const FStroke& Stroke)
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

void AWhiteboardActor::DrawShapeInternal(const FStroke& Stroke)
{
    if (Stroke.Points.Num() < 2 || !DrawingCanvas)
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
                    
                    // Draw rectangle outline
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
                
            default:
                // Not a shape tool, use freehand drawing
                DrawFreehandInternal(Stroke);
                break;
        }
    }
    
    UKismetRenderingLibrary::EndDrawCanvasToRenderTarget(GetWorld(), Context);
}

void AWhiteboardActor::DrawFreehandInternal(const FStroke& Stroke)
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

/*
void AWhiteboardActor::ProcessDrawing(const FDrawingData& DrawingData)
{
    if (!HasAuthority() || !DrawingData.DrawingPlayer) return;
    
    UE_LOG(LogWDS, Warning, TEXT("ProcessDrawing: Player %s, Start: %d, End: %d"), 
           *DrawingData.DrawingPlayer->GetName(), DrawingData.bIsStarting, DrawingData.bIsEnding);

    // Update player state with what client sent
    UpdatePlayerDrawingState(DrawingData.DrawingPlayer, DrawingData.ToolState);

    if (DrawingData.bIsStarting)
    {
        // Start new stroke
        if (bIsDrawing)
        {
            // End current stroke first
            FDrawingData EndData = DrawingData;
            EndData.bIsStarting = false;
            EndData.bIsEnding = true;
            ProcessDrawing(EndData);
        }
        
        bIsDrawing = true;
        CurrentStroke = FStroke();
        CurrentStroke.StrokeID = DrawingData.StrokeID > 0 ? DrawingData.StrokeID : NextStrokeID++;
        CurrentStroke.Tool = DrawingData.ToolState.CurrentTool;
        CurrentStroke.Color = DrawingData.ToolState.CurrentColor;
        CurrentStroke.Size = DrawingData.ToolState.BrushSize;
        CurrentStroke.StartPosition = DrawingData.CanvasPosition;
        CurrentStroke.EndPosition = DrawingData.CanvasPosition;
        CurrentStroke.bIsComplete = false;
        CurrentStroke.DrawingPlayer = DrawingData.DrawingPlayer;
        
        // Set textures
        if (BrushTextures.IsValidIndex(DrawingData.ToolState.SelectedBrushTextureIndex))
            CurrentStroke.BrushTexture = BrushTextures[DrawingData.ToolState.SelectedBrushTextureIndex];
        if (FigureTextures.IsValidIndex(DrawingData.ToolState.SelectedFigureTextureIndex))
            CurrentStroke.FigureTexture = FigureTextures[DrawingData.ToolState.SelectedFigureTextureIndex];
        
        // Add first point
        FDrawingPoint Point(DrawingData.CanvasPosition, 1.0f, DrawingData.ToolState.CurrentColor, 
                           DrawingData.ToolState.BrushSize, DrawingData.ToolState.CurrentTool, CurrentStroke.StrokeID);
        CurrentStroke.Points.Add(Point);
        
        // Draw immediately
        DrawStrokeInternal(CurrentStroke);
    }
    else if (DrawingData.bIsEnding)
    {
        // End current stroke
        bIsDrawing = false;
        CurrentStroke.bIsComplete = true;
        CurrentStroke.EndPosition = DrawingData.CanvasPosition;
        
        // For shapes, ensure we have end point
        if (IsShapeTool(CurrentStroke.Tool) && bIsDrawingShape)
        {
            bIsDrawingShape = false;
            ClearShapePreview();
            
            if (CurrentStroke.Points.Num() == 1)
            {
                FDrawingPoint EndPoint(DrawingData.CanvasPosition, 1.0f, DrawingData.ToolState.CurrentColor, 
                                      DrawingData.ToolState.BrushSize, DrawingData.ToolState.CurrentTool, CurrentStroke.StrokeID);
                CurrentStroke.Points.Add(EndPoint);
            }
        }
        
        // Add to history
        if (CurrentHistoryIndex < StrokeHistory.Num() - 1)
        {
            StrokeHistory.RemoveAt(CurrentHistoryIndex + 1, StrokeHistory.Num() - CurrentHistoryIndex - 1);
        }
        StrokeHistory.Add(CurrentStroke);
        CurrentHistoryIndex = StrokeHistory.Num() - 1;
        
        // Draw final stroke
        DrawStrokeInternal(CurrentStroke);
    }
    else
    {
        // Continue drawing
        if (!bIsDrawing) return;
        
        CurrentStroke.EndPosition = DrawingData.CanvasPosition;
        
        if (IsShapeTool(CurrentStroke.Tool))
        {
            // Shape preview
            if (bIsDrawingShape)
            {
                ClearShapePreview();
                DrawShapePreview(CurrentStroke.StartPosition, CurrentStroke.EndPosition, 
                               CurrentStroke.Tool, CurrentStroke.Color, CurrentStroke.Size);
            }
        }
        else
        {
            // Add point for freehand
            FDrawingPoint Point(DrawingData.CanvasPosition, 1.0f, DrawingData.ToolState.CurrentColor, 
                               DrawingData.ToolState.BrushSize, DrawingData.ToolState.CurrentTool, CurrentStroke.StrokeID);
            CurrentStroke.Points.Add(Point);
            
            // Draw new segment
            if (CurrentStroke.Points.Num() >= 2)
            {
                DrawStrokeInternal(CurrentStroke);
            }
        }
    }
    
    // REPLICATE TO ALL CLIENTS
    Multicast_HandleDrawing(DrawingData);
}

void AWhiteboardActor::HandleDrawingLocally(const FDrawingData& DrawingData)
{
    if (GetLocalRole() == ROLE_Authority) return;
    
    UE_LOG(LogWDS, Warning, TEXT("HandleDrawingLocally: Player %s, Start: %d, End: %d"), 
           DrawingData.DrawingPlayer ? *DrawingData.DrawingPlayer->GetName() : TEXT("None"), 
           DrawingData.bIsStarting, DrawingData.bIsEnding);

    // Update local player state
    UpdatePlayerDrawingState(DrawingData.DrawingPlayer, DrawingData.ToolState);

    if (DrawingData.bIsStarting)
    {
        bIsDrawing = true;
        CurrentStroke = FStroke();
        CurrentStroke.StrokeID = DrawingData.StrokeID > 0 ? DrawingData.StrokeID : -1; // -1 for prediction
        CurrentStroke.Tool = DrawingData.ToolState.CurrentTool;
        CurrentStroke.Color = DrawingData.ToolState.CurrentColor;
        CurrentStroke.Size = DrawingData.ToolState.BrushSize;
        CurrentStroke.StartPosition = DrawingData.CanvasPosition;
        CurrentStroke.EndPosition = DrawingData.CanvasPosition;
        CurrentStroke.bIsComplete = false;
        CurrentStroke.DrawingPlayer = DrawingData.DrawingPlayer;
        
        FDrawingPoint Point(DrawingData.CanvasPosition, 1.0f, DrawingData.ToolState.CurrentColor, 
                           DrawingData.ToolState.BrushSize, DrawingData.ToolState.CurrentTool, CurrentStroke.StrokeID);
        CurrentStroke.Points.Add(Point);
        
        DrawStrokeInternal(CurrentStroke);
    }
    else if (DrawingData.bIsEnding)
    {
        bIsDrawing = false;
        CurrentStroke.bIsComplete = true;
        CurrentStroke.EndPosition = DrawingData.CanvasPosition;
        
        // For local player prediction, add to history temporarily
        if (DrawingData.DrawingPlayer && DrawingData.DrawingPlayer->IsLocallyControlled())
        {
            if (CurrentHistoryIndex < StrokeHistory.Num() - 1)
            {
                StrokeHistory.RemoveAt(CurrentHistoryIndex + 1, StrokeHistory.Num() - CurrentHistoryIndex - 1);
            }
            StrokeHistory.Add(CurrentStroke);
            CurrentHistoryIndex = StrokeHistory.Num() - 1;
        }
        
        DrawStrokeInternal(CurrentStroke);
        CurrentStroke = FStroke();
    }
    else
    {
        if (!bIsDrawing) return;
        
        CurrentStroke.EndPosition = DrawingData.CanvasPosition;
        
        if (!IsShapeTool(CurrentStroke.Tool))
        {
            FDrawingPoint Point(DrawingData.CanvasPosition, 1.0f, DrawingData.ToolState.CurrentColor, 
                               DrawingData.ToolState.BrushSize, DrawingData.ToolState.CurrentTool, CurrentStroke.StrokeID);
            CurrentStroke.Points.Add(Point);
            
            if (CurrentStroke.Points.Num() >= 2)
            {
                DrawStrokeInternal(CurrentStroke);
            }
        }
    }
}

*/

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

//////////////////////////////////////// Intaraction ///////////////////////////////////////

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

void AWhiteboardActor::OnRep_InteractingPawns() const
{
    // Handle interaction state changes on clients
    UE_LOG(LogWDS, Warning, TEXT("OnRep_InteractingPawns - %d players interacting"), InteractingPawns.Num());
}

// Check If The Client Can Draw
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


//////////////////////////////////////// HELPER FUNCTIONS /////////////////////////////////////

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
            DrawStrokeInternal(StrokeHistory[i]);
        }
    }
    
    // Update material
    UpdateCanvasMaterial();
    
    UE_LOG(LogWDS, Warning, TEXT("RedrawCanvas: Redrew %d strokes"), CurrentHistoryIndex + 1);
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
