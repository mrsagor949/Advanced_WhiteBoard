// DEVELOPER :: MASUD
// Copyright SPARKELON, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "Components/BoxComponent.h"
#include "GameFramework/Actor.h"
#include "Components/StaticMeshComponent.h"
#include "Library/Whiteboard_Types.h"
#include "WhiteboardActor.generated.h"

struct FDrawToRenderTargetContext;
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

    ///////////////////////// ACTOR COMPONENTS //////////////////////////////
    UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Components")
    UStaticMeshComponent* WhiteboardMesh;

    UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "Components")
    UBoxComponent* InteractionVolume;

    UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Components")
    UCameraComponent* WhiteboardCamera;
    
    //////////////////////////////////////////////////////////////////////////////
    //////////////////////////// Initialize Whiteboard ///////////////////////////
    /////////////////////////////////////////////////////////////////////////////////
 
    UPROPERTY(Replicated)
    bool bIsInitialized = false;

    // Initialize function
    UFUNCTION(BlueprintCallable, Category = "Whiteboard")
    void InitializeWhiteboard();

    // RPC functions for canvas initialization
    UFUNCTION(Client, Reliable)
    void Client_InitializeCanvases();

    UFUNCTION(Server, Reliable)
    void Server_RequestCanvasInitialization();

    UFUNCTION(NetMulticast, Reliable)
    void Multicast_ForceClientInitialization();
    
    ///////////////////////// WHITEBOARD PROPERTIES //////////////////////////////
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Drawing")
    int32 InitMaterialIndex = 0;
    
    UPROPERTY(ReplicatedUsing=OnRep_DrawingCanvas)
    UTextureRenderTarget2D* DrawingCanvas;

    UFUNCTION()
    void OnRep_DrawingCanvas();

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Whiteboard")
    int32 CanvasWidth = 2048;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Whiteboard")
    int32 CanvasHeight = 2048;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Whiteboard")
    float InteractionDistance = 200.0f;

    
    ///////////////////////// WHITEBOARD DIMENSION //////////////////////////////
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Whiteboard")
    float WhiteboardWidth = 100.0f;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Whiteboard")
    float WhiteboardHeight = 100.0f;

    ///////////////////////// DRAWING PROPERTIES //////////////////////////////

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Drawing")
    TArray<UTexture2D*> BrushTextures;
    
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Drawing")
    TArray<UTexture2D*> FigureTextures;

    //////////////// AS PER PLAYER DRAWING TOOLS TRACKING ///////////////
    
    // Add proper replication for player states
    UPROPERTY(ReplicatedUsing=OnRep_PlayerDrawingStates, BlueprintReadOnly, Category = "Drawing")
    TArray<FReplicatedPlayerDrawingState> PlayerDrawingStates;

    // Add rep notify
    UFUNCTION()
    void OnRep_PlayerDrawingStates();
    
    UFUNCTION(BlueprintCallable, Category = "Whiteboard|Drawing Tools")
    FPlayerDrawingState GetPlayerDrawingState(APawn* Player) const;
    
    UFUNCTION(BlueprintCallable, Category = "Whiteboard|Drawing Tools")
    void UpdatePlayerDrawingState(APawn* Player, const FPlayerDrawingState& NewState);

    // Update tool getters to be player-specific
    UFUNCTION(BlueprintCallable,BlueprintPure, Category = "Whiteboard|Drawing Tools")
    EDrawingTool GetCurrentTool() const;

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

    //////////////////////////////////////////////////////////////////////////////
    ///////////////////////////////// PLAYER TOOL CHANGE /////////////////////////
    /////////////////////////////////////////////////////////////////////////////

    UFUNCTION(Server, Reliable)
    void Server_UpdatePlayerDrawingState(APawn* Player, const FPlayerDrawingState& NewState);

    UFUNCTION(NetMulticast, Reliable)
    void Multicast_UpdatePlayerToolState(APawn* Player, const FPlayerDrawingState& NewState);
    
    // Set Drawing Tools For Specific Player
    UFUNCTION(BlueprintCallable, Category = "Whiteboard|Drawing Tools")
    void SetPlayerTool(EDrawingTool NewTool);
    
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

    ////////////////////////////////////////////////////////////////////////////////////
    //////////////////////////// ALL DRAWING FUNCTION //////////////////////////////////
    ///////////////////////////////////////////////////////////////////////////////////
    
    //////////////////////////////////////////// START DRAWING ////////////////////////

    UFUNCTION(BlueprintCallable, Category = "Whiteboard")
    void PlayerStartDrawing(const FVector2D& CanvasPosition);
    
    // Server RPC functions for network replication
    UFUNCTION(Server, Reliable)
    void Server_StartDrawing(APawn* DrawingPlayer, const FVector2D& CanvasPosition, 
                        EDrawingTool Tool, FLinearColor Color, float BrushSize, 
                        int32 BrushTextureIndex, int32 FigureTextureIndex);
    
    // Multicast functions to update all clients
    UFUNCTION(NetMulticast, Reliable)
    void Multicast_StartDrawing(APawn* DrawingPlayer, const FVector2D& CanvasPosition, 
                           int32 StrokeID, EDrawingTool Tool, FLinearColor Color, 
                           float BrushSize, int32 BrushTextureIndex, int32 FigureTextureIndex);

    
    ///////////////////////////////// UPDATE DRAWING ////////////////////////////////////

    UFUNCTION(BlueprintCallable, Category = "Whiteboard")
    void PlayerUpdateDrawing(const FVector2D& CanvasPosition);
    
    UFUNCTION(Server, Reliable)
    void Server_UpdateDrawing(APawn* DrawingPlayer, const FVector2D& CanvasPosition, 
                         EDrawingTool Tool, FLinearColor Color, float BrushSize);

    UFUNCTION(NetMulticast, Reliable)
    void Multicast_UpdateDrawing(APawn* DrawingPlayer, const FVector2D& CanvasPosition, 
                            int32 StrokeID, EDrawingTool Tool, FLinearColor Color, float BrushSize);

    
    ///////////////////////////////// END DRAWING ////////////////////////////////////
    
    UFUNCTION(BlueprintCallable, Category = "Whiteboard")
    void PlayerEndDrawing();
    
    UFUNCTION(Server, Reliable)
    void Server_EndDrawing(APawn* DrawingPlayer);

    UFUNCTION(NetMulticast, Reliable)
    void Multicast_EndDrawing(APawn* DrawingPlayer, const FStroke& CompletedStroke);

    
    
  //  UFUNCTION(BlueprintCallable, Category = "Whiteboard")
  //  void AddText(const FVector2D& CanvasPosition, const FString& Text);

    UFUNCTION(BlueprintCallable, Category = "Whiteboard")
    void CreateAndCompleteStroke(APawn* DrawingPlayer, const FVector2D& CanvasPosition, const FPlayerDrawingState& PlayerState);
    
    UFUNCTION(Server, Reliable)
    void Server_DrawImmediateStroke(APawn* DrawingPlayer, const FStroke& ImmediateStroke);

    UFUNCTION(NetMulticast, Reliable)
    void Multicast_DrawCompletedStroke(const FStroke& CompletedStroke);

    UFUNCTION(Server, Reliable)
    void Server_ClearWhiteboard();

    UFUNCTION(Server, Reliable)
    void Server_Undo();

    UFUNCTION(Server, Reliable)
    void Server_Redo();
    
    UFUNCTION(NetMulticast, Reliable)
    void Multicast_UpdateDrawingCanvas(const FStroke& NewStroke);

    UFUNCTION(NetMulticast, Reliable)
    void Multicast_ClearWhiteboard();

    UFUNCTION(NetMulticast, Reliable)
    void Multicast_UpdateHistory(const TArray<FStroke>& NewHistory, int32 NewHistoryIndex);

    UFUNCTION(NetMulticast, Reliable)
    void Multicast_SyncWhiteboardState(const TArray<FStroke>& History, int32 HistoryIndex);
    
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

    // DEBUG
    UFUNCTION(BlueprintCallable, Category = "Debug")
    void DebugPlayerToolState(APawn* Player);

protected:
    void CreateCanvases();
    void SetupMaterial();
    void ForceClientInitialization();
    void RedrawAllStrokesFromHistory();
    void RedrawAllStrokes();
    void CheckAndRepairInitialization();
    void DelayedInitialize();
    
    bool BeginCanvasDraw(UCanvas*& OutCanvas, FVector2D& OutCanvasSize, FDrawToRenderTargetContext& OutContext, UTextureRenderTarget2D* RenderTarget);
    void EndCanvasDraw(const FDrawToRenderTargetContext& Context);

    void DrawTextStroke(const FStroke& Stroke);
    void DrawFigureStroke(const FStroke& Stroke);
    void DrawFreehandStroke(const FStroke& Stroke);
    void DrawTexturedLine(UCanvas* Canvas, const FDrawingPoint& Point1, const FDrawingPoint& Point2, const FStroke& Stroke);
    
        
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
    void OnRep_InteractingPawns();

    UFUNCTION(NetMulticast, Reliable)
    void Multicast_DrawStroke(const FStroke& Stroke);


private:
    void InitializeDefaultPlayerState(APawn* Player);
    
    UPROPERTY()
    TMap<APawn*, FStroke> ClientPredictedStrokes;
    
    // Current active strokes per player
    UPROPERTY()
    TMap<APawn*, FStroke> ActiveStrokes;
    
    // Shape drawing state per player
    UPROPERTY()
    TMap<APawn*, bool> PlayerShapeDrawingStates;
    
    UPROPERTY()
    TMap<APawn*, FPlayerDrawingState> LocalPlayerStatesCache;
    
    // Current drawing state
    bool bIsDrawing;
    
    UPROPERTY()
    TMap<APawn*, FStroke> CurrentStrokes;

    // Shape drawing state per player
    UPROPERTY()
    TMap<APawn*, bool> PlayerDrawingShapes;
    
    // Client-Side Prediction
    TArray<FStroke> PendingStrokes;
    
    /////////////////////////// DRAWING FUNCTION ///////////////////////////////////
    void DrawStroke(const FStroke& Stroke);

    /////////////////////////// SHAPE DRAWING FUNCTION /////////////////////////////

    // NEW: Shape Preview State
    //bool bIsDrawingShape;
    FStroke PreviewStroke;
    UTextureRenderTarget2D* PreviewCanvas;
    
    void DrawShape(const FStroke& Stroke);
    void DrawShapePreview(const FVector2D& StartPos, const FVector2D& EndPos, EDrawingTool Tool, FLinearColor Color, float Size);
    void ClearShapePreview();

    /////////////////////////// DRAWING CANVAS ///////////////////////////////////
    void RedrawCanvas();
    void UpdateCanvasMaterial();
    
    
    // Helper functions
    UTexture2D* RenderTargetToTexture2D(UTextureRenderTarget2D* RenderTarget);
    void GenerateSVGFromStrokes(const FString& FilePath);

    // Network helpers
    void SyncNewClient(APlayerController* NewClient);

    // Internal helper
    APawn* GetDrawingPlayer() const;

    UFUNCTION()
    FVector2D CalculateDrawingCenterOffset(EDrawingTool Tool, float BrushSize, UTexture2D* BrushTexture, UTexture2D* FigureTexture);

    UFUNCTION()
    FVector2D GetCenteredCanvasPosition(const FVector2D& RawCanvasPosition, EDrawingTool Tool, float BrushSize, UTexture2D* BrushTexture, UTexture2D* FigureTexture);
};
