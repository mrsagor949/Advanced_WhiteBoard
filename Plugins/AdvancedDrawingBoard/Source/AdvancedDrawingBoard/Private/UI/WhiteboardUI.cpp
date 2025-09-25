// Developer : Masud Raihan Sagor
// What'sApp Number : +8801964998545
// Email : www.mrsagor2021@gmail.com
// Copyright Sparkelon @2025, Inc. All Rights Reserved.

#include "UI/WhiteboardUI.h"

void UWhiteboardUI::SetDrawingTool(EDrawingTool Tool)
{
    if (TargetWhiteboard && OwningPlayer)
    {
        TargetWhiteboard->SetPlayerTool(OwningPlayer, Tool);
        OnToolChanged(Tool);
    }
}

void UWhiteboardUI::SetDrawingColor(FLinearColor Color)
{
    if (TargetWhiteboard && OwningPlayer)
    {
        TargetWhiteboard->SetPlayerColor(OwningPlayer, Color);
    }
}

void UWhiteboardUI::SetBrushSize(float Size)
{
    if (TargetWhiteboard && OwningPlayer)
    {
        TargetWhiteboard->SetPlayerBrushSize(OwningPlayer, Size);
    }
}

void UWhiteboardUI::SetBrushTexture(int32 TextureIndex)
{
    if (TargetWhiteboard && OwningPlayer)
    {
        TargetWhiteboard->SetPlayerBrushTextureIndex(OwningPlayer, TextureIndex);
    }
}

void UWhiteboardUI::SetFigureTexture(int32 TextureIndex)
{
    if (TargetWhiteboard && OwningPlayer)
    {
        TargetWhiteboard->SetPlayerFigureTextureIndex(OwningPlayer, TextureIndex);
    }
}

void UWhiteboardUI::SetText(FString NewText)
{
    if (TargetWhiteboard && OwningPlayer)
    {
        TargetWhiteboard->SetPlayerTextString(OwningPlayer, NewText);
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
    // Implementation would go here
}

// Getters for current player state
EDrawingTool UWhiteboardUI::GetCurrentTool() const
{
    if (TargetWhiteboard && OwningPlayer)
    {
        return TargetWhiteboard->GetCurrentTool(OwningPlayer);
    }
    return EDrawingTool::Pencil;
}

FLinearColor UWhiteboardUI::GetCurrentColor() const
{
    if (TargetWhiteboard && OwningPlayer)
    {
        return TargetWhiteboard->GetCurrentColor(OwningPlayer);
    }
    return FLinearColor::Black;
}

float UWhiteboardUI::GetBrushSize() const
{
    if (TargetWhiteboard && OwningPlayer)
    {
        return TargetWhiteboard->GetBrushSize(OwningPlayer);
    }
    return 5.0f;
}