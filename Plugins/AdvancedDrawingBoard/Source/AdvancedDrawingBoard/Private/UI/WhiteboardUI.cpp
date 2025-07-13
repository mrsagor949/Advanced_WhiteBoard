// Copyright Epic Games, Inc. All Rights Reserved.

#include "UI/WhiteboardUI.h"

void UWhiteboardUI::SetDrawingTool(EDrawingTool Tool)
{
	if (TargetWhiteboard)
	{
		TargetWhiteboard->SetCurrentTool(Tool);
		OnToolChanged(Tool);
	}
}

void UWhiteboardUI::SetDrawingColor(FLinearColor Color)
{
	if (TargetWhiteboard)
	{
		TargetWhiteboard->SetCurrentColor(Color);
	}
}

void UWhiteboardUI::SetBrushSize(float Size)
{
	if (TargetWhiteboard)
	{
		TargetWhiteboard->SetBrushSize(Size);
	}
}

void UWhiteboardUI::SetBrushTexture(int32 TextureIndex)
{
	if (TargetWhiteboard)
	{
		TargetWhiteboard->SetBrushTexture(TextureIndex);
	}
}

void UWhiteboardUI::ClearWhiteboard()
{
	if (TargetWhiteboard)
	{
		TargetWhiteboard->ClearWhiteboard();
	}
}

void UWhiteboardUI::Undo()
{
	if (TargetWhiteboard)
	{
		TargetWhiteboard->Undo();
	}
}

void UWhiteboardUI::Redo()
{
	if (TargetWhiteboard)
	{
		TargetWhiteboard->Redo();
	}
}

void UWhiteboardUI::ExportToPNG(const FString& FilePath)
{
	if (TargetWhiteboard)
	{
		TargetWhiteboard->ExportToPNG(FilePath);
	}
}

void UWhiteboardUI::ExportToSVG(const FString& FilePath)
{
	if (TargetWhiteboard)
	{
		TargetWhiteboard->ExportToSVG(FilePath);
	}
}

void UWhiteboardUI::AddText(const FString& Text)
{
	if (TargetWhiteboard)
	{
		// Note: This requires the player to be looking at the whiteboard
		// The actual implementation in Blueprint will need to get the hit position
		// from a line trace before calling AddText on the whiteboard
	}
}