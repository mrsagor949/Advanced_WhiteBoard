// Developer : Masud Raihan Sagor
// What'sApp Number : +8801964998545
// Email : www.mrsagor2021@gmail.com
// Copyright Sparkelon @2025, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "Engine/NetSerialization.h"
#include "Engine/Engine.h"
#include "Whiteboard_Types.generated.h"

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
    Figure      UMETA(DisplayName = "Figure Brush")
};


// Drawing Tools Struct
USTRUCT(BlueprintType)
struct ADVANCEDDRAWINGBOARD_API FDrawingPoint
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

    FDrawingPoint() : Position(FVector2D::ZeroVector)
    {
    }

    FDrawingPoint(const FVector2D& InPosition, float InPressure = 1.0f, const FLinearColor& InColor = FLinearColor::Black, 
                  float InSize = 5.0f, EDrawingTool InTool = EDrawingTool::Brush, int32 InStrokeID = 0)
        : Position(InPosition), Pressure(InPressure), Color(InColor), Size(InSize), Tool(InTool), StrokeID(InStrokeID)
    {}
};


// Drawing Tools Point Struct
USTRUCT(BlueprintType)
struct FStroke
{
    GENERATED_BODY()

    UPROPERTY(BlueprintReadWrite, Category = "Stroke")
    int32 StrokeID;
    
    UPROPERTY(BlueprintReadWrite, Category = "Stroke")
    EDrawingTool Tool;
    
    UPROPERTY(BlueprintReadWrite, Category = "Stroke")
    FLinearColor Color;
    
    UPROPERTY(BlueprintReadWrite, Category = "Stroke")
    float Size;
    
    UPROPERTY(BlueprintReadWrite, Category = "Stroke")
    FVector2D StartPosition;
    
    UPROPERTY(BlueprintReadWrite, Category = "Stroke")
    FVector2D EndPosition;
    
    UPROPERTY(BlueprintReadWrite, Category = "Stroke")
    TArray<FDrawingPoint> Points;
    
    UPROPERTY(BlueprintReadWrite, Category = "Stroke")
    bool bIsComplete;
    
    UPROPERTY(BlueprintReadWrite, Category = "Stroke")
    UTexture2D* BrushTexture;
    
    UPROPERTY(BlueprintReadWrite, Category = "Stroke")
    UTexture2D* FigureTexture;
    
    UPROPERTY(BlueprintReadWrite, Category = "Stroke")
    FString TextContent;
    
    UPROPERTY(BlueprintReadWrite, Category = "Stroke")
    APawn* DrawingPlayer;
    
    FStroke()
        : StrokeID(0)
          , Tool(EDrawingTool::Pencil)
          , Color(FLinearColor::Black)
          , Size(10.0f)
          , StartPosition(FVector2D::ZeroVector)
          , EndPosition(FVector2D::ZeroVector)
          , bIsComplete(false)
          , BrushTexture(nullptr)
          , FigureTexture(nullptr)
          , DrawingPlayer(nullptr)
    {
    }
};


USTRUCT(BlueprintType)
struct ADVANCEDDRAWINGBOARD_API FPlayerDrawingState
{
    GENERATED_BODY()

    UPROPERTY()
    APawn* Player = nullptr;

    UPROPERTY()
    EDrawingTool CurrentTool = EDrawingTool::Pencil;

    UPROPERTY()
    FLinearColor CurrentColor = FLinearColor::Black;

    UPROPERTY()
    float BrushSize = 10.0f;

    UPROPERTY()
    int32 SelectedBrushTextureIndex = 0;

    UPROPERTY()
    int32 SelectedFigureTextureIndex = 0;

    UPROPERTY()
    FString CurrentTextString = TEXT("");

    void ValidateAndClamp()
    {
        BrushSize = FMath::Clamp(BrushSize, 1.0f, 100.0f);
        SelectedBrushTextureIndex = FMath::Max(0, SelectedBrushTextureIndex);
        SelectedFigureTextureIndex = FMath::Max(0, SelectedFigureTextureIndex);
        CurrentColor.A = FMath::Clamp(CurrentColor.A, 0.0f, 1.0f);
    }

    void SetDefaults()
    {
        CurrentTool = EDrawingTool::Pencil;
        CurrentColor = FLinearColor::Black;
        BrushSize = 10.0f;
        SelectedBrushTextureIndex = 0;
        SelectedFigureTextureIndex = 0;
        CurrentTextString = TEXT("");
    }

    FPlayerDrawingState() 
    {
        SetDefaults();
    }

    FPlayerDrawingState(APawn* InPlayer) : Player(InPlayer) 
    {
        SetDefaults();
    }
};


USTRUCT(BlueprintType)
struct ADVANCEDDRAWINGBOARD_API FPlayerToolSaveData
{
    GENERATED_BODY()

    UPROPERTY()
    FString PlayerID;

    UPROPERTY()
    FString WhiteboardID;

    UPROPERTY()
    FPlayerDrawingState SavedTools;

    UPROPERTY()
    FDateTime LastUsed;

    FPlayerToolSaveData()
    {
        LastUsed = FDateTime::Now();
    }

    FPlayerToolSaveData(const FString& InPlayerID, const FString& InWhiteboardID, const FPlayerDrawingState& InTools)
        : PlayerID(InPlayerID), WhiteboardID(InWhiteboardID), SavedTools(InTools)
    {
        LastUsed = FDateTime::Now();
    }
};


USTRUCT(BlueprintType)
struct ADVANCEDDRAWINGBOARD_API FReplicatedPlayerDrawingState
{
    GENERATED_BODY()

    UPROPERTY()
    APawn* Player = nullptr;

    UPROPERTY()
    FPlayerDrawingState DrawingState;

    FReplicatedPlayerDrawingState() {}

    FReplicatedPlayerDrawingState(APawn* InPlayer, const FPlayerDrawingState& InState)
        : Player(InPlayer), DrawingState(InState)
    {}
};

// Add this to help with replication
USTRUCT(BlueprintType)
struct ADVANCEDDRAWINGBOARD_API FReplicatedPlayerStateContainer
{
    GENERATED_BODY()

    UPROPERTY()
    TArray<FReplicatedPlayerDrawingState> PlayerStates;
};


// Add this struct for tool replication
USTRUCT(BlueprintType)
struct ADVANCEDDRAWINGBOARD_API FPlayerToolUpdate
{
    GENERATED_BODY()

    UPROPERTY()
    APawn* Player = nullptr;

    UPROPERTY()
    EDrawingTool NewTool = EDrawingTool::Pencil;

    UPROPERTY()
    FLinearColor NewColor = FLinearColor::Black;

    UPROPERTY()
    float NewBrushSize = 10.0f;

    UPROPERTY()
    int32 NewBrushTextureIndex = 0;

    UPROPERTY()
    int32 NewFigureTextureIndex = 0;

    UPROPERTY()
    FString NewTextString = TEXT("");

    FPlayerToolUpdate() {}

    FPlayerToolUpdate(APawn* InPlayer, EDrawingTool InTool, FLinearColor InColor, float InSize, 
                     int32 InBrushTexIndex, int32 InFigureTexIndex, const FString& InText)
        : Player(InPlayer), NewTool(InTool), NewColor(InColor), NewBrushSize(InSize),
          NewBrushTextureIndex(InBrushTexIndex), NewFigureTextureIndex(InFigureTexIndex), 
          NewTextString(InText)
    {}
};



USTRUCT(BlueprintType)
struct ADVANCEDDRAWINGBOARD_API FDrawingData
{
    GENERATED_BODY()

    UPROPERTY()
    FVector2D CanvasPosition;

    UPROPERTY()
    FPlayerDrawingState ToolState;

    UPROPERTY()
    APawn* DrawingPlayer = nullptr;

    UPROPERTY()
    int32 StrokeID = 0;

    UPROPERTY()
    bool bIsStarting = false;

    UPROPERTY()
    bool bIsEnding = false;

    FDrawingData() {}
    
    FDrawingData(const FVector2D& InPosition, const FPlayerDrawingState& InState, APawn* InPlayer, int32 InStrokeID = 0, bool bStart = false, bool bEnd = false)
        : CanvasPosition(InPosition), ToolState(InState), DrawingPlayer(InPlayer), StrokeID(InStrokeID), bIsStarting(bStart), bIsEnding(bEnd)
    {}
};