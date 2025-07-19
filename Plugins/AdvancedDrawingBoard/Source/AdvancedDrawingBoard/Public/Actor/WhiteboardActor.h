// DEVELOPER :: MASUD
// Copyright SPARKELON, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "Components/BoxComponent.h"
#include "GameFramework/Actor.h"
#include "Components/StaticMeshComponent.h"
#include "WhiteboardActor.generated.h"

class UCameraComponent;

// Drawing Tools Name Enums
UENUM(BlueprintType)
enum class EDrawingTool : uint8
{
    Brush       UMETA(DisplayName = "Brush"),
    Pencil      UMETA(DisplayName = "Pencil"),
    Eraser      UMETA(DisplayName = "Eraser"),
    Text        UMETA(DisplayName = "Text"),
    Line        UMETA(DisplayName = "Line"),
    Rectangle   UMETA(DisplayName = "Rectangle"),
    Circle      UMETA(DisplayName = "Circle"),
    Texture     UMETA(DisplayName = "Texture Brush"),
    Figure     UMETA(DisplayName = "Figure Brush")
};

// Drawing Tools Struct
USTRUCT(BlueprintType)
struct FDrawingPoint
{
    GENERATED_BODY()

    UPROPERTY()
    FVector2D Position;

    UPROPERTY()
    float Pressure = 1.0f;

    UPROPERTY()
    FLinearColor Color = FLinearColor::Black;

    UPROPERTY()
    float Size = 5.0f;

    UPROPERTY()
    EDrawingTool Tool = EDrawingTool::Brush;

    UPROPERTY()
    int32 StrokeID = 0;

    FDrawingPoint(): Position()
    {
    }

    FDrawingPoint(const FVector2D& InPosition, float InPressure = 1.0f, const FLinearColor& InColor = FLinearColor::Black, 
                  float InSize = 5.0f, EDrawingTool InTool = EDrawingTool::Brush, int32 InStrokeID = 0)
        : Position(InPosition), Pressure(InPressure), Color(InColor), Size(InSize), Tool(InTool), StrokeID(InStrokeID)
    {}
};

//Drawing Tools Point Struct
USTRUCT(BlueprintType)
struct FStroke
{
    GENERATED_BODY()

    UPROPERTY()
    TArray<FDrawingPoint> Points;

    UPROPERTY()
    int32 StrokeID = 0;

    UPROPERTY()
    EDrawingTool Tool = EDrawingTool::Brush;

    UPROPERTY()
    FLinearColor Color = FLinearColor::Black;

    UPROPERTY()
    float Size = 5.0f;

    UPROPERTY()
    FString TextContent;

    UPROPERTY()
    UTexture2D* BrushTexture = nullptr;

    UPROPERTY()
    UTexture2D* FigureTexture = nullptr;

    // NEW: Shape-specific properties
    UPROPERTY()
    FVector2D StartPosition = FVector2D::ZeroVector;

    UPROPERTY()
    FVector2D EndPosition = FVector2D::ZeroVector;

    UPROPERTY()
    bool bIsComplete = false;
};

UCLASS()
class ADVANCEDDRAWINGBOARD_API AWhiteboardActor : public AActor
{
    GENERATED_BODY()
    
public:    
    AWhiteboardActor();

    virtual void BeginPlay() override;
    virtual void Tick(float DeltaTime) override;
    virtual void OnConstruction(const FTransform& Transform) override;
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    // Components
    UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Components")
    UStaticMeshComponent* WhiteboardMesh;

    UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "Components")
    UBoxComponent* InteractionVolume;

    UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Components")
    UCameraComponent* WhiteboardCamera;

    // Whiteboard properties
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
    
    // Drawing properties
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Drawing")
    int32 InitMaterialIndex = 0;
    
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Replicated, Category = "Drawing")
    EDrawingTool CurrentTool;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Replicated, Category = "Drawing")
    FLinearColor CurrentColor;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Replicated, Category = "Drawing", meta = (ClampMin = "1.0", ClampMax = "100.0"))
    float BrushSize;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Drawing")
    TArray<UTexture2D*> BrushTextures;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Replicated, Category = "Drawing")
    int32 SelectedBrushTextureIndex;
    
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Drawing")
    TArray<UTexture2D*> FigureTextures;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Replicated, Category = "Drawing")
    int32 SelectedFigureTextureIndex;
    
    // Drawing history for undo/redo
    UPROPERTY(Replicated)
    TArray<FStroke> StrokeHistory;

    UPROPERTY(Replicated)
    int32 CurrentHistoryIndex;

    UPROPERTY(Replicated)
    int32 NextStrokeID;

    // NEW: Current text string for UI input
    UPROPERTY(Replicated)
    FString CurrentTextString;

    // Interaction - Multi-player support
    UPROPERTY(BlueprintReadOnly, Category = "Interaction")
    bool bCanInteract;

    UPROPERTY(EditAnywhere, BlueprintReadWrite,Replicated, Category = "Interaction")
    int32 MaxInteractingPlayers = 5;

    UPROPERTY(BlueprintReadOnly, ReplicatedUsing = OnRep_InteractingPawns, Category = "Interaction")
    TArray<class APawn*> InteractingPawns;

    // Blueprint callable functions
    UFUNCTION(BlueprintCallable, Category = "Whiteboard")
    void SetCurrentTool(EDrawingTool NewTool);

    UFUNCTION(BlueprintCallable, Category = "Whiteboard")
    void SetCurrentColor(FLinearColor NewColor);

    UFUNCTION(BlueprintCallable, Category = "Whiteboard")
    void SetBrushSize(float NewSize);

    UFUNCTION(BlueprintCallable, Category = "Whiteboard")
    void SetBrushTexture(int32 TextureIndex);

    UFUNCTION(BlueprintCallable, Category = "Whiteboard")
    void SetFigureTexture(int32 TextureIndex);

    UFUNCTION(BlueprintCallable, Category = "Whiteboard")
    bool IsPlayerInRange(APlayerController* PlayerController) const;

    UFUNCTION(BlueprintCallable, Category = "Whiteboard")
    FVector2D WorldToCanvasPosition(const FVector& WorldPosition) const;

    UFUNCTION(BlueprintCallable, Category = "Whiteboard")
    void ClearWhiteboard();

    UFUNCTION(BlueprintCallable, Category = "Whiteboard")
    void Undo();

    UFUNCTION(BlueprintCallable, Category = "Whiteboard")
    void Redo();

    UFUNCTION(BlueprintCallable, Category = "Whiteboard")
    void ExportToPNG(const FString& FilePath);

    UFUNCTION(BlueprintCallable, Category = "Whiteboard")
    void ExportToSVG(const FString& FilePath);

    // Drawing functions
    UFUNCTION(BlueprintCallable, Category = "Whiteboard")
    void StartDrawing(const FVector2D& CanvasPosition);

    UFUNCTION(BlueprintCallable, Category = "Whiteboard")
    void ContinueDrawing(const FVector2D& CanvasPosition);

    UFUNCTION(BlueprintCallable, Category = "Whiteboard")
    void EndDrawing();

    // NEW: Enhanced text input functions
    UFUNCTION(BlueprintCallable, Category = "Whiteboard")
    void SetTextString(const FString& NewTextString);

    // Server RPC for text string
    UFUNCTION(Server, Reliable)
    void Server_SetTextString(const FString& NewTextString);
    
    UFUNCTION(BlueprintCallable, Category = "Whiteboard")
    void AddText(const FVector2D& CanvasPosition, const FString& Text);

    UFUNCTION(BlueprintCallable, Category = "Whiteboard")
    void DrawFigure(const FVector2D& CanvasPosition, const int32 SelectedFigureIndex);

    // Server RPC functions for network replication
    UFUNCTION(Server, Reliable)
    void Server_StartDrawing(const FVector2D& CanvasPosition, EDrawingTool Tool, FLinearColor Color, float Size, int32 BrushTextureIndex,int32 FigureTextureIndex);

    UFUNCTION(Server, Reliable)
    void Server_ContinueDrawing(const FVector2D& CanvasPosition);

    UFUNCTION(Server, Reliable)
    void Server_EndDrawing();

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

    UFUNCTION(Server, Reliable)
    void Server_SetCurrentTool(EDrawingTool NewTool);

    UFUNCTION(Server, Reliable)
    void Server_SetCurrentColor(FLinearColor NewColor);

    UFUNCTION(Server, Reliable)
    void Server_SetBrushSize(float NewSize);

    UFUNCTION(Server, Reliable)
    void Server_SetBrushTexture(int32 TextureIndex);

    UFUNCTION(Server, Reliable)
    void Server_SetFigureTexture(int32 TextureIndex);

    // Multicast functions to update all clients
    UFUNCTION(NetMulticast, Reliable)
    void Multicast_StartDrawing(const FVector2D& CanvasPosition, EDrawingTool Tool, FLinearColor Color, float Size, int32 BrushTextureIndex,int32 FigureTextureIndex, int32 StrokeID);

    UFUNCTION(NetMulticast, Reliable)
    void Multicast_ContinueDrawing(const FVector2D& CanvasPosition, int32 StrokeID);

    UFUNCTION(NetMulticast, Reliable)
    void Multicast_EndDrawing(int32 StrokeID);

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

    // UI Management - Blueprint Events
    UFUNCTION(BlueprintImplementableEvent, Category = "UI Events")
    void OnInteractionStarted(APawn* Player);

    UFUNCTION(BlueprintImplementableEvent, Category = "UI Events")
    void OnInteractionEnded(APawn* Player);

    UFUNCTION(BlueprintImplementableEvent, Category = "UI Events")
    void OnPlayerJoinedInteraction(APawn* Player);

    UFUNCTION(BlueprintImplementableEvent, Category = "UI Events")
    void OnPlayerLeftInteraction(APawn* Player);

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

    // Client RPC to sync state for new clients
    UFUNCTION(Client, Reliable)
    void Client_SyncWhiteboardState(const TArray<FStroke>& History, int32 HistoryIndex);
    
    // Add these new functions for better client handling
    UFUNCTION(BlueprintCallable, Category = "Whiteboard")
    bool CanClientDraw() const;

    UFUNCTION(BlueprintCallable, Category = "Whiteboard") 
    void ClientStartDrawing(const FVector2D& CanvasPosition);

    UFUNCTION(BlueprintCallable, Category = "Whiteboard")
    void ClientContinueDrawing(const FVector2D& CanvasPosition);

    UFUNCTION(BlueprintCallable, Category = "Whiteboard")
    void ClientEndDrawing();

    // Add debug functions
    UFUNCTION(BlueprintCallable, Category = "Debug")
    void DebugNetworkState();
    
    // Add this function for local interaction checking
    UFUNCTION(BlueprintCallable, Category = "Whiteboard")
    bool CanInteractLocally(APawn* Player) const;

    // NEW: Helper functions for shape tools
    UFUNCTION(BlueprintCallable, Category = "Whiteboard")
    bool IsShapeTool(EDrawingTool Tool) const;

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
    void OnRep_InteractingPawns();
    
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
    void CreatePreviewCanvas();
    
    // Helper functions
    UTexture2D* RenderTargetToTexture2D(UTextureRenderTarget2D* RenderTarget);
    void GenerateSVGFromStrokes(const FString& FilePath);

    // Network helpers
    void SyncNewClient(APlayerController* NewClient);
    
};
