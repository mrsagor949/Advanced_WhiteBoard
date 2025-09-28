// Developer : Masud Raihan Sagor
// What'sApp Number : +8801964998545
// Email : www.mrsagor2021@gmail.com
// Copyright Sparkelon @2025, Inc. All Rights Reserved.

#include "Controller/AWhiteboard_Player_Controller.h"

#include "EngineUtils.h"
#include "Actor/WhiteboardActor.h"
#include "Camera/CameraComponent.h"
#include "GameFramework/Pawn.h"
#include "Engine/Engine.h"
#include "GameFramework/PawnMovementComponent.h"

// Server Start Interaction Function
void AWhiteboardController::Server_RequestWhiteboardInteraction_Implementation(AWhiteboardActor* Whiteboard, APawn* InteractingPlayer)
{
    
    if (!ValidateWhiteboardInteraction(Whiteboard, InteractingPlayer))
    {
        return;
    }

    // Call the whiteboard interaction directly (server-side)
    Whiteboard->StartInteraction(InteractingPlayer);
}

// Server End Interaction Function
void AWhiteboardController::Server_EndWhiteboardInteraction_Implementation(AWhiteboardActor* Whiteboard, APawn* InteractingPlayer)
{
    
    if (!ValidateWhiteboardInteraction(Whiteboard, InteractingPlayer))
    {
        return;
    }
    
    // Call the whiteboard end interaction directly (server-side)
    Whiteboard->EndInteractionForPlayer(InteractingPlayer);
    
}


// SERVER START DRAWING FROM PC
void AWhiteboardController::Server_WhiteboardStartDrawing_Implementation(APawn* DrawingPlayer, AWhiteboardActor* Whiteboard, const FVector2D& CanvasPosition)
{
    if (Whiteboard)
    {
        Whiteboard->Server_StartDrawing(DrawingPlayer, CanvasPosition);
    }
}

// SERVER UPDATE DRAWING FROM PC
void AWhiteboardController::Server_WhiteboardUpdateDrawing_Implementation(APawn* DrawingPlayer, AWhiteboardActor* Whiteboard, const FVector2D& CanvasPosition)
{

    if (Whiteboard)
    {
        Whiteboard->Server_UpdateDrawing(DrawingPlayer, CanvasPosition);
    }
    
}

void AWhiteboardController::Server_WhiteboardEndDrawing_Implementation(APawn* DrawingPlayer, AWhiteboardActor* Whiteboard)
{
    if (Whiteboard)
    {
        Whiteboard->Server_EndDrawing(DrawingPlayer);
    }
}


void AWhiteboardController::Server_WhiteboardAddText_Implementation(AWhiteboardActor* Whiteboard, const FVector2D& CanvasPosition, const FString& Text, FLinearColor Color, float Size)
{
    if (!Whiteboard || !Whiteboard->IsPlayerInteracting(GetPawn()))
    {
        return;
    }
    //Whiteboard->Server_AddText_Implementation(CanvasPosition, Text, Color, Size);
}



/////////// DRAW FIGURE
void AWhiteboardController::Server_WhiteboardDrawFigure_Implementation(AWhiteboardActor* Whiteboard,const FVector2D& CanvasPosition, const FPlayerDrawingState& PlayerToolState)
{
    if (!Whiteboard || !Whiteboard->IsPlayerInteracting(GetPawn()))
    {
        return;
    }
 //   Whiteboard->Server_DrawFigure_Implementation(CanvasPosition, SelectedFigureIndex, Color, Size);
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


void AWhiteboardController::SetupWhiteboardInputMode(APawn* InteractingPlayer)
{
    // Set input mode for whiteboard interaction
    FInputModeGameAndUI InputMode;
    InputMode.SetLockMouseToViewportBehavior(EMouseLockMode::DoNotLock);
    InputMode.SetHideCursorDuringCapture(false);
    SetInputMode(InputMode);
    
    AWhiteboardActor* WhiteboardActor = nullptr;
    for (TActorIterator<AWhiteboardActor> ActorItr(GetWorld()); ActorItr; ++ActorItr)
    {
        AWhiteboardActor* CurrentWhiteboard = *ActorItr;
        if (CurrentWhiteboard && CurrentWhiteboard->IsPlayerInteracting(InteractingPlayer))
        {
            WhiteboardActor = CurrentWhiteboard;
            break;
        }
    }
    
    if (WhiteboardActor && WhiteboardActor->GetWhiteboardCamera())
    {
        // Smooth camera transition to whiteboard camera
        FViewTargetTransitionParams Param;
        Param.BlendFunction = VTBlend_Cubic;
        Param.BlendTime = 1.5f;
        Param.BlendExp = 2.0f;
        Param.bLockOutgoing = true;
        
        SetViewTarget(WhiteboardActor->GetWhiteboardCamera()->GetOwner(), Param);
        UE_LOG(LogTemp, Warning, TEXT("Set view target to whiteboard camera"));
    }
    else
    {
        UE_LOG(LogTemp, Error, TEXT("Could not find whiteboard camera for interaction"));
    }
    
    
    bShowMouseCursor = true;
    bEnableClickEvents = true;
    bEnableMouseOverEvents = true;
    
    OriginalInputComponent = InteractingPlayer->InputComponent;

    // Only disable movement input, not all input
    if (UPawnMovementComponent* MovementComp = InteractingPlayer->GetMovementComponent())
    {
        MovementComp->SetActive(false);
    }
    
    UE_LOG(LogTemp, Warning, TEXT("Whiteboard input mode set - Cursor: %s"), 
           bShowMouseCursor ? TEXT("Visible") : TEXT("Hidden"));
    
}

// Restore Game Input Mode
void AWhiteboardController::RestoreGameInputMode(APawn* InteractingPlayer)
{
    AWhiteboardActor* WhiteboardActor = nullptr;
    for (TActorIterator<AWhiteboardActor> ActorItr(GetWorld()); ActorItr; ++ActorItr)
    {
        AWhiteboardActor* CurrentWhiteboard = *ActorItr;
        if (CurrentWhiteboard)
        {
            WhiteboardActor = CurrentWhiteboard;
            break;
        }
    }

    // Restore normal game input mode
    FInputModeGameOnly InputMode;
    SetInputMode(InputMode);

    // Switch back to player camera
    if (InteractingPlayer)
    {
        SetViewTarget(InteractingPlayer);
        
        if (UPawnMovementComponent* MovementComp = InteractingPlayer->GetMovementComponent())
        {
            MovementComp->SetActive(true);
        }
        
    }
    
    bShowMouseCursor = false;
    bEnableClickEvents = false;
    bEnableMouseOverEvents = false;
    
    OriginalInputComponent = nullptr;
    
    OnPlayerLeftInteraction(InteractingPlayer, WhiteboardActor);
}

void AWhiteboardController::Server_UpdatePlayerToolState_Implementation(AWhiteboardActor* Whiteboard, EDrawingTool Tool,
    FLinearColor Color, float Size, int32 BrushTextureIndex, int32 FigureTextureIndex)
{
    if (!ValidateWhiteboardInteraction(Whiteboard, GetPawn()))
    {
        return;
    }

    // Update server's state for this player
    if (Whiteboard)
    {
        // We'll need to add a method to update per-player state on the server
       // Whiteboard->UpdateServerPlayerState(GetPawn(), Tool, Color, Size, BrushTextureIndex, FigureTextureIndex);
    }
}

void AWhiteboardController::Client_CleanupInteractionUI_Implementation(APawn* InteractingPlayer)
{
    // Restore game input mode on the client
    RestoreGameInputMode(InteractingPlayer);
}

bool AWhiteboardController::ValidateWhiteboardInteraction(AWhiteboardActor* Whiteboard, APawn* InteractingPlayer) const
{
    if (!Whiteboard || !InteractingPlayer)
    {
        return false;
    }

    // Validate that this player controller owns the requesting pawn
    if (GetPawn() != InteractingPlayer)
    {
        return false;
    }

    return true;
}
