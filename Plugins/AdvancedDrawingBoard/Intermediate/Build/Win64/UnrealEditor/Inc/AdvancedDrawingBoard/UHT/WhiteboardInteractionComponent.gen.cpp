// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AdvancedDrawingBoard/Public/Components/WhiteboardInteractionComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWhiteboardInteractionComponent() {}

// Begin Cross Module References
ADVANCEDDRAWINGBOARD_API UClass* Z_Construct_UClass_AWhiteboardActor_NoRegister();
ADVANCEDDRAWINGBOARD_API UClass* Z_Construct_UClass_UWhiteboardInteractionComponent();
ADVANCEDDRAWINGBOARD_API UClass* Z_Construct_UClass_UWhiteboardInteractionComponent_NoRegister();
ADVANCEDDRAWINGBOARD_API UEnum* Z_Construct_UEnum_AdvancedDrawingBoard_EDrawingTool();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
ENGINE_API UClass* Z_Construct_UClass_APawn_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
UPackage* Z_Construct_UPackage__Script_AdvancedDrawingBoard();
// End Cross Module References

// Begin Class UWhiteboardInteractionComponent Function AddText
struct Z_Construct_UFunction_UWhiteboardInteractionComponent_AddText_Statics
{
	struct WhiteboardInteractionComponent_eventAddText_Parms
	{
		FString Text;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Whiteboard" },
		{ "ModuleRelativePath", "Public/Components/WhiteboardInteractionComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Text_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_Text;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWhiteboardInteractionComponent_AddText_Statics::NewProp_Text = { "Text", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WhiteboardInteractionComponent_eventAddText_Parms, Text), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Text_MetaData), NewProp_Text_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWhiteboardInteractionComponent_AddText_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWhiteboardInteractionComponent_AddText_Statics::NewProp_Text,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UWhiteboardInteractionComponent_AddText_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWhiteboardInteractionComponent_AddText_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWhiteboardInteractionComponent, nullptr, "AddText", nullptr, nullptr, Z_Construct_UFunction_UWhiteboardInteractionComponent_AddText_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWhiteboardInteractionComponent_AddText_Statics::PropPointers), sizeof(Z_Construct_UFunction_UWhiteboardInteractionComponent_AddText_Statics::WhiteboardInteractionComponent_eventAddText_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UWhiteboardInteractionComponent_AddText_Statics::Function_MetaDataParams), Z_Construct_UFunction_UWhiteboardInteractionComponent_AddText_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UWhiteboardInteractionComponent_AddText_Statics::WhiteboardInteractionComponent_eventAddText_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UWhiteboardInteractionComponent_AddText()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWhiteboardInteractionComponent_AddText_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UWhiteboardInteractionComponent::execAddText)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_Text);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->AddText(Z_Param_Text);
	P_NATIVE_END;
}
// End Class UWhiteboardInteractionComponent Function AddText

// Begin Class UWhiteboardInteractionComponent Function AddTextAtPosition
struct Z_Construct_UFunction_UWhiteboardInteractionComponent_AddTextAtPosition_Statics
{
	struct WhiteboardInteractionComponent_eventAddTextAtPosition_Parms
	{
		FVector2D CanvasPosition;
		FString Text;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Whiteboard" },
		{ "ModuleRelativePath", "Public/Components/WhiteboardInteractionComponent.h" },
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
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UWhiteboardInteractionComponent_AddTextAtPosition_Statics::NewProp_CanvasPosition = { "CanvasPosition", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WhiteboardInteractionComponent_eventAddTextAtPosition_Parms, CanvasPosition), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CanvasPosition_MetaData), NewProp_CanvasPosition_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWhiteboardInteractionComponent_AddTextAtPosition_Statics::NewProp_Text = { "Text", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WhiteboardInteractionComponent_eventAddTextAtPosition_Parms, Text), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Text_MetaData), NewProp_Text_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWhiteboardInteractionComponent_AddTextAtPosition_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWhiteboardInteractionComponent_AddTextAtPosition_Statics::NewProp_CanvasPosition,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWhiteboardInteractionComponent_AddTextAtPosition_Statics::NewProp_Text,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UWhiteboardInteractionComponent_AddTextAtPosition_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWhiteboardInteractionComponent_AddTextAtPosition_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWhiteboardInteractionComponent, nullptr, "AddTextAtPosition", nullptr, nullptr, Z_Construct_UFunction_UWhiteboardInteractionComponent_AddTextAtPosition_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWhiteboardInteractionComponent_AddTextAtPosition_Statics::PropPointers), sizeof(Z_Construct_UFunction_UWhiteboardInteractionComponent_AddTextAtPosition_Statics::WhiteboardInteractionComponent_eventAddTextAtPosition_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UWhiteboardInteractionComponent_AddTextAtPosition_Statics::Function_MetaDataParams), Z_Construct_UFunction_UWhiteboardInteractionComponent_AddTextAtPosition_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UWhiteboardInteractionComponent_AddTextAtPosition_Statics::WhiteboardInteractionComponent_eventAddTextAtPosition_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UWhiteboardInteractionComponent_AddTextAtPosition()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWhiteboardInteractionComponent_AddTextAtPosition_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UWhiteboardInteractionComponent::execAddTextAtPosition)
{
	P_GET_STRUCT_REF(FVector2D,Z_Param_Out_CanvasPosition);
	P_GET_PROPERTY(FStrProperty,Z_Param_Text);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->AddTextAtPosition(Z_Param_Out_CanvasPosition,Z_Param_Text);
	P_NATIVE_END;
}
// End Class UWhiteboardInteractionComponent Function AddTextAtPosition

// Begin Class UWhiteboardInteractionComponent Function ClearWhiteboard
struct Z_Construct_UFunction_UWhiteboardInteractionComponent_ClearWhiteboard_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Whiteboard" },
		{ "ModuleRelativePath", "Public/Components/WhiteboardInteractionComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWhiteboardInteractionComponent_ClearWhiteboard_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWhiteboardInteractionComponent, nullptr, "ClearWhiteboard", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UWhiteboardInteractionComponent_ClearWhiteboard_Statics::Function_MetaDataParams), Z_Construct_UFunction_UWhiteboardInteractionComponent_ClearWhiteboard_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UWhiteboardInteractionComponent_ClearWhiteboard()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWhiteboardInteractionComponent_ClearWhiteboard_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UWhiteboardInteractionComponent::execClearWhiteboard)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ClearWhiteboard();
	P_NATIVE_END;
}
// End Class UWhiteboardInteractionComponent Function ClearWhiteboard

// Begin Class UWhiteboardInteractionComponent Function ContinueDrawing
struct Z_Construct_UFunction_UWhiteboardInteractionComponent_ContinueDrawing_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Whiteboard" },
		{ "ModuleRelativePath", "Public/Components/WhiteboardInteractionComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWhiteboardInteractionComponent_ContinueDrawing_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWhiteboardInteractionComponent, nullptr, "ContinueDrawing", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UWhiteboardInteractionComponent_ContinueDrawing_Statics::Function_MetaDataParams), Z_Construct_UFunction_UWhiteboardInteractionComponent_ContinueDrawing_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UWhiteboardInteractionComponent_ContinueDrawing()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWhiteboardInteractionComponent_ContinueDrawing_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UWhiteboardInteractionComponent::execContinueDrawing)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ContinueDrawing();
	P_NATIVE_END;
}
// End Class UWhiteboardInteractionComponent Function ContinueDrawing

// Begin Class UWhiteboardInteractionComponent Function EndInteraction
struct Z_Construct_UFunction_UWhiteboardInteractionComponent_EndInteraction_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Interaction" },
		{ "ModuleRelativePath", "Public/Components/WhiteboardInteractionComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWhiteboardInteractionComponent_EndInteraction_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWhiteboardInteractionComponent, nullptr, "EndInteraction", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UWhiteboardInteractionComponent_EndInteraction_Statics::Function_MetaDataParams), Z_Construct_UFunction_UWhiteboardInteractionComponent_EndInteraction_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UWhiteboardInteractionComponent_EndInteraction()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWhiteboardInteractionComponent_EndInteraction_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UWhiteboardInteractionComponent::execEndInteraction)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->EndInteraction();
	P_NATIVE_END;
}
// End Class UWhiteboardInteractionComponent Function EndInteraction

// Begin Class UWhiteboardInteractionComponent Function ExportToPNG
struct Z_Construct_UFunction_UWhiteboardInteractionComponent_ExportToPNG_Statics
{
	struct WhiteboardInteractionComponent_eventExportToPNG_Parms
	{
		FString FilePath;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Whiteboard" },
		{ "ModuleRelativePath", "Public/Components/WhiteboardInteractionComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FilePath_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_FilePath;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWhiteboardInteractionComponent_ExportToPNG_Statics::NewProp_FilePath = { "FilePath", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WhiteboardInteractionComponent_eventExportToPNG_Parms, FilePath), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FilePath_MetaData), NewProp_FilePath_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWhiteboardInteractionComponent_ExportToPNG_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWhiteboardInteractionComponent_ExportToPNG_Statics::NewProp_FilePath,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UWhiteboardInteractionComponent_ExportToPNG_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWhiteboardInteractionComponent_ExportToPNG_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWhiteboardInteractionComponent, nullptr, "ExportToPNG", nullptr, nullptr, Z_Construct_UFunction_UWhiteboardInteractionComponent_ExportToPNG_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWhiteboardInteractionComponent_ExportToPNG_Statics::PropPointers), sizeof(Z_Construct_UFunction_UWhiteboardInteractionComponent_ExportToPNG_Statics::WhiteboardInteractionComponent_eventExportToPNG_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UWhiteboardInteractionComponent_ExportToPNG_Statics::Function_MetaDataParams), Z_Construct_UFunction_UWhiteboardInteractionComponent_ExportToPNG_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UWhiteboardInteractionComponent_ExportToPNG_Statics::WhiteboardInteractionComponent_eventExportToPNG_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UWhiteboardInteractionComponent_ExportToPNG()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWhiteboardInteractionComponent_ExportToPNG_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UWhiteboardInteractionComponent::execExportToPNG)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_FilePath);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ExportToPNG(Z_Param_FilePath);
	P_NATIVE_END;
}
// End Class UWhiteboardInteractionComponent Function ExportToPNG

// Begin Class UWhiteboardInteractionComponent Function ExportToSVG
struct Z_Construct_UFunction_UWhiteboardInteractionComponent_ExportToSVG_Statics
{
	struct WhiteboardInteractionComponent_eventExportToSVG_Parms
	{
		FString FilePath;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Whiteboard" },
		{ "ModuleRelativePath", "Public/Components/WhiteboardInteractionComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FilePath_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_FilePath;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWhiteboardInteractionComponent_ExportToSVG_Statics::NewProp_FilePath = { "FilePath", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WhiteboardInteractionComponent_eventExportToSVG_Parms, FilePath), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FilePath_MetaData), NewProp_FilePath_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWhiteboardInteractionComponent_ExportToSVG_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWhiteboardInteractionComponent_ExportToSVG_Statics::NewProp_FilePath,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UWhiteboardInteractionComponent_ExportToSVG_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWhiteboardInteractionComponent_ExportToSVG_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWhiteboardInteractionComponent, nullptr, "ExportToSVG", nullptr, nullptr, Z_Construct_UFunction_UWhiteboardInteractionComponent_ExportToSVG_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWhiteboardInteractionComponent_ExportToSVG_Statics::PropPointers), sizeof(Z_Construct_UFunction_UWhiteboardInteractionComponent_ExportToSVG_Statics::WhiteboardInteractionComponent_eventExportToSVG_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UWhiteboardInteractionComponent_ExportToSVG_Statics::Function_MetaDataParams), Z_Construct_UFunction_UWhiteboardInteractionComponent_ExportToSVG_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UWhiteboardInteractionComponent_ExportToSVG_Statics::WhiteboardInteractionComponent_eventExportToSVG_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UWhiteboardInteractionComponent_ExportToSVG()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWhiteboardInteractionComponent_ExportToSVG_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UWhiteboardInteractionComponent::execExportToSVG)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_FilePath);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ExportToSVG(Z_Param_FilePath);
	P_NATIVE_END;
}
// End Class UWhiteboardInteractionComponent Function ExportToSVG

// Begin Class UWhiteboardInteractionComponent Function GetCurrentDrawingPosition
struct Z_Construct_UFunction_UWhiteboardInteractionComponent_GetCurrentDrawingPosition_Statics
{
	struct WhiteboardInteractionComponent_eventGetCurrentDrawingPosition_Parms
	{
		FVector2D OutCanvasPosition;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Whiteboard" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Get current drawing position\n" },
#endif
		{ "ModuleRelativePath", "Public/Components/WhiteboardInteractionComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Get current drawing position" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_OutCanvasPosition;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UWhiteboardInteractionComponent_GetCurrentDrawingPosition_Statics::NewProp_OutCanvasPosition = { "OutCanvasPosition", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WhiteboardInteractionComponent_eventGetCurrentDrawingPosition_Parms, OutCanvasPosition), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UWhiteboardInteractionComponent_GetCurrentDrawingPosition_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((WhiteboardInteractionComponent_eventGetCurrentDrawingPosition_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UWhiteboardInteractionComponent_GetCurrentDrawingPosition_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(WhiteboardInteractionComponent_eventGetCurrentDrawingPosition_Parms), &Z_Construct_UFunction_UWhiteboardInteractionComponent_GetCurrentDrawingPosition_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWhiteboardInteractionComponent_GetCurrentDrawingPosition_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWhiteboardInteractionComponent_GetCurrentDrawingPosition_Statics::NewProp_OutCanvasPosition,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWhiteboardInteractionComponent_GetCurrentDrawingPosition_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UWhiteboardInteractionComponent_GetCurrentDrawingPosition_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWhiteboardInteractionComponent_GetCurrentDrawingPosition_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWhiteboardInteractionComponent, nullptr, "GetCurrentDrawingPosition", nullptr, nullptr, Z_Construct_UFunction_UWhiteboardInteractionComponent_GetCurrentDrawingPosition_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWhiteboardInteractionComponent_GetCurrentDrawingPosition_Statics::PropPointers), sizeof(Z_Construct_UFunction_UWhiteboardInteractionComponent_GetCurrentDrawingPosition_Statics::WhiteboardInteractionComponent_eventGetCurrentDrawingPosition_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UWhiteboardInteractionComponent_GetCurrentDrawingPosition_Statics::Function_MetaDataParams), Z_Construct_UFunction_UWhiteboardInteractionComponent_GetCurrentDrawingPosition_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UWhiteboardInteractionComponent_GetCurrentDrawingPosition_Statics::WhiteboardInteractionComponent_eventGetCurrentDrawingPosition_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UWhiteboardInteractionComponent_GetCurrentDrawingPosition()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWhiteboardInteractionComponent_GetCurrentDrawingPosition_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UWhiteboardInteractionComponent::execGetCurrentDrawingPosition)
{
	P_GET_STRUCT_REF(FVector2D,Z_Param_Out_OutCanvasPosition);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->GetCurrentDrawingPosition(Z_Param_Out_OutCanvasPosition);
	P_NATIVE_END;
}
// End Class UWhiteboardInteractionComponent Function GetCurrentDrawingPosition

// Begin Class UWhiteboardInteractionComponent Function IsInRangeOfWhiteboard
struct Z_Construct_UFunction_UWhiteboardInteractionComponent_IsInRangeOfWhiteboard_Statics
{
	struct WhiteboardInteractionComponent_eventIsInRangeOfWhiteboard_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Whiteboard" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Blueprint callable functions for whiteboard operations\n" },
#endif
		{ "ModuleRelativePath", "Public/Components/WhiteboardInteractionComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Blueprint callable functions for whiteboard operations" },
#endif
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UWhiteboardInteractionComponent_IsInRangeOfWhiteboard_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((WhiteboardInteractionComponent_eventIsInRangeOfWhiteboard_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UWhiteboardInteractionComponent_IsInRangeOfWhiteboard_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(WhiteboardInteractionComponent_eventIsInRangeOfWhiteboard_Parms), &Z_Construct_UFunction_UWhiteboardInteractionComponent_IsInRangeOfWhiteboard_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWhiteboardInteractionComponent_IsInRangeOfWhiteboard_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWhiteboardInteractionComponent_IsInRangeOfWhiteboard_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UWhiteboardInteractionComponent_IsInRangeOfWhiteboard_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWhiteboardInteractionComponent_IsInRangeOfWhiteboard_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWhiteboardInteractionComponent, nullptr, "IsInRangeOfWhiteboard", nullptr, nullptr, Z_Construct_UFunction_UWhiteboardInteractionComponent_IsInRangeOfWhiteboard_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWhiteboardInteractionComponent_IsInRangeOfWhiteboard_Statics::PropPointers), sizeof(Z_Construct_UFunction_UWhiteboardInteractionComponent_IsInRangeOfWhiteboard_Statics::WhiteboardInteractionComponent_eventIsInRangeOfWhiteboard_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UWhiteboardInteractionComponent_IsInRangeOfWhiteboard_Statics::Function_MetaDataParams), Z_Construct_UFunction_UWhiteboardInteractionComponent_IsInRangeOfWhiteboard_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UWhiteboardInteractionComponent_IsInRangeOfWhiteboard_Statics::WhiteboardInteractionComponent_eventIsInRangeOfWhiteboard_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UWhiteboardInteractionComponent_IsInRangeOfWhiteboard()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWhiteboardInteractionComponent_IsInRangeOfWhiteboard_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UWhiteboardInteractionComponent::execIsInRangeOfWhiteboard)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->IsInRangeOfWhiteboard();
	P_NATIVE_END;
}
// End Class UWhiteboardInteractionComponent Function IsInRangeOfWhiteboard

// Begin Class UWhiteboardInteractionComponent Function Redo
struct Z_Construct_UFunction_UWhiteboardInteractionComponent_Redo_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Whiteboard" },
		{ "ModuleRelativePath", "Public/Components/WhiteboardInteractionComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWhiteboardInteractionComponent_Redo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWhiteboardInteractionComponent, nullptr, "Redo", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UWhiteboardInteractionComponent_Redo_Statics::Function_MetaDataParams), Z_Construct_UFunction_UWhiteboardInteractionComponent_Redo_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UWhiteboardInteractionComponent_Redo()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWhiteboardInteractionComponent_Redo_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UWhiteboardInteractionComponent::execRedo)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Redo();
	P_NATIVE_END;
}
// End Class UWhiteboardInteractionComponent Function Redo

// Begin Class UWhiteboardInteractionComponent Function SetBrushSize
struct Z_Construct_UFunction_UWhiteboardInteractionComponent_SetBrushSize_Statics
{
	struct WhiteboardInteractionComponent_eventSetBrushSize_Parms
	{
		float Size;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Whiteboard" },
		{ "ModuleRelativePath", "Public/Components/WhiteboardInteractionComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Size;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UWhiteboardInteractionComponent_SetBrushSize_Statics::NewProp_Size = { "Size", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WhiteboardInteractionComponent_eventSetBrushSize_Parms, Size), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWhiteboardInteractionComponent_SetBrushSize_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWhiteboardInteractionComponent_SetBrushSize_Statics::NewProp_Size,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UWhiteboardInteractionComponent_SetBrushSize_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWhiteboardInteractionComponent_SetBrushSize_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWhiteboardInteractionComponent, nullptr, "SetBrushSize", nullptr, nullptr, Z_Construct_UFunction_UWhiteboardInteractionComponent_SetBrushSize_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWhiteboardInteractionComponent_SetBrushSize_Statics::PropPointers), sizeof(Z_Construct_UFunction_UWhiteboardInteractionComponent_SetBrushSize_Statics::WhiteboardInteractionComponent_eventSetBrushSize_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UWhiteboardInteractionComponent_SetBrushSize_Statics::Function_MetaDataParams), Z_Construct_UFunction_UWhiteboardInteractionComponent_SetBrushSize_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UWhiteboardInteractionComponent_SetBrushSize_Statics::WhiteboardInteractionComponent_eventSetBrushSize_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UWhiteboardInteractionComponent_SetBrushSize()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWhiteboardInteractionComponent_SetBrushSize_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UWhiteboardInteractionComponent::execSetBrushSize)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_Size);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetBrushSize(Z_Param_Size);
	P_NATIVE_END;
}
// End Class UWhiteboardInteractionComponent Function SetBrushSize

// Begin Class UWhiteboardInteractionComponent Function SetDrawingColor
struct Z_Construct_UFunction_UWhiteboardInteractionComponent_SetDrawingColor_Statics
{
	struct WhiteboardInteractionComponent_eventSetDrawingColor_Parms
	{
		FLinearColor Color;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Whiteboard" },
		{ "ModuleRelativePath", "Public/Components/WhiteboardInteractionComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Color;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UWhiteboardInteractionComponent_SetDrawingColor_Statics::NewProp_Color = { "Color", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WhiteboardInteractionComponent_eventSetDrawingColor_Parms, Color), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWhiteboardInteractionComponent_SetDrawingColor_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWhiteboardInteractionComponent_SetDrawingColor_Statics::NewProp_Color,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UWhiteboardInteractionComponent_SetDrawingColor_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWhiteboardInteractionComponent_SetDrawingColor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWhiteboardInteractionComponent, nullptr, "SetDrawingColor", nullptr, nullptr, Z_Construct_UFunction_UWhiteboardInteractionComponent_SetDrawingColor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWhiteboardInteractionComponent_SetDrawingColor_Statics::PropPointers), sizeof(Z_Construct_UFunction_UWhiteboardInteractionComponent_SetDrawingColor_Statics::WhiteboardInteractionComponent_eventSetDrawingColor_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UWhiteboardInteractionComponent_SetDrawingColor_Statics::Function_MetaDataParams), Z_Construct_UFunction_UWhiteboardInteractionComponent_SetDrawingColor_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UWhiteboardInteractionComponent_SetDrawingColor_Statics::WhiteboardInteractionComponent_eventSetDrawingColor_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UWhiteboardInteractionComponent_SetDrawingColor()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWhiteboardInteractionComponent_SetDrawingColor_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UWhiteboardInteractionComponent::execSetDrawingColor)
{
	P_GET_STRUCT(FLinearColor,Z_Param_Color);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetDrawingColor(Z_Param_Color);
	P_NATIVE_END;
}
// End Class UWhiteboardInteractionComponent Function SetDrawingColor

// Begin Class UWhiteboardInteractionComponent Function SetDrawingTool
struct Z_Construct_UFunction_UWhiteboardInteractionComponent_SetDrawingTool_Statics
{
	struct WhiteboardInteractionComponent_eventSetDrawingTool_Parms
	{
		EDrawingTool Tool;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Whiteboard" },
		{ "ModuleRelativePath", "Public/Components/WhiteboardInteractionComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_Tool_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Tool;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UWhiteboardInteractionComponent_SetDrawingTool_Statics::NewProp_Tool_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UWhiteboardInteractionComponent_SetDrawingTool_Statics::NewProp_Tool = { "Tool", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WhiteboardInteractionComponent_eventSetDrawingTool_Parms, Tool), Z_Construct_UEnum_AdvancedDrawingBoard_EDrawingTool, METADATA_PARAMS(0, nullptr) }; // 1505869976
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWhiteboardInteractionComponent_SetDrawingTool_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWhiteboardInteractionComponent_SetDrawingTool_Statics::NewProp_Tool_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWhiteboardInteractionComponent_SetDrawingTool_Statics::NewProp_Tool,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UWhiteboardInteractionComponent_SetDrawingTool_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWhiteboardInteractionComponent_SetDrawingTool_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWhiteboardInteractionComponent, nullptr, "SetDrawingTool", nullptr, nullptr, Z_Construct_UFunction_UWhiteboardInteractionComponent_SetDrawingTool_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWhiteboardInteractionComponent_SetDrawingTool_Statics::PropPointers), sizeof(Z_Construct_UFunction_UWhiteboardInteractionComponent_SetDrawingTool_Statics::WhiteboardInteractionComponent_eventSetDrawingTool_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UWhiteboardInteractionComponent_SetDrawingTool_Statics::Function_MetaDataParams), Z_Construct_UFunction_UWhiteboardInteractionComponent_SetDrawingTool_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UWhiteboardInteractionComponent_SetDrawingTool_Statics::WhiteboardInteractionComponent_eventSetDrawingTool_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UWhiteboardInteractionComponent_SetDrawingTool()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWhiteboardInteractionComponent_SetDrawingTool_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UWhiteboardInteractionComponent::execSetDrawingTool)
{
	P_GET_ENUM(EDrawingTool,Z_Param_Tool);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetDrawingTool(EDrawingTool(Z_Param_Tool));
	P_NATIVE_END;
}
// End Class UWhiteboardInteractionComponent Function SetDrawingTool

// Begin Class UWhiteboardInteractionComponent Function SetFillShapes
struct Z_Construct_UFunction_UWhiteboardInteractionComponent_SetFillShapes_Statics
{
	struct WhiteboardInteractionComponent_eventSetFillShapes_Parms
	{
		bool bFill;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Whiteboard" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// NEW: Enhanced UI functions\n" },
#endif
		{ "ModuleRelativePath", "Public/Components/WhiteboardInteractionComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "NEW: Enhanced UI functions" },
#endif
	};
#endif // WITH_METADATA
	static void NewProp_bFill_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bFill;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UWhiteboardInteractionComponent_SetFillShapes_Statics::NewProp_bFill_SetBit(void* Obj)
{
	((WhiteboardInteractionComponent_eventSetFillShapes_Parms*)Obj)->bFill = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UWhiteboardInteractionComponent_SetFillShapes_Statics::NewProp_bFill = { "bFill", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(WhiteboardInteractionComponent_eventSetFillShapes_Parms), &Z_Construct_UFunction_UWhiteboardInteractionComponent_SetFillShapes_Statics::NewProp_bFill_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWhiteboardInteractionComponent_SetFillShapes_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWhiteboardInteractionComponent_SetFillShapes_Statics::NewProp_bFill,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UWhiteboardInteractionComponent_SetFillShapes_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWhiteboardInteractionComponent_SetFillShapes_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWhiteboardInteractionComponent, nullptr, "SetFillShapes", nullptr, nullptr, Z_Construct_UFunction_UWhiteboardInteractionComponent_SetFillShapes_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWhiteboardInteractionComponent_SetFillShapes_Statics::PropPointers), sizeof(Z_Construct_UFunction_UWhiteboardInteractionComponent_SetFillShapes_Statics::WhiteboardInteractionComponent_eventSetFillShapes_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UWhiteboardInteractionComponent_SetFillShapes_Statics::Function_MetaDataParams), Z_Construct_UFunction_UWhiteboardInteractionComponent_SetFillShapes_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UWhiteboardInteractionComponent_SetFillShapes_Statics::WhiteboardInteractionComponent_eventSetFillShapes_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UWhiteboardInteractionComponent_SetFillShapes()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWhiteboardInteractionComponent_SetFillShapes_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UWhiteboardInteractionComponent::execSetFillShapes)
{
	P_GET_UBOOL(Z_Param_bFill);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetFillShapes(Z_Param_bFill);
	P_NATIVE_END;
}
// End Class UWhiteboardInteractionComponent Function SetFillShapes

// Begin Class UWhiteboardInteractionComponent Function SetShapeFillColor
struct Z_Construct_UFunction_UWhiteboardInteractionComponent_SetShapeFillColor_Statics
{
	struct WhiteboardInteractionComponent_eventSetShapeFillColor_Parms
	{
		FLinearColor FillColor;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Whiteboard" },
		{ "ModuleRelativePath", "Public/Components/WhiteboardInteractionComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_FillColor;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UWhiteboardInteractionComponent_SetShapeFillColor_Statics::NewProp_FillColor = { "FillColor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WhiteboardInteractionComponent_eventSetShapeFillColor_Parms, FillColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWhiteboardInteractionComponent_SetShapeFillColor_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWhiteboardInteractionComponent_SetShapeFillColor_Statics::NewProp_FillColor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UWhiteboardInteractionComponent_SetShapeFillColor_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWhiteboardInteractionComponent_SetShapeFillColor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWhiteboardInteractionComponent, nullptr, "SetShapeFillColor", nullptr, nullptr, Z_Construct_UFunction_UWhiteboardInteractionComponent_SetShapeFillColor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWhiteboardInteractionComponent_SetShapeFillColor_Statics::PropPointers), sizeof(Z_Construct_UFunction_UWhiteboardInteractionComponent_SetShapeFillColor_Statics::WhiteboardInteractionComponent_eventSetShapeFillColor_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UWhiteboardInteractionComponent_SetShapeFillColor_Statics::Function_MetaDataParams), Z_Construct_UFunction_UWhiteboardInteractionComponent_SetShapeFillColor_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UWhiteboardInteractionComponent_SetShapeFillColor_Statics::WhiteboardInteractionComponent_eventSetShapeFillColor_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UWhiteboardInteractionComponent_SetShapeFillColor()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWhiteboardInteractionComponent_SetShapeFillColor_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UWhiteboardInteractionComponent::execSetShapeFillColor)
{
	P_GET_STRUCT(FLinearColor,Z_Param_FillColor);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetShapeFillColor(Z_Param_FillColor);
	P_NATIVE_END;
}
// End Class UWhiteboardInteractionComponent Function SetShapeFillColor

// Begin Class UWhiteboardInteractionComponent Function SetTextSize
struct Z_Construct_UFunction_UWhiteboardInteractionComponent_SetTextSize_Statics
{
	struct WhiteboardInteractionComponent_eventSetTextSize_Parms
	{
		float Size;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Whiteboard" },
		{ "ModuleRelativePath", "Public/Components/WhiteboardInteractionComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Size;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UWhiteboardInteractionComponent_SetTextSize_Statics::NewProp_Size = { "Size", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WhiteboardInteractionComponent_eventSetTextSize_Parms, Size), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWhiteboardInteractionComponent_SetTextSize_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWhiteboardInteractionComponent_SetTextSize_Statics::NewProp_Size,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UWhiteboardInteractionComponent_SetTextSize_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWhiteboardInteractionComponent_SetTextSize_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWhiteboardInteractionComponent, nullptr, "SetTextSize", nullptr, nullptr, Z_Construct_UFunction_UWhiteboardInteractionComponent_SetTextSize_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWhiteboardInteractionComponent_SetTextSize_Statics::PropPointers), sizeof(Z_Construct_UFunction_UWhiteboardInteractionComponent_SetTextSize_Statics::WhiteboardInteractionComponent_eventSetTextSize_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UWhiteboardInteractionComponent_SetTextSize_Statics::Function_MetaDataParams), Z_Construct_UFunction_UWhiteboardInteractionComponent_SetTextSize_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UWhiteboardInteractionComponent_SetTextSize_Statics::WhiteboardInteractionComponent_eventSetTextSize_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UWhiteboardInteractionComponent_SetTextSize()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWhiteboardInteractionComponent_SetTextSize_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UWhiteboardInteractionComponent::execSetTextSize)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_Size);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetTextSize(Z_Param_Size);
	P_NATIVE_END;
}
// End Class UWhiteboardInteractionComponent Function SetTextSize

// Begin Class UWhiteboardInteractionComponent Function StartDrawing
struct Z_Construct_UFunction_UWhiteboardInteractionComponent_StartDrawing_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Whiteboard" },
		{ "ModuleRelativePath", "Public/Components/WhiteboardInteractionComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWhiteboardInteractionComponent_StartDrawing_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWhiteboardInteractionComponent, nullptr, "StartDrawing", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UWhiteboardInteractionComponent_StartDrawing_Statics::Function_MetaDataParams), Z_Construct_UFunction_UWhiteboardInteractionComponent_StartDrawing_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UWhiteboardInteractionComponent_StartDrawing()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWhiteboardInteractionComponent_StartDrawing_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UWhiteboardInteractionComponent::execStartDrawing)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->StartDrawing();
	P_NATIVE_END;
}
// End Class UWhiteboardInteractionComponent Function StartDrawing

// Begin Class UWhiteboardInteractionComponent Function StartDrawingInput
struct Z_Construct_UFunction_UWhiteboardInteractionComponent_StartDrawingInput_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Drawing" },
		{ "ModuleRelativePath", "Public/Components/WhiteboardInteractionComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWhiteboardInteractionComponent_StartDrawingInput_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWhiteboardInteractionComponent, nullptr, "StartDrawingInput", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UWhiteboardInteractionComponent_StartDrawingInput_Statics::Function_MetaDataParams), Z_Construct_UFunction_UWhiteboardInteractionComponent_StartDrawingInput_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UWhiteboardInteractionComponent_StartDrawingInput()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWhiteboardInteractionComponent_StartDrawingInput_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UWhiteboardInteractionComponent::execStartDrawingInput)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->StartDrawingInput();
	P_NATIVE_END;
}
// End Class UWhiteboardInteractionComponent Function StartDrawingInput

// Begin Class UWhiteboardInteractionComponent Function StopDrawing
struct Z_Construct_UFunction_UWhiteboardInteractionComponent_StopDrawing_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Whiteboard" },
		{ "ModuleRelativePath", "Public/Components/WhiteboardInteractionComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWhiteboardInteractionComponent_StopDrawing_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWhiteboardInteractionComponent, nullptr, "StopDrawing", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UWhiteboardInteractionComponent_StopDrawing_Statics::Function_MetaDataParams), Z_Construct_UFunction_UWhiteboardInteractionComponent_StopDrawing_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UWhiteboardInteractionComponent_StopDrawing()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWhiteboardInteractionComponent_StopDrawing_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UWhiteboardInteractionComponent::execStopDrawing)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->StopDrawing();
	P_NATIVE_END;
}
// End Class UWhiteboardInteractionComponent Function StopDrawing

// Begin Class UWhiteboardInteractionComponent Function StopDrawingInput
struct Z_Construct_UFunction_UWhiteboardInteractionComponent_StopDrawingInput_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Drawing" },
		{ "ModuleRelativePath", "Public/Components/WhiteboardInteractionComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWhiteboardInteractionComponent_StopDrawingInput_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWhiteboardInteractionComponent, nullptr, "StopDrawingInput", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UWhiteboardInteractionComponent_StopDrawingInput_Statics::Function_MetaDataParams), Z_Construct_UFunction_UWhiteboardInteractionComponent_StopDrawingInput_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UWhiteboardInteractionComponent_StopDrawingInput()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWhiteboardInteractionComponent_StopDrawingInput_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UWhiteboardInteractionComponent::execStopDrawingInput)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->StopDrawingInput();
	P_NATIVE_END;
}
// End Class UWhiteboardInteractionComponent Function StopDrawingInput

// Begin Class UWhiteboardInteractionComponent Function TryToInteract
struct Z_Construct_UFunction_UWhiteboardInteractionComponent_TryToInteract_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Interaction" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Blueprint callable functions for interaction\n" },
#endif
		{ "ModuleRelativePath", "Public/Components/WhiteboardInteractionComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Blueprint callable functions for interaction" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWhiteboardInteractionComponent_TryToInteract_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWhiteboardInteractionComponent, nullptr, "TryToInteract", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UWhiteboardInteractionComponent_TryToInteract_Statics::Function_MetaDataParams), Z_Construct_UFunction_UWhiteboardInteractionComponent_TryToInteract_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UWhiteboardInteractionComponent_TryToInteract()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWhiteboardInteractionComponent_TryToInteract_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UWhiteboardInteractionComponent::execTryToInteract)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->TryToInteract();
	P_NATIVE_END;
}
// End Class UWhiteboardInteractionComponent Function TryToInteract

// Begin Class UWhiteboardInteractionComponent Function Undo
struct Z_Construct_UFunction_UWhiteboardInteractionComponent_Undo_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Whiteboard" },
		{ "ModuleRelativePath", "Public/Components/WhiteboardInteractionComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWhiteboardInteractionComponent_Undo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWhiteboardInteractionComponent, nullptr, "Undo", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UWhiteboardInteractionComponent_Undo_Statics::Function_MetaDataParams), Z_Construct_UFunction_UWhiteboardInteractionComponent_Undo_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UWhiteboardInteractionComponent_Undo()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWhiteboardInteractionComponent_Undo_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UWhiteboardInteractionComponent::execUndo)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Undo();
	P_NATIVE_END;
}
// End Class UWhiteboardInteractionComponent Function Undo

// Begin Class UWhiteboardInteractionComponent
void UWhiteboardInteractionComponent::StaticRegisterNativesUWhiteboardInteractionComponent()
{
	UClass* Class = UWhiteboardInteractionComponent::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "AddText", &UWhiteboardInteractionComponent::execAddText },
		{ "AddTextAtPosition", &UWhiteboardInteractionComponent::execAddTextAtPosition },
		{ "ClearWhiteboard", &UWhiteboardInteractionComponent::execClearWhiteboard },
		{ "ContinueDrawing", &UWhiteboardInteractionComponent::execContinueDrawing },
		{ "EndInteraction", &UWhiteboardInteractionComponent::execEndInteraction },
		{ "ExportToPNG", &UWhiteboardInteractionComponent::execExportToPNG },
		{ "ExportToSVG", &UWhiteboardInteractionComponent::execExportToSVG },
		{ "GetCurrentDrawingPosition", &UWhiteboardInteractionComponent::execGetCurrentDrawingPosition },
		{ "IsInRangeOfWhiteboard", &UWhiteboardInteractionComponent::execIsInRangeOfWhiteboard },
		{ "Redo", &UWhiteboardInteractionComponent::execRedo },
		{ "SetBrushSize", &UWhiteboardInteractionComponent::execSetBrushSize },
		{ "SetDrawingColor", &UWhiteboardInteractionComponent::execSetDrawingColor },
		{ "SetDrawingTool", &UWhiteboardInteractionComponent::execSetDrawingTool },
		{ "SetFillShapes", &UWhiteboardInteractionComponent::execSetFillShapes },
		{ "SetShapeFillColor", &UWhiteboardInteractionComponent::execSetShapeFillColor },
		{ "SetTextSize", &UWhiteboardInteractionComponent::execSetTextSize },
		{ "StartDrawing", &UWhiteboardInteractionComponent::execStartDrawing },
		{ "StartDrawingInput", &UWhiteboardInteractionComponent::execStartDrawingInput },
		{ "StopDrawing", &UWhiteboardInteractionComponent::execStopDrawing },
		{ "StopDrawingInput", &UWhiteboardInteractionComponent::execStopDrawingInput },
		{ "TryToInteract", &UWhiteboardInteractionComponent::execTryToInteract },
		{ "Undo", &UWhiteboardInteractionComponent::execUndo },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UWhiteboardInteractionComponent);
UClass* Z_Construct_UClass_UWhiteboardInteractionComponent_NoRegister()
{
	return UWhiteboardInteractionComponent::StaticClass();
}
struct Z_Construct_UClass_UWhiteboardInteractionComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "Components/WhiteboardInteractionComponent.h" },
		{ "ModuleRelativePath", "Public/Components/WhiteboardInteractionComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TargetWhiteboard_MetaData[] = {
		{ "Category", "Whiteboard" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Whiteboard reference\n" },
#endif
		{ "ModuleRelativePath", "Public/Components/WhiteboardInteractionComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Whiteboard reference" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InteractionDistance_MetaData[] = {
		{ "Category", "Whiteboard" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Interaction properties\n" },
#endif
		{ "ModuleRelativePath", "Public/Components/WhiteboardInteractionComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Interaction properties" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bAutoDetectWhiteboard_MetaData[] = {
		{ "Category", "Whiteboard" },
		{ "ModuleRelativePath", "Public/Components/WhiteboardInteractionComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsDrawing_MetaData[] = {
		{ "Category", "Whiteboard" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Drawing state\n" },
#endif
		{ "ModuleRelativePath", "Public/Components/WhiteboardInteractionComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Drawing state" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OwnerPawn_MetaData[] = {
		{ "Category", "Interaction" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Owner reference\n" },
#endif
		{ "ModuleRelativePath", "Public/Components/WhiteboardInteractionComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Owner reference" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bContinuousDrawing_MetaData[] = {
		{ "Category", "Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Input handling\n" },
#endif
		{ "ModuleRelativePath", "Public/Components/WhiteboardInteractionComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Input handling" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_TargetWhiteboard;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_InteractionDistance;
	static void NewProp_bAutoDetectWhiteboard_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bAutoDetectWhiteboard;
	static void NewProp_bIsDrawing_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsDrawing;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OwnerPawn;
	static void NewProp_bContinuousDrawing_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bContinuousDrawing;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UWhiteboardInteractionComponent_AddText, "AddText" }, // 274322881
		{ &Z_Construct_UFunction_UWhiteboardInteractionComponent_AddTextAtPosition, "AddTextAtPosition" }, // 4089681550
		{ &Z_Construct_UFunction_UWhiteboardInteractionComponent_ClearWhiteboard, "ClearWhiteboard" }, // 1160183491
		{ &Z_Construct_UFunction_UWhiteboardInteractionComponent_ContinueDrawing, "ContinueDrawing" }, // 4194379102
		{ &Z_Construct_UFunction_UWhiteboardInteractionComponent_EndInteraction, "EndInteraction" }, // 1135451321
		{ &Z_Construct_UFunction_UWhiteboardInteractionComponent_ExportToPNG, "ExportToPNG" }, // 585516988
		{ &Z_Construct_UFunction_UWhiteboardInteractionComponent_ExportToSVG, "ExportToSVG" }, // 1496149540
		{ &Z_Construct_UFunction_UWhiteboardInteractionComponent_GetCurrentDrawingPosition, "GetCurrentDrawingPosition" }, // 1760850338
		{ &Z_Construct_UFunction_UWhiteboardInteractionComponent_IsInRangeOfWhiteboard, "IsInRangeOfWhiteboard" }, // 3093659554
		{ &Z_Construct_UFunction_UWhiteboardInteractionComponent_Redo, "Redo" }, // 1460775434
		{ &Z_Construct_UFunction_UWhiteboardInteractionComponent_SetBrushSize, "SetBrushSize" }, // 3432146211
		{ &Z_Construct_UFunction_UWhiteboardInteractionComponent_SetDrawingColor, "SetDrawingColor" }, // 1068952987
		{ &Z_Construct_UFunction_UWhiteboardInteractionComponent_SetDrawingTool, "SetDrawingTool" }, // 1836551172
		{ &Z_Construct_UFunction_UWhiteboardInteractionComponent_SetFillShapes, "SetFillShapes" }, // 1046886091
		{ &Z_Construct_UFunction_UWhiteboardInteractionComponent_SetShapeFillColor, "SetShapeFillColor" }, // 3760691281
		{ &Z_Construct_UFunction_UWhiteboardInteractionComponent_SetTextSize, "SetTextSize" }, // 2520721266
		{ &Z_Construct_UFunction_UWhiteboardInteractionComponent_StartDrawing, "StartDrawing" }, // 3810015378
		{ &Z_Construct_UFunction_UWhiteboardInteractionComponent_StartDrawingInput, "StartDrawingInput" }, // 2118732953
		{ &Z_Construct_UFunction_UWhiteboardInteractionComponent_StopDrawing, "StopDrawing" }, // 944808617
		{ &Z_Construct_UFunction_UWhiteboardInteractionComponent_StopDrawingInput, "StopDrawingInput" }, // 2685752581
		{ &Z_Construct_UFunction_UWhiteboardInteractionComponent_TryToInteract, "TryToInteract" }, // 4226182902
		{ &Z_Construct_UFunction_UWhiteboardInteractionComponent_Undo, "Undo" }, // 1950969617
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UWhiteboardInteractionComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UWhiteboardInteractionComponent_Statics::NewProp_TargetWhiteboard = { "TargetWhiteboard", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UWhiteboardInteractionComponent, TargetWhiteboard), Z_Construct_UClass_AWhiteboardActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TargetWhiteboard_MetaData), NewProp_TargetWhiteboard_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UWhiteboardInteractionComponent_Statics::NewProp_InteractionDistance = { "InteractionDistance", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UWhiteboardInteractionComponent, InteractionDistance), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InteractionDistance_MetaData), NewProp_InteractionDistance_MetaData) };
void Z_Construct_UClass_UWhiteboardInteractionComponent_Statics::NewProp_bAutoDetectWhiteboard_SetBit(void* Obj)
{
	((UWhiteboardInteractionComponent*)Obj)->bAutoDetectWhiteboard = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UWhiteboardInteractionComponent_Statics::NewProp_bAutoDetectWhiteboard = { "bAutoDetectWhiteboard", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UWhiteboardInteractionComponent), &Z_Construct_UClass_UWhiteboardInteractionComponent_Statics::NewProp_bAutoDetectWhiteboard_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bAutoDetectWhiteboard_MetaData), NewProp_bAutoDetectWhiteboard_MetaData) };
void Z_Construct_UClass_UWhiteboardInteractionComponent_Statics::NewProp_bIsDrawing_SetBit(void* Obj)
{
	((UWhiteboardInteractionComponent*)Obj)->bIsDrawing = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UWhiteboardInteractionComponent_Statics::NewProp_bIsDrawing = { "bIsDrawing", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UWhiteboardInteractionComponent), &Z_Construct_UClass_UWhiteboardInteractionComponent_Statics::NewProp_bIsDrawing_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsDrawing_MetaData), NewProp_bIsDrawing_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UWhiteboardInteractionComponent_Statics::NewProp_OwnerPawn = { "OwnerPawn", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UWhiteboardInteractionComponent, OwnerPawn), Z_Construct_UClass_APawn_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OwnerPawn_MetaData), NewProp_OwnerPawn_MetaData) };
void Z_Construct_UClass_UWhiteboardInteractionComponent_Statics::NewProp_bContinuousDrawing_SetBit(void* Obj)
{
	((UWhiteboardInteractionComponent*)Obj)->bContinuousDrawing = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UWhiteboardInteractionComponent_Statics::NewProp_bContinuousDrawing = { "bContinuousDrawing", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UWhiteboardInteractionComponent), &Z_Construct_UClass_UWhiteboardInteractionComponent_Statics::NewProp_bContinuousDrawing_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bContinuousDrawing_MetaData), NewProp_bContinuousDrawing_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UWhiteboardInteractionComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWhiteboardInteractionComponent_Statics::NewProp_TargetWhiteboard,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWhiteboardInteractionComponent_Statics::NewProp_InteractionDistance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWhiteboardInteractionComponent_Statics::NewProp_bAutoDetectWhiteboard,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWhiteboardInteractionComponent_Statics::NewProp_bIsDrawing,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWhiteboardInteractionComponent_Statics::NewProp_OwnerPawn,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWhiteboardInteractionComponent_Statics::NewProp_bContinuousDrawing,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UWhiteboardInteractionComponent_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UWhiteboardInteractionComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UActorComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_AdvancedDrawingBoard,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UWhiteboardInteractionComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UWhiteboardInteractionComponent_Statics::ClassParams = {
	&UWhiteboardInteractionComponent::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UWhiteboardInteractionComponent_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UWhiteboardInteractionComponent_Statics::PropPointers),
	0,
	0x00B000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UWhiteboardInteractionComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UWhiteboardInteractionComponent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UWhiteboardInteractionComponent()
{
	if (!Z_Registration_Info_UClass_UWhiteboardInteractionComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UWhiteboardInteractionComponent.OuterSingleton, Z_Construct_UClass_UWhiteboardInteractionComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UWhiteboardInteractionComponent.OuterSingleton;
}
template<> ADVANCEDDRAWINGBOARD_API UClass* StaticClass<UWhiteboardInteractionComponent>()
{
	return UWhiteboardInteractionComponent::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UWhiteboardInteractionComponent);
UWhiteboardInteractionComponent::~UWhiteboardInteractionComponent() {}
// End Class UWhiteboardInteractionComponent

// Begin Registration
struct Z_CompiledInDeferFile_FID_Advanced_WhiteBoard_Plugins_AdvancedDrawingBoard_Source_AdvancedDrawingBoard_Public_Components_WhiteboardInteractionComponent_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UWhiteboardInteractionComponent, UWhiteboardInteractionComponent::StaticClass, TEXT("UWhiteboardInteractionComponent"), &Z_Registration_Info_UClass_UWhiteboardInteractionComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UWhiteboardInteractionComponent), 363652781U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Advanced_WhiteBoard_Plugins_AdvancedDrawingBoard_Source_AdvancedDrawingBoard_Public_Components_WhiteboardInteractionComponent_h_444465872(TEXT("/Script/AdvancedDrawingBoard"),
	Z_CompiledInDeferFile_FID_Advanced_WhiteBoard_Plugins_AdvancedDrawingBoard_Source_AdvancedDrawingBoard_Public_Components_WhiteboardInteractionComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Advanced_WhiteBoard_Plugins_AdvancedDrawingBoard_Source_AdvancedDrawingBoard_Public_Components_WhiteboardInteractionComponent_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
