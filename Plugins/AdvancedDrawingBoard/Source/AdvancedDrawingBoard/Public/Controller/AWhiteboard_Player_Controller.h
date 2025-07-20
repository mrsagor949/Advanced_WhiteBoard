// Add this to your PlayerController header file

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
    
    // Interaction RPCs
    UFUNCTION(Server, Reliable)
    void Server_RequestWhiteboardInteraction(AWhiteboardActor* Whiteboard, APawn* InteractingPlayer);
    
    UFUNCTION(Server, Reliable)
    void Server_EndWhiteboardInteraction(AWhiteboardActor* Whiteboard, APawn* InteractingPlayer);

    // Drawing RPCs - Route through PlayerController
    UFUNCTION(Server, Reliable)
    void Server_WhiteboardStartDrawing(AWhiteboardActor* Whiteboard, const FVector2D& CanvasPosition, EDrawingTool Tool, FLinearColor Color, float Size, int32 BrushTextureIndex, int32 FigureTextureIndex);

    UFUNCTION(Server, Reliable)
    void Server_WhiteboardContinueDrawing(AWhiteboardActor* Whiteboard, const FVector2D& CanvasPosition);

    UFUNCTION(Server, Reliable)
    void Server_WhiteboardEndDrawing(AWhiteboardActor* Whiteboard);

    UFUNCTION(Server, Reliable)
    void Server_WhiteboardAddText(AWhiteboardActor* Whiteboard, const FVector2D& CanvasPosition, const FString& Text, FLinearColor Color, float Size);

    UFUNCTION(Server, Reliable)
    void Server_WhiteboardDrawFigure(AWhiteboardActor* Whiteboard, const FVector2D& CanvasPosition, int32 SelectedFigureIndex, FLinearColor Color, float Size);

    UFUNCTION(Server, Reliable)
    void Server_WhiteboardClearWhiteboard(AWhiteboardActor* Whiteboard);

    UFUNCTION(Server, Reliable)
    void Server_WhiteboardUndo(AWhiteboardActor* Whiteboard);

    UFUNCTION(Server, Reliable)
    void Server_WhiteboardRedo(AWhiteboardActor* Whiteboard);

    UFUNCTION(Server, Reliable)
    void Server_WhiteboardSetCurrentTool(AWhiteboardActor* Whiteboard, EDrawingTool NewTool);

    UFUNCTION(Server, Reliable)
    void Server_WhiteboardSetCurrentColor(AWhiteboardActor* Whiteboard, FLinearColor NewColor);

    UFUNCTION(Server, Reliable)
    void Server_WhiteboardSetBrushSize(AWhiteboardActor* Whiteboard, float NewSize);

    UFUNCTION(Server, Reliable)
    void Server_WhiteboardSetBrushTexture(AWhiteboardActor* Whiteboard, int32 TextureIndex);

    UFUNCTION(Server, Reliable)
    void Server_WhiteboardSetFigureTexture(AWhiteboardActor* Whiteboard, int32 TextureIndex);

    UFUNCTION(Server, Reliable)
    void Server_WhiteboardSetTextString(AWhiteboardActor* Whiteboard, const FString& NewTextString);
};
