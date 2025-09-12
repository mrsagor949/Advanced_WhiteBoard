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
    Figure     UMETA(DisplayName = "Figure Brush")
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
struct ADVANCEDDRAWINGBOARD_API FStroke
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