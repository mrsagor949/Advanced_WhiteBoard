// DEVELOPER :: MASUD
// Copyright SPARKELON, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "Components/BoxComponent.h"
#include "GameFramework/Actor.h"
#include "Components/StaticMeshComponent.h"
#include "Library/Whiteboard_Types.h"
#include "WhiteboardActor.generated.h"

class UCameraComponent;

UCLASS()
class ADVANCEDDRAWINGBOARD_API AWhiteboardActor : public AActor
{
    GENERATED_BODY()
    
public:    
    AWhiteboardActor();
    virtual void OnConstruction(const FTransform& Transform) override;
    virtual void BeginPlay() override;
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    // Components
    UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Components")
    UStaticMeshComponent* WhiteboardMesh;

    UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "Components")
    UBoxComponent* InteractionVolume;

    UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Components")
    UCameraComponent* WhiteboardCamera;
    
    // Whiteboard properties
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Drawing")
    int32 InitMaterialIndex = 0;
    
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Whiteboard")
    UTextureRenderTarget2D* DrawingCanvas;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Whiteboard")
    int32 CanvasWidth = 2048;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Whiteboard")
    int32 CanvasHeight = 2048;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Whiteboard")
    float InteractionDistance = 200.0f;
    
    // Whiteboard dimensions (in world units)
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Whiteboard")
    float WhiteboardWidth = 100.0f;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Whiteboard")
    float WhiteboardHeight = 100.0f;

    // Drawing Properties

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Drawing")
    TArray<UTexture2D*> BrushTextures;
    
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Drawing")
    TArray<UTexture2D*> FigureTextures;

    //////////////// AS PER PLAYER DRAWING TOOLS TRACKING ///////////////
    
    UPROPERTY()
    TMap<TWeakObjectPtr<APawn>, FPlayerDrawingState> PlayerDrawingStates;

    // Add helper functions
    UFUNCTION(BlueprintCallable, Category = "Whiteboard|Drawing Tools")
    FPlayerDrawingState GetPlayerDrawingState(APawn* Player) const;

    UFUNCTION(BlueprintCallable, Category = "Whiteboard|Drawing Tools")
    void UpdatePlayerDrawingState(APawn* Player, const FPlayerDrawingState& NewState);

    // Update tool getters to be player-specific
    UFUNCTION(BlueprintCallable,BlueprintPure, Category = "Whiteboard|Drawing Tools")
    EDrawingTool GetCurrentTool(APawn* Player) const;

    UFUNCTION(BlueprintCallable,BlueprintPure, Category = "Whiteboard|Drawing Tools")
    FLinearColor GetCurrentColor(APawn* Player) const;

    UFUNCTION(BlueprintCallable,BlueprintPure, Category = "Whiteboard|Drawing Tools")
    float GetBrushSize(APawn* Player) const;

    UFUNCTION(BlueprintCallable,BlueprintPure, Category = "Whiteboard|Drawing Tools")
    int32 GetSelectedBrushTextureIndex(APawn* Player) const;

    UFUNCTION(BlueprintCallable,BlueprintPure, Category = "Whiteboard|Drawing Tools")
    int32 GetSelectedFigureTextureIndex(APawn* Player) const;
    
    UFUNCTION(BlueprintCallable,BlueprintPure, Category = "Whiteboard|Drawing Tools")
    FString GetCurrentTextString(APawn* Player) const;

    // Player-specific tool setters
    UFUNCTION(BlueprintCallable, Category = "Whiteboard|Drawing Tools")
    void SetPlayerTool(APawn* Player, EDrawingTool NewTool);

    UFUNCTION(BlueprintCallable, Category = "Whiteboard|Drawing Tools")
    void SetPlayerColor(APawn* Player, FLinearColor NewColor);

    UFUNCTION(BlueprintCallable, Category = "Whiteboard|Drawing Tools")
    void SetPlayerBrushSize(APawn* Player, float NewSize);

    UFUNCTION(BlueprintCallable, Category = "Whiteboard|Drawing Tools")
    void SetPlayerBrushTextureIndex(APawn* Player, int32 TextureIndex);

    UFUNCTION(BlueprintCallable, Category = "Whiteboard|Drawing Tools")
    void SetPlayerFigureTextureIndex(APawn* Player, int32 TextureIndex);

    UFUNCTION(BlueprintCallable, Category = "Whiteboard|Drawing Tools")
    void SetPlayerTextString(APawn* Player, const FString& NewTextString);
    
    /*
    
    //ALL Drawing Tools
    UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Whiteboard|Drawing Tools", ReplicatedUsing = OnRep_CurrentTool)
    EDrawingTool CurrentTool  = EDrawingTool::Pencil;

    UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Whiteboard|Drawing Tools", ReplicatedUsing = OnRep_CurrentColor)
    FLinearColor CurrentColor;

    UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Whiteboard|Drawing Tools", ReplicatedUsing = OnRep_BrushSize)
    float BrushSize;
    
    UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Whiteboard|Drawing Tools", ReplicatedUsing = OnRep_BrushTextureIndex)
    int32 SelectedBrushTextureIndex;
    
    UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Whiteboard|Drawing Tools", ReplicatedUsing = OnRep_FigureTextureIndex)
    int32 SelectedFigureTextureIndex;

    UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Whiteboard|Drawing Tools", ReplicatedUsing = OnRep_TextString)
    FString CurrentTextString;

    */
    
    // Drawing history for undo/redo
    UPROPERTY(Replicated)
    TArray<FStroke> StrokeHistory;

    UPROPERTY(Replicated)
    int32 CurrentHistoryIndex;

    UPROPERTY(Replicated)
    int32 NextStrokeID;

    
    // Interaction - Multi-player support
    UPROPERTY(BlueprintReadOnly, Category = "Interaction")
    bool bCanInteract;

    UPROPERTY(EditAnywhere, BlueprintReadWrite,Replicated, Category = "Interaction")
    int32 MaxInteractingPlayers = 5;

    UPROPERTY(BlueprintReadOnly, ReplicatedUsing = OnRep_InteractingPawns, Category = "Interaction")
    TArray<class APawn*> InteractingPawns;

    ///////////////////////////// Helper Function To Get All Tools ////////////////////
    /*
    UFUNCTION(BlueprintCallable, Category = "Whiteboard|Drawing Tools")
    EDrawingTool GetCurrentTool() const {return CurrentTool; }

    UFUNCTION(BlueprintCallable, Category = "Whiteboard|Drawing Tools")
    FLinearColor GetCurrentColor() const {return CurrentColor; }

    UFUNCTION(BlueprintCallable, Category = "Whiteboard|Drawing Tools")
    float GetBrushSize() const {return BrushSize;}

    UFUNCTION(BlueprintCallable, Category = "Whiteboard|Drawing Tools")
    int GetSelectedBrushTextureIndex() const {return SelectedBrushTextureIndex;}

    UFUNCTION(BlueprintCallable, Category = "Whiteboard|Drawing Tools")
    int GetSelectedFigureTextureIndex() const {return SelectedFigureTextureIndex;}
    
    UFUNCTION(BlueprintCallable, Category = "Whiteboard|Drawing Tools")
    FString GetCurrentTextString() const {return CurrentTextString;}
    */

    
    ///////////////////////////// WHITEBOARD UTILITIES////////////////////
    // Get Whiteboard Mesh
    UFUNCTION(BlueprintPure, Category = "Whiteboard|Properties")
    UStaticMeshComponent* GetWhiteboardMesh() const;

    // Get Canvas Width
    UFUNCTION(BlueprintPure, Category = "Whiteboard|Properties")
    int32 GetCanvasWidth() const;

    // Get Canvas Height
    UFUNCTION(BlueprintPure, Category = "Whiteboard|Properties")
    int32 GetCanvasHeight() const;

    /*
    // Blueprint callable functions
    UFUNCTION(BlueprintCallable, Category = "Whiteboard|Drawing Tools")
    void SetCurrentTool(EDrawingTool NewTool);

    UFUNCTION(BlueprintCallable, Server, Reliable,Category = "Whiteboard|Drawing Tools")
    void Server_SetCurrentTool(EDrawingTool NewTool);
    
    UFUNCTION(BlueprintCallable, Category = "Whiteboard|Drawing Tools")
    void SetCurrentColor(FLinearColor NewColor);
    
    UFUNCTION(BlueprintCallable, Server, Reliable,Category = "Whiteboard|Drawing Tools")
    void Server_SetCurrentColor(FLinearColor NewColor);
    
    UFUNCTION(BlueprintCallable, Category = "Whiteboard|Drawing Tools")
    void SetBrushSize(float NewSize);

    UFUNCTION(BlueprintCallable, Server, Reliable,Category = "Whiteboard|Drawing Tools")
    void Server_SetBrushSize(float NewSize);
    
    UFUNCTION(BlueprintCallable, Category = "Whiteboard|Drawing Tools")
    void SetBrushTexture(int32 TextureIndex);

    UFUNCTION(BlueprintCallable, Server, Reliable,Category = "Whiteboard|Drawing Tools")
    void Server_SetBrushTexture(int32 TextureIndex);
    
    UFUNCTION(BlueprintCallable, Category = "Whiteboard|Drawing Tools")
    void SetFigureTexture(int32 TextureIndex);

    UFUNCTION(BlueprintCallable, Server, Reliable,Category = "Whiteboard|Drawing Tools")
    void Server_SetFigureTexture(int32 TextureIndex);
    
    // NEW: Enhanced text input functions
    UFUNCTION(BlueprintCallable, Category = "Whiteboard|Drawing Tools")
    void SetTextString(const FString& NewTextString);

    UFUNCTION(BlueprintCallable, Server, Reliable,Category = "Whiteboard|Drawing Tools")
    void Server_SetTextString(const FString& NewTextString);

    */
    
    UFUNCTION(BlueprintCallable, Category = "Whiteboard|Drawing Tools")
    void ClearWhiteboard();

    UFUNCTION(BlueprintCallable, Category = "Whiteboard|Drawing Tools")
    void Undo();

    UFUNCTION(BlueprintCallable, Category = "Whiteboard|Drawing Tools")
    void Redo();

    UFUNCTION(BlueprintCallable, Category = "Whiteboard|Drawing Tools")
    void ExportToPNG(const FString& FilePath);

    UFUNCTION(BlueprintCallable, Category = "Whiteboard|Drawing Tools")
    void ExportToSVG(const FString& FilePath);

    // Drawing functions
    UFUNCTION(BlueprintCallable, Category = "Whiteboard")
    void StartDrawing(APawn* DrawingPlayer, const FVector2D& CanvasPosition);

    // Server RPC functions for network replication
    UFUNCTION(Server, Reliable)
    void Server_StartDrawing(APawn* DrawingPlayer, const FVector2D& CanvasPosition);

    // Multicast functions to update all clients
    UFUNCTION(NetMulticast, Reliable)
    void Multicast_StartDrawing(APawn* DrawingPlayer, const FVector2D& CanvasPosition, int32 StrokeID);
    
    UFUNCTION(BlueprintCallable, Category = "Whiteboard")
    void ContinueDrawing(const FVector2D& CanvasPosition);

    UFUNCTION(Server, Reliable)
    void Server_ContinueDrawing(const FVector2D& CanvasPosition);

    UFUNCTION(NetMulticast, Reliable)
    void Multicast_ContinueDrawing(const FVector2D& CanvasPosition, int32 StrokeID);

    UFUNCTION(BlueprintCallable, Category = "Whiteboard")
    void EndDrawing();

    UFUNCTION(Server, Reliable)
    void Server_EndDrawing();

    UFUNCTION(NetMulticast, Reliable)
    void Multicast_EndDrawing(int32 StrokeID);
    
    UFUNCTION(BlueprintCallable, Category = "Whiteboard")
    void AddText(const FVector2D& CanvasPosition, const FString& Text);

    UFUNCTION(BlueprintCallable, Category = "Whiteboard")
    void DrawFigure(const FVector2D& CanvasPosition, const int32 SelectedFigureIndex);
    
  

    UFUNCTION(Server, Reliable)
    void Server_AddText(const FVector2D& CanvasPosition, const FString& Text, FLinearColor Color, float Size);
    
    UFUNCTION(Server, Reliable)
    void Server_DrawFigure(const FVector2D& CanvasPosition, int32 SelectedFigureIndex, FLinearColor Color, float Size);

    UFUNCTION(Server, Reliable)
    void Server_ClearWhiteboard();

    UFUNCTION(Server, Reliable)
    void Server_Undo();

    UFUNCTION(Server, Reliable)
    void Server_Redo();
    
    UFUNCTION(NetMulticast, Reliable)
    void Multicast_UpdateDrawing(const FStroke& NewStroke);

    UFUNCTION(NetMulticast, Reliable)
    void Multicast_ClearWhiteboard();

    UFUNCTION(NetMulticast, Reliable)
    void Multicast_UpdateHistory(const TArray<FStroke>& NewHistory, int32 NewHistoryIndex);

    UFUNCTION(NetMulticast, Reliable)
    void Multicast_SyncWhiteboardState(const TArray<FStroke>& History, int32 HistoryIndex);

    // NEW: Shape preview functions
    UFUNCTION(NetMulticast, Reliable)
    void Multicast_UpdateShapePreview(const FVector2D& StartPos, const FVector2D& EndPos, EDrawingTool Tool, FLinearColor Color, float Size, int32 StrokeID);

    // FIXED: Interaction Functions - Updated for new networking approach
    UFUNCTION(BlueprintCallable, Category = "Whiteboard")
    void StartInteraction(APawn* Player);

    UFUNCTION(BlueprintCallable, Category = "Whiteboard")
    void EndInteraction();

    UFUNCTION(BlueprintCallable, Category = "Whiteboard")
    void EndInteractionForPlayer(APawn* Player);

    // NEW: Request functions that handle networking properly
    UFUNCTION(BlueprintCallable, Category = "Whiteboard")
    void RequestInteraction(APawn* Player);

    UFUNCTION(BlueprintCallable, Category = "Whiteboard")
    void RequestEndInteraction(APawn* Player);

    // NEW: Validation function for client-side prediction
    UFUNCTION(BlueprintCallable, Category = "Whiteboard")
    bool CanPlayerInteract(APawn* Player) const;

    UFUNCTION(BlueprintCallable, Category = "Whiteboard")
    bool IsPlayerInRange(APlayerController* PlayerController) const;

    // UI Management - Blueprint Events
    UFUNCTION(BlueprintImplementableEvent, Category = "UI Events")
    void OnInteractionStarted(APawn* Player);

    UFUNCTION(BlueprintImplementableEvent, Category = "UI Events")
    void OnInteractionEnded(APawn* Player);
    
    UFUNCTION(BlueprintImplementableEvent, Category = "UI Events")
    void OnPlayerEnteredRange(APawn* Player);

    UFUNCTION(BlueprintImplementableEvent, Category = "UI Events")
    void OnPlayerExitedRange(APawn* Player);

    // Multi-player interaction functions
    UFUNCTION(BlueprintCallable, Category = "Whiteboard")
    bool IsPlayerInteracting(APawn* Player) const;

    UFUNCTION(BlueprintCallable, Category = "Whiteboard")
    int32 GetInteractingPlayerCount() const;

    UFUNCTION(BlueprintCallable, Category = "Whiteboard")
    bool CanAcceptMorePlayers() const;

    UFUNCTION(BlueprintCallable, Category = "Whiteboard")
    void RemoveInteractingPlayer(APawn* Player);

    UFUNCTION()
    void SyncWhiteboardState(const TArray<FStroke>& History, int32 HistoryIndex);
    
    // Client RPC to sync state for new clients
    UFUNCTION(Client, Reliable)
    void Client_SyncWhiteboardState(const TArray<FStroke>& History, int32 HistoryIndex);
    
    // Add these new functions for better client handling
    UFUNCTION(BlueprintCallable, Category = "Whiteboard")
    bool CanClientDraw() const;

    UFUNCTION(BlueprintCallable, Category = "Whiteboard") 
    void ClientStartDrawing(const FVector2D& CanvasPosition);

    UFUNCTION()
    void SetupInteractionUI(APawn* InteractingPlayer);
    
    // NEW: Client RPC to handle UI and camera setup
    UFUNCTION(Client,Reliable)
    void Client_SetupInteractionUI(APawn* InteractingPlayer);

    UFUNCTION()
    void CleanupInteractionUI(APawn* InteractingPlayer);
    
    UFUNCTION(Client, Reliable)
    void Client_CleanupInteractionUI(APawn* InteractingPlayer);
    
    // Add debug functions
    UFUNCTION(BlueprintCallable, Category = "Debug")
    void DebugNetworkState();
    
    // Add this function for local interaction checking
    UFUNCTION(BlueprintCallable, Category = "Whiteboard")
    bool CanInteractLocally(APawn* Player) const;

    
    UFUNCTION(BlueprintCallable, Category = "Whiteboard")
    FVector2D WorldToCanvasPosition(const FVector& WorldPosition) const;
    
    // NEW: Helper functions for shape tools
    UFUNCTION(BlueprintCallable, Category = "Whiteboard")
    static bool IsShapeTool(EDrawingTool Tool);

    UFUNCTION(BlueprintCallable, Category = "Whiteboard")
    UCameraComponent* GetWhiteboardCamera() const;

protected:
    UFUNCTION()
    void OnTriggerBeginOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, 
        UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);

    UFUNCTION()
    void OnTriggerEndOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, 
        UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);

    // RepNotify functions
    UFUNCTION()
    void OnRep_StrokeHistory();

    UFUNCTION()
    void OnRep_InteractingPawns() const;



private:
    // Current drawing state
    bool bIsDrawing;
    FStroke CurrentStroke;
    
    // NEW: Shape preview state
    bool bIsDrawingShape;
    FStroke PreviewStroke;
    UTextureRenderTarget2D* PreviewCanvas;
    
    // Client-side prediction
    TArray<FStroke> PendingStrokes;
    
    // Drawing functions
    void DrawStroke(const FStroke& Stroke);
    void InitializeWhiteboard();
    void RedrawCanvas();
    void UpdateCanvasMaterial();
    
    // NEW: Shape-specific drawing functions
    void DrawShape(const FStroke& Stroke);
    void DrawShapePreview(const FVector2D& StartPos, const FVector2D& EndPos, EDrawingTool Tool, FLinearColor Color, float Size);
    void ClearShapePreview();
    
    // Helper functions
    UTexture2D* RenderTargetToTexture2D(UTextureRenderTarget2D* RenderTarget);
    void GenerateSVGFromStrokes(const FString& FilePath);

    // Network helpers
    void SyncNewClient(APlayerController* NewClient);

    // Internal helper
    APawn* GetDrawingPlayer() const;
};
