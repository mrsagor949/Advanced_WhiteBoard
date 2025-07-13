// Copyright Epic Games, Inc. All Rights Reserved.

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
	// Reference to the whiteboard actor
	UPROPERTY(BlueprintReadWrite, Category = "Whiteboard")
	AWhiteboardActor* TargetWhiteboard;
    
	// Blueprint callable functions
	UFUNCTION(BlueprintCallable, Category = "Whiteboard")
	void SetDrawingTool(EDrawingTool Tool);
    
	UFUNCTION(BlueprintCallable, Category = "Whiteboard")
	void SetDrawingColor(FLinearColor Color);
    
	UFUNCTION(BlueprintCallable, Category = "Whiteboard")
	void SetBrushSize(float Size);
    
	UFUNCTION(BlueprintCallable, Category = "Whiteboard")
	void SetBrushTexture(int32 TextureIndex);
    
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

	UFUNCTION(BlueprintImplementableEvent, Category = "UI Events")
	void OnToolChanged(EDrawingTool NewTool);
};