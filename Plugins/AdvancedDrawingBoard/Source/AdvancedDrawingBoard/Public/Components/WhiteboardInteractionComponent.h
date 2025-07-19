// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "Actor/WhiteboardActor.h"
#include "Components/ActorComponent.h"
#include "WhiteboardInteractionComponent.generated.h"

UCLASS(ClassGroup=(Custom), meta=(BlueprintSpawnableComponent))
class ADVANCEDDRAWINGBOARD_API UWhiteboardInteractionComponent : public UActorComponent
{
    GENERATED_BODY()

public:    
    UWhiteboardInteractionComponent();

    virtual void BeginPlay() override;
    virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

    // Whiteboard reference
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Whiteboard")
    AWhiteboardActor* TargetWhiteboard;

    // Interaction properties
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Whiteboard")
    float InteractionDistance = 200.0f;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Whiteboard")
    bool bAutoDetectWhiteboard = true;

    // Drawing state
    UPROPERTY(BlueprintReadOnly, Category = "Whiteboard")
    bool bIsDrawing = false;
    
    // Owner reference
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Interaction")
    APawn* OwnerPawn;

    // Input handling
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Input")
    bool bContinuousDrawing = false;

    // Blueprint callable functions for interaction
    UFUNCTION(BlueprintCallable, Category = "Interaction")
    void TryToInteract();

    UFUNCTION(BlueprintCallable, Category = "Drawing")
    void StartDrawingInput();

    UFUNCTION(BlueprintCallable, Category = "Drawing")
    void StopDrawingInput();

    UFUNCTION(BlueprintCallable, Category = "Interaction")
    void EndInteraction();

    // Blueprint callable functions for whiteboard operations
    UFUNCTION(BlueprintCallable, Category = "Whiteboard")
    bool IsInRangeOfWhiteboard();

    UFUNCTION(BlueprintCallable, Category = "Whiteboard")
    void StartDrawing();

    UFUNCTION(BlueprintCallable, Category = "Whiteboard")
    void ContinueDrawing();

    UFUNCTION(BlueprintCallable, Category = "Whiteboard")
    void StopDrawing();

    UFUNCTION(BlueprintCallable, Category = "Whiteboard")
    void SetDrawingTool(EDrawingTool Tool);

    UFUNCTION(BlueprintCallable, Category = "Whiteboard")
    void SetDrawingColor(FLinearColor Color);

    UFUNCTION(BlueprintCallable, Category = "Whiteboard")
    void SetBrushSize(float Size);
    
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

    // Get current drawing position
    UFUNCTION(BlueprintCallable, Category = "Whiteboard")
    bool GetCurrentDrawingPosition(FVector2D& OutCanvasPosition);

private:
    // Helper functions
    void FindNearestWhiteboard();
    FVector GetDrawingPosition();
    bool GetMouseWorldPosition(FVector& OutWorldPosition, FVector2D& OutCanvasPosition);
    FVector2D WorldToCanvasPosition(const FVector& WorldPosition);
    FVector GetWhiteboardLocalPosition(const FVector& WorldPosition);
    
    // NEW: Helper to get current interacting whiteboard
    AWhiteboardActor* GetCurrentWhiteboard();

    // Drawing state tracking
    FVector2D LastDrawingPosition;
    bool bHasValidLastPosition;
    float DrawingUpdateInterval;
    float LastDrawingUpdateTime;
};
