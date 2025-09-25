// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Components/WhiteboardInteractionComponent.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeWhiteboardInteractionComponent() {}

// ********** Begin Cross Module References ********************************************************
ADVANCEDDRAWINGBOARD_API UClass* Z_Construct_UClass_AWhiteboardActor_NoRegister();
ADVANCEDDRAWINGBOARD_API UClass* Z_Construct_UClass_UWhiteboardInteractionComponent();
ADVANCEDDRAWINGBOARD_API UClass* Z_Construct_UClass_UWhiteboardInteractionComponent_NoRegister();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
ENGINE_API UClass* Z_Construct_UClass_APawn_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
UPackage* Z_Construct_UPackage__Script_AdvancedDrawingBoard();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UWhiteboardInteractionComponent Function ClearWhiteboard *****************
struct Z_Construct_UFunction_UWhiteboardInteractionComponent_ClearWhiteboard_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Whiteboard" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/*\n    UFUNCTION(BlueprintCallable, Category = \"Whiteboard\")\n    void SetDrawingTool(EDrawingTool Tool);\n\n    UFUNCTION(BlueprintCallable, Category = \"Whiteboard\")\n    void SetDrawingColor(FLinearColor Color);\n\n    UFUNCTION(BlueprintCallable, Category = \"Whiteboard\")\n    void SetBrushSize(float Size);\n    */" },
#endif
		{ "ModuleRelativePath", "Public/Components/WhiteboardInteractionComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "UFUNCTION(BlueprintCallable, Category = \"Whiteboard\")\nvoid SetDrawingTool(EDrawingTool Tool);\n\nUFUNCTION(BlueprintCallable, Category = \"Whiteboard\")\nvoid SetDrawingColor(FLinearColor Color);\n\nUFUNCTION(BlueprintCallable, Category = \"Whiteboard\")\nvoid SetBrushSize(float Size);" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWhiteboardInteractionComponent_ClearWhiteboard_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UWhiteboardInteractionComponent, nullptr, "ClearWhiteboard", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UWhiteboardInteractionComponent_ClearWhiteboard_Statics::Function_MetaDataParams), Z_Construct_UFunction_UWhiteboardInteractionComponent_ClearWhiteboard_Statics::Function_MetaDataParams)},  };
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
// ********** End Class UWhiteboardInteractionComponent Function ClearWhiteboard *******************

// ********** Begin Class UWhiteboardInteractionComponent Function ContinueDrawing *****************
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
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWhiteboardInteractionComponent_ContinueDrawing_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UWhiteboardInteractionComponent, nullptr, "ContinueDrawing", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UWhiteboardInteractionComponent_ContinueDrawing_Statics::Function_MetaDataParams), Z_Construct_UFunction_UWhiteboardInteractionComponent_ContinueDrawing_Statics::Function_MetaDataParams)},  };
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
// ********** End Class UWhiteboardInteractionComponent Function ContinueDrawing *******************

// ********** Begin Class UWhiteboardInteractionComponent Function EndInteraction ******************
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
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWhiteboardInteractionComponent_EndInteraction_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UWhiteboardInteractionComponent, nullptr, "EndInteraction", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UWhiteboardInteractionComponent_EndInteraction_Statics::Function_MetaDataParams), Z_Construct_UFunction_UWhiteboardInteractionComponent_EndInteraction_Statics::Function_MetaDataParams)},  };
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
// ********** End Class UWhiteboardInteractionComponent Function EndInteraction ********************

// ********** Begin Class UWhiteboardInteractionComponent Function ExportToPNG *********************
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
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWhiteboardInteractionComponent_ExportToPNG_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UWhiteboardInteractionComponent, nullptr, "ExportToPNG", Z_Construct_UFunction_UWhiteboardInteractionComponent_ExportToPNG_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWhiteboardInteractionComponent_ExportToPNG_Statics::PropPointers), sizeof(Z_Construct_UFunction_UWhiteboardInteractionComponent_ExportToPNG_Statics::WhiteboardInteractionComponent_eventExportToPNG_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UWhiteboardInteractionComponent_ExportToPNG_Statics::Function_MetaDataParams), Z_Construct_UFunction_UWhiteboardInteractionComponent_ExportToPNG_Statics::Function_MetaDataParams)},  };
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
// ********** End Class UWhiteboardInteractionComponent Function ExportToPNG ***********************

// ********** Begin Class UWhiteboardInteractionComponent Function ExportToSVG *********************
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
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWhiteboardInteractionComponent_ExportToSVG_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UWhiteboardInteractionComponent, nullptr, "ExportToSVG", Z_Construct_UFunction_UWhiteboardInteractionComponent_ExportToSVG_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWhiteboardInteractionComponent_ExportToSVG_Statics::PropPointers), sizeof(Z_Construct_UFunction_UWhiteboardInteractionComponent_ExportToSVG_Statics::WhiteboardInteractionComponent_eventExportToSVG_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UWhiteboardInteractionComponent_ExportToSVG_Statics::Function_MetaDataParams), Z_Construct_UFunction_UWhiteboardInteractionComponent_ExportToSVG_Statics::Function_MetaDataParams)},  };
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
// ********** End Class UWhiteboardInteractionComponent Function ExportToSVG ***********************

// ********** Begin Class UWhiteboardInteractionComponent Function GetCurrentDrawingPosition *******
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
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWhiteboardInteractionComponent_GetCurrentDrawingPosition_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UWhiteboardInteractionComponent, nullptr, "GetCurrentDrawingPosition", Z_Construct_UFunction_UWhiteboardInteractionComponent_GetCurrentDrawingPosition_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWhiteboardInteractionComponent_GetCurrentDrawingPosition_Statics::PropPointers), sizeof(Z_Construct_UFunction_UWhiteboardInteractionComponent_GetCurrentDrawingPosition_Statics::WhiteboardInteractionComponent_eventGetCurrentDrawingPosition_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UWhiteboardInteractionComponent_GetCurrentDrawingPosition_Statics::Function_MetaDataParams), Z_Construct_UFunction_UWhiteboardInteractionComponent_GetCurrentDrawingPosition_Statics::Function_MetaDataParams)},  };
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
// ********** End Class UWhiteboardInteractionComponent Function GetCurrentDrawingPosition *********

// ********** Begin Class UWhiteboardInteractionComponent Function IsInRangeOfWhiteboard ***********
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
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWhiteboardInteractionComponent_IsInRangeOfWhiteboard_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UWhiteboardInteractionComponent, nullptr, "IsInRangeOfWhiteboard", Z_Construct_UFunction_UWhiteboardInteractionComponent_IsInRangeOfWhiteboard_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWhiteboardInteractionComponent_IsInRangeOfWhiteboard_Statics::PropPointers), sizeof(Z_Construct_UFunction_UWhiteboardInteractionComponent_IsInRangeOfWhiteboard_Statics::WhiteboardInteractionComponent_eventIsInRangeOfWhiteboard_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UWhiteboardInteractionComponent_IsInRangeOfWhiteboard_Statics::Function_MetaDataParams), Z_Construct_UFunction_UWhiteboardInteractionComponent_IsInRangeOfWhiteboard_Statics::Function_MetaDataParams)},  };
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
// ********** End Class UWhiteboardInteractionComponent Function IsInRangeOfWhiteboard *************

// ********** Begin Class UWhiteboardInteractionComponent Function Redo ****************************
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
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWhiteboardInteractionComponent_Redo_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UWhiteboardInteractionComponent, nullptr, "Redo", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UWhiteboardInteractionComponent_Redo_Statics::Function_MetaDataParams), Z_Construct_UFunction_UWhiteboardInteractionComponent_Redo_Statics::Function_MetaDataParams)},  };
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
// ********** End Class UWhiteboardInteractionComponent Function Redo ******************************

// ********** Begin Class UWhiteboardInteractionComponent Function StartDrawingInput ***************
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
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWhiteboardInteractionComponent_StartDrawingInput_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UWhiteboardInteractionComponent, nullptr, "StartDrawingInput", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UWhiteboardInteractionComponent_StartDrawingInput_Statics::Function_MetaDataParams), Z_Construct_UFunction_UWhiteboardInteractionComponent_StartDrawingInput_Statics::Function_MetaDataParams)},  };
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
// ********** End Class UWhiteboardInteractionComponent Function StartDrawingInput *****************

// ********** Begin Class UWhiteboardInteractionComponent Function StopDrawingInput ****************
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
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWhiteboardInteractionComponent_StopDrawingInput_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UWhiteboardInteractionComponent, nullptr, "StopDrawingInput", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UWhiteboardInteractionComponent_StopDrawingInput_Statics::Function_MetaDataParams), Z_Construct_UFunction_UWhiteboardInteractionComponent_StopDrawingInput_Statics::Function_MetaDataParams)},  };
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
// ********** End Class UWhiteboardInteractionComponent Function StopDrawingInput ******************

// ********** Begin Class UWhiteboardInteractionComponent Function TryToInteract *******************
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
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWhiteboardInteractionComponent_TryToInteract_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UWhiteboardInteractionComponent, nullptr, "TryToInteract", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UWhiteboardInteractionComponent_TryToInteract_Statics::Function_MetaDataParams), Z_Construct_UFunction_UWhiteboardInteractionComponent_TryToInteract_Statics::Function_MetaDataParams)},  };
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
// ********** End Class UWhiteboardInteractionComponent Function TryToInteract *********************

// ********** Begin Class UWhiteboardInteractionComponent Function Undo ****************************
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
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWhiteboardInteractionComponent_Undo_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UWhiteboardInteractionComponent, nullptr, "Undo", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UWhiteboardInteractionComponent_Undo_Statics::Function_MetaDataParams), Z_Construct_UFunction_UWhiteboardInteractionComponent_Undo_Statics::Function_MetaDataParams)},  };
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
// ********** End Class UWhiteboardInteractionComponent Function Undo ******************************

// ********** Begin Class UWhiteboardInteractionComponent ******************************************
void UWhiteboardInteractionComponent::StaticRegisterNativesUWhiteboardInteractionComponent()
{
	UClass* Class = UWhiteboardInteractionComponent::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "ClearWhiteboard", &UWhiteboardInteractionComponent::execClearWhiteboard },
		{ "ContinueDrawing", &UWhiteboardInteractionComponent::execContinueDrawing },
		{ "EndInteraction", &UWhiteboardInteractionComponent::execEndInteraction },
		{ "ExportToPNG", &UWhiteboardInteractionComponent::execExportToPNG },
		{ "ExportToSVG", &UWhiteboardInteractionComponent::execExportToSVG },
		{ "GetCurrentDrawingPosition", &UWhiteboardInteractionComponent::execGetCurrentDrawingPosition },
		{ "IsInRangeOfWhiteboard", &UWhiteboardInteractionComponent::execIsInRangeOfWhiteboard },
		{ "Redo", &UWhiteboardInteractionComponent::execRedo },
		{ "StartDrawingInput", &UWhiteboardInteractionComponent::execStartDrawingInput },
		{ "StopDrawingInput", &UWhiteboardInteractionComponent::execStopDrawingInput },
		{ "TryToInteract", &UWhiteboardInteractionComponent::execTryToInteract },
		{ "Undo", &UWhiteboardInteractionComponent::execUndo },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UWhiteboardInteractionComponent;
UClass* UWhiteboardInteractionComponent::GetPrivateStaticClass()
{
	using TClass = UWhiteboardInteractionComponent;
	if (!Z_Registration_Info_UClass_UWhiteboardInteractionComponent.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("WhiteboardInteractionComponent"),
			Z_Registration_Info_UClass_UWhiteboardInteractionComponent.InnerSingleton,
			StaticRegisterNativesUWhiteboardInteractionComponent,
			sizeof(TClass),
			alignof(TClass),
			TClass::StaticClassFlags,
			TClass::StaticClassCastFlags(),
			TClass::StaticConfigName(),
			(UClass::ClassConstructorType)InternalConstructor<TClass>,
			(UClass::ClassVTableHelperCtorCallerType)InternalVTableHelperCtorCaller<TClass>,
			UOBJECT_CPPCLASS_STATICFUNCTIONS_FORCLASS(TClass),
			&TClass::Super::StaticClass,
			&TClass::WithinClass::StaticClass
		);
	}
	return Z_Registration_Info_UClass_UWhiteboardInteractionComponent.InnerSingleton;
}
UClass* Z_Construct_UClass_UWhiteboardInteractionComponent_NoRegister()
{
	return UWhiteboardInteractionComponent::GetPrivateStaticClass();
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
		{ &Z_Construct_UFunction_UWhiteboardInteractionComponent_ClearWhiteboard, "ClearWhiteboard" }, // 3286991938
		{ &Z_Construct_UFunction_UWhiteboardInteractionComponent_ContinueDrawing, "ContinueDrawing" }, // 741293955
		{ &Z_Construct_UFunction_UWhiteboardInteractionComponent_EndInteraction, "EndInteraction" }, // 2229189695
		{ &Z_Construct_UFunction_UWhiteboardInteractionComponent_ExportToPNG, "ExportToPNG" }, // 2925205413
		{ &Z_Construct_UFunction_UWhiteboardInteractionComponent_ExportToSVG, "ExportToSVG" }, // 1701030918
		{ &Z_Construct_UFunction_UWhiteboardInteractionComponent_GetCurrentDrawingPosition, "GetCurrentDrawingPosition" }, // 4258635253
		{ &Z_Construct_UFunction_UWhiteboardInteractionComponent_IsInRangeOfWhiteboard, "IsInRangeOfWhiteboard" }, // 3147932564
		{ &Z_Construct_UFunction_UWhiteboardInteractionComponent_Redo, "Redo" }, // 1883618780
		{ &Z_Construct_UFunction_UWhiteboardInteractionComponent_StartDrawingInput, "StartDrawingInput" }, // 2121479531
		{ &Z_Construct_UFunction_UWhiteboardInteractionComponent_StopDrawingInput, "StopDrawingInput" }, // 4242721597
		{ &Z_Construct_UFunction_UWhiteboardInteractionComponent_TryToInteract, "TryToInteract" }, // 3450442858
		{ &Z_Construct_UFunction_UWhiteboardInteractionComponent_Undo, "Undo" }, // 1196634138
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
DEFINE_VTABLE_PTR_HELPER_CTOR(UWhiteboardInteractionComponent);
UWhiteboardInteractionComponent::~UWhiteboardInteractionComponent() {}
// ********** End Class UWhiteboardInteractionComponent ********************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_SPARKELON_2025_Prototype_2025_Advanced_WhiteBoard_Plugins_AdvancedDrawingBoard_Source_AdvancedDrawingBoard_Public_Components_WhiteboardInteractionComponent_h__Script_AdvancedDrawingBoard_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UWhiteboardInteractionComponent, UWhiteboardInteractionComponent::StaticClass, TEXT("UWhiteboardInteractionComponent"), &Z_Registration_Info_UClass_UWhiteboardInteractionComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UWhiteboardInteractionComponent), 18568742U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_SPARKELON_2025_Prototype_2025_Advanced_WhiteBoard_Plugins_AdvancedDrawingBoard_Source_AdvancedDrawingBoard_Public_Components_WhiteboardInteractionComponent_h__Script_AdvancedDrawingBoard_2615487581(TEXT("/Script/AdvancedDrawingBoard"),
	Z_CompiledInDeferFile_FID_SPARKELON_2025_Prototype_2025_Advanced_WhiteBoard_Plugins_AdvancedDrawingBoard_Source_AdvancedDrawingBoard_Public_Components_WhiteboardInteractionComponent_h__Script_AdvancedDrawingBoard_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_SPARKELON_2025_Prototype_2025_Advanced_WhiteBoard_Plugins_AdvancedDrawingBoard_Source_AdvancedDrawingBoard_Public_Components_WhiteboardInteractionComponent_h__Script_AdvancedDrawingBoard_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
