// Add this to your PlayerController implementation file

#include "Controller/AWhiteboard_Player_Controller.h"

#include "Actor/WhiteboardActor.h"
#include "GameFramework/Pawn.h"
#include "Engine/Engine.h"

// Interaction RPC Implementations
void AWhiteboardController::Server_RequestWhiteboardInteraction_Implementation(AWhiteboardActor* Whiteboard, APawn* InteractingPlayer)
{
    UE_LOG(LogTemp, Warning, TEXT("Server_RequestWhiteboardInteraction called for player: %s"), 
           InteractingPlayer ? *InteractingPlayer->GetName() : TEXT("None"));
    
    if (!Whiteboard || !InteractingPlayer)
    {
        UE_LOG(LogTemp, Error, TEXT("Invalid whiteboard or player in RPC"));
        return;
    }

    // Validate that this player controller owns the requesting pawn
    if (GetPawn() != InteractingPlayer)
    {
        UE_LOG(LogTemp, Error, TEXT("Player controller doesn't own the requesting pawn"));
        return;
    }

    // Call the whiteboard interaction directly (server-side)
    Whiteboard->StartInteraction(InteractingPlayer);
}

void AWhiteboardController::Server_EndWhiteboardInteraction_Implementation(AWhiteboardActor* Whiteboard, APawn* InteractingPlayer)
{
    UE_LOG(LogTemp, Warning, TEXT("Server_EndWhiteboardInteraction called for player: %s"), 
           InteractingPlayer ? *InteractingPlayer->GetName() : TEXT("None"));
    
    if (!Whiteboard || !InteractingPlayer)
    {
        UE_LOG(LogTemp, Error, TEXT("Invalid whiteboard or player in RPC"));
        return;
    }

    // Validate that this player controller owns the requesting pawn
    if (GetPawn() != InteractingPlayer)
    {
        UE_LOG(LogTemp, Error, TEXT("Player controller doesn't own the requesting pawn"));
        return;
    }

    // Call the whiteboard end interaction directly (server-side)
    Whiteboard->EndInteractionForPlayer(InteractingPlayer);
}

// Drawing RPC Implementations - Route to Whiteboard
void AWhiteboardController::Server_WhiteboardStartDrawing_Implementation(AWhiteboardActor* Whiteboard, const FVector2D& CanvasPosition, EDrawingTool Tool, FLinearColor Color, float Size, int32 BrushTextureIndex, int32 FigureTextureIndex)
{
    if (!Whiteboard)
    {
        UE_LOG(LogTemp, Error, TEXT("Invalid whiteboard in StartDrawing RPC"));
        return;
    }

    // Validate that the player is interacting with this whiteboard
    if (!Whiteboard->IsPlayerInteracting(GetPawn()))
    {
        UE_LOG(LogTemp, Error, TEXT("Player not interacting with whiteboard"));
        return;
    }

    // Call the whiteboard function directly (we're on server now)
    Whiteboard->Server_StartDrawing_Implementation(CanvasPosition, Tool, Color, Size, BrushTextureIndex, FigureTextureIndex);
}

void AWhiteboardController::Server_WhiteboardContinueDrawing_Implementation(AWhiteboardActor* Whiteboard, const FVector2D& CanvasPosition)
{
    if (!Whiteboard || !Whiteboard->IsPlayerInteracting(GetPawn()))
    {
        return;
    }
    Whiteboard->Server_ContinueDrawing_Implementation(CanvasPosition);
}

void AWhiteboardController::Server_WhiteboardEndDrawing_Implementation(AWhiteboardActor* Whiteboard)
{
    if (!Whiteboard || !Whiteboard->IsPlayerInteracting(GetPawn()))
    {
        return;
    }
    Whiteboard->Server_EndDrawing_Implementation();
}

void AWhiteboardController::Server_WhiteboardAddText_Implementation(AWhiteboardActor* Whiteboard, const FVector2D& CanvasPosition, const FString& Text, FLinearColor Color, float Size)
{
    if (!Whiteboard || !Whiteboard->IsPlayerInteracting(GetPawn()))
    {
        return;
    }
    Whiteboard->Server_AddText_Implementation(CanvasPosition, Text, Color, Size);
}

void AWhiteboardController::Server_WhiteboardDrawFigure_Implementation(AWhiteboardActor* Whiteboard, const FVector2D& CanvasPosition, int32 SelectedFigureIndex, FLinearColor Color, float Size)
{
    if (!Whiteboard || !Whiteboard->IsPlayerInteracting(GetPawn()))
    {
        return;
    }
    Whiteboard->Server_DrawFigure_Implementation(CanvasPosition, SelectedFigureIndex, Color, Size);
}

void AWhiteboardController::Server_WhiteboardClearWhiteboard_Implementation(AWhiteboardActor* Whiteboard)
{
    if (!Whiteboard || !Whiteboard->IsPlayerInteracting(GetPawn()))
    {
        return;
    }
    Whiteboard->Server_ClearWhiteboard_Implementation();
}

void AWhiteboardController::Server_WhiteboardUndo_Implementation(AWhiteboardActor* Whiteboard)
{
    if (!Whiteboard || !Whiteboard->IsPlayerInteracting(GetPawn()))
    {
        return;
    }
    Whiteboard->Server_Undo_Implementation();
}

void AWhiteboardController::Server_WhiteboardRedo_Implementation(AWhiteboardActor* Whiteboard)
{
    if (!Whiteboard || !Whiteboard->IsPlayerInteracting(GetPawn()))
    {
        return;
    }
    Whiteboard->Server_Redo_Implementation();
}

void AWhiteboardController::Server_WhiteboardSetCurrentTool_Implementation(AWhiteboardActor* Whiteboard, EDrawingTool NewTool)
{
    if (!Whiteboard || !Whiteboard->IsPlayerInteracting(GetPawn()))
    {
        return;
    }
    Whiteboard->Server_SetCurrentTool_Implementation(NewTool);
}

void AWhiteboardController::Server_WhiteboardSetCurrentColor_Implementation(AWhiteboardActor* Whiteboard, FLinearColor NewColor)
{
    if (!Whiteboard || !Whiteboard->IsPlayerInteracting(GetPawn()))
    {
        return;
    }
    Whiteboard->Server_SetCurrentColor_Implementation(NewColor);
}

void AWhiteboardController::Server_WhiteboardSetBrushSize_Implementation(AWhiteboardActor* Whiteboard, float NewSize)
{
    if (!Whiteboard || !Whiteboard->IsPlayerInteracting(GetPawn()))
    {
        return;
    }
    Whiteboard->Server_SetBrushSize_Implementation(NewSize);
}

void AWhiteboardController::Server_WhiteboardSetBrushTexture_Implementation(AWhiteboardActor* Whiteboard, int32 TextureIndex)
{
    if (!Whiteboard || !Whiteboard->IsPlayerInteracting(GetPawn()))
    {
        return;
    }
    Whiteboard->Server_SetBrushTexture_Implementation(TextureIndex);
}

void AWhiteboardController::Server_WhiteboardSetFigureTexture_Implementation(AWhiteboardActor* Whiteboard, int32 TextureIndex)
{
    if (!Whiteboard || !Whiteboard->IsPlayerInteracting(GetPawn()))
    {
        return;
    }
    Whiteboard->Server_SetFigureTexture_Implementation(TextureIndex);
}

void AWhiteboardController::Server_WhiteboardSetTextString_Implementation(AWhiteboardActor* Whiteboard, const FString& NewTextString)
{
    if (!Whiteboard || !Whiteboard->IsPlayerInteracting(GetPawn()))
    {
        return;
    }
    Whiteboard->Server_SetTextString_Implementation(NewTextString);
}

void AWhiteboardController::SetupWhiteboardInputMode(APawn* InteractingPlayer)
{
    // Set input mode for whiteboard interaction
    FInputModeGameAndUI InputMode;
    InputMode.SetLockMouseToViewportBehavior(EMouseLockMode::DoNotLock);
    InputMode.SetHideCursorDuringCapture(false);
    SetInputMode(InputMode);

    FViewTargetTransitionParams Param;
    Param.BlendFunction = VTBlend_Cubic;
    Param.BlendTime = 1.5f;
    Param.BlendExp = 2.0f;
    Param.bLockOutgoing = true;
            
    SetViewTarget(this, Param);
    
    bShowMouseCursor = true;
    bEnableClickEvents = true;
    bEnableMouseOverEvents = true;

    InteractingPlayer->DisableInput(this);
    
    UE_LOG(LogTemp, Warning, TEXT("Whiteboard input mode set - Cursor: %s"), 
           bShowMouseCursor ? TEXT("Visible") : TEXT("Hidden"));
    
}

void AWhiteboardController::RestoreGameInputMode(APawn* InteractingPlayer)
{
    // Restore normal game input mode
    FInputModeGameOnly InputMode;
    SetInputMode(InputMode);

    // Switch back to player camera
    SetViewTarget(InteractingPlayer);
    bShowMouseCursor = false;
    bEnableClickEvents = false;
    bEnableMouseOverEvents = false;

    // Re-enable player movement
    InteractingPlayer->EnableInput(this);
    
    UE_LOG(LogTemp, Warning, TEXT("Game input mode restored"));
   
}
