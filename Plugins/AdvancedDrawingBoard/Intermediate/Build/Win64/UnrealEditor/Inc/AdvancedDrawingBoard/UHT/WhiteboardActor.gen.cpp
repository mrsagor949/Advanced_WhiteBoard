// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AdvancedDrawingBoard/Public/Actor/WhiteboardActor.h"
#include "Runtime/Engine/Classes/Engine/HitResult.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWhiteboardActor() {}

// Begin Cross Module References
ADVANCEDDRAWINGBOARD_API UClass* Z_Construct_UClass_AWhiteboardActor();
ADVANCEDDRAWINGBOARD_API UClass* Z_Construct_UClass_AWhiteboardActor_NoRegister();
ADVANCEDDRAWINGBOARD_API UEnum* Z_Construct_UEnum_AdvancedDrawingBoard_EDrawingTool();
ADVANCEDDRAWINGBOARD_API UScriptStruct* Z_Construct_UScriptStruct_FDrawingPoint();
ADVANCEDDRAWINGBOARD_API UScriptStruct* Z_Construct_UScriptStruct_FStroke();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
ENGINE_API UClass* Z_Construct_UClass_AActor();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_APawn_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_APlayerController_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UBoxComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UTextureRenderTarget2D_NoRegister();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
UPackage* Z_Construct_UPackage__Script_AdvancedDrawingBoard();
// End Cross Module References

// Begin Enum EDrawingTool
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EDrawingTool;
static UEnum* EDrawingTool_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EDrawingTool.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EDrawingTool.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_AdvancedDrawingBoard_EDrawingTool, (UObject*)Z_Construct_UPackage__Script_AdvancedDrawingBoard(), TEXT("EDrawingTool"));
	}
	return Z_Registration_Info_UEnum_EDrawingTool.OuterSingleton;
}
template<> ADVANCEDDRAWINGBOARD_API UEnum* StaticEnum<EDrawingTool>()
{
	return EDrawingTool_StaticEnum();
}
struct Z_Construct_UEnum_AdvancedDrawingBoard_EDrawingTool_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Brush.DisplayName", "Brush" },
		{ "Brush.Name", "EDrawingTool::Brush" },
		{ "Circle.DisplayName", "Circle" },
		{ "Circle.Name", "EDrawingTool::Circle" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Drawing Tools Name Enums\n" },
#endif
		{ "Eraser.DisplayName", "Eraser" },
		{ "Eraser.Name", "EDrawingTool::Eraser" },
		{ "Figure.DisplayName", "Figure Brush" },
		{ "Figure.Name", "EDrawingTool::Figure" },
		{ "Line.DisplayName", "Line" },
		{ "Line.Name", "EDrawingTool::Line" },
		{ "ModuleRelativePath", "Public/Actor/WhiteboardActor.h" },
		{ "Pencil.DisplayName", "Pencil" },
		{ "Pencil.Name", "EDrawingTool::Pencil" },
		{ "Rectangle.DisplayName", "Rectangle" },
		{ "Rectangle.Name", "EDrawingTool::Rectangle" },
		{ "Text.DisplayName", "Text" },
		{ "Text.Name", "EDrawingTool::Text" },
		{ "Texture.DisplayName", "Texture Brush" },
		{ "Texture.Name", "EDrawingTool::Texture" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Drawing Tools Name Enums" },
#endif
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EDrawingTool::Brush", (int64)EDrawingTool::Brush },
		{ "EDrawingTool::Pencil", (int64)EDrawingTool::Pencil },
		{ "EDrawingTool::Eraser", (int64)EDrawingTool::Eraser },
		{ "EDrawingTool::Text", (int64)EDrawingTool::Text },
		{ "EDrawingTool::Line", (int64)EDrawingTool::Line },
		{ "EDrawingTool::Rectangle", (int64)EDrawingTool::Rectangle },
		{ "EDrawingTool::Circle", (int64)EDrawingTool::Circle },
		{ "EDrawingTool::Texture", (int64)EDrawingTool::Texture },
		{ "EDrawingTool::Figure", (int64)EDrawingTool::Figure },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_AdvancedDrawingBoard_EDrawingTool_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_AdvancedDrawingBoard,
	nullptr,
	"EDrawingTool",
	"EDrawingTool",
	Z_Construct_UEnum_AdvancedDrawingBoard_EDrawingTool_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_AdvancedDrawingBoard_EDrawingTool_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_AdvancedDrawingBoard_EDrawingTool_Statics::Enum_MetaDataParams), Z_Construct_UEnum_AdvancedDrawingBoard_EDrawingTool_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_AdvancedDrawingBoard_EDrawingTool()
{
	if (!Z_Registration_Info_UEnum_EDrawingTool.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EDrawingTool.InnerSingleton, Z_Construct_UEnum_AdvancedDrawingBoard_EDrawingTool_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EDrawingTool.InnerSingleton;
}
// End Enum EDrawingTool

// Begin ScriptStruct FDrawingPoint
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_DrawingPoint;
class UScriptStruct* FDrawingPoint::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_DrawingPoint.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_DrawingPoint.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FDrawingPoint, (UObject*)Z_Construct_UPackage__Script_AdvancedDrawingBoard(), TEXT("DrawingPoint"));
	}
	return Z_Registration_Info_UScriptStruct_DrawingPoint.OuterSingleton;
}
template<> ADVANCEDDRAWINGBOARD_API UScriptStruct* StaticStruct<FDrawingPoint>()
{
	return FDrawingPoint::StaticStruct();
}
struct Z_Construct_UScriptStruct_FDrawingPoint_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Drawing Tools Struct\n" },
#endif
		{ "ModuleRelativePath", "Public/Actor/WhiteboardActor.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Drawing Tools Struct" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Position_MetaData[] = {
		{ "ModuleRelativePath", "Public/Actor/WhiteboardActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Pressure_MetaData[] = {
		{ "ModuleRelativePath", "Public/Actor/WhiteboardActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Color_MetaData[] = {
		{ "ModuleRelativePath", "Public/Actor/WhiteboardActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Size_MetaData[] = {
		{ "ModuleRelativePath", "Public/Actor/WhiteboardActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Tool_MetaData[] = {
		{ "ModuleRelativePath", "Public/Actor/WhiteboardActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StrokeID_MetaData[] = {
		{ "ModuleRelativePath", "Public/Actor/WhiteboardActor.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Position;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Pressure;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Color;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Size;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Tool_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Tool;
	static const UECodeGen_Private::FIntPropertyParams NewProp_StrokeID;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDrawingPoint>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FDrawingPoint_Statics::NewProp_Position = { "Position", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDrawingPoint, Position), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Position_MetaData), NewProp_Position_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FDrawingPoint_Statics::NewProp_Pressure = { "Pressure", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDrawingPoint, Pressure), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Pressure_MetaData), NewProp_Pressure_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FDrawingPoint_Statics::NewProp_Color = { "Color", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDrawingPoint, Color), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Color_MetaData), NewProp_Color_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FDrawingPoint_Statics::NewProp_Size = { "Size", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDrawingPoint, Size), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Size_MetaData), NewProp_Size_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FDrawingPoint_Statics::NewProp_Tool_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FDrawingPoint_Statics::NewProp_Tool = { "Tool", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDrawingPoint, Tool), Z_Construct_UEnum_AdvancedDrawingBoard_EDrawingTool, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Tool_MetaData), NewProp_Tool_MetaData) }; // 3667291816
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FDrawingPoint_Statics::NewProp_StrokeID = { "StrokeID", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDrawingPoint, StrokeID), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StrokeID_MetaData), NewProp_StrokeID_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FDrawingPoint_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDrawingPoint_Statics::NewProp_Position,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDrawingPoint_Statics::NewProp_Pressure,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDrawingPoint_Statics::NewProp_Color,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDrawingPoint_Statics::NewProp_Size,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDrawingPoint_Statics::NewProp_Tool_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDrawingPoint_Statics::NewProp_Tool,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDrawingPoint_Statics::NewProp_StrokeID,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDrawingPoint_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDrawingPoint_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_AdvancedDrawingBoard,
	nullptr,
	&NewStructOps,
	"DrawingPoint",
	Z_Construct_UScriptStruct_FDrawingPoint_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDrawingPoint_Statics::PropPointers),
	sizeof(FDrawingPoint),
	alignof(FDrawingPoint),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDrawingPoint_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FDrawingPoint_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FDrawingPoint()
{
	if (!Z_Registration_Info_UScriptStruct_DrawingPoint.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_DrawingPoint.InnerSingleton, Z_Construct_UScriptStruct_FDrawingPoint_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_DrawingPoint.InnerSingleton;
}
// End ScriptStruct FDrawingPoint

// Begin ScriptStruct FStroke
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_Stroke;
class UScriptStruct* FStroke::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_Stroke.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_Stroke.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FStroke, (UObject*)Z_Construct_UPackage__Script_AdvancedDrawingBoard(), TEXT("Stroke"));
	}
	return Z_Registration_Info_UScriptStruct_Stroke.OuterSingleton;
}
template<> ADVANCEDDRAWINGBOARD_API UScriptStruct* StaticStruct<FStroke>()
{
	return FStroke::StaticStruct();
}
struct Z_Construct_UScriptStruct_FStroke_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Drawing Tools Point Struct\n" },
#endif
		{ "ModuleRelativePath", "Public/Actor/WhiteboardActor.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Drawing Tools Point Struct" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Points_MetaData[] = {
		{ "ModuleRelativePath", "Public/Actor/WhiteboardActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StrokeID_MetaData[] = {
		{ "ModuleRelativePath", "Public/Actor/WhiteboardActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Tool_MetaData[] = {
		{ "ModuleRelativePath", "Public/Actor/WhiteboardActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Color_MetaData[] = {
		{ "ModuleRelativePath", "Public/Actor/WhiteboardActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Size_MetaData[] = {
		{ "ModuleRelativePath", "Public/Actor/WhiteboardActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TextContent_MetaData[] = {
		{ "ModuleRelativePath", "Public/Actor/WhiteboardActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BrushTexture_MetaData[] = {
		{ "ModuleRelativePath", "Public/Actor/WhiteboardActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FigureTexture_MetaData[] = {
		{ "ModuleRelativePath", "Public/Actor/WhiteboardActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StartPosition_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// NEW: Shape-specific properties\n" },
#endif
		{ "ModuleRelativePath", "Public/Actor/WhiteboardActor.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "NEW: Shape-specific properties" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EndPosition_MetaData[] = {
		{ "ModuleRelativePath", "Public/Actor/WhiteboardActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsComplete_MetaData[] = {
		{ "ModuleRelativePath", "Public/Actor/WhiteboardActor.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Points_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Points;
	static const UECodeGen_Private::FIntPropertyParams NewProp_StrokeID;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Tool_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Tool;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Color;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Size;
	static const UECodeGen_Private::FStrPropertyParams NewProp_TextContent;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_BrushTexture;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_FigureTexture;
	static const UECodeGen_Private::FStructPropertyParams NewProp_StartPosition;
	static const UECodeGen_Private::FStructPropertyParams NewProp_EndPosition;
	static void NewProp_bIsComplete_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsComplete;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FStroke>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FStroke_Statics::NewProp_Points_Inner = { "Points", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FDrawingPoint, METADATA_PARAMS(0, nullptr) }; // 2644549905
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FStroke_Statics::NewProp_Points = { "Points", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FStroke, Points), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Points_MetaData), NewProp_Points_MetaData) }; // 2644549905
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FStroke_Statics::NewProp_StrokeID = { "StrokeID", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FStroke, StrokeID), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StrokeID_MetaData), NewProp_StrokeID_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FStroke_Statics::NewProp_Tool_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FStroke_Statics::NewProp_Tool = { "Tool", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FStroke, Tool), Z_Construct_UEnum_AdvancedDrawingBoard_EDrawingTool, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Tool_MetaData), NewProp_Tool_MetaData) }; // 3667291816
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FStroke_Statics::NewProp_Color = { "Color", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FStroke, Color), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Color_MetaData), NewProp_Color_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FStroke_Statics::NewProp_Size = { "Size", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FStroke, Size), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Size_MetaData), NewProp_Size_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FStroke_Statics::NewProp_TextContent = { "TextContent", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FStroke, TextContent), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TextContent_MetaData), NewProp_TextContent_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FStroke_Statics::NewProp_BrushTexture = { "BrushTexture", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FStroke, BrushTexture), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BrushTexture_MetaData), NewProp_BrushTexture_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FStroke_Statics::NewProp_FigureTexture = { "FigureTexture", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FStroke, FigureTexture), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FigureTexture_MetaData), NewProp_FigureTexture_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FStroke_Statics::NewProp_StartPosition = { "StartPosition", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FStroke, StartPosition), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StartPosition_MetaData), NewProp_StartPosition_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FStroke_Statics::NewProp_EndPosition = { "EndPosition", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FStroke, EndPosition), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EndPosition_MetaData), NewProp_EndPosition_MetaData) };
void Z_Construct_UScriptStruct_FStroke_Statics::NewProp_bIsComplete_SetBit(void* Obj)
{
	((FStroke*)Obj)->bIsComplete = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FStroke_Statics::NewProp_bIsComplete = { "bIsComplete", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FStroke), &Z_Construct_UScriptStruct_FStroke_Statics::NewProp_bIsComplete_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsComplete_MetaData), NewProp_bIsComplete_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FStroke_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStroke_Statics::NewProp_Points_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStroke_Statics::NewProp_Points,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStroke_Statics::NewProp_StrokeID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStroke_Statics::NewProp_Tool_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStroke_Statics::NewProp_Tool,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStroke_Statics::NewProp_Color,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStroke_Statics::NewProp_Size,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStroke_Statics::NewProp_TextContent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStroke_Statics::NewProp_BrushTexture,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStroke_Statics::NewProp_FigureTexture,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStroke_Statics::NewProp_StartPosition,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStroke_Statics::NewProp_EndPosition,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStroke_Statics::NewProp_bIsComplete,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStroke_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FStroke_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_AdvancedDrawingBoard,
	nullptr,
	&NewStructOps,
	"Stroke",
	Z_Construct_UScriptStruct_FStroke_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStroke_Statics::PropPointers),
	sizeof(FStroke),
	alignof(FStroke),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStroke_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FStroke_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FStroke()
{
	if (!Z_Registration_Info_UScriptStruct_Stroke.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_Stroke.InnerSingleton, Z_Construct_UScriptStruct_FStroke_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_Stroke.InnerSingleton;
}
// End ScriptStruct FStroke

// Begin Class AWhiteboardActor Function AddText
struct Z_Construct_UFunction_AWhiteboardActor_AddText_Statics
{
	struct WhiteboardActor_eventAddText_Parms
	{
		FVector2D CanvasPosition;
		FString Text;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Whiteboard" },
		{ "ModuleRelativePath", "Public/Actor/WhiteboardActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CanvasPosition_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Text_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_CanvasPosition;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Text;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AWhiteboardActor_AddText_Statics::NewProp_CanvasPosition = { "CanvasPosition", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WhiteboardActor_eventAddText_Parms, CanvasPosition), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CanvasPosition_MetaData), NewProp_CanvasPosition_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AWhiteboardActor_AddText_Statics::NewProp_Text = { "Text", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WhiteboardActor_eventAddText_Parms, Text), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Text_MetaData), NewProp_Text_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AWhiteboardActor_AddText_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AWhiteboardActor_AddText_Statics::NewProp_CanvasPosition,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AWhiteboardActor_AddText_Statics::NewProp_Text,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AWhiteboardActor_AddText_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AWhiteboardActor_AddText_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AWhiteboardActor, nullptr, "AddText", nullptr, nullptr, Z_Construct_UFunction_AWhiteboardActor_AddText_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AWhiteboardActor_AddText_Statics::PropPointers), sizeof(Z_Construct_UFunction_AWhiteboardActor_AddText_Statics::WhiteboardActor_eventAddText_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AWhiteboardActor_AddText_Statics::Function_MetaDataParams), Z_Construct_UFunction_AWhiteboardActor_AddText_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AWhiteboardActor_AddText_Statics::WhiteboardActor_eventAddText_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AWhiteboardActor_AddText()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AWhiteboardActor_AddText_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AWhiteboardActor::execAddText)
{
	P_GET_STRUCT_REF(FVector2D,Z_Param_Out_CanvasPosition);
	P_GET_PROPERTY(FStrProperty,Z_Param_Text);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->AddText(Z_Param_Out_CanvasPosition,Z_Param_Text);
	P_NATIVE_END;
}
// End Class AWhiteboardActor Function AddText

// Begin Class AWhiteboardActor Function CanAcceptMorePlayers
struct Z_Construct_UFunction_AWhiteboardActor_CanAcceptMorePlayers_Statics
{
	struct WhiteboardActor_eventCanAcceptMorePlayers_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Whiteboard" },
		{ "ModuleRelativePath", "Public/Actor/WhiteboardActor.h" },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_AWhiteboardActor_CanAcceptMorePlayers_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((WhiteboardActor_eventCanAcceptMorePlayers_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AWhiteboardActor_CanAcceptMorePlayers_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(WhiteboardActor_eventCanAcceptMorePlayers_Parms), &Z_Construct_UFunction_AWhiteboardActor_CanAcceptMorePlayers_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AWhiteboardActor_CanAcceptMorePlayers_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AWhiteboardActor_CanAcceptMorePlayers_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AWhiteboardActor_CanAcceptMorePlayers_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AWhiteboardActor_CanAcceptMorePlayers_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AWhiteboardActor, nullptr, "CanAcceptMorePlayers", nullptr, nullptr, Z_Construct_UFunction_AWhiteboardActor_CanAcceptMorePlayers_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AWhiteboardActor_CanAcceptMorePlayers_Statics::PropPointers), sizeof(Z_Construct_UFunction_AWhiteboardActor_CanAcceptMorePlayers_Statics::WhiteboardActor_eventCanAcceptMorePlayers_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AWhiteboardActor_CanAcceptMorePlayers_Statics::Function_MetaDataParams), Z_Construct_UFunction_AWhiteboardActor_CanAcceptMorePlayers_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AWhiteboardActor_CanAcceptMorePlayers_Statics::WhiteboardActor_eventCanAcceptMorePlayers_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AWhiteboardActor_CanAcceptMorePlayers()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AWhiteboardActor_CanAcceptMorePlayers_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AWhiteboardActor::execCanAcceptMorePlayers)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->CanAcceptMorePlayers();
	P_NATIVE_END;
}
// End Class AWhiteboardActor Function CanAcceptMorePlayers

// Begin Class AWhiteboardActor Function CanClientDraw
struct Z_Construct_UFunction_AWhiteboardActor_CanClientDraw_Statics
{
	struct WhiteboardActor_eventCanClientDraw_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Whiteboard" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Add these new functions for better client handling\n" },
#endif
		{ "ModuleRelativePath", "Public/Actor/WhiteboardActor.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Add these new functions for better client handling" },
#endif
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_AWhiteboardActor_CanClientDraw_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((WhiteboardActor_eventCanClientDraw_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AWhiteboardActor_CanClientDraw_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(WhiteboardActor_eventCanClientDraw_Parms), &Z_Construct_UFunction_AWhiteboardActor_CanClientDraw_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AWhiteboardActor_CanClientDraw_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AWhiteboardActor_CanClientDraw_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AWhiteboardActor_CanClientDraw_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AWhiteboardActor_CanClientDraw_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AWhiteboardActor, nullptr, "CanClientDraw", nullptr, nullptr, Z_Construct_UFunction_AWhiteboardActor_CanClientDraw_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AWhiteboardActor_CanClientDraw_Statics::PropPointers), sizeof(Z_Construct_UFunction_AWhiteboardActor_CanClientDraw_Statics::WhiteboardActor_eventCanClientDraw_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AWhiteboardActor_CanClientDraw_Statics::Function_MetaDataParams), Z_Construct_UFunction_AWhiteboardActor_CanClientDraw_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AWhiteboardActor_CanClientDraw_Statics::WhiteboardActor_eventCanClientDraw_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AWhiteboardActor_CanClientDraw()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AWhiteboardActor_CanClientDraw_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AWhiteboardActor::execCanClientDraw)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->CanClientDraw();
	P_NATIVE_END;
}
// End Class AWhiteboardActor Function CanClientDraw

// Begin Class AWhiteboardActor Function CanInteractLocally
struct Z_Construct_UFunction_AWhiteboardActor_CanInteractLocally_Statics
{
	struct WhiteboardActor_eventCanInteractLocally_Parms
	{
		APawn* Player;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Whiteboard" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Add this function for local interaction checking\n" },
#endif
		{ "ModuleRelativePath", "Public/Actor/WhiteboardActor.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Add this function for local interaction checking" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Player;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AWhiteboardActor_CanInteractLocally_Statics::NewProp_Player = { "Player", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WhiteboardActor_eventCanInteractLocally_Parms, Player), Z_Construct_UClass_APawn_NoRegister, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_AWhiteboardActor_CanInteractLocally_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((WhiteboardActor_eventCanInteractLocally_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AWhiteboardActor_CanInteractLocally_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(WhiteboardActor_eventCanInteractLocally_Parms), &Z_Construct_UFunction_AWhiteboardActor_CanInteractLocally_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AWhiteboardActor_CanInteractLocally_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AWhiteboardActor_CanInteractLocally_Statics::NewProp_Player,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AWhiteboardActor_CanInteractLocally_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AWhiteboardActor_CanInteractLocally_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AWhiteboardActor_CanInteractLocally_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AWhiteboardActor, nullptr, "CanInteractLocally", nullptr, nullptr, Z_Construct_UFunction_AWhiteboardActor_CanInteractLocally_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AWhiteboardActor_CanInteractLocally_Statics::PropPointers), sizeof(Z_Construct_UFunction_AWhiteboardActor_CanInteractLocally_Statics::WhiteboardActor_eventCanInteractLocally_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AWhiteboardActor_CanInteractLocally_Statics::Function_MetaDataParams), Z_Construct_UFunction_AWhiteboardActor_CanInteractLocally_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AWhiteboardActor_CanInteractLocally_Statics::WhiteboardActor_eventCanInteractLocally_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AWhiteboardActor_CanInteractLocally()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AWhiteboardActor_CanInteractLocally_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AWhiteboardActor::execCanInteractLocally)
{
	P_GET_OBJECT(APawn,Z_Param_Player);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->CanInteractLocally(Z_Param_Player);
	P_NATIVE_END;
}
// End Class AWhiteboardActor Function CanInteractLocally

// Begin Class AWhiteboardActor Function CanPlayerInteract
struct Z_Construct_UFunction_AWhiteboardActor_CanPlayerInteract_Statics
{
	struct WhiteboardActor_eventCanPlayerInteract_Parms
	{
		APawn* Player;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Whiteboard" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// NEW: Validation function for client-side prediction\n" },
#endif
		{ "ModuleRelativePath", "Public/Actor/WhiteboardActor.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "NEW: Validation function for client-side prediction" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Player;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AWhiteboardActor_CanPlayerInteract_Statics::NewProp_Player = { "Player", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WhiteboardActor_eventCanPlayerInteract_Parms, Player), Z_Construct_UClass_APawn_NoRegister, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_AWhiteboardActor_CanPlayerInteract_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((WhiteboardActor_eventCanPlayerInteract_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AWhiteboardActor_CanPlayerInteract_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(WhiteboardActor_eventCanPlayerInteract_Parms), &Z_Construct_UFunction_AWhiteboardActor_CanPlayerInteract_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AWhiteboardActor_CanPlayerInteract_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AWhiteboardActor_CanPlayerInteract_Statics::NewProp_Player,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AWhiteboardActor_CanPlayerInteract_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AWhiteboardActor_CanPlayerInteract_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AWhiteboardActor_CanPlayerInteract_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AWhiteboardActor, nullptr, "CanPlayerInteract", nullptr, nullptr, Z_Construct_UFunction_AWhiteboardActor_CanPlayerInteract_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AWhiteboardActor_CanPlayerInteract_Statics::PropPointers), sizeof(Z_Construct_UFunction_AWhiteboardActor_CanPlayerInteract_Statics::WhiteboardActor_eventCanPlayerInteract_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AWhiteboardActor_CanPlayerInteract_Statics::Function_MetaDataParams), Z_Construct_UFunction_AWhiteboardActor_CanPlayerInteract_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AWhiteboardActor_CanPlayerInteract_Statics::WhiteboardActor_eventCanPlayerInteract_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AWhiteboardActor_CanPlayerInteract()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AWhiteboardActor_CanPlayerInteract_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AWhiteboardActor::execCanPlayerInteract)
{
	P_GET_OBJECT(APawn,Z_Param_Player);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->CanPlayerInteract(Z_Param_Player);
	P_NATIVE_END;
}
// End Class AWhiteboardActor Function CanPlayerInteract

// Begin Class AWhiteboardActor Function ClearWhiteboard
struct Z_Construct_UFunction_AWhiteboardActor_ClearWhiteboard_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Whiteboard" },
		{ "ModuleRelativePath", "Public/Actor/WhiteboardActor.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AWhiteboardActor_ClearWhiteboard_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AWhiteboardActor, nullptr, "ClearWhiteboard", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AWhiteboardActor_ClearWhiteboard_Statics::Function_MetaDataParams), Z_Construct_UFunction_AWhiteboardActor_ClearWhiteboard_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_AWhiteboardActor_ClearWhiteboard()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AWhiteboardActor_ClearWhiteboard_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AWhiteboardActor::execClearWhiteboard)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ClearWhiteboard();
	P_NATIVE_END;
}
// End Class AWhiteboardActor Function ClearWhiteboard

// Begin Class AWhiteboardActor Function Client_CleanupInteractionUI
struct WhiteboardActor_eventClient_CleanupInteractionUI_Parms
{
	APawn* InteractingPlayer;
};
static const FName NAME_AWhiteboardActor_Client_CleanupInteractionUI = FName(TEXT("Client_CleanupInteractionUI"));
void AWhiteboardActor::Client_CleanupInteractionUI(APawn* InteractingPlayer)
{
	WhiteboardActor_eventClient_CleanupInteractionUI_Parms Parms;
	Parms.InteractingPlayer=InteractingPlayer;
	UFunction* Func = FindFunctionChecked(NAME_AWhiteboardActor_Client_CleanupInteractionUI);
	ProcessEvent(Func,&Parms);
}
struct Z_Construct_UFunction_AWhiteboardActor_Client_CleanupInteractionUI_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Actor/WhiteboardActor.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InteractingPlayer;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AWhiteboardActor_Client_CleanupInteractionUI_Statics::NewProp_InteractingPlayer = { "InteractingPlayer", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WhiteboardActor_eventClient_CleanupInteractionUI_Parms, InteractingPlayer), Z_Construct_UClass_APawn_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AWhiteboardActor_Client_CleanupInteractionUI_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AWhiteboardActor_Client_CleanupInteractionUI_Statics::NewProp_InteractingPlayer,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AWhiteboardActor_Client_CleanupInteractionUI_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AWhiteboardActor_Client_CleanupInteractionUI_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AWhiteboardActor, nullptr, "Client_CleanupInteractionUI", nullptr, nullptr, Z_Construct_UFunction_AWhiteboardActor_Client_CleanupInteractionUI_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AWhiteboardActor_Client_CleanupInteractionUI_Statics::PropPointers), sizeof(WhiteboardActor_eventClient_CleanupInteractionUI_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x01020CC0, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AWhiteboardActor_Client_CleanupInteractionUI_Statics::Function_MetaDataParams), Z_Construct_UFunction_AWhiteboardActor_Client_CleanupInteractionUI_Statics::Function_MetaDataParams) };
static_assert(sizeof(WhiteboardActor_eventClient_CleanupInteractionUI_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AWhiteboardActor_Client_CleanupInteractionUI()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AWhiteboardActor_Client_CleanupInteractionUI_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AWhiteboardActor::execClient_CleanupInteractionUI)
{
	P_GET_OBJECT(APawn,Z_Param_InteractingPlayer);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Client_CleanupInteractionUI_Implementation(Z_Param_InteractingPlayer);
	P_NATIVE_END;
}
// End Class AWhiteboardActor Function Client_CleanupInteractionUI

// Begin Class AWhiteboardActor Function Client_SetupInteractionUI
struct WhiteboardActor_eventClient_SetupInteractionUI_Parms
{
	APawn* InteractingPlayer;
};
static const FName NAME_AWhiteboardActor_Client_SetupInteractionUI = FName(TEXT("Client_SetupInteractionUI"));
void AWhiteboardActor::Client_SetupInteractionUI(APawn* InteractingPlayer)
{
	WhiteboardActor_eventClient_SetupInteractionUI_Parms Parms;
	Parms.InteractingPlayer=InteractingPlayer;
	UFunction* Func = FindFunctionChecked(NAME_AWhiteboardActor_Client_SetupInteractionUI);
	ProcessEvent(Func,&Parms);
}
struct Z_Construct_UFunction_AWhiteboardActor_Client_SetupInteractionUI_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// NEW: Client RPC to handle UI and camera setup\n" },
#endif
		{ "ModuleRelativePath", "Public/Actor/WhiteboardActor.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "NEW: Client RPC to handle UI and camera setup" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InteractingPlayer;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AWhiteboardActor_Client_SetupInteractionUI_Statics::NewProp_InteractingPlayer = { "InteractingPlayer", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WhiteboardActor_eventClient_SetupInteractionUI_Parms, InteractingPlayer), Z_Construct_UClass_APawn_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AWhiteboardActor_Client_SetupInteractionUI_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AWhiteboardActor_Client_SetupInteractionUI_Statics::NewProp_InteractingPlayer,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AWhiteboardActor_Client_SetupInteractionUI_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AWhiteboardActor_Client_SetupInteractionUI_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AWhiteboardActor, nullptr, "Client_SetupInteractionUI", nullptr, nullptr, Z_Construct_UFunction_AWhiteboardActor_Client_SetupInteractionUI_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AWhiteboardActor_Client_SetupInteractionUI_Statics::PropPointers), sizeof(WhiteboardActor_eventClient_SetupInteractionUI_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x01020CC0, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AWhiteboardActor_Client_SetupInteractionUI_Statics::Function_MetaDataParams), Z_Construct_UFunction_AWhiteboardActor_Client_SetupInteractionUI_Statics::Function_MetaDataParams) };
static_assert(sizeof(WhiteboardActor_eventClient_SetupInteractionUI_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AWhiteboardActor_Client_SetupInteractionUI()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AWhiteboardActor_Client_SetupInteractionUI_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AWhiteboardActor::execClient_SetupInteractionUI)
{
	P_GET_OBJECT(APawn,Z_Param_InteractingPlayer);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Client_SetupInteractionUI_Implementation(Z_Param_InteractingPlayer);
	P_NATIVE_END;
}
// End Class AWhiteboardActor Function Client_SetupInteractionUI

// Begin Class AWhiteboardActor Function Client_SyncWhiteboardState
struct WhiteboardActor_eventClient_SyncWhiteboardState_Parms
{
	TArray<FStroke> History;
	int32 HistoryIndex;
};
static const FName NAME_AWhiteboardActor_Client_SyncWhiteboardState = FName(TEXT("Client_SyncWhiteboardState"));
void AWhiteboardActor::Client_SyncWhiteboardState(TArray<FStroke> const& History, int32 HistoryIndex)
{
	WhiteboardActor_eventClient_SyncWhiteboardState_Parms Parms;
	Parms.History=History;
	Parms.HistoryIndex=HistoryIndex;
	UFunction* Func = FindFunctionChecked(NAME_AWhiteboardActor_Client_SyncWhiteboardState);
	ProcessEvent(Func,&Parms);
}
struct Z_Construct_UFunction_AWhiteboardActor_Client_SyncWhiteboardState_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Client RPC to sync state for new clients\n" },
#endif
		{ "ModuleRelativePath", "Public/Actor/WhiteboardActor.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Client RPC to sync state for new clients" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_History_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_History_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_History;
	static const UECodeGen_Private::FIntPropertyParams NewProp_HistoryIndex;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AWhiteboardActor_Client_SyncWhiteboardState_Statics::NewProp_History_Inner = { "History", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FStroke, METADATA_PARAMS(0, nullptr) }; // 2697397385
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_AWhiteboardActor_Client_SyncWhiteboardState_Statics::NewProp_History = { "History", nullptr, (EPropertyFlags)0x0010000008000082, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WhiteboardActor_eventClient_SyncWhiteboardState_Parms, History), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_History_MetaData), NewProp_History_MetaData) }; // 2697397385
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AWhiteboardActor_Client_SyncWhiteboardState_Statics::NewProp_HistoryIndex = { "HistoryIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WhiteboardActor_eventClient_SyncWhiteboardState_Parms, HistoryIndex), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AWhiteboardActor_Client_SyncWhiteboardState_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AWhiteboardActor_Client_SyncWhiteboardState_Statics::NewProp_History_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AWhiteboardActor_Client_SyncWhiteboardState_Statics::NewProp_History,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AWhiteboardActor_Client_SyncWhiteboardState_Statics::NewProp_HistoryIndex,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AWhiteboardActor_Client_SyncWhiteboardState_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AWhiteboardActor_Client_SyncWhiteboardState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AWhiteboardActor, nullptr, "Client_SyncWhiteboardState", nullptr, nullptr, Z_Construct_UFunction_AWhiteboardActor_Client_SyncWhiteboardState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AWhiteboardActor_Client_SyncWhiteboardState_Statics::PropPointers), sizeof(WhiteboardActor_eventClient_SyncWhiteboardState_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x01020CC0, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AWhiteboardActor_Client_SyncWhiteboardState_Statics::Function_MetaDataParams), Z_Construct_UFunction_AWhiteboardActor_Client_SyncWhiteboardState_Statics::Function_MetaDataParams) };
static_assert(sizeof(WhiteboardActor_eventClient_SyncWhiteboardState_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AWhiteboardActor_Client_SyncWhiteboardState()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AWhiteboardActor_Client_SyncWhiteboardState_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AWhiteboardActor::execClient_SyncWhiteboardState)
{
	P_GET_TARRAY(FStroke,Z_Param_History);
	P_GET_PROPERTY(FIntProperty,Z_Param_HistoryIndex);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Client_SyncWhiteboardState_Implementation(Z_Param_History,Z_Param_HistoryIndex);
	P_NATIVE_END;
}
// End Class AWhiteboardActor Function Client_SyncWhiteboardState

// Begin Class AWhiteboardActor Function ClientContinueDrawing
struct Z_Construct_UFunction_AWhiteboardActor_ClientContinueDrawing_Statics
{
	struct WhiteboardActor_eventClientContinueDrawing_Parms
	{
		FVector2D CanvasPosition;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Whiteboard" },
		{ "ModuleRelativePath", "Public/Actor/WhiteboardActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CanvasPosition_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_CanvasPosition;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AWhiteboardActor_ClientContinueDrawing_Statics::NewProp_CanvasPosition = { "CanvasPosition", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WhiteboardActor_eventClientContinueDrawing_Parms, CanvasPosition), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CanvasPosition_MetaData), NewProp_CanvasPosition_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AWhiteboardActor_ClientContinueDrawing_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AWhiteboardActor_ClientContinueDrawing_Statics::NewProp_CanvasPosition,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AWhiteboardActor_ClientContinueDrawing_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AWhiteboardActor_ClientContinueDrawing_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AWhiteboardActor, nullptr, "ClientContinueDrawing", nullptr, nullptr, Z_Construct_UFunction_AWhiteboardActor_ClientContinueDrawing_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AWhiteboardActor_ClientContinueDrawing_Statics::PropPointers), sizeof(Z_Construct_UFunction_AWhiteboardActor_ClientContinueDrawing_Statics::WhiteboardActor_eventClientContinueDrawing_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AWhiteboardActor_ClientContinueDrawing_Statics::Function_MetaDataParams), Z_Construct_UFunction_AWhiteboardActor_ClientContinueDrawing_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AWhiteboardActor_ClientContinueDrawing_Statics::WhiteboardActor_eventClientContinueDrawing_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AWhiteboardActor_ClientContinueDrawing()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AWhiteboardActor_ClientContinueDrawing_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AWhiteboardActor::execClientContinueDrawing)
{
	P_GET_STRUCT_REF(FVector2D,Z_Param_Out_CanvasPosition);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ClientContinueDrawing(Z_Param_Out_CanvasPosition);
	P_NATIVE_END;
}
// End Class AWhiteboardActor Function ClientContinueDrawing

// Begin Class AWhiteboardActor Function ClientEndDrawing
struct Z_Construct_UFunction_AWhiteboardActor_ClientEndDrawing_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Whiteboard" },
		{ "ModuleRelativePath", "Public/Actor/WhiteboardActor.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AWhiteboardActor_ClientEndDrawing_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AWhiteboardActor, nullptr, "ClientEndDrawing", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AWhiteboardActor_ClientEndDrawing_Statics::Function_MetaDataParams), Z_Construct_UFunction_AWhiteboardActor_ClientEndDrawing_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_AWhiteboardActor_ClientEndDrawing()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AWhiteboardActor_ClientEndDrawing_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AWhiteboardActor::execClientEndDrawing)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ClientEndDrawing();
	P_NATIVE_END;
}
// End Class AWhiteboardActor Function ClientEndDrawing

// Begin Class AWhiteboardActor Function ClientStartDrawing
struct Z_Construct_UFunction_AWhiteboardActor_ClientStartDrawing_Statics
{
	struct WhiteboardActor_eventClientStartDrawing_Parms
	{
		FVector2D CanvasPosition;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Whiteboard" },
		{ "ModuleRelativePath", "Public/Actor/WhiteboardActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CanvasPosition_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_CanvasPosition;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AWhiteboardActor_ClientStartDrawing_Statics::NewProp_CanvasPosition = { "CanvasPosition", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WhiteboardActor_eventClientStartDrawing_Parms, CanvasPosition), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CanvasPosition_MetaData), NewProp_CanvasPosition_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AWhiteboardActor_ClientStartDrawing_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AWhiteboardActor_ClientStartDrawing_Statics::NewProp_CanvasPosition,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AWhiteboardActor_ClientStartDrawing_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AWhiteboardActor_ClientStartDrawing_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AWhiteboardActor, nullptr, "ClientStartDrawing", nullptr, nullptr, Z_Construct_UFunction_AWhiteboardActor_ClientStartDrawing_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AWhiteboardActor_ClientStartDrawing_Statics::PropPointers), sizeof(Z_Construct_UFunction_AWhiteboardActor_ClientStartDrawing_Statics::WhiteboardActor_eventClientStartDrawing_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AWhiteboardActor_ClientStartDrawing_Statics::Function_MetaDataParams), Z_Construct_UFunction_AWhiteboardActor_ClientStartDrawing_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AWhiteboardActor_ClientStartDrawing_Statics::WhiteboardActor_eventClientStartDrawing_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AWhiteboardActor_ClientStartDrawing()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AWhiteboardActor_ClientStartDrawing_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AWhiteboardActor::execClientStartDrawing)
{
	P_GET_STRUCT_REF(FVector2D,Z_Param_Out_CanvasPosition);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ClientStartDrawing(Z_Param_Out_CanvasPosition);
	P_NATIVE_END;
}
// End Class AWhiteboardActor Function ClientStartDrawing

// Begin Class AWhiteboardActor Function ContinueDrawing
struct Z_Construct_UFunction_AWhiteboardActor_ContinueDrawing_Statics
{
	struct WhiteboardActor_eventContinueDrawing_Parms
	{
		FVector2D CanvasPosition;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Whiteboard" },
		{ "ModuleRelativePath", "Public/Actor/WhiteboardActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CanvasPosition_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_CanvasPosition;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AWhiteboardActor_ContinueDrawing_Statics::NewProp_CanvasPosition = { "CanvasPosition", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WhiteboardActor_eventContinueDrawing_Parms, CanvasPosition), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CanvasPosition_MetaData), NewProp_CanvasPosition_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AWhiteboardActor_ContinueDrawing_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AWhiteboardActor_ContinueDrawing_Statics::NewProp_CanvasPosition,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AWhiteboardActor_ContinueDrawing_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AWhiteboardActor_ContinueDrawing_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AWhiteboardActor, nullptr, "ContinueDrawing", nullptr, nullptr, Z_Construct_UFunction_AWhiteboardActor_ContinueDrawing_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AWhiteboardActor_ContinueDrawing_Statics::PropPointers), sizeof(Z_Construct_UFunction_AWhiteboardActor_ContinueDrawing_Statics::WhiteboardActor_eventContinueDrawing_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AWhiteboardActor_ContinueDrawing_Statics::Function_MetaDataParams), Z_Construct_UFunction_AWhiteboardActor_ContinueDrawing_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AWhiteboardActor_ContinueDrawing_Statics::WhiteboardActor_eventContinueDrawing_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AWhiteboardActor_ContinueDrawing()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AWhiteboardActor_ContinueDrawing_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AWhiteboardActor::execContinueDrawing)
{
	P_GET_STRUCT_REF(FVector2D,Z_Param_Out_CanvasPosition);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ContinueDrawing(Z_Param_Out_CanvasPosition);
	P_NATIVE_END;
}
// End Class AWhiteboardActor Function ContinueDrawing

// Begin Class AWhiteboardActor Function DebugNetworkState
struct Z_Construct_UFunction_AWhiteboardActor_DebugNetworkState_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Debug" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Add debug functions\n" },
#endif
		{ "ModuleRelativePath", "Public/Actor/WhiteboardActor.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Add debug functions" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AWhiteboardActor_DebugNetworkState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AWhiteboardActor, nullptr, "DebugNetworkState", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AWhiteboardActor_DebugNetworkState_Statics::Function_MetaDataParams), Z_Construct_UFunction_AWhiteboardActor_DebugNetworkState_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_AWhiteboardActor_DebugNetworkState()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AWhiteboardActor_DebugNetworkState_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AWhiteboardActor::execDebugNetworkState)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->DebugNetworkState();
	P_NATIVE_END;
}
// End Class AWhiteboardActor Function DebugNetworkState

// Begin Class AWhiteboardActor Function DrawFigure
struct Z_Construct_UFunction_AWhiteboardActor_DrawFigure_Statics
{
	struct WhiteboardActor_eventDrawFigure_Parms
	{
		FVector2D CanvasPosition;
		int32 SelectedFigureIndex;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Whiteboard" },
		{ "ModuleRelativePath", "Public/Actor/WhiteboardActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CanvasPosition_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SelectedFigureIndex_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_CanvasPosition;
	static const UECodeGen_Private::FIntPropertyParams NewProp_SelectedFigureIndex;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AWhiteboardActor_DrawFigure_Statics::NewProp_CanvasPosition = { "CanvasPosition", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WhiteboardActor_eventDrawFigure_Parms, CanvasPosition), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CanvasPosition_MetaData), NewProp_CanvasPosition_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AWhiteboardActor_DrawFigure_Statics::NewProp_SelectedFigureIndex = { "SelectedFigureIndex", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WhiteboardActor_eventDrawFigure_Parms, SelectedFigureIndex), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SelectedFigureIndex_MetaData), NewProp_SelectedFigureIndex_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AWhiteboardActor_DrawFigure_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AWhiteboardActor_DrawFigure_Statics::NewProp_CanvasPosition,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AWhiteboardActor_DrawFigure_Statics::NewProp_SelectedFigureIndex,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AWhiteboardActor_DrawFigure_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AWhiteboardActor_DrawFigure_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AWhiteboardActor, nullptr, "DrawFigure", nullptr, nullptr, Z_Construct_UFunction_AWhiteboardActor_DrawFigure_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AWhiteboardActor_DrawFigure_Statics::PropPointers), sizeof(Z_Construct_UFunction_AWhiteboardActor_DrawFigure_Statics::WhiteboardActor_eventDrawFigure_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AWhiteboardActor_DrawFigure_Statics::Function_MetaDataParams), Z_Construct_UFunction_AWhiteboardActor_DrawFigure_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AWhiteboardActor_DrawFigure_Statics::WhiteboardActor_eventDrawFigure_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AWhiteboardActor_DrawFigure()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AWhiteboardActor_DrawFigure_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AWhiteboardActor::execDrawFigure)
{
	P_GET_STRUCT_REF(FVector2D,Z_Param_Out_CanvasPosition);
	P_GET_PROPERTY(FIntProperty,Z_Param_SelectedFigureIndex);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->DrawFigure(Z_Param_Out_CanvasPosition,Z_Param_SelectedFigureIndex);
	P_NATIVE_END;
}
// End Class AWhiteboardActor Function DrawFigure

// Begin Class AWhiteboardActor Function EndDrawing
struct Z_Construct_UFunction_AWhiteboardActor_EndDrawing_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Whiteboard" },
		{ "ModuleRelativePath", "Public/Actor/WhiteboardActor.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AWhiteboardActor_EndDrawing_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AWhiteboardActor, nullptr, "EndDrawing", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AWhiteboardActor_EndDrawing_Statics::Function_MetaDataParams), Z_Construct_UFunction_AWhiteboardActor_EndDrawing_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_AWhiteboardActor_EndDrawing()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AWhiteboardActor_EndDrawing_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AWhiteboardActor::execEndDrawing)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->EndDrawing();
	P_NATIVE_END;
}
// End Class AWhiteboardActor Function EndDrawing

// Begin Class AWhiteboardActor Function EndInteraction
struct Z_Construct_UFunction_AWhiteboardActor_EndInteraction_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Whiteboard" },
		{ "ModuleRelativePath", "Public/Actor/WhiteboardActor.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AWhiteboardActor_EndInteraction_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AWhiteboardActor, nullptr, "EndInteraction", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AWhiteboardActor_EndInteraction_Statics::Function_MetaDataParams), Z_Construct_UFunction_AWhiteboardActor_EndInteraction_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_AWhiteboardActor_EndInteraction()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AWhiteboardActor_EndInteraction_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AWhiteboardActor::execEndInteraction)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->EndInteraction();
	P_NATIVE_END;
}
// End Class AWhiteboardActor Function EndInteraction

// Begin Class AWhiteboardActor Function EndInteractionForPlayer
struct Z_Construct_UFunction_AWhiteboardActor_EndInteractionForPlayer_Statics
{
	struct WhiteboardActor_eventEndInteractionForPlayer_Parms
	{
		APawn* Player;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Whiteboard" },
		{ "ModuleRelativePath", "Public/Actor/WhiteboardActor.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Player;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AWhiteboardActor_EndInteractionForPlayer_Statics::NewProp_Player = { "Player", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WhiteboardActor_eventEndInteractionForPlayer_Parms, Player), Z_Construct_UClass_APawn_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AWhiteboardActor_EndInteractionForPlayer_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AWhiteboardActor_EndInteractionForPlayer_Statics::NewProp_Player,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AWhiteboardActor_EndInteractionForPlayer_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AWhiteboardActor_EndInteractionForPlayer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AWhiteboardActor, nullptr, "EndInteractionForPlayer", nullptr, nullptr, Z_Construct_UFunction_AWhiteboardActor_EndInteractionForPlayer_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AWhiteboardActor_EndInteractionForPlayer_Statics::PropPointers), sizeof(Z_Construct_UFunction_AWhiteboardActor_EndInteractionForPlayer_Statics::WhiteboardActor_eventEndInteractionForPlayer_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AWhiteboardActor_EndInteractionForPlayer_Statics::Function_MetaDataParams), Z_Construct_UFunction_AWhiteboardActor_EndInteractionForPlayer_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AWhiteboardActor_EndInteractionForPlayer_Statics::WhiteboardActor_eventEndInteractionForPlayer_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AWhiteboardActor_EndInteractionForPlayer()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AWhiteboardActor_EndInteractionForPlayer_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AWhiteboardActor::execEndInteractionForPlayer)
{
	P_GET_OBJECT(APawn,Z_Param_Player);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->EndInteractionForPlayer(Z_Param_Player);
	P_NATIVE_END;
}
// End Class AWhiteboardActor Function EndInteractionForPlayer

// Begin Class AWhiteboardActor Function ExportToPNG
struct Z_Construct_UFunction_AWhiteboardActor_ExportToPNG_Statics
{
	struct WhiteboardActor_eventExportToPNG_Parms
	{
		FString FilePath;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Whiteboard" },
		{ "ModuleRelativePath", "Public/Actor/WhiteboardActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FilePath_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_FilePath;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AWhiteboardActor_ExportToPNG_Statics::NewProp_FilePath = { "FilePath", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WhiteboardActor_eventExportToPNG_Parms, FilePath), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FilePath_MetaData), NewProp_FilePath_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AWhiteboardActor_ExportToPNG_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AWhiteboardActor_ExportToPNG_Statics::NewProp_FilePath,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AWhiteboardActor_ExportToPNG_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AWhiteboardActor_ExportToPNG_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AWhiteboardActor, nullptr, "ExportToPNG", nullptr, nullptr, Z_Construct_UFunction_AWhiteboardActor_ExportToPNG_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AWhiteboardActor_ExportToPNG_Statics::PropPointers), sizeof(Z_Construct_UFunction_AWhiteboardActor_ExportToPNG_Statics::WhiteboardActor_eventExportToPNG_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AWhiteboardActor_ExportToPNG_Statics::Function_MetaDataParams), Z_Construct_UFunction_AWhiteboardActor_ExportToPNG_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AWhiteboardActor_ExportToPNG_Statics::WhiteboardActor_eventExportToPNG_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AWhiteboardActor_ExportToPNG()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AWhiteboardActor_ExportToPNG_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AWhiteboardActor::execExportToPNG)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_FilePath);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ExportToPNG(Z_Param_FilePath);
	P_NATIVE_END;
}
// End Class AWhiteboardActor Function ExportToPNG

// Begin Class AWhiteboardActor Function ExportToSVG
struct Z_Construct_UFunction_AWhiteboardActor_ExportToSVG_Statics
{
	struct WhiteboardActor_eventExportToSVG_Parms
	{
		FString FilePath;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Whiteboard" },
		{ "ModuleRelativePath", "Public/Actor/WhiteboardActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FilePath_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_FilePath;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AWhiteboardActor_ExportToSVG_Statics::NewProp_FilePath = { "FilePath", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WhiteboardActor_eventExportToSVG_Parms, FilePath), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FilePath_MetaData), NewProp_FilePath_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AWhiteboardActor_ExportToSVG_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AWhiteboardActor_ExportToSVG_Statics::NewProp_FilePath,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AWhiteboardActor_ExportToSVG_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AWhiteboardActor_ExportToSVG_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AWhiteboardActor, nullptr, "ExportToSVG", nullptr, nullptr, Z_Construct_UFunction_AWhiteboardActor_ExportToSVG_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AWhiteboardActor_ExportToSVG_Statics::PropPointers), sizeof(Z_Construct_UFunction_AWhiteboardActor_ExportToSVG_Statics::WhiteboardActor_eventExportToSVG_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AWhiteboardActor_ExportToSVG_Statics::Function_MetaDataParams), Z_Construct_UFunction_AWhiteboardActor_ExportToSVG_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AWhiteboardActor_ExportToSVG_Statics::WhiteboardActor_eventExportToSVG_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AWhiteboardActor_ExportToSVG()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AWhiteboardActor_ExportToSVG_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AWhiteboardActor::execExportToSVG)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_FilePath);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ExportToSVG(Z_Param_FilePath);
	P_NATIVE_END;
}
// End Class AWhiteboardActor Function ExportToSVG

// Begin Class AWhiteboardActor Function GetInteractingPlayerCount
struct Z_Construct_UFunction_AWhiteboardActor_GetInteractingPlayerCount_Statics
{
	struct WhiteboardActor_eventGetInteractingPlayerCount_Parms
	{
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Whiteboard" },
		{ "ModuleRelativePath", "Public/Actor/WhiteboardActor.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AWhiteboardActor_GetInteractingPlayerCount_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WhiteboardActor_eventGetInteractingPlayerCount_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AWhiteboardActor_GetInteractingPlayerCount_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AWhiteboardActor_GetInteractingPlayerCount_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AWhiteboardActor_GetInteractingPlayerCount_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AWhiteboardActor_GetInteractingPlayerCount_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AWhiteboardActor, nullptr, "GetInteractingPlayerCount", nullptr, nullptr, Z_Construct_UFunction_AWhiteboardActor_GetInteractingPlayerCount_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AWhiteboardActor_GetInteractingPlayerCount_Statics::PropPointers), sizeof(Z_Construct_UFunction_AWhiteboardActor_GetInteractingPlayerCount_Statics::WhiteboardActor_eventGetInteractingPlayerCount_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AWhiteboardActor_GetInteractingPlayerCount_Statics::Function_MetaDataParams), Z_Construct_UFunction_AWhiteboardActor_GetInteractingPlayerCount_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AWhiteboardActor_GetInteractingPlayerCount_Statics::WhiteboardActor_eventGetInteractingPlayerCount_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AWhiteboardActor_GetInteractingPlayerCount()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AWhiteboardActor_GetInteractingPlayerCount_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AWhiteboardActor::execGetInteractingPlayerCount)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->GetInteractingPlayerCount();
	P_NATIVE_END;
}
// End Class AWhiteboardActor Function GetInteractingPlayerCount

// Begin Class AWhiteboardActor Function IsPlayerInRange
struct Z_Construct_UFunction_AWhiteboardActor_IsPlayerInRange_Statics
{
	struct WhiteboardActor_eventIsPlayerInRange_Parms
	{
		APlayerController* PlayerController;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Whiteboard" },
		{ "ModuleRelativePath", "Public/Actor/WhiteboardActor.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PlayerController;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AWhiteboardActor_IsPlayerInRange_Statics::NewProp_PlayerController = { "PlayerController", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WhiteboardActor_eventIsPlayerInRange_Parms, PlayerController), Z_Construct_UClass_APlayerController_NoRegister, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_AWhiteboardActor_IsPlayerInRange_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((WhiteboardActor_eventIsPlayerInRange_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AWhiteboardActor_IsPlayerInRange_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(WhiteboardActor_eventIsPlayerInRange_Parms), &Z_Construct_UFunction_AWhiteboardActor_IsPlayerInRange_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AWhiteboardActor_IsPlayerInRange_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AWhiteboardActor_IsPlayerInRange_Statics::NewProp_PlayerController,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AWhiteboardActor_IsPlayerInRange_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AWhiteboardActor_IsPlayerInRange_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AWhiteboardActor_IsPlayerInRange_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AWhiteboardActor, nullptr, "IsPlayerInRange", nullptr, nullptr, Z_Construct_UFunction_AWhiteboardActor_IsPlayerInRange_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AWhiteboardActor_IsPlayerInRange_Statics::PropPointers), sizeof(Z_Construct_UFunction_AWhiteboardActor_IsPlayerInRange_Statics::WhiteboardActor_eventIsPlayerInRange_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AWhiteboardActor_IsPlayerInRange_Statics::Function_MetaDataParams), Z_Construct_UFunction_AWhiteboardActor_IsPlayerInRange_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AWhiteboardActor_IsPlayerInRange_Statics::WhiteboardActor_eventIsPlayerInRange_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AWhiteboardActor_IsPlayerInRange()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AWhiteboardActor_IsPlayerInRange_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AWhiteboardActor::execIsPlayerInRange)
{
	P_GET_OBJECT(APlayerController,Z_Param_PlayerController);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->IsPlayerInRange(Z_Param_PlayerController);
	P_NATIVE_END;
}
// End Class AWhiteboardActor Function IsPlayerInRange

// Begin Class AWhiteboardActor Function IsPlayerInteracting
struct Z_Construct_UFunction_AWhiteboardActor_IsPlayerInteracting_Statics
{
	struct WhiteboardActor_eventIsPlayerInteracting_Parms
	{
		APawn* Player;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Whiteboard" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Multi-player interaction functions\n" },
#endif
		{ "ModuleRelativePath", "Public/Actor/WhiteboardActor.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Multi-player interaction functions" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Player;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AWhiteboardActor_IsPlayerInteracting_Statics::NewProp_Player = { "Player", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WhiteboardActor_eventIsPlayerInteracting_Parms, Player), Z_Construct_UClass_APawn_NoRegister, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_AWhiteboardActor_IsPlayerInteracting_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((WhiteboardActor_eventIsPlayerInteracting_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AWhiteboardActor_IsPlayerInteracting_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(WhiteboardActor_eventIsPlayerInteracting_Parms), &Z_Construct_UFunction_AWhiteboardActor_IsPlayerInteracting_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AWhiteboardActor_IsPlayerInteracting_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AWhiteboardActor_IsPlayerInteracting_Statics::NewProp_Player,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AWhiteboardActor_IsPlayerInteracting_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AWhiteboardActor_IsPlayerInteracting_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AWhiteboardActor_IsPlayerInteracting_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AWhiteboardActor, nullptr, "IsPlayerInteracting", nullptr, nullptr, Z_Construct_UFunction_AWhiteboardActor_IsPlayerInteracting_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AWhiteboardActor_IsPlayerInteracting_Statics::PropPointers), sizeof(Z_Construct_UFunction_AWhiteboardActor_IsPlayerInteracting_Statics::WhiteboardActor_eventIsPlayerInteracting_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AWhiteboardActor_IsPlayerInteracting_Statics::Function_MetaDataParams), Z_Construct_UFunction_AWhiteboardActor_IsPlayerInteracting_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AWhiteboardActor_IsPlayerInteracting_Statics::WhiteboardActor_eventIsPlayerInteracting_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AWhiteboardActor_IsPlayerInteracting()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AWhiteboardActor_IsPlayerInteracting_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AWhiteboardActor::execIsPlayerInteracting)
{
	P_GET_OBJECT(APawn,Z_Param_Player);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->IsPlayerInteracting(Z_Param_Player);
	P_NATIVE_END;
}
// End Class AWhiteboardActor Function IsPlayerInteracting

// Begin Class AWhiteboardActor Function IsShapeTool
struct Z_Construct_UFunction_AWhiteboardActor_IsShapeTool_Statics
{
	struct WhiteboardActor_eventIsShapeTool_Parms
	{
		EDrawingTool Tool;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Whiteboard" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// NEW: Helper functions for shape tools\n" },
#endif
		{ "ModuleRelativePath", "Public/Actor/WhiteboardActor.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "NEW: Helper functions for shape tools" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_Tool_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Tool;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AWhiteboardActor_IsShapeTool_Statics::NewProp_Tool_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_AWhiteboardActor_IsShapeTool_Statics::NewProp_Tool = { "Tool", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WhiteboardActor_eventIsShapeTool_Parms, Tool), Z_Construct_UEnum_AdvancedDrawingBoard_EDrawingTool, METADATA_PARAMS(0, nullptr) }; // 3667291816
void Z_Construct_UFunction_AWhiteboardActor_IsShapeTool_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((WhiteboardActor_eventIsShapeTool_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AWhiteboardActor_IsShapeTool_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(WhiteboardActor_eventIsShapeTool_Parms), &Z_Construct_UFunction_AWhiteboardActor_IsShapeTool_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AWhiteboardActor_IsShapeTool_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AWhiteboardActor_IsShapeTool_Statics::NewProp_Tool_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AWhiteboardActor_IsShapeTool_Statics::NewProp_Tool,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AWhiteboardActor_IsShapeTool_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AWhiteboardActor_IsShapeTool_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AWhiteboardActor_IsShapeTool_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AWhiteboardActor, nullptr, "IsShapeTool", nullptr, nullptr, Z_Construct_UFunction_AWhiteboardActor_IsShapeTool_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AWhiteboardActor_IsShapeTool_Statics::PropPointers), sizeof(Z_Construct_UFunction_AWhiteboardActor_IsShapeTool_Statics::WhiteboardActor_eventIsShapeTool_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AWhiteboardActor_IsShapeTool_Statics::Function_MetaDataParams), Z_Construct_UFunction_AWhiteboardActor_IsShapeTool_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AWhiteboardActor_IsShapeTool_Statics::WhiteboardActor_eventIsShapeTool_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AWhiteboardActor_IsShapeTool()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AWhiteboardActor_IsShapeTool_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AWhiteboardActor::execIsShapeTool)
{
	P_GET_ENUM(EDrawingTool,Z_Param_Tool);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->IsShapeTool(EDrawingTool(Z_Param_Tool));
	P_NATIVE_END;
}
// End Class AWhiteboardActor Function IsShapeTool

// Begin Class AWhiteboardActor Function Multicast_ClearWhiteboard
static const FName NAME_AWhiteboardActor_Multicast_ClearWhiteboard = FName(TEXT("Multicast_ClearWhiteboard"));
void AWhiteboardActor::Multicast_ClearWhiteboard()
{
	UFunction* Func = FindFunctionChecked(NAME_AWhiteboardActor_Multicast_ClearWhiteboard);
	ProcessEvent(Func,NULL);
}
struct Z_Construct_UFunction_AWhiteboardActor_Multicast_ClearWhiteboard_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Actor/WhiteboardActor.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AWhiteboardActor_Multicast_ClearWhiteboard_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AWhiteboardActor, nullptr, "Multicast_ClearWhiteboard", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00024CC0, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AWhiteboardActor_Multicast_ClearWhiteboard_Statics::Function_MetaDataParams), Z_Construct_UFunction_AWhiteboardActor_Multicast_ClearWhiteboard_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_AWhiteboardActor_Multicast_ClearWhiteboard()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AWhiteboardActor_Multicast_ClearWhiteboard_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AWhiteboardActor::execMulticast_ClearWhiteboard)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Multicast_ClearWhiteboard_Implementation();
	P_NATIVE_END;
}
// End Class AWhiteboardActor Function Multicast_ClearWhiteboard

// Begin Class AWhiteboardActor Function Multicast_ContinueDrawing
struct WhiteboardActor_eventMulticast_ContinueDrawing_Parms
{
	FVector2D CanvasPosition;
	int32 StrokeID;
};
static const FName NAME_AWhiteboardActor_Multicast_ContinueDrawing = FName(TEXT("Multicast_ContinueDrawing"));
void AWhiteboardActor::Multicast_ContinueDrawing(FVector2D const& CanvasPosition, int32 StrokeID)
{
	WhiteboardActor_eventMulticast_ContinueDrawing_Parms Parms;
	Parms.CanvasPosition=CanvasPosition;
	Parms.StrokeID=StrokeID;
	UFunction* Func = FindFunctionChecked(NAME_AWhiteboardActor_Multicast_ContinueDrawing);
	ProcessEvent(Func,&Parms);
}
struct Z_Construct_UFunction_AWhiteboardActor_Multicast_ContinueDrawing_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Actor/WhiteboardActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CanvasPosition_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_CanvasPosition;
	static const UECodeGen_Private::FIntPropertyParams NewProp_StrokeID;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AWhiteboardActor_Multicast_ContinueDrawing_Statics::NewProp_CanvasPosition = { "CanvasPosition", nullptr, (EPropertyFlags)0x0010000008000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WhiteboardActor_eventMulticast_ContinueDrawing_Parms, CanvasPosition), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CanvasPosition_MetaData), NewProp_CanvasPosition_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AWhiteboardActor_Multicast_ContinueDrawing_Statics::NewProp_StrokeID = { "StrokeID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WhiteboardActor_eventMulticast_ContinueDrawing_Parms, StrokeID), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AWhiteboardActor_Multicast_ContinueDrawing_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AWhiteboardActor_Multicast_ContinueDrawing_Statics::NewProp_CanvasPosition,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AWhiteboardActor_Multicast_ContinueDrawing_Statics::NewProp_StrokeID,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AWhiteboardActor_Multicast_ContinueDrawing_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AWhiteboardActor_Multicast_ContinueDrawing_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AWhiteboardActor, nullptr, "Multicast_ContinueDrawing", nullptr, nullptr, Z_Construct_UFunction_AWhiteboardActor_Multicast_ContinueDrawing_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AWhiteboardActor_Multicast_ContinueDrawing_Statics::PropPointers), sizeof(WhiteboardActor_eventMulticast_ContinueDrawing_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00824CC0, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AWhiteboardActor_Multicast_ContinueDrawing_Statics::Function_MetaDataParams), Z_Construct_UFunction_AWhiteboardActor_Multicast_ContinueDrawing_Statics::Function_MetaDataParams) };
static_assert(sizeof(WhiteboardActor_eventMulticast_ContinueDrawing_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AWhiteboardActor_Multicast_ContinueDrawing()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AWhiteboardActor_Multicast_ContinueDrawing_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AWhiteboardActor::execMulticast_ContinueDrawing)
{
	P_GET_STRUCT(FVector2D,Z_Param_CanvasPosition);
	P_GET_PROPERTY(FIntProperty,Z_Param_StrokeID);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Multicast_ContinueDrawing_Implementation(Z_Param_CanvasPosition,Z_Param_StrokeID);
	P_NATIVE_END;
}
// End Class AWhiteboardActor Function Multicast_ContinueDrawing

// Begin Class AWhiteboardActor Function Multicast_EndDrawing
struct WhiteboardActor_eventMulticast_EndDrawing_Parms
{
	int32 StrokeID;
};
static const FName NAME_AWhiteboardActor_Multicast_EndDrawing = FName(TEXT("Multicast_EndDrawing"));
void AWhiteboardActor::Multicast_EndDrawing(int32 StrokeID)
{
	WhiteboardActor_eventMulticast_EndDrawing_Parms Parms;
	Parms.StrokeID=StrokeID;
	UFunction* Func = FindFunctionChecked(NAME_AWhiteboardActor_Multicast_EndDrawing);
	ProcessEvent(Func,&Parms);
}
struct Z_Construct_UFunction_AWhiteboardActor_Multicast_EndDrawing_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Actor/WhiteboardActor.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_StrokeID;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AWhiteboardActor_Multicast_EndDrawing_Statics::NewProp_StrokeID = { "StrokeID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WhiteboardActor_eventMulticast_EndDrawing_Parms, StrokeID), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AWhiteboardActor_Multicast_EndDrawing_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AWhiteboardActor_Multicast_EndDrawing_Statics::NewProp_StrokeID,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AWhiteboardActor_Multicast_EndDrawing_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AWhiteboardActor_Multicast_EndDrawing_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AWhiteboardActor, nullptr, "Multicast_EndDrawing", nullptr, nullptr, Z_Construct_UFunction_AWhiteboardActor_Multicast_EndDrawing_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AWhiteboardActor_Multicast_EndDrawing_Statics::PropPointers), sizeof(WhiteboardActor_eventMulticast_EndDrawing_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00024CC0, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AWhiteboardActor_Multicast_EndDrawing_Statics::Function_MetaDataParams), Z_Construct_UFunction_AWhiteboardActor_Multicast_EndDrawing_Statics::Function_MetaDataParams) };
static_assert(sizeof(WhiteboardActor_eventMulticast_EndDrawing_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AWhiteboardActor_Multicast_EndDrawing()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AWhiteboardActor_Multicast_EndDrawing_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AWhiteboardActor::execMulticast_EndDrawing)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_StrokeID);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Multicast_EndDrawing_Implementation(Z_Param_StrokeID);
	P_NATIVE_END;
}
// End Class AWhiteboardActor Function Multicast_EndDrawing

// Begin Class AWhiteboardActor Function Multicast_StartDrawing
struct WhiteboardActor_eventMulticast_StartDrawing_Parms
{
	FVector2D CanvasPosition;
	EDrawingTool Tool;
	FLinearColor Color;
	float Size;
	int32 BrushTextureIndex;
	int32 FigureTextureIndex;
	int32 StrokeID;
};
static const FName NAME_AWhiteboardActor_Multicast_StartDrawing = FName(TEXT("Multicast_StartDrawing"));
void AWhiteboardActor::Multicast_StartDrawing(FVector2D const& CanvasPosition, EDrawingTool Tool, FLinearColor Color, float Size, int32 BrushTextureIndex, int32 FigureTextureIndex, int32 StrokeID)
{
	WhiteboardActor_eventMulticast_StartDrawing_Parms Parms;
	Parms.CanvasPosition=CanvasPosition;
	Parms.Tool=Tool;
	Parms.Color=Color;
	Parms.Size=Size;
	Parms.BrushTextureIndex=BrushTextureIndex;
	Parms.FigureTextureIndex=FigureTextureIndex;
	Parms.StrokeID=StrokeID;
	UFunction* Func = FindFunctionChecked(NAME_AWhiteboardActor_Multicast_StartDrawing);
	ProcessEvent(Func,&Parms);
}
struct Z_Construct_UFunction_AWhiteboardActor_Multicast_StartDrawing_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Multicast functions to update all clients\n" },
#endif
		{ "ModuleRelativePath", "Public/Actor/WhiteboardActor.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Multicast functions to update all clients" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CanvasPosition_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_CanvasPosition;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Tool_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Tool;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Color;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Size;
	static const UECodeGen_Private::FIntPropertyParams NewProp_BrushTextureIndex;
	static const UECodeGen_Private::FIntPropertyParams NewProp_FigureTextureIndex;
	static const UECodeGen_Private::FIntPropertyParams NewProp_StrokeID;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AWhiteboardActor_Multicast_StartDrawing_Statics::NewProp_CanvasPosition = { "CanvasPosition", nullptr, (EPropertyFlags)0x0010000008000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WhiteboardActor_eventMulticast_StartDrawing_Parms, CanvasPosition), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CanvasPosition_MetaData), NewProp_CanvasPosition_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AWhiteboardActor_Multicast_StartDrawing_Statics::NewProp_Tool_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_AWhiteboardActor_Multicast_StartDrawing_Statics::NewProp_Tool = { "Tool", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WhiteboardActor_eventMulticast_StartDrawing_Parms, Tool), Z_Construct_UEnum_AdvancedDrawingBoard_EDrawingTool, METADATA_PARAMS(0, nullptr) }; // 3667291816
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AWhiteboardActor_Multicast_StartDrawing_Statics::NewProp_Color = { "Color", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WhiteboardActor_eventMulticast_StartDrawing_Parms, Color), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AWhiteboardActor_Multicast_StartDrawing_Statics::NewProp_Size = { "Size", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WhiteboardActor_eventMulticast_StartDrawing_Parms, Size), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AWhiteboardActor_Multicast_StartDrawing_Statics::NewProp_BrushTextureIndex = { "BrushTextureIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WhiteboardActor_eventMulticast_StartDrawing_Parms, BrushTextureIndex), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AWhiteboardActor_Multicast_StartDrawing_Statics::NewProp_FigureTextureIndex = { "FigureTextureIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WhiteboardActor_eventMulticast_StartDrawing_Parms, FigureTextureIndex), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AWhiteboardActor_Multicast_StartDrawing_Statics::NewProp_StrokeID = { "StrokeID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WhiteboardActor_eventMulticast_StartDrawing_Parms, StrokeID), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AWhiteboardActor_Multicast_StartDrawing_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AWhiteboardActor_Multicast_StartDrawing_Statics::NewProp_CanvasPosition,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AWhiteboardActor_Multicast_StartDrawing_Statics::NewProp_Tool_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AWhiteboardActor_Multicast_StartDrawing_Statics::NewProp_Tool,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AWhiteboardActor_Multicast_StartDrawing_Statics::NewProp_Color,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AWhiteboardActor_Multicast_StartDrawing_Statics::NewProp_Size,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AWhiteboardActor_Multicast_StartDrawing_Statics::NewProp_BrushTextureIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AWhiteboardActor_Multicast_StartDrawing_Statics::NewProp_FigureTextureIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AWhiteboardActor_Multicast_StartDrawing_Statics::NewProp_StrokeID,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AWhiteboardActor_Multicast_StartDrawing_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AWhiteboardActor_Multicast_StartDrawing_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AWhiteboardActor, nullptr, "Multicast_StartDrawing", nullptr, nullptr, Z_Construct_UFunction_AWhiteboardActor_Multicast_StartDrawing_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AWhiteboardActor_Multicast_StartDrawing_Statics::PropPointers), sizeof(WhiteboardActor_eventMulticast_StartDrawing_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00824CC0, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AWhiteboardActor_Multicast_StartDrawing_Statics::Function_MetaDataParams), Z_Construct_UFunction_AWhiteboardActor_Multicast_StartDrawing_Statics::Function_MetaDataParams) };
static_assert(sizeof(WhiteboardActor_eventMulticast_StartDrawing_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AWhiteboardActor_Multicast_StartDrawing()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AWhiteboardActor_Multicast_StartDrawing_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AWhiteboardActor::execMulticast_StartDrawing)
{
	P_GET_STRUCT(FVector2D,Z_Param_CanvasPosition);
	P_GET_ENUM(EDrawingTool,Z_Param_Tool);
	P_GET_STRUCT(FLinearColor,Z_Param_Color);
	P_GET_PROPERTY(FFloatProperty,Z_Param_Size);
	P_GET_PROPERTY(FIntProperty,Z_Param_BrushTextureIndex);
	P_GET_PROPERTY(FIntProperty,Z_Param_FigureTextureIndex);
	P_GET_PROPERTY(FIntProperty,Z_Param_StrokeID);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Multicast_StartDrawing_Implementation(Z_Param_CanvasPosition,EDrawingTool(Z_Param_Tool),Z_Param_Color,Z_Param_Size,Z_Param_BrushTextureIndex,Z_Param_FigureTextureIndex,Z_Param_StrokeID);
	P_NATIVE_END;
}
// End Class AWhiteboardActor Function Multicast_StartDrawing

// Begin Class AWhiteboardActor Function Multicast_SyncWhiteboardState
struct WhiteboardActor_eventMulticast_SyncWhiteboardState_Parms
{
	TArray<FStroke> History;
	int32 HistoryIndex;
};
static const FName NAME_AWhiteboardActor_Multicast_SyncWhiteboardState = FName(TEXT("Multicast_SyncWhiteboardState"));
void AWhiteboardActor::Multicast_SyncWhiteboardState(TArray<FStroke> const& History, int32 HistoryIndex)
{
	WhiteboardActor_eventMulticast_SyncWhiteboardState_Parms Parms;
	Parms.History=History;
	Parms.HistoryIndex=HistoryIndex;
	UFunction* Func = FindFunctionChecked(NAME_AWhiteboardActor_Multicast_SyncWhiteboardState);
	ProcessEvent(Func,&Parms);
}
struct Z_Construct_UFunction_AWhiteboardActor_Multicast_SyncWhiteboardState_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Actor/WhiteboardActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_History_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_History_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_History;
	static const UECodeGen_Private::FIntPropertyParams NewProp_HistoryIndex;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AWhiteboardActor_Multicast_SyncWhiteboardState_Statics::NewProp_History_Inner = { "History", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FStroke, METADATA_PARAMS(0, nullptr) }; // 2697397385
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_AWhiteboardActor_Multicast_SyncWhiteboardState_Statics::NewProp_History = { "History", nullptr, (EPropertyFlags)0x0010000008000082, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WhiteboardActor_eventMulticast_SyncWhiteboardState_Parms, History), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_History_MetaData), NewProp_History_MetaData) }; // 2697397385
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AWhiteboardActor_Multicast_SyncWhiteboardState_Statics::NewProp_HistoryIndex = { "HistoryIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WhiteboardActor_eventMulticast_SyncWhiteboardState_Parms, HistoryIndex), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AWhiteboardActor_Multicast_SyncWhiteboardState_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AWhiteboardActor_Multicast_SyncWhiteboardState_Statics::NewProp_History_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AWhiteboardActor_Multicast_SyncWhiteboardState_Statics::NewProp_History,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AWhiteboardActor_Multicast_SyncWhiteboardState_Statics::NewProp_HistoryIndex,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AWhiteboardActor_Multicast_SyncWhiteboardState_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AWhiteboardActor_Multicast_SyncWhiteboardState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AWhiteboardActor, nullptr, "Multicast_SyncWhiteboardState", nullptr, nullptr, Z_Construct_UFunction_AWhiteboardActor_Multicast_SyncWhiteboardState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AWhiteboardActor_Multicast_SyncWhiteboardState_Statics::PropPointers), sizeof(WhiteboardActor_eventMulticast_SyncWhiteboardState_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00024CC0, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AWhiteboardActor_Multicast_SyncWhiteboardState_Statics::Function_MetaDataParams), Z_Construct_UFunction_AWhiteboardActor_Multicast_SyncWhiteboardState_Statics::Function_MetaDataParams) };
static_assert(sizeof(WhiteboardActor_eventMulticast_SyncWhiteboardState_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AWhiteboardActor_Multicast_SyncWhiteboardState()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AWhiteboardActor_Multicast_SyncWhiteboardState_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AWhiteboardActor::execMulticast_SyncWhiteboardState)
{
	P_GET_TARRAY(FStroke,Z_Param_History);
	P_GET_PROPERTY(FIntProperty,Z_Param_HistoryIndex);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Multicast_SyncWhiteboardState_Implementation(Z_Param_History,Z_Param_HistoryIndex);
	P_NATIVE_END;
}
// End Class AWhiteboardActor Function Multicast_SyncWhiteboardState

// Begin Class AWhiteboardActor Function Multicast_UpdateDrawing
struct WhiteboardActor_eventMulticast_UpdateDrawing_Parms
{
	FStroke NewStroke;
};
static const FName NAME_AWhiteboardActor_Multicast_UpdateDrawing = FName(TEXT("Multicast_UpdateDrawing"));
void AWhiteboardActor::Multicast_UpdateDrawing(FStroke const& NewStroke)
{
	WhiteboardActor_eventMulticast_UpdateDrawing_Parms Parms;
	Parms.NewStroke=NewStroke;
	UFunction* Func = FindFunctionChecked(NAME_AWhiteboardActor_Multicast_UpdateDrawing);
	ProcessEvent(Func,&Parms);
}
struct Z_Construct_UFunction_AWhiteboardActor_Multicast_UpdateDrawing_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Actor/WhiteboardActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NewStroke_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_NewStroke;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AWhiteboardActor_Multicast_UpdateDrawing_Statics::NewProp_NewStroke = { "NewStroke", nullptr, (EPropertyFlags)0x0010000008000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WhiteboardActor_eventMulticast_UpdateDrawing_Parms, NewStroke), Z_Construct_UScriptStruct_FStroke, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NewStroke_MetaData), NewProp_NewStroke_MetaData) }; // 2697397385
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AWhiteboardActor_Multicast_UpdateDrawing_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AWhiteboardActor_Multicast_UpdateDrawing_Statics::NewProp_NewStroke,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AWhiteboardActor_Multicast_UpdateDrawing_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AWhiteboardActor_Multicast_UpdateDrawing_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AWhiteboardActor, nullptr, "Multicast_UpdateDrawing", nullptr, nullptr, Z_Construct_UFunction_AWhiteboardActor_Multicast_UpdateDrawing_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AWhiteboardActor_Multicast_UpdateDrawing_Statics::PropPointers), sizeof(WhiteboardActor_eventMulticast_UpdateDrawing_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00024CC0, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AWhiteboardActor_Multicast_UpdateDrawing_Statics::Function_MetaDataParams), Z_Construct_UFunction_AWhiteboardActor_Multicast_UpdateDrawing_Statics::Function_MetaDataParams) };
static_assert(sizeof(WhiteboardActor_eventMulticast_UpdateDrawing_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AWhiteboardActor_Multicast_UpdateDrawing()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AWhiteboardActor_Multicast_UpdateDrawing_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AWhiteboardActor::execMulticast_UpdateDrawing)
{
	P_GET_STRUCT(FStroke,Z_Param_NewStroke);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Multicast_UpdateDrawing_Implementation(Z_Param_NewStroke);
	P_NATIVE_END;
}
// End Class AWhiteboardActor Function Multicast_UpdateDrawing

// Begin Class AWhiteboardActor Function Multicast_UpdateHistory
struct WhiteboardActor_eventMulticast_UpdateHistory_Parms
{
	TArray<FStroke> NewHistory;
	int32 NewHistoryIndex;
};
static const FName NAME_AWhiteboardActor_Multicast_UpdateHistory = FName(TEXT("Multicast_UpdateHistory"));
void AWhiteboardActor::Multicast_UpdateHistory(TArray<FStroke> const& NewHistory, int32 NewHistoryIndex)
{
	WhiteboardActor_eventMulticast_UpdateHistory_Parms Parms;
	Parms.NewHistory=NewHistory;
	Parms.NewHistoryIndex=NewHistoryIndex;
	UFunction* Func = FindFunctionChecked(NAME_AWhiteboardActor_Multicast_UpdateHistory);
	ProcessEvent(Func,&Parms);
}
struct Z_Construct_UFunction_AWhiteboardActor_Multicast_UpdateHistory_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Actor/WhiteboardActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NewHistory_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_NewHistory_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_NewHistory;
	static const UECodeGen_Private::FIntPropertyParams NewProp_NewHistoryIndex;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AWhiteboardActor_Multicast_UpdateHistory_Statics::NewProp_NewHistory_Inner = { "NewHistory", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FStroke, METADATA_PARAMS(0, nullptr) }; // 2697397385
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_AWhiteboardActor_Multicast_UpdateHistory_Statics::NewProp_NewHistory = { "NewHistory", nullptr, (EPropertyFlags)0x0010000008000082, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WhiteboardActor_eventMulticast_UpdateHistory_Parms, NewHistory), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NewHistory_MetaData), NewProp_NewHistory_MetaData) }; // 2697397385
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AWhiteboardActor_Multicast_UpdateHistory_Statics::NewProp_NewHistoryIndex = { "NewHistoryIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WhiteboardActor_eventMulticast_UpdateHistory_Parms, NewHistoryIndex), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AWhiteboardActor_Multicast_UpdateHistory_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AWhiteboardActor_Multicast_UpdateHistory_Statics::NewProp_NewHistory_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AWhiteboardActor_Multicast_UpdateHistory_Statics::NewProp_NewHistory,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AWhiteboardActor_Multicast_UpdateHistory_Statics::NewProp_NewHistoryIndex,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AWhiteboardActor_Multicast_UpdateHistory_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AWhiteboardActor_Multicast_UpdateHistory_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AWhiteboardActor, nullptr, "Multicast_UpdateHistory", nullptr, nullptr, Z_Construct_UFunction_AWhiteboardActor_Multicast_UpdateHistory_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AWhiteboardActor_Multicast_UpdateHistory_Statics::PropPointers), sizeof(WhiteboardActor_eventMulticast_UpdateHistory_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00024CC0, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AWhiteboardActor_Multicast_UpdateHistory_Statics::Function_MetaDataParams), Z_Construct_UFunction_AWhiteboardActor_Multicast_UpdateHistory_Statics::Function_MetaDataParams) };
static_assert(sizeof(WhiteboardActor_eventMulticast_UpdateHistory_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AWhiteboardActor_Multicast_UpdateHistory()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AWhiteboardActor_Multicast_UpdateHistory_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AWhiteboardActor::execMulticast_UpdateHistory)
{
	P_GET_TARRAY(FStroke,Z_Param_NewHistory);
	P_GET_PROPERTY(FIntProperty,Z_Param_NewHistoryIndex);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Multicast_UpdateHistory_Implementation(Z_Param_NewHistory,Z_Param_NewHistoryIndex);
	P_NATIVE_END;
}
// End Class AWhiteboardActor Function Multicast_UpdateHistory

// Begin Class AWhiteboardActor Function Multicast_UpdateShapePreview
struct WhiteboardActor_eventMulticast_UpdateShapePreview_Parms
{
	FVector2D StartPos;
	FVector2D EndPos;
	EDrawingTool Tool;
	FLinearColor Color;
	float Size;
	int32 StrokeID;
};
static const FName NAME_AWhiteboardActor_Multicast_UpdateShapePreview = FName(TEXT("Multicast_UpdateShapePreview"));
void AWhiteboardActor::Multicast_UpdateShapePreview(FVector2D const& StartPos, FVector2D const& EndPos, EDrawingTool Tool, FLinearColor Color, float Size, int32 StrokeID)
{
	WhiteboardActor_eventMulticast_UpdateShapePreview_Parms Parms;
	Parms.StartPos=StartPos;
	Parms.EndPos=EndPos;
	Parms.Tool=Tool;
	Parms.Color=Color;
	Parms.Size=Size;
	Parms.StrokeID=StrokeID;
	UFunction* Func = FindFunctionChecked(NAME_AWhiteboardActor_Multicast_UpdateShapePreview);
	ProcessEvent(Func,&Parms);
}
struct Z_Construct_UFunction_AWhiteboardActor_Multicast_UpdateShapePreview_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// NEW: Shape preview functions\n" },
#endif
		{ "ModuleRelativePath", "Public/Actor/WhiteboardActor.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "NEW: Shape preview functions" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StartPos_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EndPos_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_StartPos;
	static const UECodeGen_Private::FStructPropertyParams NewProp_EndPos;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Tool_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Tool;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Color;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Size;
	static const UECodeGen_Private::FIntPropertyParams NewProp_StrokeID;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AWhiteboardActor_Multicast_UpdateShapePreview_Statics::NewProp_StartPos = { "StartPos", nullptr, (EPropertyFlags)0x0010000008000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WhiteboardActor_eventMulticast_UpdateShapePreview_Parms, StartPos), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StartPos_MetaData), NewProp_StartPos_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AWhiteboardActor_Multicast_UpdateShapePreview_Statics::NewProp_EndPos = { "EndPos", nullptr, (EPropertyFlags)0x0010000008000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WhiteboardActor_eventMulticast_UpdateShapePreview_Parms, EndPos), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EndPos_MetaData), NewProp_EndPos_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AWhiteboardActor_Multicast_UpdateShapePreview_Statics::NewProp_Tool_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_AWhiteboardActor_Multicast_UpdateShapePreview_Statics::NewProp_Tool = { "Tool", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WhiteboardActor_eventMulticast_UpdateShapePreview_Parms, Tool), Z_Construct_UEnum_AdvancedDrawingBoard_EDrawingTool, METADATA_PARAMS(0, nullptr) }; // 3667291816
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AWhiteboardActor_Multicast_UpdateShapePreview_Statics::NewProp_Color = { "Color", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WhiteboardActor_eventMulticast_UpdateShapePreview_Parms, Color), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AWhiteboardActor_Multicast_UpdateShapePreview_Statics::NewProp_Size = { "Size", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WhiteboardActor_eventMulticast_UpdateShapePreview_Parms, Size), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AWhiteboardActor_Multicast_UpdateShapePreview_Statics::NewProp_StrokeID = { "StrokeID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WhiteboardActor_eventMulticast_UpdateShapePreview_Parms, StrokeID), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AWhiteboardActor_Multicast_UpdateShapePreview_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AWhiteboardActor_Multicast_UpdateShapePreview_Statics::NewProp_StartPos,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AWhiteboardActor_Multicast_UpdateShapePreview_Statics::NewProp_EndPos,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AWhiteboardActor_Multicast_UpdateShapePreview_Statics::NewProp_Tool_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AWhiteboardActor_Multicast_UpdateShapePreview_Statics::NewProp_Tool,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AWhiteboardActor_Multicast_UpdateShapePreview_Statics::NewProp_Color,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AWhiteboardActor_Multicast_UpdateShapePreview_Statics::NewProp_Size,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AWhiteboardActor_Multicast_UpdateShapePreview_Statics::NewProp_StrokeID,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AWhiteboardActor_Multicast_UpdateShapePreview_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AWhiteboardActor_Multicast_UpdateShapePreview_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AWhiteboardActor, nullptr, "Multicast_UpdateShapePreview", nullptr, nullptr, Z_Construct_UFunction_AWhiteboardActor_Multicast_UpdateShapePreview_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AWhiteboardActor_Multicast_UpdateShapePreview_Statics::PropPointers), sizeof(WhiteboardActor_eventMulticast_UpdateShapePreview_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00824CC0, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AWhiteboardActor_Multicast_UpdateShapePreview_Statics::Function_MetaDataParams), Z_Construct_UFunction_AWhiteboardActor_Multicast_UpdateShapePreview_Statics::Function_MetaDataParams) };
static_assert(sizeof(WhiteboardActor_eventMulticast_UpdateShapePreview_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AWhiteboardActor_Multicast_UpdateShapePreview()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AWhiteboardActor_Multicast_UpdateShapePreview_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AWhiteboardActor::execMulticast_UpdateShapePreview)
{
	P_GET_STRUCT(FVector2D,Z_Param_StartPos);
	P_GET_STRUCT(FVector2D,Z_Param_EndPos);
	P_GET_ENUM(EDrawingTool,Z_Param_Tool);
	P_GET_STRUCT(FLinearColor,Z_Param_Color);
	P_GET_PROPERTY(FFloatProperty,Z_Param_Size);
	P_GET_PROPERTY(FIntProperty,Z_Param_StrokeID);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Multicast_UpdateShapePreview_Implementation(Z_Param_StartPos,Z_Param_EndPos,EDrawingTool(Z_Param_Tool),Z_Param_Color,Z_Param_Size,Z_Param_StrokeID);
	P_NATIVE_END;
}
// End Class AWhiteboardActor Function Multicast_UpdateShapePreview

// Begin Class AWhiteboardActor Function OnInteractionEnded
struct WhiteboardActor_eventOnInteractionEnded_Parms
{
	APawn* Player;
};
static const FName NAME_AWhiteboardActor_OnInteractionEnded = FName(TEXT("OnInteractionEnded"));
void AWhiteboardActor::OnInteractionEnded(APawn* Player)
{
	WhiteboardActor_eventOnInteractionEnded_Parms Parms;
	Parms.Player=Player;
	UFunction* Func = FindFunctionChecked(NAME_AWhiteboardActor_OnInteractionEnded);
	ProcessEvent(Func,&Parms);
}
struct Z_Construct_UFunction_AWhiteboardActor_OnInteractionEnded_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "UI Events" },
		{ "ModuleRelativePath", "Public/Actor/WhiteboardActor.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Player;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AWhiteboardActor_OnInteractionEnded_Statics::NewProp_Player = { "Player", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WhiteboardActor_eventOnInteractionEnded_Parms, Player), Z_Construct_UClass_APawn_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AWhiteboardActor_OnInteractionEnded_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AWhiteboardActor_OnInteractionEnded_Statics::NewProp_Player,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AWhiteboardActor_OnInteractionEnded_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AWhiteboardActor_OnInteractionEnded_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AWhiteboardActor, nullptr, "OnInteractionEnded", nullptr, nullptr, Z_Construct_UFunction_AWhiteboardActor_OnInteractionEnded_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AWhiteboardActor_OnInteractionEnded_Statics::PropPointers), sizeof(WhiteboardActor_eventOnInteractionEnded_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AWhiteboardActor_OnInteractionEnded_Statics::Function_MetaDataParams), Z_Construct_UFunction_AWhiteboardActor_OnInteractionEnded_Statics::Function_MetaDataParams) };
static_assert(sizeof(WhiteboardActor_eventOnInteractionEnded_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AWhiteboardActor_OnInteractionEnded()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AWhiteboardActor_OnInteractionEnded_Statics::FuncParams);
	}
	return ReturnFunction;
}
// End Class AWhiteboardActor Function OnInteractionEnded

// Begin Class AWhiteboardActor Function OnInteractionStarted
struct WhiteboardActor_eventOnInteractionStarted_Parms
{
	APawn* Player;
};
static const FName NAME_AWhiteboardActor_OnInteractionStarted = FName(TEXT("OnInteractionStarted"));
void AWhiteboardActor::OnInteractionStarted(APawn* Player)
{
	WhiteboardActor_eventOnInteractionStarted_Parms Parms;
	Parms.Player=Player;
	UFunction* Func = FindFunctionChecked(NAME_AWhiteboardActor_OnInteractionStarted);
	ProcessEvent(Func,&Parms);
}
struct Z_Construct_UFunction_AWhiteboardActor_OnInteractionStarted_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "UI Events" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// UI Management - Blueprint Events\n" },
#endif
		{ "ModuleRelativePath", "Public/Actor/WhiteboardActor.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "UI Management - Blueprint Events" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Player;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AWhiteboardActor_OnInteractionStarted_Statics::NewProp_Player = { "Player", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WhiteboardActor_eventOnInteractionStarted_Parms, Player), Z_Construct_UClass_APawn_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AWhiteboardActor_OnInteractionStarted_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AWhiteboardActor_OnInteractionStarted_Statics::NewProp_Player,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AWhiteboardActor_OnInteractionStarted_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AWhiteboardActor_OnInteractionStarted_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AWhiteboardActor, nullptr, "OnInteractionStarted", nullptr, nullptr, Z_Construct_UFunction_AWhiteboardActor_OnInteractionStarted_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AWhiteboardActor_OnInteractionStarted_Statics::PropPointers), sizeof(WhiteboardActor_eventOnInteractionStarted_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AWhiteboardActor_OnInteractionStarted_Statics::Function_MetaDataParams), Z_Construct_UFunction_AWhiteboardActor_OnInteractionStarted_Statics::Function_MetaDataParams) };
static_assert(sizeof(WhiteboardActor_eventOnInteractionStarted_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AWhiteboardActor_OnInteractionStarted()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AWhiteboardActor_OnInteractionStarted_Statics::FuncParams);
	}
	return ReturnFunction;
}
// End Class AWhiteboardActor Function OnInteractionStarted

// Begin Class AWhiteboardActor Function OnPlayerEnteredRange
struct WhiteboardActor_eventOnPlayerEnteredRange_Parms
{
	APawn* Player;
};
static const FName NAME_AWhiteboardActor_OnPlayerEnteredRange = FName(TEXT("OnPlayerEnteredRange"));
void AWhiteboardActor::OnPlayerEnteredRange(APawn* Player)
{
	WhiteboardActor_eventOnPlayerEnteredRange_Parms Parms;
	Parms.Player=Player;
	UFunction* Func = FindFunctionChecked(NAME_AWhiteboardActor_OnPlayerEnteredRange);
	ProcessEvent(Func,&Parms);
}
struct Z_Construct_UFunction_AWhiteboardActor_OnPlayerEnteredRange_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "UI Events" },
		{ "ModuleRelativePath", "Public/Actor/WhiteboardActor.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Player;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AWhiteboardActor_OnPlayerEnteredRange_Statics::NewProp_Player = { "Player", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WhiteboardActor_eventOnPlayerEnteredRange_Parms, Player), Z_Construct_UClass_APawn_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AWhiteboardActor_OnPlayerEnteredRange_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AWhiteboardActor_OnPlayerEnteredRange_Statics::NewProp_Player,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AWhiteboardActor_OnPlayerEnteredRange_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AWhiteboardActor_OnPlayerEnteredRange_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AWhiteboardActor, nullptr, "OnPlayerEnteredRange", nullptr, nullptr, Z_Construct_UFunction_AWhiteboardActor_OnPlayerEnteredRange_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AWhiteboardActor_OnPlayerEnteredRange_Statics::PropPointers), sizeof(WhiteboardActor_eventOnPlayerEnteredRange_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AWhiteboardActor_OnPlayerEnteredRange_Statics::Function_MetaDataParams), Z_Construct_UFunction_AWhiteboardActor_OnPlayerEnteredRange_Statics::Function_MetaDataParams) };
static_assert(sizeof(WhiteboardActor_eventOnPlayerEnteredRange_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AWhiteboardActor_OnPlayerEnteredRange()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AWhiteboardActor_OnPlayerEnteredRange_Statics::FuncParams);
	}
	return ReturnFunction;
}
// End Class AWhiteboardActor Function OnPlayerEnteredRange

// Begin Class AWhiteboardActor Function OnPlayerExitedRange
struct WhiteboardActor_eventOnPlayerExitedRange_Parms
{
	APawn* Player;
};
static const FName NAME_AWhiteboardActor_OnPlayerExitedRange = FName(TEXT("OnPlayerExitedRange"));
void AWhiteboardActor::OnPlayerExitedRange(APawn* Player)
{
	WhiteboardActor_eventOnPlayerExitedRange_Parms Parms;
	Parms.Player=Player;
	UFunction* Func = FindFunctionChecked(NAME_AWhiteboardActor_OnPlayerExitedRange);
	ProcessEvent(Func,&Parms);
}
struct Z_Construct_UFunction_AWhiteboardActor_OnPlayerExitedRange_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "UI Events" },
		{ "ModuleRelativePath", "Public/Actor/WhiteboardActor.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Player;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AWhiteboardActor_OnPlayerExitedRange_Statics::NewProp_Player = { "Player", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WhiteboardActor_eventOnPlayerExitedRange_Parms, Player), Z_Construct_UClass_APawn_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AWhiteboardActor_OnPlayerExitedRange_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AWhiteboardActor_OnPlayerExitedRange_Statics::NewProp_Player,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AWhiteboardActor_OnPlayerExitedRange_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AWhiteboardActor_OnPlayerExitedRange_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AWhiteboardActor, nullptr, "OnPlayerExitedRange", nullptr, nullptr, Z_Construct_UFunction_AWhiteboardActor_OnPlayerExitedRange_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AWhiteboardActor_OnPlayerExitedRange_Statics::PropPointers), sizeof(WhiteboardActor_eventOnPlayerExitedRange_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AWhiteboardActor_OnPlayerExitedRange_Statics::Function_MetaDataParams), Z_Construct_UFunction_AWhiteboardActor_OnPlayerExitedRange_Statics::Function_MetaDataParams) };
static_assert(sizeof(WhiteboardActor_eventOnPlayerExitedRange_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AWhiteboardActor_OnPlayerExitedRange()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AWhiteboardActor_OnPlayerExitedRange_Statics::FuncParams);
	}
	return ReturnFunction;
}
// End Class AWhiteboardActor Function OnPlayerExitedRange

// Begin Class AWhiteboardActor Function OnRep_InteractingPawns
struct Z_Construct_UFunction_AWhiteboardActor_OnRep_InteractingPawns_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Actor/WhiteboardActor.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AWhiteboardActor_OnRep_InteractingPawns_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AWhiteboardActor, nullptr, "OnRep_InteractingPawns", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AWhiteboardActor_OnRep_InteractingPawns_Statics::Function_MetaDataParams), Z_Construct_UFunction_AWhiteboardActor_OnRep_InteractingPawns_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_AWhiteboardActor_OnRep_InteractingPawns()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AWhiteboardActor_OnRep_InteractingPawns_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AWhiteboardActor::execOnRep_InteractingPawns)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnRep_InteractingPawns();
	P_NATIVE_END;
}
// End Class AWhiteboardActor Function OnRep_InteractingPawns

// Begin Class AWhiteboardActor Function OnRep_StrokeHistory
struct Z_Construct_UFunction_AWhiteboardActor_OnRep_StrokeHistory_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// RepNotify functions\n" },
#endif
		{ "ModuleRelativePath", "Public/Actor/WhiteboardActor.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "RepNotify functions" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AWhiteboardActor_OnRep_StrokeHistory_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AWhiteboardActor, nullptr, "OnRep_StrokeHistory", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AWhiteboardActor_OnRep_StrokeHistory_Statics::Function_MetaDataParams), Z_Construct_UFunction_AWhiteboardActor_OnRep_StrokeHistory_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_AWhiteboardActor_OnRep_StrokeHistory()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AWhiteboardActor_OnRep_StrokeHistory_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AWhiteboardActor::execOnRep_StrokeHistory)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnRep_StrokeHistory();
	P_NATIVE_END;
}
// End Class AWhiteboardActor Function OnRep_StrokeHistory

// Begin Class AWhiteboardActor Function OnTriggerBeginOverlap
struct Z_Construct_UFunction_AWhiteboardActor_OnTriggerBeginOverlap_Statics
{
	struct WhiteboardActor_eventOnTriggerBeginOverlap_Parms
	{
		UPrimitiveComponent* OverlappedComponent;
		AActor* OtherActor;
		UPrimitiveComponent* OtherComp;
		int32 OtherBodyIndex;
		bool bFromSweep;
		FHitResult SweepResult;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Actor/WhiteboardActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OverlappedComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OtherComp_MetaData[] = {
		{ "EditInline", "true" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SweepResult_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OverlappedComponent;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherActor;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherComp;
	static const UECodeGen_Private::FIntPropertyParams NewProp_OtherBodyIndex;
	static void NewProp_bFromSweep_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bFromSweep;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SweepResult;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AWhiteboardActor_OnTriggerBeginOverlap_Statics::NewProp_OverlappedComponent = { "OverlappedComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WhiteboardActor_eventOnTriggerBeginOverlap_Parms, OverlappedComponent), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OverlappedComponent_MetaData), NewProp_OverlappedComponent_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AWhiteboardActor_OnTriggerBeginOverlap_Statics::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WhiteboardActor_eventOnTriggerBeginOverlap_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AWhiteboardActor_OnTriggerBeginOverlap_Statics::NewProp_OtherComp = { "OtherComp", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WhiteboardActor_eventOnTriggerBeginOverlap_Parms, OtherComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OtherComp_MetaData), NewProp_OtherComp_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AWhiteboardActor_OnTriggerBeginOverlap_Statics::NewProp_OtherBodyIndex = { "OtherBodyIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WhiteboardActor_eventOnTriggerBeginOverlap_Parms, OtherBodyIndex), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_AWhiteboardActor_OnTriggerBeginOverlap_Statics::NewProp_bFromSweep_SetBit(void* Obj)
{
	((WhiteboardActor_eventOnTriggerBeginOverlap_Parms*)Obj)->bFromSweep = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AWhiteboardActor_OnTriggerBeginOverlap_Statics::NewProp_bFromSweep = { "bFromSweep", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(WhiteboardActor_eventOnTriggerBeginOverlap_Parms), &Z_Construct_UFunction_AWhiteboardActor_OnTriggerBeginOverlap_Statics::NewProp_bFromSweep_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AWhiteboardActor_OnTriggerBeginOverlap_Statics::NewProp_SweepResult = { "SweepResult", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WhiteboardActor_eventOnTriggerBeginOverlap_Parms, SweepResult), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SweepResult_MetaData), NewProp_SweepResult_MetaData) }; // 4100991306
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AWhiteboardActor_OnTriggerBeginOverlap_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AWhiteboardActor_OnTriggerBeginOverlap_Statics::NewProp_OverlappedComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AWhiteboardActor_OnTriggerBeginOverlap_Statics::NewProp_OtherActor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AWhiteboardActor_OnTriggerBeginOverlap_Statics::NewProp_OtherComp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AWhiteboardActor_OnTriggerBeginOverlap_Statics::NewProp_OtherBodyIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AWhiteboardActor_OnTriggerBeginOverlap_Statics::NewProp_bFromSweep,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AWhiteboardActor_OnTriggerBeginOverlap_Statics::NewProp_SweepResult,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AWhiteboardActor_OnTriggerBeginOverlap_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AWhiteboardActor_OnTriggerBeginOverlap_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AWhiteboardActor, nullptr, "OnTriggerBeginOverlap", nullptr, nullptr, Z_Construct_UFunction_AWhiteboardActor_OnTriggerBeginOverlap_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AWhiteboardActor_OnTriggerBeginOverlap_Statics::PropPointers), sizeof(Z_Construct_UFunction_AWhiteboardActor_OnTriggerBeginOverlap_Statics::WhiteboardActor_eventOnTriggerBeginOverlap_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00480401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AWhiteboardActor_OnTriggerBeginOverlap_Statics::Function_MetaDataParams), Z_Construct_UFunction_AWhiteboardActor_OnTriggerBeginOverlap_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AWhiteboardActor_OnTriggerBeginOverlap_Statics::WhiteboardActor_eventOnTriggerBeginOverlap_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AWhiteboardActor_OnTriggerBeginOverlap()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AWhiteboardActor_OnTriggerBeginOverlap_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AWhiteboardActor::execOnTriggerBeginOverlap)
{
	P_GET_OBJECT(UPrimitiveComponent,Z_Param_OverlappedComponent);
	P_GET_OBJECT(AActor,Z_Param_OtherActor);
	P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp);
	P_GET_PROPERTY(FIntProperty,Z_Param_OtherBodyIndex);
	P_GET_UBOOL(Z_Param_bFromSweep);
	P_GET_STRUCT_REF(FHitResult,Z_Param_Out_SweepResult);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnTriggerBeginOverlap(Z_Param_OverlappedComponent,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_OtherBodyIndex,Z_Param_bFromSweep,Z_Param_Out_SweepResult);
	P_NATIVE_END;
}
// End Class AWhiteboardActor Function OnTriggerBeginOverlap

// Begin Class AWhiteboardActor Function OnTriggerEndOverlap
struct Z_Construct_UFunction_AWhiteboardActor_OnTriggerEndOverlap_Statics
{
	struct WhiteboardActor_eventOnTriggerEndOverlap_Parms
	{
		UPrimitiveComponent* OverlappedComponent;
		AActor* OtherActor;
		UPrimitiveComponent* OtherComp;
		int32 OtherBodyIndex;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Actor/WhiteboardActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OverlappedComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OtherComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OverlappedComponent;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherActor;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherComp;
	static const UECodeGen_Private::FIntPropertyParams NewProp_OtherBodyIndex;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AWhiteboardActor_OnTriggerEndOverlap_Statics::NewProp_OverlappedComponent = { "OverlappedComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WhiteboardActor_eventOnTriggerEndOverlap_Parms, OverlappedComponent), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OverlappedComponent_MetaData), NewProp_OverlappedComponent_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AWhiteboardActor_OnTriggerEndOverlap_Statics::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WhiteboardActor_eventOnTriggerEndOverlap_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AWhiteboardActor_OnTriggerEndOverlap_Statics::NewProp_OtherComp = { "OtherComp", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WhiteboardActor_eventOnTriggerEndOverlap_Parms, OtherComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OtherComp_MetaData), NewProp_OtherComp_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AWhiteboardActor_OnTriggerEndOverlap_Statics::NewProp_OtherBodyIndex = { "OtherBodyIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WhiteboardActor_eventOnTriggerEndOverlap_Parms, OtherBodyIndex), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AWhiteboardActor_OnTriggerEndOverlap_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AWhiteboardActor_OnTriggerEndOverlap_Statics::NewProp_OverlappedComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AWhiteboardActor_OnTriggerEndOverlap_Statics::NewProp_OtherActor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AWhiteboardActor_OnTriggerEndOverlap_Statics::NewProp_OtherComp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AWhiteboardActor_OnTriggerEndOverlap_Statics::NewProp_OtherBodyIndex,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AWhiteboardActor_OnTriggerEndOverlap_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AWhiteboardActor_OnTriggerEndOverlap_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AWhiteboardActor, nullptr, "OnTriggerEndOverlap", nullptr, nullptr, Z_Construct_UFunction_AWhiteboardActor_OnTriggerEndOverlap_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AWhiteboardActor_OnTriggerEndOverlap_Statics::PropPointers), sizeof(Z_Construct_UFunction_AWhiteboardActor_OnTriggerEndOverlap_Statics::WhiteboardActor_eventOnTriggerEndOverlap_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AWhiteboardActor_OnTriggerEndOverlap_Statics::Function_MetaDataParams), Z_Construct_UFunction_AWhiteboardActor_OnTriggerEndOverlap_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AWhiteboardActor_OnTriggerEndOverlap_Statics::WhiteboardActor_eventOnTriggerEndOverlap_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AWhiteboardActor_OnTriggerEndOverlap()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AWhiteboardActor_OnTriggerEndOverlap_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AWhiteboardActor::execOnTriggerEndOverlap)
{
	P_GET_OBJECT(UPrimitiveComponent,Z_Param_OverlappedComponent);
	P_GET_OBJECT(AActor,Z_Param_OtherActor);
	P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp);
	P_GET_PROPERTY(FIntProperty,Z_Param_OtherBodyIndex);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnTriggerEndOverlap(Z_Param_OverlappedComponent,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_OtherBodyIndex);
	P_NATIVE_END;
}
// End Class AWhiteboardActor Function OnTriggerEndOverlap

// Begin Class AWhiteboardActor Function Redo
struct Z_Construct_UFunction_AWhiteboardActor_Redo_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Whiteboard" },
		{ "ModuleRelativePath", "Public/Actor/WhiteboardActor.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AWhiteboardActor_Redo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AWhiteboardActor, nullptr, "Redo", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AWhiteboardActor_Redo_Statics::Function_MetaDataParams), Z_Construct_UFunction_AWhiteboardActor_Redo_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_AWhiteboardActor_Redo()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AWhiteboardActor_Redo_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AWhiteboardActor::execRedo)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Redo();
	P_NATIVE_END;
}
// End Class AWhiteboardActor Function Redo

// Begin Class AWhiteboardActor Function RemoveInteractingPlayer
struct Z_Construct_UFunction_AWhiteboardActor_RemoveInteractingPlayer_Statics
{
	struct WhiteboardActor_eventRemoveInteractingPlayer_Parms
	{
		APawn* Player;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Whiteboard" },
		{ "ModuleRelativePath", "Public/Actor/WhiteboardActor.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Player;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AWhiteboardActor_RemoveInteractingPlayer_Statics::NewProp_Player = { "Player", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WhiteboardActor_eventRemoveInteractingPlayer_Parms, Player), Z_Construct_UClass_APawn_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AWhiteboardActor_RemoveInteractingPlayer_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AWhiteboardActor_RemoveInteractingPlayer_Statics::NewProp_Player,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AWhiteboardActor_RemoveInteractingPlayer_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AWhiteboardActor_RemoveInteractingPlayer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AWhiteboardActor, nullptr, "RemoveInteractingPlayer", nullptr, nullptr, Z_Construct_UFunction_AWhiteboardActor_RemoveInteractingPlayer_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AWhiteboardActor_RemoveInteractingPlayer_Statics::PropPointers), sizeof(Z_Construct_UFunction_AWhiteboardActor_RemoveInteractingPlayer_Statics::WhiteboardActor_eventRemoveInteractingPlayer_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AWhiteboardActor_RemoveInteractingPlayer_Statics::Function_MetaDataParams), Z_Construct_UFunction_AWhiteboardActor_RemoveInteractingPlayer_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AWhiteboardActor_RemoveInteractingPlayer_Statics::WhiteboardActor_eventRemoveInteractingPlayer_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AWhiteboardActor_RemoveInteractingPlayer()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AWhiteboardActor_RemoveInteractingPlayer_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AWhiteboardActor::execRemoveInteractingPlayer)
{
	P_GET_OBJECT(APawn,Z_Param_Player);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->RemoveInteractingPlayer(Z_Param_Player);
	P_NATIVE_END;
}
// End Class AWhiteboardActor Function RemoveInteractingPlayer

// Begin Class AWhiteboardActor Function RequestEndInteraction
struct Z_Construct_UFunction_AWhiteboardActor_RequestEndInteraction_Statics
{
	struct WhiteboardActor_eventRequestEndInteraction_Parms
	{
		APawn* Player;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Whiteboard" },
		{ "ModuleRelativePath", "Public/Actor/WhiteboardActor.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Player;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AWhiteboardActor_RequestEndInteraction_Statics::NewProp_Player = { "Player", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WhiteboardActor_eventRequestEndInteraction_Parms, Player), Z_Construct_UClass_APawn_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AWhiteboardActor_RequestEndInteraction_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AWhiteboardActor_RequestEndInteraction_Statics::NewProp_Player,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AWhiteboardActor_RequestEndInteraction_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AWhiteboardActor_RequestEndInteraction_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AWhiteboardActor, nullptr, "RequestEndInteraction", nullptr, nullptr, Z_Construct_UFunction_AWhiteboardActor_RequestEndInteraction_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AWhiteboardActor_RequestEndInteraction_Statics::PropPointers), sizeof(Z_Construct_UFunction_AWhiteboardActor_RequestEndInteraction_Statics::WhiteboardActor_eventRequestEndInteraction_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AWhiteboardActor_RequestEndInteraction_Statics::Function_MetaDataParams), Z_Construct_UFunction_AWhiteboardActor_RequestEndInteraction_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AWhiteboardActor_RequestEndInteraction_Statics::WhiteboardActor_eventRequestEndInteraction_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AWhiteboardActor_RequestEndInteraction()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AWhiteboardActor_RequestEndInteraction_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AWhiteboardActor::execRequestEndInteraction)
{
	P_GET_OBJECT(APawn,Z_Param_Player);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->RequestEndInteraction(Z_Param_Player);
	P_NATIVE_END;
}
// End Class AWhiteboardActor Function RequestEndInteraction

// Begin Class AWhiteboardActor Function RequestInteraction
struct Z_Construct_UFunction_AWhiteboardActor_RequestInteraction_Statics
{
	struct WhiteboardActor_eventRequestInteraction_Parms
	{
		APawn* Player;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Whiteboard" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// NEW: Request functions that handle networking properly\n" },
#endif
		{ "ModuleRelativePath", "Public/Actor/WhiteboardActor.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "NEW: Request functions that handle networking properly" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Player;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AWhiteboardActor_RequestInteraction_Statics::NewProp_Player = { "Player", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WhiteboardActor_eventRequestInteraction_Parms, Player), Z_Construct_UClass_APawn_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AWhiteboardActor_RequestInteraction_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AWhiteboardActor_RequestInteraction_Statics::NewProp_Player,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AWhiteboardActor_RequestInteraction_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AWhiteboardActor_RequestInteraction_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AWhiteboardActor, nullptr, "RequestInteraction", nullptr, nullptr, Z_Construct_UFunction_AWhiteboardActor_RequestInteraction_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AWhiteboardActor_RequestInteraction_Statics::PropPointers), sizeof(Z_Construct_UFunction_AWhiteboardActor_RequestInteraction_Statics::WhiteboardActor_eventRequestInteraction_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AWhiteboardActor_RequestInteraction_Statics::Function_MetaDataParams), Z_Construct_UFunction_AWhiteboardActor_RequestInteraction_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AWhiteboardActor_RequestInteraction_Statics::WhiteboardActor_eventRequestInteraction_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AWhiteboardActor_RequestInteraction()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AWhiteboardActor_RequestInteraction_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AWhiteboardActor::execRequestInteraction)
{
	P_GET_OBJECT(APawn,Z_Param_Player);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->RequestInteraction(Z_Param_Player);
	P_NATIVE_END;
}
// End Class AWhiteboardActor Function RequestInteraction

// Begin Class AWhiteboardActor Function Server_AddText
struct WhiteboardActor_eventServer_AddText_Parms
{
	FVector2D CanvasPosition;
	FString Text;
	FLinearColor Color;
	float Size;
};
static const FName NAME_AWhiteboardActor_Server_AddText = FName(TEXT("Server_AddText"));
void AWhiteboardActor::Server_AddText(FVector2D const& CanvasPosition, const FString& Text, FLinearColor Color, float Size)
{
	WhiteboardActor_eventServer_AddText_Parms Parms;
	Parms.CanvasPosition=CanvasPosition;
	Parms.Text=Text;
	Parms.Color=Color;
	Parms.Size=Size;
	UFunction* Func = FindFunctionChecked(NAME_AWhiteboardActor_Server_AddText);
	ProcessEvent(Func,&Parms);
}
struct Z_Construct_UFunction_AWhiteboardActor_Server_AddText_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Actor/WhiteboardActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CanvasPosition_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Text_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_CanvasPosition;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Text;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Color;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Size;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AWhiteboardActor_Server_AddText_Statics::NewProp_CanvasPosition = { "CanvasPosition", nullptr, (EPropertyFlags)0x0010000008000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WhiteboardActor_eventServer_AddText_Parms, CanvasPosition), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CanvasPosition_MetaData), NewProp_CanvasPosition_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AWhiteboardActor_Server_AddText_Statics::NewProp_Text = { "Text", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WhiteboardActor_eventServer_AddText_Parms, Text), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Text_MetaData), NewProp_Text_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AWhiteboardActor_Server_AddText_Statics::NewProp_Color = { "Color", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WhiteboardActor_eventServer_AddText_Parms, Color), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AWhiteboardActor_Server_AddText_Statics::NewProp_Size = { "Size", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WhiteboardActor_eventServer_AddText_Parms, Size), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AWhiteboardActor_Server_AddText_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AWhiteboardActor_Server_AddText_Statics::NewProp_CanvasPosition,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AWhiteboardActor_Server_AddText_Statics::NewProp_Text,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AWhiteboardActor_Server_AddText_Statics::NewProp_Color,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AWhiteboardActor_Server_AddText_Statics::NewProp_Size,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AWhiteboardActor_Server_AddText_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AWhiteboardActor_Server_AddText_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AWhiteboardActor, nullptr, "Server_AddText", nullptr, nullptr, Z_Construct_UFunction_AWhiteboardActor_Server_AddText_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AWhiteboardActor_Server_AddText_Statics::PropPointers), sizeof(WhiteboardActor_eventServer_AddText_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00A20CC0, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AWhiteboardActor_Server_AddText_Statics::Function_MetaDataParams), Z_Construct_UFunction_AWhiteboardActor_Server_AddText_Statics::Function_MetaDataParams) };
static_assert(sizeof(WhiteboardActor_eventServer_AddText_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AWhiteboardActor_Server_AddText()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AWhiteboardActor_Server_AddText_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AWhiteboardActor::execServer_AddText)
{
	P_GET_STRUCT(FVector2D,Z_Param_CanvasPosition);
	P_GET_PROPERTY(FStrProperty,Z_Param_Text);
	P_GET_STRUCT(FLinearColor,Z_Param_Color);
	P_GET_PROPERTY(FFloatProperty,Z_Param_Size);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Server_AddText_Implementation(Z_Param_CanvasPosition,Z_Param_Text,Z_Param_Color,Z_Param_Size);
	P_NATIVE_END;
}
// End Class AWhiteboardActor Function Server_AddText

// Begin Class AWhiteboardActor Function Server_ClearWhiteboard
static const FName NAME_AWhiteboardActor_Server_ClearWhiteboard = FName(TEXT("Server_ClearWhiteboard"));
void AWhiteboardActor::Server_ClearWhiteboard()
{
	UFunction* Func = FindFunctionChecked(NAME_AWhiteboardActor_Server_ClearWhiteboard);
	ProcessEvent(Func,NULL);
}
struct Z_Construct_UFunction_AWhiteboardActor_Server_ClearWhiteboard_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Actor/WhiteboardActor.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AWhiteboardActor_Server_ClearWhiteboard_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AWhiteboardActor, nullptr, "Server_ClearWhiteboard", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00220CC0, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AWhiteboardActor_Server_ClearWhiteboard_Statics::Function_MetaDataParams), Z_Construct_UFunction_AWhiteboardActor_Server_ClearWhiteboard_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_AWhiteboardActor_Server_ClearWhiteboard()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AWhiteboardActor_Server_ClearWhiteboard_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AWhiteboardActor::execServer_ClearWhiteboard)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Server_ClearWhiteboard_Implementation();
	P_NATIVE_END;
}
// End Class AWhiteboardActor Function Server_ClearWhiteboard

// Begin Class AWhiteboardActor Function Server_ContinueDrawing
struct WhiteboardActor_eventServer_ContinueDrawing_Parms
{
	FVector2D CanvasPosition;
};
static const FName NAME_AWhiteboardActor_Server_ContinueDrawing = FName(TEXT("Server_ContinueDrawing"));
void AWhiteboardActor::Server_ContinueDrawing(FVector2D const& CanvasPosition)
{
	WhiteboardActor_eventServer_ContinueDrawing_Parms Parms;
	Parms.CanvasPosition=CanvasPosition;
	UFunction* Func = FindFunctionChecked(NAME_AWhiteboardActor_Server_ContinueDrawing);
	ProcessEvent(Func,&Parms);
}
struct Z_Construct_UFunction_AWhiteboardActor_Server_ContinueDrawing_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Actor/WhiteboardActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CanvasPosition_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_CanvasPosition;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AWhiteboardActor_Server_ContinueDrawing_Statics::NewProp_CanvasPosition = { "CanvasPosition", nullptr, (EPropertyFlags)0x0010000008000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WhiteboardActor_eventServer_ContinueDrawing_Parms, CanvasPosition), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CanvasPosition_MetaData), NewProp_CanvasPosition_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AWhiteboardActor_Server_ContinueDrawing_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AWhiteboardActor_Server_ContinueDrawing_Statics::NewProp_CanvasPosition,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AWhiteboardActor_Server_ContinueDrawing_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AWhiteboardActor_Server_ContinueDrawing_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AWhiteboardActor, nullptr, "Server_ContinueDrawing", nullptr, nullptr, Z_Construct_UFunction_AWhiteboardActor_Server_ContinueDrawing_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AWhiteboardActor_Server_ContinueDrawing_Statics::PropPointers), sizeof(WhiteboardActor_eventServer_ContinueDrawing_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00A20CC0, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AWhiteboardActor_Server_ContinueDrawing_Statics::Function_MetaDataParams), Z_Construct_UFunction_AWhiteboardActor_Server_ContinueDrawing_Statics::Function_MetaDataParams) };
static_assert(sizeof(WhiteboardActor_eventServer_ContinueDrawing_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AWhiteboardActor_Server_ContinueDrawing()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AWhiteboardActor_Server_ContinueDrawing_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AWhiteboardActor::execServer_ContinueDrawing)
{
	P_GET_STRUCT(FVector2D,Z_Param_CanvasPosition);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Server_ContinueDrawing_Implementation(Z_Param_CanvasPosition);
	P_NATIVE_END;
}
// End Class AWhiteboardActor Function Server_ContinueDrawing

// Begin Class AWhiteboardActor Function Server_DrawFigure
struct WhiteboardActor_eventServer_DrawFigure_Parms
{
	FVector2D CanvasPosition;
	int32 SelectedFigureIndex;
	FLinearColor Color;
	float Size;
};
static const FName NAME_AWhiteboardActor_Server_DrawFigure = FName(TEXT("Server_DrawFigure"));
void AWhiteboardActor::Server_DrawFigure(FVector2D const& CanvasPosition, int32 SelectedFigureIndex, FLinearColor Color, float Size)
{
	WhiteboardActor_eventServer_DrawFigure_Parms Parms;
	Parms.CanvasPosition=CanvasPosition;
	Parms.SelectedFigureIndex=SelectedFigureIndex;
	Parms.Color=Color;
	Parms.Size=Size;
	UFunction* Func = FindFunctionChecked(NAME_AWhiteboardActor_Server_DrawFigure);
	ProcessEvent(Func,&Parms);
}
struct Z_Construct_UFunction_AWhiteboardActor_Server_DrawFigure_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Actor/WhiteboardActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CanvasPosition_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_CanvasPosition;
	static const UECodeGen_Private::FIntPropertyParams NewProp_SelectedFigureIndex;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Color;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Size;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AWhiteboardActor_Server_DrawFigure_Statics::NewProp_CanvasPosition = { "CanvasPosition", nullptr, (EPropertyFlags)0x0010000008000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WhiteboardActor_eventServer_DrawFigure_Parms, CanvasPosition), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CanvasPosition_MetaData), NewProp_CanvasPosition_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AWhiteboardActor_Server_DrawFigure_Statics::NewProp_SelectedFigureIndex = { "SelectedFigureIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WhiteboardActor_eventServer_DrawFigure_Parms, SelectedFigureIndex), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AWhiteboardActor_Server_DrawFigure_Statics::NewProp_Color = { "Color", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WhiteboardActor_eventServer_DrawFigure_Parms, Color), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AWhiteboardActor_Server_DrawFigure_Statics::NewProp_Size = { "Size", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WhiteboardActor_eventServer_DrawFigure_Parms, Size), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AWhiteboardActor_Server_DrawFigure_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AWhiteboardActor_Server_DrawFigure_Statics::NewProp_CanvasPosition,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AWhiteboardActor_Server_DrawFigure_Statics::NewProp_SelectedFigureIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AWhiteboardActor_Server_DrawFigure_Statics::NewProp_Color,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AWhiteboardActor_Server_DrawFigure_Statics::NewProp_Size,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AWhiteboardActor_Server_DrawFigure_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AWhiteboardActor_Server_DrawFigure_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AWhiteboardActor, nullptr, "Server_DrawFigure", nullptr, nullptr, Z_Construct_UFunction_AWhiteboardActor_Server_DrawFigure_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AWhiteboardActor_Server_DrawFigure_Statics::PropPointers), sizeof(WhiteboardActor_eventServer_DrawFigure_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00A20CC0, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AWhiteboardActor_Server_DrawFigure_Statics::Function_MetaDataParams), Z_Construct_UFunction_AWhiteboardActor_Server_DrawFigure_Statics::Function_MetaDataParams) };
static_assert(sizeof(WhiteboardActor_eventServer_DrawFigure_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AWhiteboardActor_Server_DrawFigure()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AWhiteboardActor_Server_DrawFigure_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AWhiteboardActor::execServer_DrawFigure)
{
	P_GET_STRUCT(FVector2D,Z_Param_CanvasPosition);
	P_GET_PROPERTY(FIntProperty,Z_Param_SelectedFigureIndex);
	P_GET_STRUCT(FLinearColor,Z_Param_Color);
	P_GET_PROPERTY(FFloatProperty,Z_Param_Size);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Server_DrawFigure_Implementation(Z_Param_CanvasPosition,Z_Param_SelectedFigureIndex,Z_Param_Color,Z_Param_Size);
	P_NATIVE_END;
}
// End Class AWhiteboardActor Function Server_DrawFigure

// Begin Class AWhiteboardActor Function Server_EndDrawing
static const FName NAME_AWhiteboardActor_Server_EndDrawing = FName(TEXT("Server_EndDrawing"));
void AWhiteboardActor::Server_EndDrawing()
{
	UFunction* Func = FindFunctionChecked(NAME_AWhiteboardActor_Server_EndDrawing);
	ProcessEvent(Func,NULL);
}
struct Z_Construct_UFunction_AWhiteboardActor_Server_EndDrawing_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Actor/WhiteboardActor.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AWhiteboardActor_Server_EndDrawing_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AWhiteboardActor, nullptr, "Server_EndDrawing", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00220CC0, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AWhiteboardActor_Server_EndDrawing_Statics::Function_MetaDataParams), Z_Construct_UFunction_AWhiteboardActor_Server_EndDrawing_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_AWhiteboardActor_Server_EndDrawing()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AWhiteboardActor_Server_EndDrawing_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AWhiteboardActor::execServer_EndDrawing)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Server_EndDrawing_Implementation();
	P_NATIVE_END;
}
// End Class AWhiteboardActor Function Server_EndDrawing

// Begin Class AWhiteboardActor Function Server_Redo
static const FName NAME_AWhiteboardActor_Server_Redo = FName(TEXT("Server_Redo"));
void AWhiteboardActor::Server_Redo()
{
	UFunction* Func = FindFunctionChecked(NAME_AWhiteboardActor_Server_Redo);
	ProcessEvent(Func,NULL);
}
struct Z_Construct_UFunction_AWhiteboardActor_Server_Redo_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Actor/WhiteboardActor.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AWhiteboardActor_Server_Redo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AWhiteboardActor, nullptr, "Server_Redo", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00220CC0, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AWhiteboardActor_Server_Redo_Statics::Function_MetaDataParams), Z_Construct_UFunction_AWhiteboardActor_Server_Redo_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_AWhiteboardActor_Server_Redo()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AWhiteboardActor_Server_Redo_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AWhiteboardActor::execServer_Redo)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Server_Redo_Implementation();
	P_NATIVE_END;
}
// End Class AWhiteboardActor Function Server_Redo

// Begin Class AWhiteboardActor Function Server_SetBrushSize
struct WhiteboardActor_eventServer_SetBrushSize_Parms
{
	float NewSize;
};
static const FName NAME_AWhiteboardActor_Server_SetBrushSize = FName(TEXT("Server_SetBrushSize"));
void AWhiteboardActor::Server_SetBrushSize(float NewSize)
{
	WhiteboardActor_eventServer_SetBrushSize_Parms Parms;
	Parms.NewSize=NewSize;
	UFunction* Func = FindFunctionChecked(NAME_AWhiteboardActor_Server_SetBrushSize);
	ProcessEvent(Func,&Parms);
}
struct Z_Construct_UFunction_AWhiteboardActor_Server_SetBrushSize_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Actor/WhiteboardActor.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_NewSize;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AWhiteboardActor_Server_SetBrushSize_Statics::NewProp_NewSize = { "NewSize", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WhiteboardActor_eventServer_SetBrushSize_Parms, NewSize), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AWhiteboardActor_Server_SetBrushSize_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AWhiteboardActor_Server_SetBrushSize_Statics::NewProp_NewSize,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AWhiteboardActor_Server_SetBrushSize_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AWhiteboardActor_Server_SetBrushSize_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AWhiteboardActor, nullptr, "Server_SetBrushSize", nullptr, nullptr, Z_Construct_UFunction_AWhiteboardActor_Server_SetBrushSize_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AWhiteboardActor_Server_SetBrushSize_Statics::PropPointers), sizeof(WhiteboardActor_eventServer_SetBrushSize_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00220CC0, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AWhiteboardActor_Server_SetBrushSize_Statics::Function_MetaDataParams), Z_Construct_UFunction_AWhiteboardActor_Server_SetBrushSize_Statics::Function_MetaDataParams) };
static_assert(sizeof(WhiteboardActor_eventServer_SetBrushSize_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AWhiteboardActor_Server_SetBrushSize()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AWhiteboardActor_Server_SetBrushSize_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AWhiteboardActor::execServer_SetBrushSize)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_NewSize);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Server_SetBrushSize_Implementation(Z_Param_NewSize);
	P_NATIVE_END;
}
// End Class AWhiteboardActor Function Server_SetBrushSize

// Begin Class AWhiteboardActor Function Server_SetBrushTexture
struct WhiteboardActor_eventServer_SetBrushTexture_Parms
{
	int32 TextureIndex;
};
static const FName NAME_AWhiteboardActor_Server_SetBrushTexture = FName(TEXT("Server_SetBrushTexture"));
void AWhiteboardActor::Server_SetBrushTexture(int32 TextureIndex)
{
	WhiteboardActor_eventServer_SetBrushTexture_Parms Parms;
	Parms.TextureIndex=TextureIndex;
	UFunction* Func = FindFunctionChecked(NAME_AWhiteboardActor_Server_SetBrushTexture);
	ProcessEvent(Func,&Parms);
}
struct Z_Construct_UFunction_AWhiteboardActor_Server_SetBrushTexture_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Actor/WhiteboardActor.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_TextureIndex;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AWhiteboardActor_Server_SetBrushTexture_Statics::NewProp_TextureIndex = { "TextureIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WhiteboardActor_eventServer_SetBrushTexture_Parms, TextureIndex), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AWhiteboardActor_Server_SetBrushTexture_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AWhiteboardActor_Server_SetBrushTexture_Statics::NewProp_TextureIndex,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AWhiteboardActor_Server_SetBrushTexture_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AWhiteboardActor_Server_SetBrushTexture_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AWhiteboardActor, nullptr, "Server_SetBrushTexture", nullptr, nullptr, Z_Construct_UFunction_AWhiteboardActor_Server_SetBrushTexture_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AWhiteboardActor_Server_SetBrushTexture_Statics::PropPointers), sizeof(WhiteboardActor_eventServer_SetBrushTexture_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00220CC0, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AWhiteboardActor_Server_SetBrushTexture_Statics::Function_MetaDataParams), Z_Construct_UFunction_AWhiteboardActor_Server_SetBrushTexture_Statics::Function_MetaDataParams) };
static_assert(sizeof(WhiteboardActor_eventServer_SetBrushTexture_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AWhiteboardActor_Server_SetBrushTexture()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AWhiteboardActor_Server_SetBrushTexture_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AWhiteboardActor::execServer_SetBrushTexture)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_TextureIndex);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Server_SetBrushTexture_Implementation(Z_Param_TextureIndex);
	P_NATIVE_END;
}
// End Class AWhiteboardActor Function Server_SetBrushTexture

// Begin Class AWhiteboardActor Function Server_SetCurrentColor
struct WhiteboardActor_eventServer_SetCurrentColor_Parms
{
	FLinearColor NewColor;
};
static const FName NAME_AWhiteboardActor_Server_SetCurrentColor = FName(TEXT("Server_SetCurrentColor"));
void AWhiteboardActor::Server_SetCurrentColor(FLinearColor NewColor)
{
	WhiteboardActor_eventServer_SetCurrentColor_Parms Parms;
	Parms.NewColor=NewColor;
	UFunction* Func = FindFunctionChecked(NAME_AWhiteboardActor_Server_SetCurrentColor);
	ProcessEvent(Func,&Parms);
}
struct Z_Construct_UFunction_AWhiteboardActor_Server_SetCurrentColor_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Actor/WhiteboardActor.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_NewColor;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AWhiteboardActor_Server_SetCurrentColor_Statics::NewProp_NewColor = { "NewColor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WhiteboardActor_eventServer_SetCurrentColor_Parms, NewColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AWhiteboardActor_Server_SetCurrentColor_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AWhiteboardActor_Server_SetCurrentColor_Statics::NewProp_NewColor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AWhiteboardActor_Server_SetCurrentColor_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AWhiteboardActor_Server_SetCurrentColor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AWhiteboardActor, nullptr, "Server_SetCurrentColor", nullptr, nullptr, Z_Construct_UFunction_AWhiteboardActor_Server_SetCurrentColor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AWhiteboardActor_Server_SetCurrentColor_Statics::PropPointers), sizeof(WhiteboardActor_eventServer_SetCurrentColor_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00A20CC0, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AWhiteboardActor_Server_SetCurrentColor_Statics::Function_MetaDataParams), Z_Construct_UFunction_AWhiteboardActor_Server_SetCurrentColor_Statics::Function_MetaDataParams) };
static_assert(sizeof(WhiteboardActor_eventServer_SetCurrentColor_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AWhiteboardActor_Server_SetCurrentColor()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AWhiteboardActor_Server_SetCurrentColor_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AWhiteboardActor::execServer_SetCurrentColor)
{
	P_GET_STRUCT(FLinearColor,Z_Param_NewColor);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Server_SetCurrentColor_Implementation(Z_Param_NewColor);
	P_NATIVE_END;
}
// End Class AWhiteboardActor Function Server_SetCurrentColor

// Begin Class AWhiteboardActor Function Server_SetCurrentTool
struct WhiteboardActor_eventServer_SetCurrentTool_Parms
{
	EDrawingTool NewTool;
};
static const FName NAME_AWhiteboardActor_Server_SetCurrentTool = FName(TEXT("Server_SetCurrentTool"));
void AWhiteboardActor::Server_SetCurrentTool(EDrawingTool NewTool)
{
	WhiteboardActor_eventServer_SetCurrentTool_Parms Parms;
	Parms.NewTool=NewTool;
	UFunction* Func = FindFunctionChecked(NAME_AWhiteboardActor_Server_SetCurrentTool);
	ProcessEvent(Func,&Parms);
}
struct Z_Construct_UFunction_AWhiteboardActor_Server_SetCurrentTool_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Actor/WhiteboardActor.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_NewTool_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_NewTool;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AWhiteboardActor_Server_SetCurrentTool_Statics::NewProp_NewTool_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_AWhiteboardActor_Server_SetCurrentTool_Statics::NewProp_NewTool = { "NewTool", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WhiteboardActor_eventServer_SetCurrentTool_Parms, NewTool), Z_Construct_UEnum_AdvancedDrawingBoard_EDrawingTool, METADATA_PARAMS(0, nullptr) }; // 3667291816
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AWhiteboardActor_Server_SetCurrentTool_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AWhiteboardActor_Server_SetCurrentTool_Statics::NewProp_NewTool_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AWhiteboardActor_Server_SetCurrentTool_Statics::NewProp_NewTool,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AWhiteboardActor_Server_SetCurrentTool_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AWhiteboardActor_Server_SetCurrentTool_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AWhiteboardActor, nullptr, "Server_SetCurrentTool", nullptr, nullptr, Z_Construct_UFunction_AWhiteboardActor_Server_SetCurrentTool_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AWhiteboardActor_Server_SetCurrentTool_Statics::PropPointers), sizeof(WhiteboardActor_eventServer_SetCurrentTool_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00220CC0, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AWhiteboardActor_Server_SetCurrentTool_Statics::Function_MetaDataParams), Z_Construct_UFunction_AWhiteboardActor_Server_SetCurrentTool_Statics::Function_MetaDataParams) };
static_assert(sizeof(WhiteboardActor_eventServer_SetCurrentTool_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AWhiteboardActor_Server_SetCurrentTool()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AWhiteboardActor_Server_SetCurrentTool_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AWhiteboardActor::execServer_SetCurrentTool)
{
	P_GET_ENUM(EDrawingTool,Z_Param_NewTool);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Server_SetCurrentTool_Implementation(EDrawingTool(Z_Param_NewTool));
	P_NATIVE_END;
}
// End Class AWhiteboardActor Function Server_SetCurrentTool

// Begin Class AWhiteboardActor Function Server_SetFigureTexture
struct WhiteboardActor_eventServer_SetFigureTexture_Parms
{
	int32 TextureIndex;
};
static const FName NAME_AWhiteboardActor_Server_SetFigureTexture = FName(TEXT("Server_SetFigureTexture"));
void AWhiteboardActor::Server_SetFigureTexture(int32 TextureIndex)
{
	WhiteboardActor_eventServer_SetFigureTexture_Parms Parms;
	Parms.TextureIndex=TextureIndex;
	UFunction* Func = FindFunctionChecked(NAME_AWhiteboardActor_Server_SetFigureTexture);
	ProcessEvent(Func,&Parms);
}
struct Z_Construct_UFunction_AWhiteboardActor_Server_SetFigureTexture_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Actor/WhiteboardActor.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_TextureIndex;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AWhiteboardActor_Server_SetFigureTexture_Statics::NewProp_TextureIndex = { "TextureIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WhiteboardActor_eventServer_SetFigureTexture_Parms, TextureIndex), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AWhiteboardActor_Server_SetFigureTexture_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AWhiteboardActor_Server_SetFigureTexture_Statics::NewProp_TextureIndex,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AWhiteboardActor_Server_SetFigureTexture_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AWhiteboardActor_Server_SetFigureTexture_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AWhiteboardActor, nullptr, "Server_SetFigureTexture", nullptr, nullptr, Z_Construct_UFunction_AWhiteboardActor_Server_SetFigureTexture_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AWhiteboardActor_Server_SetFigureTexture_Statics::PropPointers), sizeof(WhiteboardActor_eventServer_SetFigureTexture_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00220CC0, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AWhiteboardActor_Server_SetFigureTexture_Statics::Function_MetaDataParams), Z_Construct_UFunction_AWhiteboardActor_Server_SetFigureTexture_Statics::Function_MetaDataParams) };
static_assert(sizeof(WhiteboardActor_eventServer_SetFigureTexture_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AWhiteboardActor_Server_SetFigureTexture()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AWhiteboardActor_Server_SetFigureTexture_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AWhiteboardActor::execServer_SetFigureTexture)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_TextureIndex);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Server_SetFigureTexture_Implementation(Z_Param_TextureIndex);
	P_NATIVE_END;
}
// End Class AWhiteboardActor Function Server_SetFigureTexture

// Begin Class AWhiteboardActor Function Server_SetTextString
struct WhiteboardActor_eventServer_SetTextString_Parms
{
	FString NewTextString;
};
static const FName NAME_AWhiteboardActor_Server_SetTextString = FName(TEXT("Server_SetTextString"));
void AWhiteboardActor::Server_SetTextString(const FString& NewTextString)
{
	WhiteboardActor_eventServer_SetTextString_Parms Parms;
	Parms.NewTextString=NewTextString;
	UFunction* Func = FindFunctionChecked(NAME_AWhiteboardActor_Server_SetTextString);
	ProcessEvent(Func,&Parms);
}
struct Z_Construct_UFunction_AWhiteboardActor_Server_SetTextString_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Server RPC for text string\n" },
#endif
		{ "ModuleRelativePath", "Public/Actor/WhiteboardActor.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Server RPC for text string" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NewTextString_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_NewTextString;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AWhiteboardActor_Server_SetTextString_Statics::NewProp_NewTextString = { "NewTextString", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WhiteboardActor_eventServer_SetTextString_Parms, NewTextString), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NewTextString_MetaData), NewProp_NewTextString_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AWhiteboardActor_Server_SetTextString_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AWhiteboardActor_Server_SetTextString_Statics::NewProp_NewTextString,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AWhiteboardActor_Server_SetTextString_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AWhiteboardActor_Server_SetTextString_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AWhiteboardActor, nullptr, "Server_SetTextString", nullptr, nullptr, Z_Construct_UFunction_AWhiteboardActor_Server_SetTextString_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AWhiteboardActor_Server_SetTextString_Statics::PropPointers), sizeof(WhiteboardActor_eventServer_SetTextString_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00220CC0, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AWhiteboardActor_Server_SetTextString_Statics::Function_MetaDataParams), Z_Construct_UFunction_AWhiteboardActor_Server_SetTextString_Statics::Function_MetaDataParams) };
static_assert(sizeof(WhiteboardActor_eventServer_SetTextString_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AWhiteboardActor_Server_SetTextString()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AWhiteboardActor_Server_SetTextString_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AWhiteboardActor::execServer_SetTextString)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_NewTextString);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Server_SetTextString_Implementation(Z_Param_NewTextString);
	P_NATIVE_END;
}
// End Class AWhiteboardActor Function Server_SetTextString

// Begin Class AWhiteboardActor Function Server_StartDrawing
struct WhiteboardActor_eventServer_StartDrawing_Parms
{
	FVector2D CanvasPosition;
	EDrawingTool Tool;
	FLinearColor Color;
	float Size;
	int32 BrushTextureIndex;
	int32 FigureTextureIndex;
};
static const FName NAME_AWhiteboardActor_Server_StartDrawing = FName(TEXT("Server_StartDrawing"));
void AWhiteboardActor::Server_StartDrawing(FVector2D const& CanvasPosition, EDrawingTool Tool, FLinearColor Color, float Size, int32 BrushTextureIndex, int32 FigureTextureIndex)
{
	WhiteboardActor_eventServer_StartDrawing_Parms Parms;
	Parms.CanvasPosition=CanvasPosition;
	Parms.Tool=Tool;
	Parms.Color=Color;
	Parms.Size=Size;
	Parms.BrushTextureIndex=BrushTextureIndex;
	Parms.FigureTextureIndex=FigureTextureIndex;
	UFunction* Func = FindFunctionChecked(NAME_AWhiteboardActor_Server_StartDrawing);
	ProcessEvent(Func,&Parms);
}
struct Z_Construct_UFunction_AWhiteboardActor_Server_StartDrawing_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Server RPC functions for network replication\n" },
#endif
		{ "ModuleRelativePath", "Public/Actor/WhiteboardActor.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Server RPC functions for network replication" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CanvasPosition_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_CanvasPosition;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Tool_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Tool;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Color;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Size;
	static const UECodeGen_Private::FIntPropertyParams NewProp_BrushTextureIndex;
	static const UECodeGen_Private::FIntPropertyParams NewProp_FigureTextureIndex;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AWhiteboardActor_Server_StartDrawing_Statics::NewProp_CanvasPosition = { "CanvasPosition", nullptr, (EPropertyFlags)0x0010000008000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WhiteboardActor_eventServer_StartDrawing_Parms, CanvasPosition), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CanvasPosition_MetaData), NewProp_CanvasPosition_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AWhiteboardActor_Server_StartDrawing_Statics::NewProp_Tool_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_AWhiteboardActor_Server_StartDrawing_Statics::NewProp_Tool = { "Tool", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WhiteboardActor_eventServer_StartDrawing_Parms, Tool), Z_Construct_UEnum_AdvancedDrawingBoard_EDrawingTool, METADATA_PARAMS(0, nullptr) }; // 3667291816
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AWhiteboardActor_Server_StartDrawing_Statics::NewProp_Color = { "Color", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WhiteboardActor_eventServer_StartDrawing_Parms, Color), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AWhiteboardActor_Server_StartDrawing_Statics::NewProp_Size = { "Size", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WhiteboardActor_eventServer_StartDrawing_Parms, Size), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AWhiteboardActor_Server_StartDrawing_Statics::NewProp_BrushTextureIndex = { "BrushTextureIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WhiteboardActor_eventServer_StartDrawing_Parms, BrushTextureIndex), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AWhiteboardActor_Server_StartDrawing_Statics::NewProp_FigureTextureIndex = { "FigureTextureIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WhiteboardActor_eventServer_StartDrawing_Parms, FigureTextureIndex), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AWhiteboardActor_Server_StartDrawing_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AWhiteboardActor_Server_StartDrawing_Statics::NewProp_CanvasPosition,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AWhiteboardActor_Server_StartDrawing_Statics::NewProp_Tool_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AWhiteboardActor_Server_StartDrawing_Statics::NewProp_Tool,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AWhiteboardActor_Server_StartDrawing_Statics::NewProp_Color,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AWhiteboardActor_Server_StartDrawing_Statics::NewProp_Size,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AWhiteboardActor_Server_StartDrawing_Statics::NewProp_BrushTextureIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AWhiteboardActor_Server_StartDrawing_Statics::NewProp_FigureTextureIndex,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AWhiteboardActor_Server_StartDrawing_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AWhiteboardActor_Server_StartDrawing_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AWhiteboardActor, nullptr, "Server_StartDrawing", nullptr, nullptr, Z_Construct_UFunction_AWhiteboardActor_Server_StartDrawing_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AWhiteboardActor_Server_StartDrawing_Statics::PropPointers), sizeof(WhiteboardActor_eventServer_StartDrawing_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00A20CC0, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AWhiteboardActor_Server_StartDrawing_Statics::Function_MetaDataParams), Z_Construct_UFunction_AWhiteboardActor_Server_StartDrawing_Statics::Function_MetaDataParams) };
static_assert(sizeof(WhiteboardActor_eventServer_StartDrawing_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AWhiteboardActor_Server_StartDrawing()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AWhiteboardActor_Server_StartDrawing_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AWhiteboardActor::execServer_StartDrawing)
{
	P_GET_STRUCT(FVector2D,Z_Param_CanvasPosition);
	P_GET_ENUM(EDrawingTool,Z_Param_Tool);
	P_GET_STRUCT(FLinearColor,Z_Param_Color);
	P_GET_PROPERTY(FFloatProperty,Z_Param_Size);
	P_GET_PROPERTY(FIntProperty,Z_Param_BrushTextureIndex);
	P_GET_PROPERTY(FIntProperty,Z_Param_FigureTextureIndex);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Server_StartDrawing_Implementation(Z_Param_CanvasPosition,EDrawingTool(Z_Param_Tool),Z_Param_Color,Z_Param_Size,Z_Param_BrushTextureIndex,Z_Param_FigureTextureIndex);
	P_NATIVE_END;
}
// End Class AWhiteboardActor Function Server_StartDrawing

// Begin Class AWhiteboardActor Function Server_Undo
static const FName NAME_AWhiteboardActor_Server_Undo = FName(TEXT("Server_Undo"));
void AWhiteboardActor::Server_Undo()
{
	UFunction* Func = FindFunctionChecked(NAME_AWhiteboardActor_Server_Undo);
	ProcessEvent(Func,NULL);
}
struct Z_Construct_UFunction_AWhiteboardActor_Server_Undo_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Actor/WhiteboardActor.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AWhiteboardActor_Server_Undo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AWhiteboardActor, nullptr, "Server_Undo", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00220CC0, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AWhiteboardActor_Server_Undo_Statics::Function_MetaDataParams), Z_Construct_UFunction_AWhiteboardActor_Server_Undo_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_AWhiteboardActor_Server_Undo()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AWhiteboardActor_Server_Undo_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AWhiteboardActor::execServer_Undo)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Server_Undo_Implementation();
	P_NATIVE_END;
}
// End Class AWhiteboardActor Function Server_Undo

// Begin Class AWhiteboardActor Function SetBrushSize
struct Z_Construct_UFunction_AWhiteboardActor_SetBrushSize_Statics
{
	struct WhiteboardActor_eventSetBrushSize_Parms
	{
		float NewSize;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Whiteboard" },
		{ "ModuleRelativePath", "Public/Actor/WhiteboardActor.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_NewSize;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AWhiteboardActor_SetBrushSize_Statics::NewProp_NewSize = { "NewSize", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WhiteboardActor_eventSetBrushSize_Parms, NewSize), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AWhiteboardActor_SetBrushSize_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AWhiteboardActor_SetBrushSize_Statics::NewProp_NewSize,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AWhiteboardActor_SetBrushSize_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AWhiteboardActor_SetBrushSize_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AWhiteboardActor, nullptr, "SetBrushSize", nullptr, nullptr, Z_Construct_UFunction_AWhiteboardActor_SetBrushSize_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AWhiteboardActor_SetBrushSize_Statics::PropPointers), sizeof(Z_Construct_UFunction_AWhiteboardActor_SetBrushSize_Statics::WhiteboardActor_eventSetBrushSize_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AWhiteboardActor_SetBrushSize_Statics::Function_MetaDataParams), Z_Construct_UFunction_AWhiteboardActor_SetBrushSize_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AWhiteboardActor_SetBrushSize_Statics::WhiteboardActor_eventSetBrushSize_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AWhiteboardActor_SetBrushSize()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AWhiteboardActor_SetBrushSize_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AWhiteboardActor::execSetBrushSize)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_NewSize);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetBrushSize(Z_Param_NewSize);
	P_NATIVE_END;
}
// End Class AWhiteboardActor Function SetBrushSize

// Begin Class AWhiteboardActor Function SetBrushTexture
struct Z_Construct_UFunction_AWhiteboardActor_SetBrushTexture_Statics
{
	struct WhiteboardActor_eventSetBrushTexture_Parms
	{
		int32 TextureIndex;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Whiteboard" },
		{ "ModuleRelativePath", "Public/Actor/WhiteboardActor.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_TextureIndex;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AWhiteboardActor_SetBrushTexture_Statics::NewProp_TextureIndex = { "TextureIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WhiteboardActor_eventSetBrushTexture_Parms, TextureIndex), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AWhiteboardActor_SetBrushTexture_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AWhiteboardActor_SetBrushTexture_Statics::NewProp_TextureIndex,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AWhiteboardActor_SetBrushTexture_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AWhiteboardActor_SetBrushTexture_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AWhiteboardActor, nullptr, "SetBrushTexture", nullptr, nullptr, Z_Construct_UFunction_AWhiteboardActor_SetBrushTexture_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AWhiteboardActor_SetBrushTexture_Statics::PropPointers), sizeof(Z_Construct_UFunction_AWhiteboardActor_SetBrushTexture_Statics::WhiteboardActor_eventSetBrushTexture_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AWhiteboardActor_SetBrushTexture_Statics::Function_MetaDataParams), Z_Construct_UFunction_AWhiteboardActor_SetBrushTexture_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AWhiteboardActor_SetBrushTexture_Statics::WhiteboardActor_eventSetBrushTexture_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AWhiteboardActor_SetBrushTexture()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AWhiteboardActor_SetBrushTexture_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AWhiteboardActor::execSetBrushTexture)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_TextureIndex);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetBrushTexture(Z_Param_TextureIndex);
	P_NATIVE_END;
}
// End Class AWhiteboardActor Function SetBrushTexture

// Begin Class AWhiteboardActor Function SetCurrentColor
struct Z_Construct_UFunction_AWhiteboardActor_SetCurrentColor_Statics
{
	struct WhiteboardActor_eventSetCurrentColor_Parms
	{
		FLinearColor NewColor;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Whiteboard" },
		{ "ModuleRelativePath", "Public/Actor/WhiteboardActor.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_NewColor;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AWhiteboardActor_SetCurrentColor_Statics::NewProp_NewColor = { "NewColor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WhiteboardActor_eventSetCurrentColor_Parms, NewColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AWhiteboardActor_SetCurrentColor_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AWhiteboardActor_SetCurrentColor_Statics::NewProp_NewColor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AWhiteboardActor_SetCurrentColor_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AWhiteboardActor_SetCurrentColor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AWhiteboardActor, nullptr, "SetCurrentColor", nullptr, nullptr, Z_Construct_UFunction_AWhiteboardActor_SetCurrentColor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AWhiteboardActor_SetCurrentColor_Statics::PropPointers), sizeof(Z_Construct_UFunction_AWhiteboardActor_SetCurrentColor_Statics::WhiteboardActor_eventSetCurrentColor_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AWhiteboardActor_SetCurrentColor_Statics::Function_MetaDataParams), Z_Construct_UFunction_AWhiteboardActor_SetCurrentColor_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AWhiteboardActor_SetCurrentColor_Statics::WhiteboardActor_eventSetCurrentColor_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AWhiteboardActor_SetCurrentColor()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AWhiteboardActor_SetCurrentColor_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AWhiteboardActor::execSetCurrentColor)
{
	P_GET_STRUCT(FLinearColor,Z_Param_NewColor);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetCurrentColor(Z_Param_NewColor);
	P_NATIVE_END;
}
// End Class AWhiteboardActor Function SetCurrentColor

// Begin Class AWhiteboardActor Function SetCurrentTool
struct Z_Construct_UFunction_AWhiteboardActor_SetCurrentTool_Statics
{
	struct WhiteboardActor_eventSetCurrentTool_Parms
	{
		EDrawingTool NewTool;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Whiteboard" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Blueprint callable functions\n" },
#endif
		{ "ModuleRelativePath", "Public/Actor/WhiteboardActor.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Blueprint callable functions" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_NewTool_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_NewTool;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AWhiteboardActor_SetCurrentTool_Statics::NewProp_NewTool_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_AWhiteboardActor_SetCurrentTool_Statics::NewProp_NewTool = { "NewTool", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WhiteboardActor_eventSetCurrentTool_Parms, NewTool), Z_Construct_UEnum_AdvancedDrawingBoard_EDrawingTool, METADATA_PARAMS(0, nullptr) }; // 3667291816
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AWhiteboardActor_SetCurrentTool_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AWhiteboardActor_SetCurrentTool_Statics::NewProp_NewTool_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AWhiteboardActor_SetCurrentTool_Statics::NewProp_NewTool,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AWhiteboardActor_SetCurrentTool_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AWhiteboardActor_SetCurrentTool_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AWhiteboardActor, nullptr, "SetCurrentTool", nullptr, nullptr, Z_Construct_UFunction_AWhiteboardActor_SetCurrentTool_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AWhiteboardActor_SetCurrentTool_Statics::PropPointers), sizeof(Z_Construct_UFunction_AWhiteboardActor_SetCurrentTool_Statics::WhiteboardActor_eventSetCurrentTool_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AWhiteboardActor_SetCurrentTool_Statics::Function_MetaDataParams), Z_Construct_UFunction_AWhiteboardActor_SetCurrentTool_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AWhiteboardActor_SetCurrentTool_Statics::WhiteboardActor_eventSetCurrentTool_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AWhiteboardActor_SetCurrentTool()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AWhiteboardActor_SetCurrentTool_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AWhiteboardActor::execSetCurrentTool)
{
	P_GET_ENUM(EDrawingTool,Z_Param_NewTool);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetCurrentTool(EDrawingTool(Z_Param_NewTool));
	P_NATIVE_END;
}
// End Class AWhiteboardActor Function SetCurrentTool

// Begin Class AWhiteboardActor Function SetFigureTexture
struct Z_Construct_UFunction_AWhiteboardActor_SetFigureTexture_Statics
{
	struct WhiteboardActor_eventSetFigureTexture_Parms
	{
		int32 TextureIndex;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Whiteboard" },
		{ "ModuleRelativePath", "Public/Actor/WhiteboardActor.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_TextureIndex;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AWhiteboardActor_SetFigureTexture_Statics::NewProp_TextureIndex = { "TextureIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WhiteboardActor_eventSetFigureTexture_Parms, TextureIndex), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AWhiteboardActor_SetFigureTexture_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AWhiteboardActor_SetFigureTexture_Statics::NewProp_TextureIndex,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AWhiteboardActor_SetFigureTexture_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AWhiteboardActor_SetFigureTexture_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AWhiteboardActor, nullptr, "SetFigureTexture", nullptr, nullptr, Z_Construct_UFunction_AWhiteboardActor_SetFigureTexture_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AWhiteboardActor_SetFigureTexture_Statics::PropPointers), sizeof(Z_Construct_UFunction_AWhiteboardActor_SetFigureTexture_Statics::WhiteboardActor_eventSetFigureTexture_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AWhiteboardActor_SetFigureTexture_Statics::Function_MetaDataParams), Z_Construct_UFunction_AWhiteboardActor_SetFigureTexture_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AWhiteboardActor_SetFigureTexture_Statics::WhiteboardActor_eventSetFigureTexture_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AWhiteboardActor_SetFigureTexture()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AWhiteboardActor_SetFigureTexture_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AWhiteboardActor::execSetFigureTexture)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_TextureIndex);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetFigureTexture(Z_Param_TextureIndex);
	P_NATIVE_END;
}
// End Class AWhiteboardActor Function SetFigureTexture

// Begin Class AWhiteboardActor Function SetTextString
struct Z_Construct_UFunction_AWhiteboardActor_SetTextString_Statics
{
	struct WhiteboardActor_eventSetTextString_Parms
	{
		FString NewTextString;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Whiteboard" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// NEW: Enhanced text input functions\n" },
#endif
		{ "ModuleRelativePath", "Public/Actor/WhiteboardActor.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "NEW: Enhanced text input functions" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NewTextString_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_NewTextString;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AWhiteboardActor_SetTextString_Statics::NewProp_NewTextString = { "NewTextString", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WhiteboardActor_eventSetTextString_Parms, NewTextString), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NewTextString_MetaData), NewProp_NewTextString_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AWhiteboardActor_SetTextString_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AWhiteboardActor_SetTextString_Statics::NewProp_NewTextString,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AWhiteboardActor_SetTextString_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AWhiteboardActor_SetTextString_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AWhiteboardActor, nullptr, "SetTextString", nullptr, nullptr, Z_Construct_UFunction_AWhiteboardActor_SetTextString_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AWhiteboardActor_SetTextString_Statics::PropPointers), sizeof(Z_Construct_UFunction_AWhiteboardActor_SetTextString_Statics::WhiteboardActor_eventSetTextString_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AWhiteboardActor_SetTextString_Statics::Function_MetaDataParams), Z_Construct_UFunction_AWhiteboardActor_SetTextString_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AWhiteboardActor_SetTextString_Statics::WhiteboardActor_eventSetTextString_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AWhiteboardActor_SetTextString()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AWhiteboardActor_SetTextString_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AWhiteboardActor::execSetTextString)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_NewTextString);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetTextString(Z_Param_NewTextString);
	P_NATIVE_END;
}
// End Class AWhiteboardActor Function SetTextString

// Begin Class AWhiteboardActor Function StartDrawing
struct Z_Construct_UFunction_AWhiteboardActor_StartDrawing_Statics
{
	struct WhiteboardActor_eventStartDrawing_Parms
	{
		FVector2D CanvasPosition;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Whiteboard" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Drawing functions\n" },
#endif
		{ "ModuleRelativePath", "Public/Actor/WhiteboardActor.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Drawing functions" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CanvasPosition_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_CanvasPosition;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AWhiteboardActor_StartDrawing_Statics::NewProp_CanvasPosition = { "CanvasPosition", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WhiteboardActor_eventStartDrawing_Parms, CanvasPosition), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CanvasPosition_MetaData), NewProp_CanvasPosition_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AWhiteboardActor_StartDrawing_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AWhiteboardActor_StartDrawing_Statics::NewProp_CanvasPosition,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AWhiteboardActor_StartDrawing_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AWhiteboardActor_StartDrawing_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AWhiteboardActor, nullptr, "StartDrawing", nullptr, nullptr, Z_Construct_UFunction_AWhiteboardActor_StartDrawing_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AWhiteboardActor_StartDrawing_Statics::PropPointers), sizeof(Z_Construct_UFunction_AWhiteboardActor_StartDrawing_Statics::WhiteboardActor_eventStartDrawing_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AWhiteboardActor_StartDrawing_Statics::Function_MetaDataParams), Z_Construct_UFunction_AWhiteboardActor_StartDrawing_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AWhiteboardActor_StartDrawing_Statics::WhiteboardActor_eventStartDrawing_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AWhiteboardActor_StartDrawing()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AWhiteboardActor_StartDrawing_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AWhiteboardActor::execStartDrawing)
{
	P_GET_STRUCT_REF(FVector2D,Z_Param_Out_CanvasPosition);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->StartDrawing(Z_Param_Out_CanvasPosition);
	P_NATIVE_END;
}
// End Class AWhiteboardActor Function StartDrawing

// Begin Class AWhiteboardActor Function StartInteraction
struct Z_Construct_UFunction_AWhiteboardActor_StartInteraction_Statics
{
	struct WhiteboardActor_eventStartInteraction_Parms
	{
		APawn* Player;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Whiteboard" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// FIXED: Interaction Functions - Updated for new networking approach\n" },
#endif
		{ "ModuleRelativePath", "Public/Actor/WhiteboardActor.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "FIXED: Interaction Functions - Updated for new networking approach" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Player;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AWhiteboardActor_StartInteraction_Statics::NewProp_Player = { "Player", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WhiteboardActor_eventStartInteraction_Parms, Player), Z_Construct_UClass_APawn_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AWhiteboardActor_StartInteraction_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AWhiteboardActor_StartInteraction_Statics::NewProp_Player,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AWhiteboardActor_StartInteraction_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AWhiteboardActor_StartInteraction_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AWhiteboardActor, nullptr, "StartInteraction", nullptr, nullptr, Z_Construct_UFunction_AWhiteboardActor_StartInteraction_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AWhiteboardActor_StartInteraction_Statics::PropPointers), sizeof(Z_Construct_UFunction_AWhiteboardActor_StartInteraction_Statics::WhiteboardActor_eventStartInteraction_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AWhiteboardActor_StartInteraction_Statics::Function_MetaDataParams), Z_Construct_UFunction_AWhiteboardActor_StartInteraction_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AWhiteboardActor_StartInteraction_Statics::WhiteboardActor_eventStartInteraction_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AWhiteboardActor_StartInteraction()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AWhiteboardActor_StartInteraction_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AWhiteboardActor::execStartInteraction)
{
	P_GET_OBJECT(APawn,Z_Param_Player);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->StartInteraction(Z_Param_Player);
	P_NATIVE_END;
}
// End Class AWhiteboardActor Function StartInteraction

// Begin Class AWhiteboardActor Function Undo
struct Z_Construct_UFunction_AWhiteboardActor_Undo_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Whiteboard" },
		{ "ModuleRelativePath", "Public/Actor/WhiteboardActor.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AWhiteboardActor_Undo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AWhiteboardActor, nullptr, "Undo", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AWhiteboardActor_Undo_Statics::Function_MetaDataParams), Z_Construct_UFunction_AWhiteboardActor_Undo_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_AWhiteboardActor_Undo()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AWhiteboardActor_Undo_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AWhiteboardActor::execUndo)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Undo();
	P_NATIVE_END;
}
// End Class AWhiteboardActor Function Undo

// Begin Class AWhiteboardActor Function WorldToCanvasPosition
struct Z_Construct_UFunction_AWhiteboardActor_WorldToCanvasPosition_Statics
{
	struct WhiteboardActor_eventWorldToCanvasPosition_Parms
	{
		FVector WorldPosition;
		FVector2D ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Whiteboard" },
		{ "ModuleRelativePath", "Public/Actor/WhiteboardActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WorldPosition_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_WorldPosition;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AWhiteboardActor_WorldToCanvasPosition_Statics::NewProp_WorldPosition = { "WorldPosition", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WhiteboardActor_eventWorldToCanvasPosition_Parms, WorldPosition), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WorldPosition_MetaData), NewProp_WorldPosition_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AWhiteboardActor_WorldToCanvasPosition_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WhiteboardActor_eventWorldToCanvasPosition_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AWhiteboardActor_WorldToCanvasPosition_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AWhiteboardActor_WorldToCanvasPosition_Statics::NewProp_WorldPosition,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AWhiteboardActor_WorldToCanvasPosition_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AWhiteboardActor_WorldToCanvasPosition_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AWhiteboardActor_WorldToCanvasPosition_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AWhiteboardActor, nullptr, "WorldToCanvasPosition", nullptr, nullptr, Z_Construct_UFunction_AWhiteboardActor_WorldToCanvasPosition_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AWhiteboardActor_WorldToCanvasPosition_Statics::PropPointers), sizeof(Z_Construct_UFunction_AWhiteboardActor_WorldToCanvasPosition_Statics::WhiteboardActor_eventWorldToCanvasPosition_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54C20401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AWhiteboardActor_WorldToCanvasPosition_Statics::Function_MetaDataParams), Z_Construct_UFunction_AWhiteboardActor_WorldToCanvasPosition_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AWhiteboardActor_WorldToCanvasPosition_Statics::WhiteboardActor_eventWorldToCanvasPosition_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AWhiteboardActor_WorldToCanvasPosition()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AWhiteboardActor_WorldToCanvasPosition_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AWhiteboardActor::execWorldToCanvasPosition)
{
	P_GET_STRUCT_REF(FVector,Z_Param_Out_WorldPosition);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FVector2D*)Z_Param__Result=P_THIS->WorldToCanvasPosition(Z_Param_Out_WorldPosition);
	P_NATIVE_END;
}
// End Class AWhiteboardActor Function WorldToCanvasPosition

// Begin Class AWhiteboardActor
void AWhiteboardActor::StaticRegisterNativesAWhiteboardActor()
{
	UClass* Class = AWhiteboardActor::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "AddText", &AWhiteboardActor::execAddText },
		{ "CanAcceptMorePlayers", &AWhiteboardActor::execCanAcceptMorePlayers },
		{ "CanClientDraw", &AWhiteboardActor::execCanClientDraw },
		{ "CanInteractLocally", &AWhiteboardActor::execCanInteractLocally },
		{ "CanPlayerInteract", &AWhiteboardActor::execCanPlayerInteract },
		{ "ClearWhiteboard", &AWhiteboardActor::execClearWhiteboard },
		{ "Client_CleanupInteractionUI", &AWhiteboardActor::execClient_CleanupInteractionUI },
		{ "Client_SetupInteractionUI", &AWhiteboardActor::execClient_SetupInteractionUI },
		{ "Client_SyncWhiteboardState", &AWhiteboardActor::execClient_SyncWhiteboardState },
		{ "ClientContinueDrawing", &AWhiteboardActor::execClientContinueDrawing },
		{ "ClientEndDrawing", &AWhiteboardActor::execClientEndDrawing },
		{ "ClientStartDrawing", &AWhiteboardActor::execClientStartDrawing },
		{ "ContinueDrawing", &AWhiteboardActor::execContinueDrawing },
		{ "DebugNetworkState", &AWhiteboardActor::execDebugNetworkState },
		{ "DrawFigure", &AWhiteboardActor::execDrawFigure },
		{ "EndDrawing", &AWhiteboardActor::execEndDrawing },
		{ "EndInteraction", &AWhiteboardActor::execEndInteraction },
		{ "EndInteractionForPlayer", &AWhiteboardActor::execEndInteractionForPlayer },
		{ "ExportToPNG", &AWhiteboardActor::execExportToPNG },
		{ "ExportToSVG", &AWhiteboardActor::execExportToSVG },
		{ "GetInteractingPlayerCount", &AWhiteboardActor::execGetInteractingPlayerCount },
		{ "IsPlayerInRange", &AWhiteboardActor::execIsPlayerInRange },
		{ "IsPlayerInteracting", &AWhiteboardActor::execIsPlayerInteracting },
		{ "IsShapeTool", &AWhiteboardActor::execIsShapeTool },
		{ "Multicast_ClearWhiteboard", &AWhiteboardActor::execMulticast_ClearWhiteboard },
		{ "Multicast_ContinueDrawing", &AWhiteboardActor::execMulticast_ContinueDrawing },
		{ "Multicast_EndDrawing", &AWhiteboardActor::execMulticast_EndDrawing },
		{ "Multicast_StartDrawing", &AWhiteboardActor::execMulticast_StartDrawing },
		{ "Multicast_SyncWhiteboardState", &AWhiteboardActor::execMulticast_SyncWhiteboardState },
		{ "Multicast_UpdateDrawing", &AWhiteboardActor::execMulticast_UpdateDrawing },
		{ "Multicast_UpdateHistory", &AWhiteboardActor::execMulticast_UpdateHistory },
		{ "Multicast_UpdateShapePreview", &AWhiteboardActor::execMulticast_UpdateShapePreview },
		{ "OnRep_InteractingPawns", &AWhiteboardActor::execOnRep_InteractingPawns },
		{ "OnRep_StrokeHistory", &AWhiteboardActor::execOnRep_StrokeHistory },
		{ "OnTriggerBeginOverlap", &AWhiteboardActor::execOnTriggerBeginOverlap },
		{ "OnTriggerEndOverlap", &AWhiteboardActor::execOnTriggerEndOverlap },
		{ "Redo", &AWhiteboardActor::execRedo },
		{ "RemoveInteractingPlayer", &AWhiteboardActor::execRemoveInteractingPlayer },
		{ "RequestEndInteraction", &AWhiteboardActor::execRequestEndInteraction },
		{ "RequestInteraction", &AWhiteboardActor::execRequestInteraction },
		{ "Server_AddText", &AWhiteboardActor::execServer_AddText },
		{ "Server_ClearWhiteboard", &AWhiteboardActor::execServer_ClearWhiteboard },
		{ "Server_ContinueDrawing", &AWhiteboardActor::execServer_ContinueDrawing },
		{ "Server_DrawFigure", &AWhiteboardActor::execServer_DrawFigure },
		{ "Server_EndDrawing", &AWhiteboardActor::execServer_EndDrawing },
		{ "Server_Redo", &AWhiteboardActor::execServer_Redo },
		{ "Server_SetBrushSize", &AWhiteboardActor::execServer_SetBrushSize },
		{ "Server_SetBrushTexture", &AWhiteboardActor::execServer_SetBrushTexture },
		{ "Server_SetCurrentColor", &AWhiteboardActor::execServer_SetCurrentColor },
		{ "Server_SetCurrentTool", &AWhiteboardActor::execServer_SetCurrentTool },
		{ "Server_SetFigureTexture", &AWhiteboardActor::execServer_SetFigureTexture },
		{ "Server_SetTextString", &AWhiteboardActor::execServer_SetTextString },
		{ "Server_StartDrawing", &AWhiteboardActor::execServer_StartDrawing },
		{ "Server_Undo", &AWhiteboardActor::execServer_Undo },
		{ "SetBrushSize", &AWhiteboardActor::execSetBrushSize },
		{ "SetBrushTexture", &AWhiteboardActor::execSetBrushTexture },
		{ "SetCurrentColor", &AWhiteboardActor::execSetCurrentColor },
		{ "SetCurrentTool", &AWhiteboardActor::execSetCurrentTool },
		{ "SetFigureTexture", &AWhiteboardActor::execSetFigureTexture },
		{ "SetTextString", &AWhiteboardActor::execSetTextString },
		{ "StartDrawing", &AWhiteboardActor::execStartDrawing },
		{ "StartInteraction", &AWhiteboardActor::execStartInteraction },
		{ "Undo", &AWhiteboardActor::execUndo },
		{ "WorldToCanvasPosition", &AWhiteboardActor::execWorldToCanvasPosition },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AWhiteboardActor);
UClass* Z_Construct_UClass_AWhiteboardActor_NoRegister()
{
	return AWhiteboardActor::StaticClass();
}
struct Z_Construct_UClass_AWhiteboardActor_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Actor/WhiteboardActor.h" },
		{ "ModuleRelativePath", "Public/Actor/WhiteboardActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WhiteboardMesh_MetaData[] = {
		{ "Category", "Components" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Components\n" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Actor/WhiteboardActor.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Components" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InteractionVolume_MetaData[] = {
		{ "Category", "Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Actor/WhiteboardActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WhiteboardCamera_MetaData[] = {
		{ "Category", "Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Actor/WhiteboardActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DrawingCanvas_MetaData[] = {
		{ "Category", "Whiteboard" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Whiteboard properties\n" },
#endif
		{ "ModuleRelativePath", "Public/Actor/WhiteboardActor.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Whiteboard properties" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CanvasWidth_MetaData[] = {
		{ "Category", "Whiteboard" },
		{ "ModuleRelativePath", "Public/Actor/WhiteboardActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CanvasHeight_MetaData[] = {
		{ "Category", "Whiteboard" },
		{ "ModuleRelativePath", "Public/Actor/WhiteboardActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InteractionDistance_MetaData[] = {
		{ "Category", "Whiteboard" },
		{ "ModuleRelativePath", "Public/Actor/WhiteboardActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WhiteboardWidth_MetaData[] = {
		{ "Category", "Whiteboard" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Whiteboard dimensions (in world units)\n" },
#endif
		{ "ModuleRelativePath", "Public/Actor/WhiteboardActor.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Whiteboard dimensions (in world units)" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WhiteboardHeight_MetaData[] = {
		{ "Category", "Whiteboard" },
		{ "ModuleRelativePath", "Public/Actor/WhiteboardActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InitMaterialIndex_MetaData[] = {
		{ "Category", "Drawing" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Drawing properties\n" },
#endif
		{ "ModuleRelativePath", "Public/Actor/WhiteboardActor.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Drawing properties" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurrentTool_MetaData[] = {
		{ "Category", "Drawing" },
		{ "ModuleRelativePath", "Public/Actor/WhiteboardActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurrentColor_MetaData[] = {
		{ "Category", "Drawing" },
		{ "ModuleRelativePath", "Public/Actor/WhiteboardActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BrushSize_MetaData[] = {
		{ "Category", "Drawing" },
		{ "ClampMax", "100.0" },
		{ "ClampMin", "1.0" },
		{ "ModuleRelativePath", "Public/Actor/WhiteboardActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BrushTextures_MetaData[] = {
		{ "Category", "Drawing" },
		{ "ModuleRelativePath", "Public/Actor/WhiteboardActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SelectedBrushTextureIndex_MetaData[] = {
		{ "Category", "Drawing" },
		{ "ModuleRelativePath", "Public/Actor/WhiteboardActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FigureTextures_MetaData[] = {
		{ "Category", "Drawing" },
		{ "ModuleRelativePath", "Public/Actor/WhiteboardActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SelectedFigureTextureIndex_MetaData[] = {
		{ "Category", "Drawing" },
		{ "ModuleRelativePath", "Public/Actor/WhiteboardActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StrokeHistory_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Drawing history for undo/redo\n" },
#endif
		{ "ModuleRelativePath", "Public/Actor/WhiteboardActor.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Drawing history for undo/redo" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurrentHistoryIndex_MetaData[] = {
		{ "ModuleRelativePath", "Public/Actor/WhiteboardActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NextStrokeID_MetaData[] = {
		{ "ModuleRelativePath", "Public/Actor/WhiteboardActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurrentTextString_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// NEW: Current text string for UI input\n" },
#endif
		{ "ModuleRelativePath", "Public/Actor/WhiteboardActor.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "NEW: Current text string for UI input" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bCanInteract_MetaData[] = {
		{ "Category", "Interaction" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Interaction - Multi-player support\n" },
#endif
		{ "ModuleRelativePath", "Public/Actor/WhiteboardActor.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Interaction - Multi-player support" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxInteractingPlayers_MetaData[] = {
		{ "Category", "Interaction" },
		{ "ModuleRelativePath", "Public/Actor/WhiteboardActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InteractingPawns_MetaData[] = {
		{ "Category", "Interaction" },
		{ "ModuleRelativePath", "Public/Actor/WhiteboardActor.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WhiteboardMesh;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InteractionVolume;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WhiteboardCamera;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DrawingCanvas;
	static const UECodeGen_Private::FIntPropertyParams NewProp_CanvasWidth;
	static const UECodeGen_Private::FIntPropertyParams NewProp_CanvasHeight;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_InteractionDistance;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_WhiteboardWidth;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_WhiteboardHeight;
	static const UECodeGen_Private::FIntPropertyParams NewProp_InitMaterialIndex;
	static const UECodeGen_Private::FBytePropertyParams NewProp_CurrentTool_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_CurrentTool;
	static const UECodeGen_Private::FStructPropertyParams NewProp_CurrentColor;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_BrushSize;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_BrushTextures_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_BrushTextures;
	static const UECodeGen_Private::FIntPropertyParams NewProp_SelectedBrushTextureIndex;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_FigureTextures_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_FigureTextures;
	static const UECodeGen_Private::FIntPropertyParams NewProp_SelectedFigureTextureIndex;
	static const UECodeGen_Private::FStructPropertyParams NewProp_StrokeHistory_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_StrokeHistory;
	static const UECodeGen_Private::FIntPropertyParams NewProp_CurrentHistoryIndex;
	static const UECodeGen_Private::FIntPropertyParams NewProp_NextStrokeID;
	static const UECodeGen_Private::FStrPropertyParams NewProp_CurrentTextString;
	static void NewProp_bCanInteract_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bCanInteract;
	static const UECodeGen_Private::FIntPropertyParams NewProp_MaxInteractingPlayers;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InteractingPawns_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_InteractingPawns;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_AWhiteboardActor_AddText, "AddText" }, // 771667788
		{ &Z_Construct_UFunction_AWhiteboardActor_CanAcceptMorePlayers, "CanAcceptMorePlayers" }, // 2550638384
		{ &Z_Construct_UFunction_AWhiteboardActor_CanClientDraw, "CanClientDraw" }, // 599207493
		{ &Z_Construct_UFunction_AWhiteboardActor_CanInteractLocally, "CanInteractLocally" }, // 4149064317
		{ &Z_Construct_UFunction_AWhiteboardActor_CanPlayerInteract, "CanPlayerInteract" }, // 2609876535
		{ &Z_Construct_UFunction_AWhiteboardActor_ClearWhiteboard, "ClearWhiteboard" }, // 3223349268
		{ &Z_Construct_UFunction_AWhiteboardActor_Client_CleanupInteractionUI, "Client_CleanupInteractionUI" }, // 2415371470
		{ &Z_Construct_UFunction_AWhiteboardActor_Client_SetupInteractionUI, "Client_SetupInteractionUI" }, // 2280494868
		{ &Z_Construct_UFunction_AWhiteboardActor_Client_SyncWhiteboardState, "Client_SyncWhiteboardState" }, // 3051563572
		{ &Z_Construct_UFunction_AWhiteboardActor_ClientContinueDrawing, "ClientContinueDrawing" }, // 802646881
		{ &Z_Construct_UFunction_AWhiteboardActor_ClientEndDrawing, "ClientEndDrawing" }, // 1730428785
		{ &Z_Construct_UFunction_AWhiteboardActor_ClientStartDrawing, "ClientStartDrawing" }, // 3569939271
		{ &Z_Construct_UFunction_AWhiteboardActor_ContinueDrawing, "ContinueDrawing" }, // 1518234361
		{ &Z_Construct_UFunction_AWhiteboardActor_DebugNetworkState, "DebugNetworkState" }, // 2102661149
		{ &Z_Construct_UFunction_AWhiteboardActor_DrawFigure, "DrawFigure" }, // 3393667315
		{ &Z_Construct_UFunction_AWhiteboardActor_EndDrawing, "EndDrawing" }, // 1647312852
		{ &Z_Construct_UFunction_AWhiteboardActor_EndInteraction, "EndInteraction" }, // 684265355
		{ &Z_Construct_UFunction_AWhiteboardActor_EndInteractionForPlayer, "EndInteractionForPlayer" }, // 2121935780
		{ &Z_Construct_UFunction_AWhiteboardActor_ExportToPNG, "ExportToPNG" }, // 808597870
		{ &Z_Construct_UFunction_AWhiteboardActor_ExportToSVG, "ExportToSVG" }, // 744970138
		{ &Z_Construct_UFunction_AWhiteboardActor_GetInteractingPlayerCount, "GetInteractingPlayerCount" }, // 782114755
		{ &Z_Construct_UFunction_AWhiteboardActor_IsPlayerInRange, "IsPlayerInRange" }, // 3346114167
		{ &Z_Construct_UFunction_AWhiteboardActor_IsPlayerInteracting, "IsPlayerInteracting" }, // 1943807213
		{ &Z_Construct_UFunction_AWhiteboardActor_IsShapeTool, "IsShapeTool" }, // 1486527197
		{ &Z_Construct_UFunction_AWhiteboardActor_Multicast_ClearWhiteboard, "Multicast_ClearWhiteboard" }, // 766522331
		{ &Z_Construct_UFunction_AWhiteboardActor_Multicast_ContinueDrawing, "Multicast_ContinueDrawing" }, // 1260919252
		{ &Z_Construct_UFunction_AWhiteboardActor_Multicast_EndDrawing, "Multicast_EndDrawing" }, // 1437080312
		{ &Z_Construct_UFunction_AWhiteboardActor_Multicast_StartDrawing, "Multicast_StartDrawing" }, // 1517288567
		{ &Z_Construct_UFunction_AWhiteboardActor_Multicast_SyncWhiteboardState, "Multicast_SyncWhiteboardState" }, // 894022508
		{ &Z_Construct_UFunction_AWhiteboardActor_Multicast_UpdateDrawing, "Multicast_UpdateDrawing" }, // 4009996045
		{ &Z_Construct_UFunction_AWhiteboardActor_Multicast_UpdateHistory, "Multicast_UpdateHistory" }, // 1337367027
		{ &Z_Construct_UFunction_AWhiteboardActor_Multicast_UpdateShapePreview, "Multicast_UpdateShapePreview" }, // 2225389117
		{ &Z_Construct_UFunction_AWhiteboardActor_OnInteractionEnded, "OnInteractionEnded" }, // 2031512639
		{ &Z_Construct_UFunction_AWhiteboardActor_OnInteractionStarted, "OnInteractionStarted" }, // 732854466
		{ &Z_Construct_UFunction_AWhiteboardActor_OnPlayerEnteredRange, "OnPlayerEnteredRange" }, // 662559367
		{ &Z_Construct_UFunction_AWhiteboardActor_OnPlayerExitedRange, "OnPlayerExitedRange" }, // 3224335839
		{ &Z_Construct_UFunction_AWhiteboardActor_OnRep_InteractingPawns, "OnRep_InteractingPawns" }, // 2186847437
		{ &Z_Construct_UFunction_AWhiteboardActor_OnRep_StrokeHistory, "OnRep_StrokeHistory" }, // 2823244760
		{ &Z_Construct_UFunction_AWhiteboardActor_OnTriggerBeginOverlap, "OnTriggerBeginOverlap" }, // 668000641
		{ &Z_Construct_UFunction_AWhiteboardActor_OnTriggerEndOverlap, "OnTriggerEndOverlap" }, // 1815164165
		{ &Z_Construct_UFunction_AWhiteboardActor_Redo, "Redo" }, // 3267286095
		{ &Z_Construct_UFunction_AWhiteboardActor_RemoveInteractingPlayer, "RemoveInteractingPlayer" }, // 3621405594
		{ &Z_Construct_UFunction_AWhiteboardActor_RequestEndInteraction, "RequestEndInteraction" }, // 2860690381
		{ &Z_Construct_UFunction_AWhiteboardActor_RequestInteraction, "RequestInteraction" }, // 1792213857
		{ &Z_Construct_UFunction_AWhiteboardActor_Server_AddText, "Server_AddText" }, // 393925666
		{ &Z_Construct_UFunction_AWhiteboardActor_Server_ClearWhiteboard, "Server_ClearWhiteboard" }, // 3169542959
		{ &Z_Construct_UFunction_AWhiteboardActor_Server_ContinueDrawing, "Server_ContinueDrawing" }, // 4043242492
		{ &Z_Construct_UFunction_AWhiteboardActor_Server_DrawFigure, "Server_DrawFigure" }, // 3947098857
		{ &Z_Construct_UFunction_AWhiteboardActor_Server_EndDrawing, "Server_EndDrawing" }, // 3506036377
		{ &Z_Construct_UFunction_AWhiteboardActor_Server_Redo, "Server_Redo" }, // 689811919
		{ &Z_Construct_UFunction_AWhiteboardActor_Server_SetBrushSize, "Server_SetBrushSize" }, // 4251130739
		{ &Z_Construct_UFunction_AWhiteboardActor_Server_SetBrushTexture, "Server_SetBrushTexture" }, // 285270800
		{ &Z_Construct_UFunction_AWhiteboardActor_Server_SetCurrentColor, "Server_SetCurrentColor" }, // 437975255
		{ &Z_Construct_UFunction_AWhiteboardActor_Server_SetCurrentTool, "Server_SetCurrentTool" }, // 384910176
		{ &Z_Construct_UFunction_AWhiteboardActor_Server_SetFigureTexture, "Server_SetFigureTexture" }, // 1682711803
		{ &Z_Construct_UFunction_AWhiteboardActor_Server_SetTextString, "Server_SetTextString" }, // 2892900183
		{ &Z_Construct_UFunction_AWhiteboardActor_Server_StartDrawing, "Server_StartDrawing" }, // 1296285604
		{ &Z_Construct_UFunction_AWhiteboardActor_Server_Undo, "Server_Undo" }, // 4269054054
		{ &Z_Construct_UFunction_AWhiteboardActor_SetBrushSize, "SetBrushSize" }, // 1861433025
		{ &Z_Construct_UFunction_AWhiteboardActor_SetBrushTexture, "SetBrushTexture" }, // 2099916682
		{ &Z_Construct_UFunction_AWhiteboardActor_SetCurrentColor, "SetCurrentColor" }, // 4278438262
		{ &Z_Construct_UFunction_AWhiteboardActor_SetCurrentTool, "SetCurrentTool" }, // 2751362887
		{ &Z_Construct_UFunction_AWhiteboardActor_SetFigureTexture, "SetFigureTexture" }, // 1677756305
		{ &Z_Construct_UFunction_AWhiteboardActor_SetTextString, "SetTextString" }, // 1910441740
		{ &Z_Construct_UFunction_AWhiteboardActor_StartDrawing, "StartDrawing" }, // 3646673892
		{ &Z_Construct_UFunction_AWhiteboardActor_StartInteraction, "StartInteraction" }, // 1729956235
		{ &Z_Construct_UFunction_AWhiteboardActor_Undo, "Undo" }, // 1857735538
		{ &Z_Construct_UFunction_AWhiteboardActor_WorldToCanvasPosition, "WorldToCanvasPosition" }, // 3591925647
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AWhiteboardActor>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AWhiteboardActor_Statics::NewProp_WhiteboardMesh = { "WhiteboardMesh", nullptr, (EPropertyFlags)0x00100000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AWhiteboardActor, WhiteboardMesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WhiteboardMesh_MetaData), NewProp_WhiteboardMesh_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AWhiteboardActor_Statics::NewProp_InteractionVolume = { "InteractionVolume", nullptr, (EPropertyFlags)0x00100000000a000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AWhiteboardActor, InteractionVolume), Z_Construct_UClass_UBoxComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InteractionVolume_MetaData), NewProp_InteractionVolume_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AWhiteboardActor_Statics::NewProp_WhiteboardCamera = { "WhiteboardCamera", nullptr, (EPropertyFlags)0x00100000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AWhiteboardActor, WhiteboardCamera), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WhiteboardCamera_MetaData), NewProp_WhiteboardCamera_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AWhiteboardActor_Statics::NewProp_DrawingCanvas = { "DrawingCanvas", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AWhiteboardActor, DrawingCanvas), Z_Construct_UClass_UTextureRenderTarget2D_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DrawingCanvas_MetaData), NewProp_DrawingCanvas_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AWhiteboardActor_Statics::NewProp_CanvasWidth = { "CanvasWidth", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AWhiteboardActor, CanvasWidth), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CanvasWidth_MetaData), NewProp_CanvasWidth_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AWhiteboardActor_Statics::NewProp_CanvasHeight = { "CanvasHeight", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AWhiteboardActor, CanvasHeight), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CanvasHeight_MetaData), NewProp_CanvasHeight_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AWhiteboardActor_Statics::NewProp_InteractionDistance = { "InteractionDistance", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AWhiteboardActor, InteractionDistance), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InteractionDistance_MetaData), NewProp_InteractionDistance_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AWhiteboardActor_Statics::NewProp_WhiteboardWidth = { "WhiteboardWidth", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AWhiteboardActor, WhiteboardWidth), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WhiteboardWidth_MetaData), NewProp_WhiteboardWidth_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AWhiteboardActor_Statics::NewProp_WhiteboardHeight = { "WhiteboardHeight", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AWhiteboardActor, WhiteboardHeight), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WhiteboardHeight_MetaData), NewProp_WhiteboardHeight_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AWhiteboardActor_Statics::NewProp_InitMaterialIndex = { "InitMaterialIndex", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AWhiteboardActor, InitMaterialIndex), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InitMaterialIndex_MetaData), NewProp_InitMaterialIndex_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_AWhiteboardActor_Statics::NewProp_CurrentTool_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_AWhiteboardActor_Statics::NewProp_CurrentTool = { "CurrentTool", nullptr, (EPropertyFlags)0x0010000000000025, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AWhiteboardActor, CurrentTool), Z_Construct_UEnum_AdvancedDrawingBoard_EDrawingTool, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurrentTool_MetaData), NewProp_CurrentTool_MetaData) }; // 3667291816
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AWhiteboardActor_Statics::NewProp_CurrentColor = { "CurrentColor", nullptr, (EPropertyFlags)0x0010000000000025, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AWhiteboardActor, CurrentColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurrentColor_MetaData), NewProp_CurrentColor_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AWhiteboardActor_Statics::NewProp_BrushSize = { "BrushSize", nullptr, (EPropertyFlags)0x0010000000000025, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AWhiteboardActor, BrushSize), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BrushSize_MetaData), NewProp_BrushSize_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AWhiteboardActor_Statics::NewProp_BrushTextures_Inner = { "BrushTextures", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AWhiteboardActor_Statics::NewProp_BrushTextures = { "BrushTextures", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AWhiteboardActor, BrushTextures), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BrushTextures_MetaData), NewProp_BrushTextures_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AWhiteboardActor_Statics::NewProp_SelectedBrushTextureIndex = { "SelectedBrushTextureIndex", nullptr, (EPropertyFlags)0x0010000000000025, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AWhiteboardActor, SelectedBrushTextureIndex), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SelectedBrushTextureIndex_MetaData), NewProp_SelectedBrushTextureIndex_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AWhiteboardActor_Statics::NewProp_FigureTextures_Inner = { "FigureTextures", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AWhiteboardActor_Statics::NewProp_FigureTextures = { "FigureTextures", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AWhiteboardActor, FigureTextures), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FigureTextures_MetaData), NewProp_FigureTextures_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AWhiteboardActor_Statics::NewProp_SelectedFigureTextureIndex = { "SelectedFigureTextureIndex", nullptr, (EPropertyFlags)0x0010000000000025, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AWhiteboardActor, SelectedFigureTextureIndex), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SelectedFigureTextureIndex_MetaData), NewProp_SelectedFigureTextureIndex_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AWhiteboardActor_Statics::NewProp_StrokeHistory_Inner = { "StrokeHistory", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FStroke, METADATA_PARAMS(0, nullptr) }; // 2697397385
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AWhiteboardActor_Statics::NewProp_StrokeHistory = { "StrokeHistory", nullptr, (EPropertyFlags)0x0010000000000020, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AWhiteboardActor, StrokeHistory), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StrokeHistory_MetaData), NewProp_StrokeHistory_MetaData) }; // 2697397385
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AWhiteboardActor_Statics::NewProp_CurrentHistoryIndex = { "CurrentHistoryIndex", nullptr, (EPropertyFlags)0x0010000000000020, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AWhiteboardActor, CurrentHistoryIndex), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurrentHistoryIndex_MetaData), NewProp_CurrentHistoryIndex_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AWhiteboardActor_Statics::NewProp_NextStrokeID = { "NextStrokeID", nullptr, (EPropertyFlags)0x0010000000000020, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AWhiteboardActor, NextStrokeID), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NextStrokeID_MetaData), NewProp_NextStrokeID_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_AWhiteboardActor_Statics::NewProp_CurrentTextString = { "CurrentTextString", nullptr, (EPropertyFlags)0x0010000000000020, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AWhiteboardActor, CurrentTextString), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurrentTextString_MetaData), NewProp_CurrentTextString_MetaData) };
void Z_Construct_UClass_AWhiteboardActor_Statics::NewProp_bCanInteract_SetBit(void* Obj)
{
	((AWhiteboardActor*)Obj)->bCanInteract = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AWhiteboardActor_Statics::NewProp_bCanInteract = { "bCanInteract", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AWhiteboardActor), &Z_Construct_UClass_AWhiteboardActor_Statics::NewProp_bCanInteract_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bCanInteract_MetaData), NewProp_bCanInteract_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AWhiteboardActor_Statics::NewProp_MaxInteractingPlayers = { "MaxInteractingPlayers", nullptr, (EPropertyFlags)0x0010000000000025, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AWhiteboardActor, MaxInteractingPlayers), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxInteractingPlayers_MetaData), NewProp_MaxInteractingPlayers_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AWhiteboardActor_Statics::NewProp_InteractingPawns_Inner = { "InteractingPawns", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_APawn_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AWhiteboardActor_Statics::NewProp_InteractingPawns = { "InteractingPawns", "OnRep_InteractingPawns", (EPropertyFlags)0x0010000100000034, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AWhiteboardActor, InteractingPawns), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InteractingPawns_MetaData), NewProp_InteractingPawns_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AWhiteboardActor_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWhiteboardActor_Statics::NewProp_WhiteboardMesh,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWhiteboardActor_Statics::NewProp_InteractionVolume,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWhiteboardActor_Statics::NewProp_WhiteboardCamera,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWhiteboardActor_Statics::NewProp_DrawingCanvas,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWhiteboardActor_Statics::NewProp_CanvasWidth,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWhiteboardActor_Statics::NewProp_CanvasHeight,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWhiteboardActor_Statics::NewProp_InteractionDistance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWhiteboardActor_Statics::NewProp_WhiteboardWidth,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWhiteboardActor_Statics::NewProp_WhiteboardHeight,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWhiteboardActor_Statics::NewProp_InitMaterialIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWhiteboardActor_Statics::NewProp_CurrentTool_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWhiteboardActor_Statics::NewProp_CurrentTool,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWhiteboardActor_Statics::NewProp_CurrentColor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWhiteboardActor_Statics::NewProp_BrushSize,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWhiteboardActor_Statics::NewProp_BrushTextures_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWhiteboardActor_Statics::NewProp_BrushTextures,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWhiteboardActor_Statics::NewProp_SelectedBrushTextureIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWhiteboardActor_Statics::NewProp_FigureTextures_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWhiteboardActor_Statics::NewProp_FigureTextures,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWhiteboardActor_Statics::NewProp_SelectedFigureTextureIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWhiteboardActor_Statics::NewProp_StrokeHistory_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWhiteboardActor_Statics::NewProp_StrokeHistory,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWhiteboardActor_Statics::NewProp_CurrentHistoryIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWhiteboardActor_Statics::NewProp_NextStrokeID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWhiteboardActor_Statics::NewProp_CurrentTextString,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWhiteboardActor_Statics::NewProp_bCanInteract,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWhiteboardActor_Statics::NewProp_MaxInteractingPlayers,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWhiteboardActor_Statics::NewProp_InteractingPawns_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWhiteboardActor_Statics::NewProp_InteractingPawns,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AWhiteboardActor_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AWhiteboardActor_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_AdvancedDrawingBoard,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AWhiteboardActor_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AWhiteboardActor_Statics::ClassParams = {
	&AWhiteboardActor::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_AWhiteboardActor_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_AWhiteboardActor_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AWhiteboardActor_Statics::Class_MetaDataParams), Z_Construct_UClass_AWhiteboardActor_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AWhiteboardActor()
{
	if (!Z_Registration_Info_UClass_AWhiteboardActor.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AWhiteboardActor.OuterSingleton, Z_Construct_UClass_AWhiteboardActor_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AWhiteboardActor.OuterSingleton;
}
template<> ADVANCEDDRAWINGBOARD_API UClass* StaticClass<AWhiteboardActor>()
{
	return AWhiteboardActor::StaticClass();
}
void AWhiteboardActor::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
{
	static const FName Name_CurrentTool(TEXT("CurrentTool"));
	static const FName Name_CurrentColor(TEXT("CurrentColor"));
	static const FName Name_BrushSize(TEXT("BrushSize"));
	static const FName Name_SelectedBrushTextureIndex(TEXT("SelectedBrushTextureIndex"));
	static const FName Name_SelectedFigureTextureIndex(TEXT("SelectedFigureTextureIndex"));
	static const FName Name_StrokeHistory(TEXT("StrokeHistory"));
	static const FName Name_CurrentHistoryIndex(TEXT("CurrentHistoryIndex"));
	static const FName Name_NextStrokeID(TEXT("NextStrokeID"));
	static const FName Name_CurrentTextString(TEXT("CurrentTextString"));
	static const FName Name_MaxInteractingPlayers(TEXT("MaxInteractingPlayers"));
	static const FName Name_InteractingPawns(TEXT("InteractingPawns"));
	const bool bIsValid = true
		&& Name_CurrentTool == ClassReps[(int32)ENetFields_Private::CurrentTool].Property->GetFName()
		&& Name_CurrentColor == ClassReps[(int32)ENetFields_Private::CurrentColor].Property->GetFName()
		&& Name_BrushSize == ClassReps[(int32)ENetFields_Private::BrushSize].Property->GetFName()
		&& Name_SelectedBrushTextureIndex == ClassReps[(int32)ENetFields_Private::SelectedBrushTextureIndex].Property->GetFName()
		&& Name_SelectedFigureTextureIndex == ClassReps[(int32)ENetFields_Private::SelectedFigureTextureIndex].Property->GetFName()
		&& Name_StrokeHistory == ClassReps[(int32)ENetFields_Private::StrokeHistory].Property->GetFName()
		&& Name_CurrentHistoryIndex == ClassReps[(int32)ENetFields_Private::CurrentHistoryIndex].Property->GetFName()
		&& Name_NextStrokeID == ClassReps[(int32)ENetFields_Private::NextStrokeID].Property->GetFName()
		&& Name_CurrentTextString == ClassReps[(int32)ENetFields_Private::CurrentTextString].Property->GetFName()
		&& Name_MaxInteractingPlayers == ClassReps[(int32)ENetFields_Private::MaxInteractingPlayers].Property->GetFName()
		&& Name_InteractingPawns == ClassReps[(int32)ENetFields_Private::InteractingPawns].Property->GetFName();
	checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in AWhiteboardActor"));
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AWhiteboardActor);
AWhiteboardActor::~AWhiteboardActor() {}
// End Class AWhiteboardActor

// Begin Registration
struct Z_CompiledInDeferFile_FID_Advanced_WhiteBoard_Plugins_AdvancedDrawingBoard_Source_AdvancedDrawingBoard_Public_Actor_WhiteboardActor_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EDrawingTool_StaticEnum, TEXT("EDrawingTool"), &Z_Registration_Info_UEnum_EDrawingTool, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3667291816U) },
	};
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FDrawingPoint::StaticStruct, Z_Construct_UScriptStruct_FDrawingPoint_Statics::NewStructOps, TEXT("DrawingPoint"), &Z_Registration_Info_UScriptStruct_DrawingPoint, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FDrawingPoint), 2644549905U) },
		{ FStroke::StaticStruct, Z_Construct_UScriptStruct_FStroke_Statics::NewStructOps, TEXT("Stroke"), &Z_Registration_Info_UScriptStruct_Stroke, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FStroke), 2697397385U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AWhiteboardActor, AWhiteboardActor::StaticClass, TEXT("AWhiteboardActor"), &Z_Registration_Info_UClass_AWhiteboardActor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AWhiteboardActor), 2567589982U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Advanced_WhiteBoard_Plugins_AdvancedDrawingBoard_Source_AdvancedDrawingBoard_Public_Actor_WhiteboardActor_h_839568400(TEXT("/Script/AdvancedDrawingBoard"),
	Z_CompiledInDeferFile_FID_Advanced_WhiteBoard_Plugins_AdvancedDrawingBoard_Source_AdvancedDrawingBoard_Public_Actor_WhiteboardActor_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Advanced_WhiteBoard_Plugins_AdvancedDrawingBoard_Source_AdvancedDrawingBoard_Public_Actor_WhiteboardActor_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_Advanced_WhiteBoard_Plugins_AdvancedDrawingBoard_Source_AdvancedDrawingBoard_Public_Actor_WhiteboardActor_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Advanced_WhiteBoard_Plugins_AdvancedDrawingBoard_Source_AdvancedDrawingBoard_Public_Actor_WhiteboardActor_h_Statics::ScriptStructInfo),
	Z_CompiledInDeferFile_FID_Advanced_WhiteBoard_Plugins_AdvancedDrawingBoard_Source_AdvancedDrawingBoard_Public_Actor_WhiteboardActor_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Advanced_WhiteBoard_Plugins_AdvancedDrawingBoard_Source_AdvancedDrawingBoard_Public_Actor_WhiteboardActor_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
