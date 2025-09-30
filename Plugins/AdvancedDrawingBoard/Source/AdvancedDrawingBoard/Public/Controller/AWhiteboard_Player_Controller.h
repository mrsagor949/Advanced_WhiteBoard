// Developer : Masud Raihan Sagor
// What'sApp Number : +8801964998545
// Email : www.mrsagor2021@gmail.com
// Copyright Sparkelon @2025, Inc. All Rights Reserved.

// ReSharper disable CppUEBlueprintImplementableEventNotImplemented
#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include "Actor/WhiteboardActor.h" // Include for EDrawingTool enum
#include "AWhiteboard_Player_Controller.generated.h"

class AWhiteboardActor;

UCLASS()
class ADVANCEDDRAWINGBOARD_API AWhiteboardController : public APlayerController
{
    GENERATED_BODY()

public:

    // Input Setup
    UFUNCTION()
    void SetupWhiteboardInputMode(APawn* InteractingPlayer);

    // Input Remove
    UFUNCTION()
    void RestoreGameInputMode(APawn* InteractingPlayer);

    UFUNCTION(BlueprintImplementableEvent, Category = "UI Events")
    void OnPlayerJoinedInteraction(APawn* InteractingPlayer, AWhiteboardActor* WhiteboardActor);

    UFUNCTION(BlueprintImplementableEvent, Category = "UI Events")
    void OnPlayerLeftInteraction(APawn* InteractingPlayer,AWhiteboardActor* WhiteboardActor);

    UFUNCTION(Client, Reliable)
    void Client_CleanupInteractionUI(APawn* InteractingPlayer);
    
    // Interaction RPCs
    UFUNCTION(Server, Reliable)
    void Server_RequestWhiteboardInteraction(AWhiteboardActor* Whiteboard, APawn* InteractingPlayer);
    
    UFUNCTION(Server, Reliable)
    void Server_EndWhiteboardInteraction(AWhiteboardActor* Whiteboard, APawn* InteractingPlayer);

    // NEW: Player tool state synchronization
    UFUNCTION(Server, Reliable, WithValidation)
    void Server_UpdatePlayerToolState(AWhiteboardActor* Whiteboard, EDrawingTool Tool, FLinearColor Color, float Size, int32 BrushTextureIndex, int32 FigureTextureIndex);
    bool Server_UpdatePlayerToolState_Validate(AWhiteboardActor* Whiteboard, EDrawingTool Tool, FLinearColor Color, float Size, int32 BrushTextureIndex, int32 FigureTextureIndex) { return true; }
    
    // Drawing RPCs - Route through PlayerController
    UFUNCTION(Server, Reliable)
    void Server_WhiteboardStartDrawing(APawn* DrawingPlayer, AWhiteboardActor* Whiteboard, 
                                      const FVector2D& CanvasPosition, EDrawingTool Tool, 
                                      FLinearColor Color, float BrushSize, int32 BrushTextureIndex, 
                                      int32 FigureTextureIndex);
    
    UFUNCTION(Server, Reliable)
    void Server_WhiteboardUpdateDrawing(APawn* DrawingPlayer, AWhiteboardActor* Whiteboard, 
                                   const FVector2D& CanvasPosition, EDrawingTool Tool, 
                                   FLinearColor Color, float BrushSize);

    UFUNCTION(Server, Reliable)
    void Server_WhiteboardEndDrawing(APawn* DrawingPlayer,AWhiteboardActor* Whiteboard);

    // Add to AWhiteboardController class declaration  
    UFUNCTION(Server, Reliable)
    void Server_WhiteboardDrawImmediateStroke(APawn* DrawingPlayer, AWhiteboardActor* Whiteboard, const FStroke& ImmediateStroke);
    
    UFUNCTION(Server, Reliable)
    void Server_WhiteboardAddText(AWhiteboardActor* Whiteboard, const FVector2D& CanvasPosition, const FString& Text, FLinearColor Color, float Size);

    UFUNCTION(Server, Reliable)
    void Server_WhiteboardDrawFigure(AWhiteboardActor* Whiteboard,const FVector2D& CanvasPosition, const FPlayerDrawingState& PlayerToolState);

    UFUNCTION(Server, Reliable)
    void Server_WhiteboardClearWhiteboard(AWhiteboardActor* Whiteboard);

    UFUNCTION(Server, Reliable)
    void Server_WhiteboardUndo(AWhiteboardActor* Whiteboard);

    UFUNCTION(Server, Reliable)
    void Server_WhiteboardRedo(AWhiteboardActor* Whiteboard);
    
private:
    // Helper function to validate whiteboard interaction
    bool ValidateWhiteboardInteraction(AWhiteboardActor* Whiteboard, APawn* InteractingPlayer) const;

    UPROPERTY()
    class UInputComponent* OriginalInputComponent;
};
