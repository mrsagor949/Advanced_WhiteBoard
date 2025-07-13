// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AdvancedDrawingBoard/Public/UI/WhiteboardUI.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWhiteboardUI() {}

// Begin Cross Module References
ADVANCEDDRAWINGBOARD_API UClass* Z_Construct_UClass_AWhiteboardActor_NoRegister();
ADVANCEDDRAWINGBOARD_API UClass* Z_Construct_UClass_UWhiteboardUI();
ADVANCEDDRAWINGBOARD_API UClass* Z_Construct_UClass_UWhiteboardUI_NoRegister();
ADVANCEDDRAWINGBOARD_API UEnum* Z_Construct_UEnum_AdvancedDrawingBoard_EDrawingTool();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
UMG_API UClass* Z_Construct_UClass_UUserWidget();
UPackage* Z_Construct_UPackage__Script_AdvancedDrawingBoard();
// End Cross Module References

// Begin Class UWhiteboardUI Function AddText
struct Z_Construct_UFunction_UWhiteboardUI_AddText_Statics
{
	struct WhiteboardUI_eventAddText_Parms
	{
		FString Text;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Whiteboard" },
		{ "ModuleRelativePath", "Public/UI/WhiteboardUI.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Text_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_Text;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWhiteboardUI_AddText_Statics::NewProp_Text = { "Text", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WhiteboardUI_eventAddText_Parms, Text), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Text_MetaData), NewProp_Text_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWhiteboardUI_AddText_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWhiteboardUI_AddText_Statics::NewProp_Text,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UWhiteboardUI_AddText_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWhiteboardUI_AddText_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWhiteboardUI, nullptr, "AddText", nullptr, nullptr, Z_Construct_UFunction_UWhiteboardUI_AddText_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWhiteboardUI_AddText_Statics::PropPointers), sizeof(Z_Construct_UFunction_UWhiteboardUI_AddText_Statics::WhiteboardUI_eventAddText_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UWhiteboardUI_AddText_Statics::Function_MetaDataParams), Z_Construct_UFunction_UWhiteboardUI_AddText_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UWhiteboardUI_AddText_Statics::WhiteboardUI_eventAddText_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UWhiteboardUI_AddText()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWhiteboardUI_AddText_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UWhiteboardUI::execAddText)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_Text);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->AddText(Z_Param_Text);
	P_NATIVE_END;
}
// End Class UWhiteboardUI Function AddText

// Begin Class UWhiteboardUI Function ClearWhiteboard
struct Z_Construct_UFunction_UWhiteboardUI_ClearWhiteboard_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Whiteboard" },
		{ "ModuleRelativePath", "Public/UI/WhiteboardUI.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWhiteboardUI_ClearWhiteboard_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWhiteboardUI, nullptr, "ClearWhiteboard", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UWhiteboardUI_ClearWhiteboard_Statics::Function_MetaDataParams), Z_Construct_UFunction_UWhiteboardUI_ClearWhiteboard_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UWhiteboardUI_ClearWhiteboard()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWhiteboardUI_ClearWhiteboard_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UWhiteboardUI::execClearWhiteboard)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ClearWhiteboard();
	P_NATIVE_END;
}
// End Class UWhiteboardUI Function ClearWhiteboard

// Begin Class UWhiteboardUI Function ExportToPNG
struct Z_Construct_UFunction_UWhiteboardUI_ExportToPNG_Statics
{
	struct WhiteboardUI_eventExportToPNG_Parms
	{
		FString FilePath;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Whiteboard" },
		{ "ModuleRelativePath", "Public/UI/WhiteboardUI.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FilePath_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_FilePath;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWhiteboardUI_ExportToPNG_Statics::NewProp_FilePath = { "FilePath", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WhiteboardUI_eventExportToPNG_Parms, FilePath), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FilePath_MetaData), NewProp_FilePath_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWhiteboardUI_ExportToPNG_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWhiteboardUI_ExportToPNG_Statics::NewProp_FilePath,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UWhiteboardUI_ExportToPNG_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWhiteboardUI_ExportToPNG_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWhiteboardUI, nullptr, "ExportToPNG", nullptr, nullptr, Z_Construct_UFunction_UWhiteboardUI_ExportToPNG_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWhiteboardUI_ExportToPNG_Statics::PropPointers), sizeof(Z_Construct_UFunction_UWhiteboardUI_ExportToPNG_Statics::WhiteboardUI_eventExportToPNG_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UWhiteboardUI_ExportToPNG_Statics::Function_MetaDataParams), Z_Construct_UFunction_UWhiteboardUI_ExportToPNG_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UWhiteboardUI_ExportToPNG_Statics::WhiteboardUI_eventExportToPNG_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UWhiteboardUI_ExportToPNG()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWhiteboardUI_ExportToPNG_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UWhiteboardUI::execExportToPNG)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_FilePath);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ExportToPNG(Z_Param_FilePath);
	P_NATIVE_END;
}
// End Class UWhiteboardUI Function ExportToPNG

// Begin Class UWhiteboardUI Function ExportToSVG
struct Z_Construct_UFunction_UWhiteboardUI_ExportToSVG_Statics
{
	struct WhiteboardUI_eventExportToSVG_Parms
	{
		FString FilePath;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Whiteboard" },
		{ "ModuleRelativePath", "Public/UI/WhiteboardUI.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FilePath_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_FilePath;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWhiteboardUI_ExportToSVG_Statics::NewProp_FilePath = { "FilePath", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WhiteboardUI_eventExportToSVG_Parms, FilePath), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FilePath_MetaData), NewProp_FilePath_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWhiteboardUI_ExportToSVG_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWhiteboardUI_ExportToSVG_Statics::NewProp_FilePath,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UWhiteboardUI_ExportToSVG_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWhiteboardUI_ExportToSVG_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWhiteboardUI, nullptr, "ExportToSVG", nullptr, nullptr, Z_Construct_UFunction_UWhiteboardUI_ExportToSVG_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWhiteboardUI_ExportToSVG_Statics::PropPointers), sizeof(Z_Construct_UFunction_UWhiteboardUI_ExportToSVG_Statics::WhiteboardUI_eventExportToSVG_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UWhiteboardUI_ExportToSVG_Statics::Function_MetaDataParams), Z_Construct_UFunction_UWhiteboardUI_ExportToSVG_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UWhiteboardUI_ExportToSVG_Statics::WhiteboardUI_eventExportToSVG_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UWhiteboardUI_ExportToSVG()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWhiteboardUI_ExportToSVG_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UWhiteboardUI::execExportToSVG)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_FilePath);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ExportToSVG(Z_Param_FilePath);
	P_NATIVE_END;
}
// End Class UWhiteboardUI Function ExportToSVG

// Begin Class UWhiteboardUI Function OnToolChanged
struct WhiteboardUI_eventOnToolChanged_Parms
{
	EDrawingTool NewTool;
};
static const FName NAME_UWhiteboardUI_OnToolChanged = FName(TEXT("OnToolChanged"));
void UWhiteboardUI::OnToolChanged(EDrawingTool NewTool)
{
	WhiteboardUI_eventOnToolChanged_Parms Parms;
	Parms.NewTool=NewTool;
	UFunction* Func = FindFunctionChecked(NAME_UWhiteboardUI_OnToolChanged);
	ProcessEvent(Func,&Parms);
}
struct Z_Construct_UFunction_UWhiteboardUI_OnToolChanged_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "UI Events" },
		{ "ModuleRelativePath", "Public/UI/WhiteboardUI.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_NewTool_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_NewTool;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UWhiteboardUI_OnToolChanged_Statics::NewProp_NewTool_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UWhiteboardUI_OnToolChanged_Statics::NewProp_NewTool = { "NewTool", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WhiteboardUI_eventOnToolChanged_Parms, NewTool), Z_Construct_UEnum_AdvancedDrawingBoard_EDrawingTool, METADATA_PARAMS(0, nullptr) }; // 1505869976
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWhiteboardUI_OnToolChanged_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWhiteboardUI_OnToolChanged_Statics::NewProp_NewTool_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWhiteboardUI_OnToolChanged_Statics::NewProp_NewTool,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UWhiteboardUI_OnToolChanged_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWhiteboardUI_OnToolChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWhiteboardUI, nullptr, "OnToolChanged", nullptr, nullptr, Z_Construct_UFunction_UWhiteboardUI_OnToolChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWhiteboardUI_OnToolChanged_Statics::PropPointers), sizeof(WhiteboardUI_eventOnToolChanged_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UWhiteboardUI_OnToolChanged_Statics::Function_MetaDataParams), Z_Construct_UFunction_UWhiteboardUI_OnToolChanged_Statics::Function_MetaDataParams) };
static_assert(sizeof(WhiteboardUI_eventOnToolChanged_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UWhiteboardUI_OnToolChanged()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWhiteboardUI_OnToolChanged_Statics::FuncParams);
	}
	return ReturnFunction;
}
// End Class UWhiteboardUI Function OnToolChanged

// Begin Class UWhiteboardUI Function Redo
struct Z_Construct_UFunction_UWhiteboardUI_Redo_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Whiteboard" },
		{ "ModuleRelativePath", "Public/UI/WhiteboardUI.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWhiteboardUI_Redo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWhiteboardUI, nullptr, "Redo", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UWhiteboardUI_Redo_Statics::Function_MetaDataParams), Z_Construct_UFunction_UWhiteboardUI_Redo_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UWhiteboardUI_Redo()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWhiteboardUI_Redo_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UWhiteboardUI::execRedo)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Redo();
	P_NATIVE_END;
}
// End Class UWhiteboardUI Function Redo

// Begin Class UWhiteboardUI Function SetBrushSize
struct Z_Construct_UFunction_UWhiteboardUI_SetBrushSize_Statics
{
	struct WhiteboardUI_eventSetBrushSize_Parms
	{
		float Size;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Whiteboard" },
		{ "ModuleRelativePath", "Public/UI/WhiteboardUI.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Size;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UWhiteboardUI_SetBrushSize_Statics::NewProp_Size = { "Size", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WhiteboardUI_eventSetBrushSize_Parms, Size), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWhiteboardUI_SetBrushSize_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWhiteboardUI_SetBrushSize_Statics::NewProp_Size,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UWhiteboardUI_SetBrushSize_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWhiteboardUI_SetBrushSize_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWhiteboardUI, nullptr, "SetBrushSize", nullptr, nullptr, Z_Construct_UFunction_UWhiteboardUI_SetBrushSize_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWhiteboardUI_SetBrushSize_Statics::PropPointers), sizeof(Z_Construct_UFunction_UWhiteboardUI_SetBrushSize_Statics::WhiteboardUI_eventSetBrushSize_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UWhiteboardUI_SetBrushSize_Statics::Function_MetaDataParams), Z_Construct_UFunction_UWhiteboardUI_SetBrushSize_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UWhiteboardUI_SetBrushSize_Statics::WhiteboardUI_eventSetBrushSize_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UWhiteboardUI_SetBrushSize()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWhiteboardUI_SetBrushSize_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UWhiteboardUI::execSetBrushSize)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_Size);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetBrushSize(Z_Param_Size);
	P_NATIVE_END;
}
// End Class UWhiteboardUI Function SetBrushSize

// Begin Class UWhiteboardUI Function SetBrushTexture
struct Z_Construct_UFunction_UWhiteboardUI_SetBrushTexture_Statics
{
	struct WhiteboardUI_eventSetBrushTexture_Parms
	{
		int32 TextureIndex;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Whiteboard" },
		{ "ModuleRelativePath", "Public/UI/WhiteboardUI.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_TextureIndex;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UWhiteboardUI_SetBrushTexture_Statics::NewProp_TextureIndex = { "TextureIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WhiteboardUI_eventSetBrushTexture_Parms, TextureIndex), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWhiteboardUI_SetBrushTexture_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWhiteboardUI_SetBrushTexture_Statics::NewProp_TextureIndex,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UWhiteboardUI_SetBrushTexture_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWhiteboardUI_SetBrushTexture_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWhiteboardUI, nullptr, "SetBrushTexture", nullptr, nullptr, Z_Construct_UFunction_UWhiteboardUI_SetBrushTexture_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWhiteboardUI_SetBrushTexture_Statics::PropPointers), sizeof(Z_Construct_UFunction_UWhiteboardUI_SetBrushTexture_Statics::WhiteboardUI_eventSetBrushTexture_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UWhiteboardUI_SetBrushTexture_Statics::Function_MetaDataParams), Z_Construct_UFunction_UWhiteboardUI_SetBrushTexture_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UWhiteboardUI_SetBrushTexture_Statics::WhiteboardUI_eventSetBrushTexture_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UWhiteboardUI_SetBrushTexture()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWhiteboardUI_SetBrushTexture_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UWhiteboardUI::execSetBrushTexture)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_TextureIndex);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetBrushTexture(Z_Param_TextureIndex);
	P_NATIVE_END;
}
// End Class UWhiteboardUI Function SetBrushTexture

// Begin Class UWhiteboardUI Function SetDrawingColor
struct Z_Construct_UFunction_UWhiteboardUI_SetDrawingColor_Statics
{
	struct WhiteboardUI_eventSetDrawingColor_Parms
	{
		FLinearColor Color;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Whiteboard" },
		{ "ModuleRelativePath", "Public/UI/WhiteboardUI.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Color;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UWhiteboardUI_SetDrawingColor_Statics::NewProp_Color = { "Color", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WhiteboardUI_eventSetDrawingColor_Parms, Color), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWhiteboardUI_SetDrawingColor_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWhiteboardUI_SetDrawingColor_Statics::NewProp_Color,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UWhiteboardUI_SetDrawingColor_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWhiteboardUI_SetDrawingColor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWhiteboardUI, nullptr, "SetDrawingColor", nullptr, nullptr, Z_Construct_UFunction_UWhiteboardUI_SetDrawingColor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWhiteboardUI_SetDrawingColor_Statics::PropPointers), sizeof(Z_Construct_UFunction_UWhiteboardUI_SetDrawingColor_Statics::WhiteboardUI_eventSetDrawingColor_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UWhiteboardUI_SetDrawingColor_Statics::Function_MetaDataParams), Z_Construct_UFunction_UWhiteboardUI_SetDrawingColor_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UWhiteboardUI_SetDrawingColor_Statics::WhiteboardUI_eventSetDrawingColor_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UWhiteboardUI_SetDrawingColor()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWhiteboardUI_SetDrawingColor_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UWhiteboardUI::execSetDrawingColor)
{
	P_GET_STRUCT(FLinearColor,Z_Param_Color);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetDrawingColor(Z_Param_Color);
	P_NATIVE_END;
}
// End Class UWhiteboardUI Function SetDrawingColor

// Begin Class UWhiteboardUI Function SetDrawingTool
struct Z_Construct_UFunction_UWhiteboardUI_SetDrawingTool_Statics
{
	struct WhiteboardUI_eventSetDrawingTool_Parms
	{
		EDrawingTool Tool;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Whiteboard" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Blueprint callable functions\n" },
#endif
		{ "ModuleRelativePath", "Public/UI/WhiteboardUI.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Blueprint callable functions" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_Tool_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Tool;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UWhiteboardUI_SetDrawingTool_Statics::NewProp_Tool_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UWhiteboardUI_SetDrawingTool_Statics::NewProp_Tool = { "Tool", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WhiteboardUI_eventSetDrawingTool_Parms, Tool), Z_Construct_UEnum_AdvancedDrawingBoard_EDrawingTool, METADATA_PARAMS(0, nullptr) }; // 1505869976
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWhiteboardUI_SetDrawingTool_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWhiteboardUI_SetDrawingTool_Statics::NewProp_Tool_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWhiteboardUI_SetDrawingTool_Statics::NewProp_Tool,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UWhiteboardUI_SetDrawingTool_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWhiteboardUI_SetDrawingTool_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWhiteboardUI, nullptr, "SetDrawingTool", nullptr, nullptr, Z_Construct_UFunction_UWhiteboardUI_SetDrawingTool_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWhiteboardUI_SetDrawingTool_Statics::PropPointers), sizeof(Z_Construct_UFunction_UWhiteboardUI_SetDrawingTool_Statics::WhiteboardUI_eventSetDrawingTool_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UWhiteboardUI_SetDrawingTool_Statics::Function_MetaDataParams), Z_Construct_UFunction_UWhiteboardUI_SetDrawingTool_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UWhiteboardUI_SetDrawingTool_Statics::WhiteboardUI_eventSetDrawingTool_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UWhiteboardUI_SetDrawingTool()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWhiteboardUI_SetDrawingTool_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UWhiteboardUI::execSetDrawingTool)
{
	P_GET_ENUM(EDrawingTool,Z_Param_Tool);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetDrawingTool(EDrawingTool(Z_Param_Tool));
	P_NATIVE_END;
}
// End Class UWhiteboardUI Function SetDrawingTool

// Begin Class UWhiteboardUI Function Undo
struct Z_Construct_UFunction_UWhiteboardUI_Undo_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Whiteboard" },
		{ "ModuleRelativePath", "Public/UI/WhiteboardUI.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWhiteboardUI_Undo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWhiteboardUI, nullptr, "Undo", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UWhiteboardUI_Undo_Statics::Function_MetaDataParams), Z_Construct_UFunction_UWhiteboardUI_Undo_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UWhiteboardUI_Undo()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWhiteboardUI_Undo_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UWhiteboardUI::execUndo)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Undo();
	P_NATIVE_END;
}
// End Class UWhiteboardUI Function Undo

// Begin Class UWhiteboardUI
void UWhiteboardUI::StaticRegisterNativesUWhiteboardUI()
{
	UClass* Class = UWhiteboardUI::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "AddText", &UWhiteboardUI::execAddText },
		{ "ClearWhiteboard", &UWhiteboardUI::execClearWhiteboard },
		{ "ExportToPNG", &UWhiteboardUI::execExportToPNG },
		{ "ExportToSVG", &UWhiteboardUI::execExportToSVG },
		{ "Redo", &UWhiteboardUI::execRedo },
		{ "SetBrushSize", &UWhiteboardUI::execSetBrushSize },
		{ "SetBrushTexture", &UWhiteboardUI::execSetBrushTexture },
		{ "SetDrawingColor", &UWhiteboardUI::execSetDrawingColor },
		{ "SetDrawingTool", &UWhiteboardUI::execSetDrawingTool },
		{ "Undo", &UWhiteboardUI::execUndo },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UWhiteboardUI);
UClass* Z_Construct_UClass_UWhiteboardUI_NoRegister()
{
	return UWhiteboardUI::StaticClass();
}
struct Z_Construct_UClass_UWhiteboardUI_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "UI/WhiteboardUI.h" },
		{ "ModuleRelativePath", "Public/UI/WhiteboardUI.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TargetWhiteboard_MetaData[] = {
		{ "Category", "Whiteboard" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Reference to the whiteboard actor\n" },
#endif
		{ "ModuleRelativePath", "Public/UI/WhiteboardUI.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Reference to the whiteboard actor" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_TargetWhiteboard;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UWhiteboardUI_AddText, "AddText" }, // 596749117
		{ &Z_Construct_UFunction_UWhiteboardUI_ClearWhiteboard, "ClearWhiteboard" }, // 4260004552
		{ &Z_Construct_UFunction_UWhiteboardUI_ExportToPNG, "ExportToPNG" }, // 2813775823
		{ &Z_Construct_UFunction_UWhiteboardUI_ExportToSVG, "ExportToSVG" }, // 1647900101
		{ &Z_Construct_UFunction_UWhiteboardUI_OnToolChanged, "OnToolChanged" }, // 198955582
		{ &Z_Construct_UFunction_UWhiteboardUI_Redo, "Redo" }, // 2284434020
		{ &Z_Construct_UFunction_UWhiteboardUI_SetBrushSize, "SetBrushSize" }, // 952893323
		{ &Z_Construct_UFunction_UWhiteboardUI_SetBrushTexture, "SetBrushTexture" }, // 850417578
		{ &Z_Construct_UFunction_UWhiteboardUI_SetDrawingColor, "SetDrawingColor" }, // 3878849303
		{ &Z_Construct_UFunction_UWhiteboardUI_SetDrawingTool, "SetDrawingTool" }, // 915320871
		{ &Z_Construct_UFunction_UWhiteboardUI_Undo, "Undo" }, // 2012774760
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UWhiteboardUI>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UWhiteboardUI_Statics::NewProp_TargetWhiteboard = { "TargetWhiteboard", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UWhiteboardUI, TargetWhiteboard), Z_Construct_UClass_AWhiteboardActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TargetWhiteboard_MetaData), NewProp_TargetWhiteboard_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UWhiteboardUI_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWhiteboardUI_Statics::NewProp_TargetWhiteboard,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UWhiteboardUI_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UWhiteboardUI_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UUserWidget,
	(UObject* (*)())Z_Construct_UPackage__Script_AdvancedDrawingBoard,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UWhiteboardUI_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UWhiteboardUI_Statics::ClassParams = {
	&UWhiteboardUI::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UWhiteboardUI_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UWhiteboardUI_Statics::PropPointers),
	0,
	0x00B010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UWhiteboardUI_Statics::Class_MetaDataParams), Z_Construct_UClass_UWhiteboardUI_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UWhiteboardUI()
{
	if (!Z_Registration_Info_UClass_UWhiteboardUI.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UWhiteboardUI.OuterSingleton, Z_Construct_UClass_UWhiteboardUI_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UWhiteboardUI.OuterSingleton;
}
template<> ADVANCEDDRAWINGBOARD_API UClass* StaticClass<UWhiteboardUI>()
{
	return UWhiteboardUI::StaticClass();
}
UWhiteboardUI::UWhiteboardUI(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UWhiteboardUI);
UWhiteboardUI::~UWhiteboardUI() {}
// End Class UWhiteboardUI

// Begin Registration
struct Z_CompiledInDeferFile_FID_Advanced_WhiteBoard_Plugins_AdvancedDrawingBoard_Source_AdvancedDrawingBoard_Public_UI_WhiteboardUI_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UWhiteboardUI, UWhiteboardUI::StaticClass, TEXT("UWhiteboardUI"), &Z_Registration_Info_UClass_UWhiteboardUI, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UWhiteboardUI), 1616237287U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Advanced_WhiteBoard_Plugins_AdvancedDrawingBoard_Source_AdvancedDrawingBoard_Public_UI_WhiteboardUI_h_3683459477(TEXT("/Script/AdvancedDrawingBoard"),
	Z_CompiledInDeferFile_FID_Advanced_WhiteBoard_Plugins_AdvancedDrawingBoard_Source_AdvancedDrawingBoard_Public_UI_WhiteboardUI_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Advanced_WhiteBoard_Plugins_AdvancedDrawingBoard_Source_AdvancedDrawingBoard_Public_UI_WhiteboardUI_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
