// Developer : Masud Raihan Sagor
// What'sApp Number : +8801964998545
// Email : www.mrsagor2021@gmail.com
// Copyright Sparkelon @2025, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "Actor/WhiteboardActor.h"
#include "Blueprint/UserWidget.h"
#include "WhiteboardUI.generated.h"

UCLASS()
class ADVANCEDDRAWINGBOARD_API UWhiteboardUI : public UUserWidget
{
    GENERATED_BODY()
    
public:
    // Reference to the Whiteboard Actor
    UPROPERTY(BlueprintReadWrite, Category = "Whiteboard")
    AWhiteboardActor* TargetWhiteboard;

    // Reference to the owning player
    UPROPERTY(BlueprintReadWrite, Category = "Whiteboard")
    APawn* OwningPlayer;
    
    // Player-specific drawing functions
    UFUNCTION(BlueprintCallable, Category = "Whiteboard")
    void SetDrawingTool(EDrawingTool Tool);

    UFUNCTION(BlueprintCallable, Category = "Whiteboard")
    void SetDrawingColor(FLinearColor Color);

    UFUNCTION(BlueprintCallable, Category = "Whiteboard")
    void SetBrushSize(float Size);

    UFUNCTION(BlueprintCallable, Category = "Whiteboard")
    void SetBrushTexture(int32 TextureIndex);

    UFUNCTION(BlueprintCallable, Category = "Whiteboard")
    void SetFigureTexture(int32 TextureIndex);

    UFUNCTION(BlueprintCallable, Category = "Whiteboard")
    void SetText(FString NewText);

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

    UFUNCTION(BlueprintCallable, Category = "Whiteboard")
    void AddText(const FString& Text);

    // Get current player state
    UFUNCTION(BlueprintCallable, Category = "Whiteboard")
    EDrawingTool GetCurrentTool() const;

    UFUNCTION(BlueprintCallable, Category = "Whiteboard")
    FLinearColor GetCurrentColor() const;

    UFUNCTION(BlueprintCallable, Category = "Whiteboard")
    float GetBrushSize() const;

    // UI Events
    UFUNCTION(BlueprintImplementableEvent, Category = "UI Events")
    void OnToolChanged(EDrawingTool NewTool);
};