// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AdvancedDrawingBoard/Public/Controller/AWhiteboard_Player_Controller.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAWhiteboard_Player_Controller() {}

// Begin Cross Module References
ADVANCEDDRAWINGBOARD_API UClass* Z_Construct_UClass_AWhiteboardActor_NoRegister();
ADVANCEDDRAWINGBOARD_API UClass* Z_Construct_UClass_AWhiteboardController();
ADVANCEDDRAWINGBOARD_API UClass* Z_Construct_UClass_AWhiteboardController_NoRegister();
ADVANCEDDRAWINGBOARD_API UEnum* Z_Construct_UEnum_AdvancedDrawingBoard_EDrawingTool();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
ENGINE_API UClass* Z_Construct_UClass_APawn_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_APlayerController();
UPackage* Z_Construct_UPackage__Script_AdvancedDrawingBoard();
// End Cross Module References

// Begin Class AWhiteboardController Function Server_EndWhiteboardInteraction
struct WhiteboardController_eventServer_EndWhiteboardInteraction_Parms
{
	AWhiteboardActor* Whiteboard;
	APawn* InteractingPlayer;
};
static const FName NAME_AWhiteboardController_Server_EndWhiteboardInteraction = FName(TEXT("Server_EndWhiteboardInteraction"));
void AWhiteboardController::Server_EndWhiteboardInteraction(AWhiteboardActor* Whiteboard, APawn* InteractingPlayer)
{
	WhiteboardController_eventServer_EndWhiteboardInteraction_Parms Parms;
	Parms.Whiteboard=Whiteboard;
	Parms.InteractingPlayer=InteractingPlayer;
	UFunction* Func = FindFunctionChecked(NAME_AWhiteboardController_Server_EndWhiteboardInteraction);
	ProcessEvent(Func,&Parms);
}
struct Z_Construct_UFunction_AWhiteboardController_Server_EndWhiteboardInteraction_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Controller/AWhiteboard_Player_Controller.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Whiteboard;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InteractingPlayer;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AWhiteboardController_Server_EndWhiteboardInteraction_Statics::NewProp_Whiteboard = { "Whiteboard", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WhiteboardController_eventServer_EndWhiteboardInteraction_Parms, Whiteboard), Z_Construct_UClass_AWhiteboardActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AWhiteboardController_Server_EndWhiteboardInteraction_Statics::NewProp_InteractingPlayer = { "InteractingPlayer", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WhiteboardController_eventServer_EndWhiteboardInteraction_Parms, InteractingPlayer), Z_Construct_UClass_APawn_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AWhiteboardController_Server_EndWhiteboardInteraction_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AWhiteboardController_Server_EndWhiteboardInteraction_Statics::NewProp_Whiteboard,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AWhiteboardController_Server_EndWhiteboardInteraction_Statics::NewProp_InteractingPlayer,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AWhiteboardController_Server_EndWhiteboardInteraction_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AWhiteboardController_Server_EndWhiteboardInteraction_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AWhiteboardController, nullptr, "Server_EndWhiteboardInteraction", nullptr, nullptr, Z_Construct_UFunction_AWhiteboardController_Server_EndWhiteboardInteraction_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AWhiteboardController_Server_EndWhiteboardInteraction_Statics::PropPointers), sizeof(WhiteboardController_eventServer_EndWhiteboardInteraction_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00220CC0, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AWhiteboardController_Server_EndWhiteboardInteraction_Statics::Function_MetaDataParams), Z_Construct_UFunction_AWhiteboardController_Server_EndWhiteboardInteraction_Statics::Function_MetaDataParams) };
static_assert(sizeof(WhiteboardController_eventServer_EndWhiteboardInteraction_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AWhiteboardController_Server_EndWhiteboardInteraction()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AWhiteboardController_Server_EndWhiteboardInteraction_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AWhiteboardController::execServer_EndWhiteboardInteraction)
{
	P_GET_OBJECT(AWhiteboardActor,Z_Param_Whiteboard);
	P_GET_OBJECT(APawn,Z_Param_InteractingPlayer);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Server_EndWhiteboardInteraction_Implementation(Z_Param_Whiteboard,Z_Param_InteractingPlayer);
	P_NATIVE_END;
}
// End Class AWhiteboardController Function Server_EndWhiteboardInteraction

// Begin Class AWhiteboardController Function Server_RequestWhiteboardInteraction
struct WhiteboardController_eventServer_RequestWhiteboardInteraction_Parms
{
	AWhiteboardActor* Whiteboard;
	APawn* InteractingPlayer;
};
static const FName NAME_AWhiteboardController_Server_RequestWhiteboardInteraction = FName(TEXT("Server_RequestWhiteboardInteraction"));
void AWhiteboardController::Server_RequestWhiteboardInteraction(AWhiteboardActor* Whiteboard, APawn* InteractingPlayer)
{
	WhiteboardController_eventServer_RequestWhiteboardInteraction_Parms Parms;
	Parms.Whiteboard=Whiteboard;
	Parms.InteractingPlayer=InteractingPlayer;
	UFunction* Func = FindFunctionChecked(NAME_AWhiteboardController_Server_RequestWhiteboardInteraction);
	ProcessEvent(Func,&Parms);
}
struct Z_Construct_UFunction_AWhiteboardController_Server_RequestWhiteboardInteraction_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Interaction RPCs\n" },
#endif
		{ "ModuleRelativePath", "Public/Controller/AWhiteboard_Player_Controller.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Interaction RPCs" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Whiteboard;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InteractingPlayer;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AWhiteboardController_Server_RequestWhiteboardInteraction_Statics::NewProp_Whiteboard = { "Whiteboard", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WhiteboardController_eventServer_RequestWhiteboardInteraction_Parms, Whiteboard), Z_Construct_UClass_AWhiteboardActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AWhiteboardController_Server_RequestWhiteboardInteraction_Statics::NewProp_InteractingPlayer = { "InteractingPlayer", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WhiteboardController_eventServer_RequestWhiteboardInteraction_Parms, InteractingPlayer), Z_Construct_UClass_APawn_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AWhiteboardController_Server_RequestWhiteboardInteraction_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AWhiteboardController_Server_RequestWhiteboardInteraction_Statics::NewProp_Whiteboard,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AWhiteboardController_Server_RequestWhiteboardInteraction_Statics::NewProp_InteractingPlayer,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AWhiteboardController_Server_RequestWhiteboardInteraction_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AWhiteboardController_Server_RequestWhiteboardInteraction_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AWhiteboardController, nullptr, "Server_RequestWhiteboardInteraction", nullptr, nullptr, Z_Construct_UFunction_AWhiteboardController_Server_RequestWhiteboardInteraction_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AWhiteboardController_Server_RequestWhiteboardInteraction_Statics::PropPointers), sizeof(WhiteboardController_eventServer_RequestWhiteboardInteraction_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00220CC0, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AWhiteboardController_Server_RequestWhiteboardInteraction_Statics::Function_MetaDataParams), Z_Construct_UFunction_AWhiteboardController_Server_RequestWhiteboardInteraction_Statics::Function_MetaDataParams) };
static_assert(sizeof(WhiteboardController_eventServer_RequestWhiteboardInteraction_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AWhiteboardController_Server_RequestWhiteboardInteraction()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AWhiteboardController_Server_RequestWhiteboardInteraction_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AWhiteboardController::execServer_RequestWhiteboardInteraction)
{
	P_GET_OBJECT(AWhiteboardActor,Z_Param_Whiteboard);
	P_GET_OBJECT(APawn,Z_Param_InteractingPlayer);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Server_RequestWhiteboardInteraction_Implementation(Z_Param_Whiteboard,Z_Param_InteractingPlayer);
	P_NATIVE_END;
}
// End Class AWhiteboardController Function Server_RequestWhiteboardInteraction

// Begin Class AWhiteboardController Function Server_WhiteboardAddText
struct WhiteboardController_eventServer_WhiteboardAddText_Parms
{
	AWhiteboardActor* Whiteboard;
	FVector2D CanvasPosition;
	FString Text;
	FLinearColor Color;
	float Size;
};
static const FName NAME_AWhiteboardController_Server_WhiteboardAddText = FName(TEXT("Server_WhiteboardAddText"));
void AWhiteboardController::Server_WhiteboardAddText(AWhiteboardActor* Whiteboard, FVector2D const& CanvasPosition, const FString& Text, FLinearColor Color, float Size)
{
	WhiteboardController_eventServer_WhiteboardAddText_Parms Parms;
	Parms.Whiteboard=Whiteboard;
	Parms.CanvasPosition=CanvasPosition;
	Parms.Text=Text;
	Parms.Color=Color;
	Parms.Size=Size;
	UFunction* Func = FindFunctionChecked(NAME_AWhiteboardController_Server_WhiteboardAddText);
	ProcessEvent(Func,&Parms);
}
struct Z_Construct_UFunction_AWhiteboardController_Server_WhiteboardAddText_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Controller/AWhiteboard_Player_Controller.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CanvasPosition_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Text_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Whiteboard;
	static const UECodeGen_Private::FStructPropertyParams NewProp_CanvasPosition;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Text;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Color;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Size;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AWhiteboardController_Server_WhiteboardAddText_Statics::NewProp_Whiteboard = { "Whiteboard", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WhiteboardController_eventServer_WhiteboardAddText_Parms, Whiteboard), Z_Construct_UClass_AWhiteboardActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AWhiteboardController_Server_WhiteboardAddText_Statics::NewProp_CanvasPosition = { "CanvasPosition", nullptr, (EPropertyFlags)0x0010000008000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WhiteboardController_eventServer_WhiteboardAddText_Parms, CanvasPosition), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CanvasPosition_MetaData), NewProp_CanvasPosition_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AWhiteboardController_Server_WhiteboardAddText_Statics::NewProp_Text = { "Text", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WhiteboardController_eventServer_WhiteboardAddText_Parms, Text), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Text_MetaData), NewProp_Text_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AWhiteboardController_Server_WhiteboardAddText_Statics::NewProp_Color = { "Color", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WhiteboardController_eventServer_WhiteboardAddText_Parms, Color), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AWhiteboardController_Server_WhiteboardAddText_Statics::NewProp_Size = { "Size", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WhiteboardController_eventServer_WhiteboardAddText_Parms, Size), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AWhiteboardController_Server_WhiteboardAddText_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AWhiteboardController_Server_WhiteboardAddText_Statics::NewProp_Whiteboard,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AWhiteboardController_Server_WhiteboardAddText_Statics::NewProp_CanvasPosition,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AWhiteboardController_Server_WhiteboardAddText_Statics::NewProp_Text,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AWhiteboardController_Server_WhiteboardAddText_Statics::NewProp_Color,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AWhiteboardController_Server_WhiteboardAddText_Statics::NewProp_Size,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AWhiteboardController_Server_WhiteboardAddText_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AWhiteboardController_Server_WhiteboardAddText_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AWhiteboardController, nullptr, "Server_WhiteboardAddText", nullptr, nullptr, Z_Construct_UFunction_AWhiteboardController_Server_WhiteboardAddText_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AWhiteboardController_Server_WhiteboardAddText_Statics::PropPointers), sizeof(WhiteboardController_eventServer_WhiteboardAddText_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00A20CC0, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AWhiteboardController_Server_WhiteboardAddText_Statics::Function_MetaDataParams), Z_Construct_UFunction_AWhiteboardController_Server_WhiteboardAddText_Statics::Function_MetaDataParams) };
static_assert(sizeof(WhiteboardController_eventServer_WhiteboardAddText_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AWhiteboardController_Server_WhiteboardAddText()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AWhiteboardController_Server_WhiteboardAddText_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AWhiteboardController::execServer_WhiteboardAddText)
{
	P_GET_OBJECT(AWhiteboardActor,Z_Param_Whiteboard);
	P_GET_STRUCT(FVector2D,Z_Param_CanvasPosition);
	P_GET_PROPERTY(FStrProperty,Z_Param_Text);
	P_GET_STRUCT(FLinearColor,Z_Param_Color);
	P_GET_PROPERTY(FFloatProperty,Z_Param_Size);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Server_WhiteboardAddText_Implementation(Z_Param_Whiteboard,Z_Param_CanvasPosition,Z_Param_Text,Z_Param_Color,Z_Param_Size);
	P_NATIVE_END;
}
// End Class AWhiteboardController Function Server_WhiteboardAddText

// Begin Class AWhiteboardController Function Server_WhiteboardClearWhiteboard
struct WhiteboardController_eventServer_WhiteboardClearWhiteboard_Parms
{
	AWhiteboardActor* Whiteboard;
};
static const FName NAME_AWhiteboardController_Server_WhiteboardClearWhiteboard = FName(TEXT("Server_WhiteboardClearWhiteboard"));
void AWhiteboardController::Server_WhiteboardClearWhiteboard(AWhiteboardActor* Whiteboard)
{
	WhiteboardController_eventServer_WhiteboardClearWhiteboard_Parms Parms;
	Parms.Whiteboard=Whiteboard;
	UFunction* Func = FindFunctionChecked(NAME_AWhiteboardController_Server_WhiteboardClearWhiteboard);
	ProcessEvent(Func,&Parms);
}
struct Z_Construct_UFunction_AWhiteboardController_Server_WhiteboardClearWhiteboard_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Controller/AWhiteboard_Player_Controller.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Whiteboard;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AWhiteboardController_Server_WhiteboardClearWhiteboard_Statics::NewProp_Whiteboard = { "Whiteboard", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WhiteboardController_eventServer_WhiteboardClearWhiteboard_Parms, Whiteboard), Z_Construct_UClass_AWhiteboardActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AWhiteboardController_Server_WhiteboardClearWhiteboard_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AWhiteboardController_Server_WhiteboardClearWhiteboard_Statics::NewProp_Whiteboard,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AWhiteboardController_Server_WhiteboardClearWhiteboard_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AWhiteboardController_Server_WhiteboardClearWhiteboard_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AWhiteboardController, nullptr, "Server_WhiteboardClearWhiteboard", nullptr, nullptr, Z_Construct_UFunction_AWhiteboardController_Server_WhiteboardClearWhiteboard_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AWhiteboardController_Server_WhiteboardClearWhiteboard_Statics::PropPointers), sizeof(WhiteboardController_eventServer_WhiteboardClearWhiteboard_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00220CC0, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AWhiteboardController_Server_WhiteboardClearWhiteboard_Statics::Function_MetaDataParams), Z_Construct_UFunction_AWhiteboardController_Server_WhiteboardClearWhiteboard_Statics::Function_MetaDataParams) };
static_assert(sizeof(WhiteboardController_eventServer_WhiteboardClearWhiteboard_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AWhiteboardController_Server_WhiteboardClearWhiteboard()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AWhiteboardController_Server_WhiteboardClearWhiteboard_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AWhiteboardController::execServer_WhiteboardClearWhiteboard)
{
	P_GET_OBJECT(AWhiteboardActor,Z_Param_Whiteboard);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Server_WhiteboardClearWhiteboard_Implementation(Z_Param_Whiteboard);
	P_NATIVE_END;
}
// End Class AWhiteboardController Function Server_WhiteboardClearWhiteboard

// Begin Class AWhiteboardController Function Server_WhiteboardContinueDrawing
struct WhiteboardController_eventServer_WhiteboardContinueDrawing_Parms
{
	AWhiteboardActor* Whiteboard;
	FVector2D CanvasPosition;
};
static const FName NAME_AWhiteboardController_Server_WhiteboardContinueDrawing = FName(TEXT("Server_WhiteboardContinueDrawing"));
void AWhiteboardController::Server_WhiteboardContinueDrawing(AWhiteboardActor* Whiteboard, FVector2D const& CanvasPosition)
{
	WhiteboardController_eventServer_WhiteboardContinueDrawing_Parms Parms;
	Parms.Whiteboard=Whiteboard;
	Parms.CanvasPosition=CanvasPosition;
	UFunction* Func = FindFunctionChecked(NAME_AWhiteboardController_Server_WhiteboardContinueDrawing);
	ProcessEvent(Func,&Parms);
}
struct Z_Construct_UFunction_AWhiteboardController_Server_WhiteboardContinueDrawing_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Controller/AWhiteboard_Player_Controller.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CanvasPosition_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Whiteboard;
	static const UECodeGen_Private::FStructPropertyParams NewProp_CanvasPosition;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AWhiteboardController_Server_WhiteboardContinueDrawing_Statics::NewProp_Whiteboard = { "Whiteboard", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WhiteboardController_eventServer_WhiteboardContinueDrawing_Parms, Whiteboard), Z_Construct_UClass_AWhiteboardActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AWhiteboardController_Server_WhiteboardContinueDrawing_Statics::NewProp_CanvasPosition = { "CanvasPosition", nullptr, (EPropertyFlags)0x0010000008000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WhiteboardController_eventServer_WhiteboardContinueDrawing_Parms, CanvasPosition), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CanvasPosition_MetaData), NewProp_CanvasPosition_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AWhiteboardController_Server_WhiteboardContinueDrawing_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AWhiteboardController_Server_WhiteboardContinueDrawing_Statics::NewProp_Whiteboard,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AWhiteboardController_Server_WhiteboardContinueDrawing_Statics::NewProp_CanvasPosition,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AWhiteboardController_Server_WhiteboardContinueDrawing_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AWhiteboardController_Server_WhiteboardContinueDrawing_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AWhiteboardController, nullptr, "Server_WhiteboardContinueDrawing", nullptr, nullptr, Z_Construct_UFunction_AWhiteboardController_Server_WhiteboardContinueDrawing_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AWhiteboardController_Server_WhiteboardContinueDrawing_Statics::PropPointers), sizeof(WhiteboardController_eventServer_WhiteboardContinueDrawing_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00A20CC0, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AWhiteboardController_Server_WhiteboardContinueDrawing_Statics::Function_MetaDataParams), Z_Construct_UFunction_AWhiteboardController_Server_WhiteboardContinueDrawing_Statics::Function_MetaDataParams) };
static_assert(sizeof(WhiteboardController_eventServer_WhiteboardContinueDrawing_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AWhiteboardController_Server_WhiteboardContinueDrawing()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AWhiteboardController_Server_WhiteboardContinueDrawing_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AWhiteboardController::execServer_WhiteboardContinueDrawing)
{
	P_GET_OBJECT(AWhiteboardActor,Z_Param_Whiteboard);
	P_GET_STRUCT(FVector2D,Z_Param_CanvasPosition);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Server_WhiteboardContinueDrawing_Implementation(Z_Param_Whiteboard,Z_Param_CanvasPosition);
	P_NATIVE_END;
}
// End Class AWhiteboardController Function Server_WhiteboardContinueDrawing

// Begin Class AWhiteboardController Function Server_WhiteboardDrawFigure
struct WhiteboardController_eventServer_WhiteboardDrawFigure_Parms
{
	AWhiteboardActor* Whiteboard;
	FVector2D CanvasPosition;
	int32 SelectedFigureIndex;
	FLinearColor Color;
	float Size;
};
static const FName NAME_AWhiteboardController_Server_WhiteboardDrawFigure = FName(TEXT("Server_WhiteboardDrawFigure"));
void AWhiteboardController::Server_WhiteboardDrawFigure(AWhiteboardActor* Whiteboard, FVector2D const& CanvasPosition, int32 SelectedFigureIndex, FLinearColor Color, float Size)
{
	WhiteboardController_eventServer_WhiteboardDrawFigure_Parms Parms;
	Parms.Whiteboard=Whiteboard;
	Parms.CanvasPosition=CanvasPosition;
	Parms.SelectedFigureIndex=SelectedFigureIndex;
	Parms.Color=Color;
	Parms.Size=Size;
	UFunction* Func = FindFunctionChecked(NAME_AWhiteboardController_Server_WhiteboardDrawFigure);
	ProcessEvent(Func,&Parms);
}
struct Z_Construct_UFunction_AWhiteboardController_Server_WhiteboardDrawFigure_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Controller/AWhiteboard_Player_Controller.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CanvasPosition_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Whiteboard;
	static const UECodeGen_Private::FStructPropertyParams NewProp_CanvasPosition;
	static const UECodeGen_Private::FIntPropertyParams NewProp_SelectedFigureIndex;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Color;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Size;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AWhiteboardController_Server_WhiteboardDrawFigure_Statics::NewProp_Whiteboard = { "Whiteboard", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WhiteboardController_eventServer_WhiteboardDrawFigure_Parms, Whiteboard), Z_Construct_UClass_AWhiteboardActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AWhiteboardController_Server_WhiteboardDrawFigure_Statics::NewProp_CanvasPosition = { "CanvasPosition", nullptr, (EPropertyFlags)0x0010000008000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WhiteboardController_eventServer_WhiteboardDrawFigure_Parms, CanvasPosition), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CanvasPosition_MetaData), NewProp_CanvasPosition_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AWhiteboardController_Server_WhiteboardDrawFigure_Statics::NewProp_SelectedFigureIndex = { "SelectedFigureIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WhiteboardController_eventServer_WhiteboardDrawFigure_Parms, SelectedFigureIndex), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AWhiteboardController_Server_WhiteboardDrawFigure_Statics::NewProp_Color = { "Color", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WhiteboardController_eventServer_WhiteboardDrawFigure_Parms, Color), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AWhiteboardController_Server_WhiteboardDrawFigure_Statics::NewProp_Size = { "Size", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WhiteboardController_eventServer_WhiteboardDrawFigure_Parms, Size), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AWhiteboardController_Server_WhiteboardDrawFigure_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AWhiteboardController_Server_WhiteboardDrawFigure_Statics::NewProp_Whiteboard,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AWhiteboardController_Server_WhiteboardDrawFigure_Statics::NewProp_CanvasPosition,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AWhiteboardController_Server_WhiteboardDrawFigure_Statics::NewProp_SelectedFigureIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AWhiteboardController_Server_WhiteboardDrawFigure_Statics::NewProp_Color,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AWhiteboardController_Server_WhiteboardDrawFigure_Statics::NewProp_Size,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AWhiteboardController_Server_WhiteboardDrawFigure_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AWhiteboardController_Server_WhiteboardDrawFigure_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AWhiteboardController, nullptr, "Server_WhiteboardDrawFigure", nullptr, nullptr, Z_Construct_UFunction_AWhiteboardController_Server_WhiteboardDrawFigure_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AWhiteboardController_Server_WhiteboardDrawFigure_Statics::PropPointers), sizeof(WhiteboardController_eventServer_WhiteboardDrawFigure_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00A20CC0, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AWhiteboardController_Server_WhiteboardDrawFigure_Statics::Function_MetaDataParams), Z_Construct_UFunction_AWhiteboardController_Server_WhiteboardDrawFigure_Statics::Function_MetaDataParams) };
static_assert(sizeof(WhiteboardController_eventServer_WhiteboardDrawFigure_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AWhiteboardController_Server_WhiteboardDrawFigure()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AWhiteboardController_Server_WhiteboardDrawFigure_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AWhiteboardController::execServer_WhiteboardDrawFigure)
{
	P_GET_OBJECT(AWhiteboardActor,Z_Param_Whiteboard);
	P_GET_STRUCT(FVector2D,Z_Param_CanvasPosition);
	P_GET_PROPERTY(FIntProperty,Z_Param_SelectedFigureIndex);
	P_GET_STRUCT(FLinearColor,Z_Param_Color);
	P_GET_PROPERTY(FFloatProperty,Z_Param_Size);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Server_WhiteboardDrawFigure_Implementation(Z_Param_Whiteboard,Z_Param_CanvasPosition,Z_Param_SelectedFigureIndex,Z_Param_Color,Z_Param_Size);
	P_NATIVE_END;
}
// End Class AWhiteboardController Function Server_WhiteboardDrawFigure

// Begin Class AWhiteboardController Function Server_WhiteboardEndDrawing
struct WhiteboardController_eventServer_WhiteboardEndDrawing_Parms
{
	AWhiteboardActor* Whiteboard;
};
static const FName NAME_AWhiteboardController_Server_WhiteboardEndDrawing = FName(TEXT("Server_WhiteboardEndDrawing"));
void AWhiteboardController::Server_WhiteboardEndDrawing(AWhiteboardActor* Whiteboard)
{
	WhiteboardController_eventServer_WhiteboardEndDrawing_Parms Parms;
	Parms.Whiteboard=Whiteboard;
	UFunction* Func = FindFunctionChecked(NAME_AWhiteboardController_Server_WhiteboardEndDrawing);
	ProcessEvent(Func,&Parms);
}
struct Z_Construct_UFunction_AWhiteboardController_Server_WhiteboardEndDrawing_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Controller/AWhiteboard_Player_Controller.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Whiteboard;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AWhiteboardController_Server_WhiteboardEndDrawing_Statics::NewProp_Whiteboard = { "Whiteboard", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WhiteboardController_eventServer_WhiteboardEndDrawing_Parms, Whiteboard), Z_Construct_UClass_AWhiteboardActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AWhiteboardController_Server_WhiteboardEndDrawing_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AWhiteboardController_Server_WhiteboardEndDrawing_Statics::NewProp_Whiteboard,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AWhiteboardController_Server_WhiteboardEndDrawing_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AWhiteboardController_Server_WhiteboardEndDrawing_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AWhiteboardController, nullptr, "Server_WhiteboardEndDrawing", nullptr, nullptr, Z_Construct_UFunction_AWhiteboardController_Server_WhiteboardEndDrawing_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AWhiteboardController_Server_WhiteboardEndDrawing_Statics::PropPointers), sizeof(WhiteboardController_eventServer_WhiteboardEndDrawing_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00220CC0, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AWhiteboardController_Server_WhiteboardEndDrawing_Statics::Function_MetaDataParams), Z_Construct_UFunction_AWhiteboardController_Server_WhiteboardEndDrawing_Statics::Function_MetaDataParams) };
static_assert(sizeof(WhiteboardController_eventServer_WhiteboardEndDrawing_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AWhiteboardController_Server_WhiteboardEndDrawing()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AWhiteboardController_Server_WhiteboardEndDrawing_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AWhiteboardController::execServer_WhiteboardEndDrawing)
{
	P_GET_OBJECT(AWhiteboardActor,Z_Param_Whiteboard);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Server_WhiteboardEndDrawing_Implementation(Z_Param_Whiteboard);
	P_NATIVE_END;
}
// End Class AWhiteboardController Function Server_WhiteboardEndDrawing

// Begin Class AWhiteboardController Function Server_WhiteboardRedo
struct WhiteboardController_eventServer_WhiteboardRedo_Parms
{
	AWhiteboardActor* Whiteboard;
};
static const FName NAME_AWhiteboardController_Server_WhiteboardRedo = FName(TEXT("Server_WhiteboardRedo"));
void AWhiteboardController::Server_WhiteboardRedo(AWhiteboardActor* Whiteboard)
{
	WhiteboardController_eventServer_WhiteboardRedo_Parms Parms;
	Parms.Whiteboard=Whiteboard;
	UFunction* Func = FindFunctionChecked(NAME_AWhiteboardController_Server_WhiteboardRedo);
	ProcessEvent(Func,&Parms);
}
struct Z_Construct_UFunction_AWhiteboardController_Server_WhiteboardRedo_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Controller/AWhiteboard_Player_Controller.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Whiteboard;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AWhiteboardController_Server_WhiteboardRedo_Statics::NewProp_Whiteboard = { "Whiteboard", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WhiteboardController_eventServer_WhiteboardRedo_Parms, Whiteboard), Z_Construct_UClass_AWhiteboardActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AWhiteboardController_Server_WhiteboardRedo_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AWhiteboardController_Server_WhiteboardRedo_Statics::NewProp_Whiteboard,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AWhiteboardController_Server_WhiteboardRedo_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AWhiteboardController_Server_WhiteboardRedo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AWhiteboardController, nullptr, "Server_WhiteboardRedo", nullptr, nullptr, Z_Construct_UFunction_AWhiteboardController_Server_WhiteboardRedo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AWhiteboardController_Server_WhiteboardRedo_Statics::PropPointers), sizeof(WhiteboardController_eventServer_WhiteboardRedo_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00220CC0, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AWhiteboardController_Server_WhiteboardRedo_Statics::Function_MetaDataParams), Z_Construct_UFunction_AWhiteboardController_Server_WhiteboardRedo_Statics::Function_MetaDataParams) };
static_assert(sizeof(WhiteboardController_eventServer_WhiteboardRedo_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AWhiteboardController_Server_WhiteboardRedo()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AWhiteboardController_Server_WhiteboardRedo_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AWhiteboardController::execServer_WhiteboardRedo)
{
	P_GET_OBJECT(AWhiteboardActor,Z_Param_Whiteboard);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Server_WhiteboardRedo_Implementation(Z_Param_Whiteboard);
	P_NATIVE_END;
}
// End Class AWhiteboardController Function Server_WhiteboardRedo

// Begin Class AWhiteboardController Function Server_WhiteboardSetBrushSize
struct WhiteboardController_eventServer_WhiteboardSetBrushSize_Parms
{
	AWhiteboardActor* Whiteboard;
	float NewSize;
};
static const FName NAME_AWhiteboardController_Server_WhiteboardSetBrushSize = FName(TEXT("Server_WhiteboardSetBrushSize"));
void AWhiteboardController::Server_WhiteboardSetBrushSize(AWhiteboardActor* Whiteboard, float NewSize)
{
	WhiteboardController_eventServer_WhiteboardSetBrushSize_Parms Parms;
	Parms.Whiteboard=Whiteboard;
	Parms.NewSize=NewSize;
	UFunction* Func = FindFunctionChecked(NAME_AWhiteboardController_Server_WhiteboardSetBrushSize);
	ProcessEvent(Func,&Parms);
}
struct Z_Construct_UFunction_AWhiteboardController_Server_WhiteboardSetBrushSize_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Controller/AWhiteboard_Player_Controller.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Whiteboard;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_NewSize;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AWhiteboardController_Server_WhiteboardSetBrushSize_Statics::NewProp_Whiteboard = { "Whiteboard", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WhiteboardController_eventServer_WhiteboardSetBrushSize_Parms, Whiteboard), Z_Construct_UClass_AWhiteboardActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AWhiteboardController_Server_WhiteboardSetBrushSize_Statics::NewProp_NewSize = { "NewSize", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WhiteboardController_eventServer_WhiteboardSetBrushSize_Parms, NewSize), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AWhiteboardController_Server_WhiteboardSetBrushSize_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AWhiteboardController_Server_WhiteboardSetBrushSize_Statics::NewProp_Whiteboard,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AWhiteboardController_Server_WhiteboardSetBrushSize_Statics::NewProp_NewSize,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AWhiteboardController_Server_WhiteboardSetBrushSize_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AWhiteboardController_Server_WhiteboardSetBrushSize_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AWhiteboardController, nullptr, "Server_WhiteboardSetBrushSize", nullptr, nullptr, Z_Construct_UFunction_AWhiteboardController_Server_WhiteboardSetBrushSize_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AWhiteboardController_Server_WhiteboardSetBrushSize_Statics::PropPointers), sizeof(WhiteboardController_eventServer_WhiteboardSetBrushSize_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00220CC0, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AWhiteboardController_Server_WhiteboardSetBrushSize_Statics::Function_MetaDataParams), Z_Construct_UFunction_AWhiteboardController_Server_WhiteboardSetBrushSize_Statics::Function_MetaDataParams) };
static_assert(sizeof(WhiteboardController_eventServer_WhiteboardSetBrushSize_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AWhiteboardController_Server_WhiteboardSetBrushSize()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AWhiteboardController_Server_WhiteboardSetBrushSize_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AWhiteboardController::execServer_WhiteboardSetBrushSize)
{
	P_GET_OBJECT(AWhiteboardActor,Z_Param_Whiteboard);
	P_GET_PROPERTY(FFloatProperty,Z_Param_NewSize);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Server_WhiteboardSetBrushSize_Implementation(Z_Param_Whiteboard,Z_Param_NewSize);
	P_NATIVE_END;
}
// End Class AWhiteboardController Function Server_WhiteboardSetBrushSize

// Begin Class AWhiteboardController Function Server_WhiteboardSetBrushTexture
struct WhiteboardController_eventServer_WhiteboardSetBrushTexture_Parms
{
	AWhiteboardActor* Whiteboard;
	int32 TextureIndex;
};
static const FName NAME_AWhiteboardController_Server_WhiteboardSetBrushTexture = FName(TEXT("Server_WhiteboardSetBrushTexture"));
void AWhiteboardController::Server_WhiteboardSetBrushTexture(AWhiteboardActor* Whiteboard, int32 TextureIndex)
{
	WhiteboardController_eventServer_WhiteboardSetBrushTexture_Parms Parms;
	Parms.Whiteboard=Whiteboard;
	Parms.TextureIndex=TextureIndex;
	UFunction* Func = FindFunctionChecked(NAME_AWhiteboardController_Server_WhiteboardSetBrushTexture);
	ProcessEvent(Func,&Parms);
}
struct Z_Construct_UFunction_AWhiteboardController_Server_WhiteboardSetBrushTexture_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Controller/AWhiteboard_Player_Controller.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Whiteboard;
	static const UECodeGen_Private::FIntPropertyParams NewProp_TextureIndex;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AWhiteboardController_Server_WhiteboardSetBrushTexture_Statics::NewProp_Whiteboard = { "Whiteboard", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WhiteboardController_eventServer_WhiteboardSetBrushTexture_Parms, Whiteboard), Z_Construct_UClass_AWhiteboardActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AWhiteboardController_Server_WhiteboardSetBrushTexture_Statics::NewProp_TextureIndex = { "TextureIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WhiteboardController_eventServer_WhiteboardSetBrushTexture_Parms, TextureIndex), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AWhiteboardController_Server_WhiteboardSetBrushTexture_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AWhiteboardController_Server_WhiteboardSetBrushTexture_Statics::NewProp_Whiteboard,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AWhiteboardController_Server_WhiteboardSetBrushTexture_Statics::NewProp_TextureIndex,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AWhiteboardController_Server_WhiteboardSetBrushTexture_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AWhiteboardController_Server_WhiteboardSetBrushTexture_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AWhiteboardController, nullptr, "Server_WhiteboardSetBrushTexture", nullptr, nullptr, Z_Construct_UFunction_AWhiteboardController_Server_WhiteboardSetBrushTexture_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AWhiteboardController_Server_WhiteboardSetBrushTexture_Statics::PropPointers), sizeof(WhiteboardController_eventServer_WhiteboardSetBrushTexture_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00220CC0, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AWhiteboardController_Server_WhiteboardSetBrushTexture_Statics::Function_MetaDataParams), Z_Construct_UFunction_AWhiteboardController_Server_WhiteboardSetBrushTexture_Statics::Function_MetaDataParams) };
static_assert(sizeof(WhiteboardController_eventServer_WhiteboardSetBrushTexture_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AWhiteboardController_Server_WhiteboardSetBrushTexture()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AWhiteboardController_Server_WhiteboardSetBrushTexture_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AWhiteboardController::execServer_WhiteboardSetBrushTexture)
{
	P_GET_OBJECT(AWhiteboardActor,Z_Param_Whiteboard);
	P_GET_PROPERTY(FIntProperty,Z_Param_TextureIndex);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Server_WhiteboardSetBrushTexture_Implementation(Z_Param_Whiteboard,Z_Param_TextureIndex);
	P_NATIVE_END;
}
// End Class AWhiteboardController Function Server_WhiteboardSetBrushTexture

// Begin Class AWhiteboardController Function Server_WhiteboardSetCurrentColor
struct WhiteboardController_eventServer_WhiteboardSetCurrentColor_Parms
{
	AWhiteboardActor* Whiteboard;
	FLinearColor NewColor;
};
static const FName NAME_AWhiteboardController_Server_WhiteboardSetCurrentColor = FName(TEXT("Server_WhiteboardSetCurrentColor"));
void AWhiteboardController::Server_WhiteboardSetCurrentColor(AWhiteboardActor* Whiteboard, FLinearColor NewColor)
{
	WhiteboardController_eventServer_WhiteboardSetCurrentColor_Parms Parms;
	Parms.Whiteboard=Whiteboard;
	Parms.NewColor=NewColor;
	UFunction* Func = FindFunctionChecked(NAME_AWhiteboardController_Server_WhiteboardSetCurrentColor);
	ProcessEvent(Func,&Parms);
}
struct Z_Construct_UFunction_AWhiteboardController_Server_WhiteboardSetCurrentColor_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Controller/AWhiteboard_Player_Controller.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Whiteboard;
	static const UECodeGen_Private::FStructPropertyParams NewProp_NewColor;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AWhiteboardController_Server_WhiteboardSetCurrentColor_Statics::NewProp_Whiteboard = { "Whiteboard", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WhiteboardController_eventServer_WhiteboardSetCurrentColor_Parms, Whiteboard), Z_Construct_UClass_AWhiteboardActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AWhiteboardController_Server_WhiteboardSetCurrentColor_Statics::NewProp_NewColor = { "NewColor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WhiteboardController_eventServer_WhiteboardSetCurrentColor_Parms, NewColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AWhiteboardController_Server_WhiteboardSetCurrentColor_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AWhiteboardController_Server_WhiteboardSetCurrentColor_Statics::NewProp_Whiteboard,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AWhiteboardController_Server_WhiteboardSetCurrentColor_Statics::NewProp_NewColor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AWhiteboardController_Server_WhiteboardSetCurrentColor_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AWhiteboardController_Server_WhiteboardSetCurrentColor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AWhiteboardController, nullptr, "Server_WhiteboardSetCurrentColor", nullptr, nullptr, Z_Construct_UFunction_AWhiteboardController_Server_WhiteboardSetCurrentColor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AWhiteboardController_Server_WhiteboardSetCurrentColor_Statics::PropPointers), sizeof(WhiteboardController_eventServer_WhiteboardSetCurrentColor_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00A20CC0, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AWhiteboardController_Server_WhiteboardSetCurrentColor_Statics::Function_MetaDataParams), Z_Construct_UFunction_AWhiteboardController_Server_WhiteboardSetCurrentColor_Statics::Function_MetaDataParams) };
static_assert(sizeof(WhiteboardController_eventServer_WhiteboardSetCurrentColor_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AWhiteboardController_Server_WhiteboardSetCurrentColor()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AWhiteboardController_Server_WhiteboardSetCurrentColor_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AWhiteboardController::execServer_WhiteboardSetCurrentColor)
{
	P_GET_OBJECT(AWhiteboardActor,Z_Param_Whiteboard);
	P_GET_STRUCT(FLinearColor,Z_Param_NewColor);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Server_WhiteboardSetCurrentColor_Implementation(Z_Param_Whiteboard,Z_Param_NewColor);
	P_NATIVE_END;
}
// End Class AWhiteboardController Function Server_WhiteboardSetCurrentColor

// Begin Class AWhiteboardController Function Server_WhiteboardSetCurrentTool
struct WhiteboardController_eventServer_WhiteboardSetCurrentTool_Parms
{
	AWhiteboardActor* Whiteboard;
	EDrawingTool NewTool;
};
static const FName NAME_AWhiteboardController_Server_WhiteboardSetCurrentTool = FName(TEXT("Server_WhiteboardSetCurrentTool"));
void AWhiteboardController::Server_WhiteboardSetCurrentTool(AWhiteboardActor* Whiteboard, EDrawingTool NewTool)
{
	WhiteboardController_eventServer_WhiteboardSetCurrentTool_Parms Parms;
	Parms.Whiteboard=Whiteboard;
	Parms.NewTool=NewTool;
	UFunction* Func = FindFunctionChecked(NAME_AWhiteboardController_Server_WhiteboardSetCurrentTool);
	ProcessEvent(Func,&Parms);
}
struct Z_Construct_UFunction_AWhiteboardController_Server_WhiteboardSetCurrentTool_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Controller/AWhiteboard_Player_Controller.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Whiteboard;
	static const UECodeGen_Private::FBytePropertyParams NewProp_NewTool_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_NewTool;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AWhiteboardController_Server_WhiteboardSetCurrentTool_Statics::NewProp_Whiteboard = { "Whiteboard", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WhiteboardController_eventServer_WhiteboardSetCurrentTool_Parms, Whiteboard), Z_Construct_UClass_AWhiteboardActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AWhiteboardController_Server_WhiteboardSetCurrentTool_Statics::NewProp_NewTool_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_AWhiteboardController_Server_WhiteboardSetCurrentTool_Statics::NewProp_NewTool = { "NewTool", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WhiteboardController_eventServer_WhiteboardSetCurrentTool_Parms, NewTool), Z_Construct_UEnum_AdvancedDrawingBoard_EDrawingTool, METADATA_PARAMS(0, nullptr) }; // 3667291816
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AWhiteboardController_Server_WhiteboardSetCurrentTool_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AWhiteboardController_Server_WhiteboardSetCurrentTool_Statics::NewProp_Whiteboard,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AWhiteboardController_Server_WhiteboardSetCurrentTool_Statics::NewProp_NewTool_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AWhiteboardController_Server_WhiteboardSetCurrentTool_Statics::NewProp_NewTool,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AWhiteboardController_Server_WhiteboardSetCurrentTool_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AWhiteboardController_Server_WhiteboardSetCurrentTool_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AWhiteboardController, nullptr, "Server_WhiteboardSetCurrentTool", nullptr, nullptr, Z_Construct_UFunction_AWhiteboardController_Server_WhiteboardSetCurrentTool_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AWhiteboardController_Server_WhiteboardSetCurrentTool_Statics::PropPointers), sizeof(WhiteboardController_eventServer_WhiteboardSetCurrentTool_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00220CC0, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AWhiteboardController_Server_WhiteboardSetCurrentTool_Statics::Function_MetaDataParams), Z_Construct_UFunction_AWhiteboardController_Server_WhiteboardSetCurrentTool_Statics::Function_MetaDataParams) };
static_assert(sizeof(WhiteboardController_eventServer_WhiteboardSetCurrentTool_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AWhiteboardController_Server_WhiteboardSetCurrentTool()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AWhiteboardController_Server_WhiteboardSetCurrentTool_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AWhiteboardController::execServer_WhiteboardSetCurrentTool)
{
	P_GET_OBJECT(AWhiteboardActor,Z_Param_Whiteboard);
	P_GET_ENUM(EDrawingTool,Z_Param_NewTool);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Server_WhiteboardSetCurrentTool_Implementation(Z_Param_Whiteboard,EDrawingTool(Z_Param_NewTool));
	P_NATIVE_END;
}
// End Class AWhiteboardController Function Server_WhiteboardSetCurrentTool

// Begin Class AWhiteboardController Function Server_WhiteboardSetFigureTexture
struct WhiteboardController_eventServer_WhiteboardSetFigureTexture_Parms
{
	AWhiteboardActor* Whiteboard;
	int32 TextureIndex;
};
static const FName NAME_AWhiteboardController_Server_WhiteboardSetFigureTexture = FName(TEXT("Server_WhiteboardSetFigureTexture"));
void AWhiteboardController::Server_WhiteboardSetFigureTexture(AWhiteboardActor* Whiteboard, int32 TextureIndex)
{
	WhiteboardController_eventServer_WhiteboardSetFigureTexture_Parms Parms;
	Parms.Whiteboard=Whiteboard;
	Parms.TextureIndex=TextureIndex;
	UFunction* Func = FindFunctionChecked(NAME_AWhiteboardController_Server_WhiteboardSetFigureTexture);
	ProcessEvent(Func,&Parms);
}
struct Z_Construct_UFunction_AWhiteboardController_Server_WhiteboardSetFigureTexture_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Controller/AWhiteboard_Player_Controller.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Whiteboard;
	static const UECodeGen_Private::FIntPropertyParams NewProp_TextureIndex;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AWhiteboardController_Server_WhiteboardSetFigureTexture_Statics::NewProp_Whiteboard = { "Whiteboard", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WhiteboardController_eventServer_WhiteboardSetFigureTexture_Parms, Whiteboard), Z_Construct_UClass_AWhiteboardActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AWhiteboardController_Server_WhiteboardSetFigureTexture_Statics::NewProp_TextureIndex = { "TextureIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WhiteboardController_eventServer_WhiteboardSetFigureTexture_Parms, TextureIndex), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AWhiteboardController_Server_WhiteboardSetFigureTexture_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AWhiteboardController_Server_WhiteboardSetFigureTexture_Statics::NewProp_Whiteboard,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AWhiteboardController_Server_WhiteboardSetFigureTexture_Statics::NewProp_TextureIndex,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AWhiteboardController_Server_WhiteboardSetFigureTexture_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AWhiteboardController_Server_WhiteboardSetFigureTexture_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AWhiteboardController, nullptr, "Server_WhiteboardSetFigureTexture", nullptr, nullptr, Z_Construct_UFunction_AWhiteboardController_Server_WhiteboardSetFigureTexture_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AWhiteboardController_Server_WhiteboardSetFigureTexture_Statics::PropPointers), sizeof(WhiteboardController_eventServer_WhiteboardSetFigureTexture_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00220CC0, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AWhiteboardController_Server_WhiteboardSetFigureTexture_Statics::Function_MetaDataParams), Z_Construct_UFunction_AWhiteboardController_Server_WhiteboardSetFigureTexture_Statics::Function_MetaDataParams) };
static_assert(sizeof(WhiteboardController_eventServer_WhiteboardSetFigureTexture_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AWhiteboardController_Server_WhiteboardSetFigureTexture()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AWhiteboardController_Server_WhiteboardSetFigureTexture_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AWhiteboardController::execServer_WhiteboardSetFigureTexture)
{
	P_GET_OBJECT(AWhiteboardActor,Z_Param_Whiteboard);
	P_GET_PROPERTY(FIntProperty,Z_Param_TextureIndex);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Server_WhiteboardSetFigureTexture_Implementation(Z_Param_Whiteboard,Z_Param_TextureIndex);
	P_NATIVE_END;
}
// End Class AWhiteboardController Function Server_WhiteboardSetFigureTexture

// Begin Class AWhiteboardController Function Server_WhiteboardSetTextString
struct WhiteboardController_eventServer_WhiteboardSetTextString_Parms
{
	AWhiteboardActor* Whiteboard;
	FString NewTextString;
};
static const FName NAME_AWhiteboardController_Server_WhiteboardSetTextString = FName(TEXT("Server_WhiteboardSetTextString"));
void AWhiteboardController::Server_WhiteboardSetTextString(AWhiteboardActor* Whiteboard, const FString& NewTextString)
{
	WhiteboardController_eventServer_WhiteboardSetTextString_Parms Parms;
	Parms.Whiteboard=Whiteboard;
	Parms.NewTextString=NewTextString;
	UFunction* Func = FindFunctionChecked(NAME_AWhiteboardController_Server_WhiteboardSetTextString);
	ProcessEvent(Func,&Parms);
}
struct Z_Construct_UFunction_AWhiteboardController_Server_WhiteboardSetTextString_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Controller/AWhiteboard_Player_Controller.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NewTextString_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Whiteboard;
	static const UECodeGen_Private::FStrPropertyParams NewProp_NewTextString;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AWhiteboardController_Server_WhiteboardSetTextString_Statics::NewProp_Whiteboard = { "Whiteboard", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WhiteboardController_eventServer_WhiteboardSetTextString_Parms, Whiteboard), Z_Construct_UClass_AWhiteboardActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AWhiteboardController_Server_WhiteboardSetTextString_Statics::NewProp_NewTextString = { "NewTextString", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WhiteboardController_eventServer_WhiteboardSetTextString_Parms, NewTextString), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NewTextString_MetaData), NewProp_NewTextString_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AWhiteboardController_Server_WhiteboardSetTextString_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AWhiteboardController_Server_WhiteboardSetTextString_Statics::NewProp_Whiteboard,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AWhiteboardController_Server_WhiteboardSetTextString_Statics::NewProp_NewTextString,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AWhiteboardController_Server_WhiteboardSetTextString_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AWhiteboardController_Server_WhiteboardSetTextString_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AWhiteboardController, nullptr, "Server_WhiteboardSetTextString", nullptr, nullptr, Z_Construct_UFunction_AWhiteboardController_Server_WhiteboardSetTextString_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AWhiteboardController_Server_WhiteboardSetTextString_Statics::PropPointers), sizeof(WhiteboardController_eventServer_WhiteboardSetTextString_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00220CC0, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AWhiteboardController_Server_WhiteboardSetTextString_Statics::Function_MetaDataParams), Z_Construct_UFunction_AWhiteboardController_Server_WhiteboardSetTextString_Statics::Function_MetaDataParams) };
static_assert(sizeof(WhiteboardController_eventServer_WhiteboardSetTextString_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AWhiteboardController_Server_WhiteboardSetTextString()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AWhiteboardController_Server_WhiteboardSetTextString_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AWhiteboardController::execServer_WhiteboardSetTextString)
{
	P_GET_OBJECT(AWhiteboardActor,Z_Param_Whiteboard);
	P_GET_PROPERTY(FStrProperty,Z_Param_NewTextString);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Server_WhiteboardSetTextString_Implementation(Z_Param_Whiteboard,Z_Param_NewTextString);
	P_NATIVE_END;
}
// End Class AWhiteboardController Function Server_WhiteboardSetTextString

// Begin Class AWhiteboardController Function Server_WhiteboardStartDrawing
struct WhiteboardController_eventServer_WhiteboardStartDrawing_Parms
{
	AWhiteboardActor* Whiteboard;
	FVector2D CanvasPosition;
	EDrawingTool Tool;
	FLinearColor Color;
	float Size;
	int32 BrushTextureIndex;
	int32 FigureTextureIndex;
};
static const FName NAME_AWhiteboardController_Server_WhiteboardStartDrawing = FName(TEXT("Server_WhiteboardStartDrawing"));
void AWhiteboardController::Server_WhiteboardStartDrawing(AWhiteboardActor* Whiteboard, FVector2D const& CanvasPosition, EDrawingTool Tool, FLinearColor Color, float Size, int32 BrushTextureIndex, int32 FigureTextureIndex)
{
	WhiteboardController_eventServer_WhiteboardStartDrawing_Parms Parms;
	Parms.Whiteboard=Whiteboard;
	Parms.CanvasPosition=CanvasPosition;
	Parms.Tool=Tool;
	Parms.Color=Color;
	Parms.Size=Size;
	Parms.BrushTextureIndex=BrushTextureIndex;
	Parms.FigureTextureIndex=FigureTextureIndex;
	UFunction* Func = FindFunctionChecked(NAME_AWhiteboardController_Server_WhiteboardStartDrawing);
	ProcessEvent(Func,&Parms);
}
struct Z_Construct_UFunction_AWhiteboardController_Server_WhiteboardStartDrawing_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Drawing RPCs - Route through PlayerController\n" },
#endif
		{ "ModuleRelativePath", "Public/Controller/AWhiteboard_Player_Controller.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Drawing RPCs - Route through PlayerController" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CanvasPosition_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Whiteboard;
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
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AWhiteboardController_Server_WhiteboardStartDrawing_Statics::NewProp_Whiteboard = { "Whiteboard", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WhiteboardController_eventServer_WhiteboardStartDrawing_Parms, Whiteboard), Z_Construct_UClass_AWhiteboardActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AWhiteboardController_Server_WhiteboardStartDrawing_Statics::NewProp_CanvasPosition = { "CanvasPosition", nullptr, (EPropertyFlags)0x0010000008000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WhiteboardController_eventServer_WhiteboardStartDrawing_Parms, CanvasPosition), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CanvasPosition_MetaData), NewProp_CanvasPosition_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AWhiteboardController_Server_WhiteboardStartDrawing_Statics::NewProp_Tool_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_AWhiteboardController_Server_WhiteboardStartDrawing_Statics::NewProp_Tool = { "Tool", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WhiteboardController_eventServer_WhiteboardStartDrawing_Parms, Tool), Z_Construct_UEnum_AdvancedDrawingBoard_EDrawingTool, METADATA_PARAMS(0, nullptr) }; // 3667291816
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AWhiteboardController_Server_WhiteboardStartDrawing_Statics::NewProp_Color = { "Color", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WhiteboardController_eventServer_WhiteboardStartDrawing_Parms, Color), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AWhiteboardController_Server_WhiteboardStartDrawing_Statics::NewProp_Size = { "Size", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WhiteboardController_eventServer_WhiteboardStartDrawing_Parms, Size), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AWhiteboardController_Server_WhiteboardStartDrawing_Statics::NewProp_BrushTextureIndex = { "BrushTextureIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WhiteboardController_eventServer_WhiteboardStartDrawing_Parms, BrushTextureIndex), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AWhiteboardController_Server_WhiteboardStartDrawing_Statics::NewProp_FigureTextureIndex = { "FigureTextureIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WhiteboardController_eventServer_WhiteboardStartDrawing_Parms, FigureTextureIndex), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AWhiteboardController_Server_WhiteboardStartDrawing_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AWhiteboardController_Server_WhiteboardStartDrawing_Statics::NewProp_Whiteboard,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AWhiteboardController_Server_WhiteboardStartDrawing_Statics::NewProp_CanvasPosition,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AWhiteboardController_Server_WhiteboardStartDrawing_Statics::NewProp_Tool_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AWhiteboardController_Server_WhiteboardStartDrawing_Statics::NewProp_Tool,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AWhiteboardController_Server_WhiteboardStartDrawing_Statics::NewProp_Color,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AWhiteboardController_Server_WhiteboardStartDrawing_Statics::NewProp_Size,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AWhiteboardController_Server_WhiteboardStartDrawing_Statics::NewProp_BrushTextureIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AWhiteboardController_Server_WhiteboardStartDrawing_Statics::NewProp_FigureTextureIndex,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AWhiteboardController_Server_WhiteboardStartDrawing_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AWhiteboardController_Server_WhiteboardStartDrawing_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AWhiteboardController, nullptr, "Server_WhiteboardStartDrawing", nullptr, nullptr, Z_Construct_UFunction_AWhiteboardController_Server_WhiteboardStartDrawing_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AWhiteboardController_Server_WhiteboardStartDrawing_Statics::PropPointers), sizeof(WhiteboardController_eventServer_WhiteboardStartDrawing_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00A20CC0, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AWhiteboardController_Server_WhiteboardStartDrawing_Statics::Function_MetaDataParams), Z_Construct_UFunction_AWhiteboardController_Server_WhiteboardStartDrawing_Statics::Function_MetaDataParams) };
static_assert(sizeof(WhiteboardController_eventServer_WhiteboardStartDrawing_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AWhiteboardController_Server_WhiteboardStartDrawing()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AWhiteboardController_Server_WhiteboardStartDrawing_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AWhiteboardController::execServer_WhiteboardStartDrawing)
{
	P_GET_OBJECT(AWhiteboardActor,Z_Param_Whiteboard);
	P_GET_STRUCT(FVector2D,Z_Param_CanvasPosition);
	P_GET_ENUM(EDrawingTool,Z_Param_Tool);
	P_GET_STRUCT(FLinearColor,Z_Param_Color);
	P_GET_PROPERTY(FFloatProperty,Z_Param_Size);
	P_GET_PROPERTY(FIntProperty,Z_Param_BrushTextureIndex);
	P_GET_PROPERTY(FIntProperty,Z_Param_FigureTextureIndex);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Server_WhiteboardStartDrawing_Implementation(Z_Param_Whiteboard,Z_Param_CanvasPosition,EDrawingTool(Z_Param_Tool),Z_Param_Color,Z_Param_Size,Z_Param_BrushTextureIndex,Z_Param_FigureTextureIndex);
	P_NATIVE_END;
}
// End Class AWhiteboardController Function Server_WhiteboardStartDrawing

// Begin Class AWhiteboardController Function Server_WhiteboardUndo
struct WhiteboardController_eventServer_WhiteboardUndo_Parms
{
	AWhiteboardActor* Whiteboard;
};
static const FName NAME_AWhiteboardController_Server_WhiteboardUndo = FName(TEXT("Server_WhiteboardUndo"));
void AWhiteboardController::Server_WhiteboardUndo(AWhiteboardActor* Whiteboard)
{
	WhiteboardController_eventServer_WhiteboardUndo_Parms Parms;
	Parms.Whiteboard=Whiteboard;
	UFunction* Func = FindFunctionChecked(NAME_AWhiteboardController_Server_WhiteboardUndo);
	ProcessEvent(Func,&Parms);
}
struct Z_Construct_UFunction_AWhiteboardController_Server_WhiteboardUndo_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Controller/AWhiteboard_Player_Controller.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Whiteboard;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AWhiteboardController_Server_WhiteboardUndo_Statics::NewProp_Whiteboard = { "Whiteboard", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WhiteboardController_eventServer_WhiteboardUndo_Parms, Whiteboard), Z_Construct_UClass_AWhiteboardActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AWhiteboardController_Server_WhiteboardUndo_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AWhiteboardController_Server_WhiteboardUndo_Statics::NewProp_Whiteboard,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AWhiteboardController_Server_WhiteboardUndo_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AWhiteboardController_Server_WhiteboardUndo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AWhiteboardController, nullptr, "Server_WhiteboardUndo", nullptr, nullptr, Z_Construct_UFunction_AWhiteboardController_Server_WhiteboardUndo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AWhiteboardController_Server_WhiteboardUndo_Statics::PropPointers), sizeof(WhiteboardController_eventServer_WhiteboardUndo_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00220CC0, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AWhiteboardController_Server_WhiteboardUndo_Statics::Function_MetaDataParams), Z_Construct_UFunction_AWhiteboardController_Server_WhiteboardUndo_Statics::Function_MetaDataParams) };
static_assert(sizeof(WhiteboardController_eventServer_WhiteboardUndo_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AWhiteboardController_Server_WhiteboardUndo()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AWhiteboardController_Server_WhiteboardUndo_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AWhiteboardController::execServer_WhiteboardUndo)
{
	P_GET_OBJECT(AWhiteboardActor,Z_Param_Whiteboard);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Server_WhiteboardUndo_Implementation(Z_Param_Whiteboard);
	P_NATIVE_END;
}
// End Class AWhiteboardController Function Server_WhiteboardUndo

// Begin Class AWhiteboardController
void AWhiteboardController::StaticRegisterNativesAWhiteboardController()
{
	UClass* Class = AWhiteboardController::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "Server_EndWhiteboardInteraction", &AWhiteboardController::execServer_EndWhiteboardInteraction },
		{ "Server_RequestWhiteboardInteraction", &AWhiteboardController::execServer_RequestWhiteboardInteraction },
		{ "Server_WhiteboardAddText", &AWhiteboardController::execServer_WhiteboardAddText },
		{ "Server_WhiteboardClearWhiteboard", &AWhiteboardController::execServer_WhiteboardClearWhiteboard },
		{ "Server_WhiteboardContinueDrawing", &AWhiteboardController::execServer_WhiteboardContinueDrawing },
		{ "Server_WhiteboardDrawFigure", &AWhiteboardController::execServer_WhiteboardDrawFigure },
		{ "Server_WhiteboardEndDrawing", &AWhiteboardController::execServer_WhiteboardEndDrawing },
		{ "Server_WhiteboardRedo", &AWhiteboardController::execServer_WhiteboardRedo },
		{ "Server_WhiteboardSetBrushSize", &AWhiteboardController::execServer_WhiteboardSetBrushSize },
		{ "Server_WhiteboardSetBrushTexture", &AWhiteboardController::execServer_WhiteboardSetBrushTexture },
		{ "Server_WhiteboardSetCurrentColor", &AWhiteboardController::execServer_WhiteboardSetCurrentColor },
		{ "Server_WhiteboardSetCurrentTool", &AWhiteboardController::execServer_WhiteboardSetCurrentTool },
		{ "Server_WhiteboardSetFigureTexture", &AWhiteboardController::execServer_WhiteboardSetFigureTexture },
		{ "Server_WhiteboardSetTextString", &AWhiteboardController::execServer_WhiteboardSetTextString },
		{ "Server_WhiteboardStartDrawing", &AWhiteboardController::execServer_WhiteboardStartDrawing },
		{ "Server_WhiteboardUndo", &AWhiteboardController::execServer_WhiteboardUndo },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AWhiteboardController);
UClass* Z_Construct_UClass_AWhiteboardController_NoRegister()
{
	return AWhiteboardController::StaticClass();
}
struct Z_Construct_UClass_AWhiteboardController_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Collision Rendering Transformation" },
		{ "IncludePath", "Controller/AWhiteboard_Player_Controller.h" },
		{ "ModuleRelativePath", "Public/Controller/AWhiteboard_Player_Controller.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_AWhiteboardController_Server_EndWhiteboardInteraction, "Server_EndWhiteboardInteraction" }, // 2050690649
		{ &Z_Construct_UFunction_AWhiteboardController_Server_RequestWhiteboardInteraction, "Server_RequestWhiteboardInteraction" }, // 4047956246
		{ &Z_Construct_UFunction_AWhiteboardController_Server_WhiteboardAddText, "Server_WhiteboardAddText" }, // 3514157277
		{ &Z_Construct_UFunction_AWhiteboardController_Server_WhiteboardClearWhiteboard, "Server_WhiteboardClearWhiteboard" }, // 1287009689
		{ &Z_Construct_UFunction_AWhiteboardController_Server_WhiteboardContinueDrawing, "Server_WhiteboardContinueDrawing" }, // 294684644
		{ &Z_Construct_UFunction_AWhiteboardController_Server_WhiteboardDrawFigure, "Server_WhiteboardDrawFigure" }, // 2712728413
		{ &Z_Construct_UFunction_AWhiteboardController_Server_WhiteboardEndDrawing, "Server_WhiteboardEndDrawing" }, // 3802729888
		{ &Z_Construct_UFunction_AWhiteboardController_Server_WhiteboardRedo, "Server_WhiteboardRedo" }, // 3335305448
		{ &Z_Construct_UFunction_AWhiteboardController_Server_WhiteboardSetBrushSize, "Server_WhiteboardSetBrushSize" }, // 2811655421
		{ &Z_Construct_UFunction_AWhiteboardController_Server_WhiteboardSetBrushTexture, "Server_WhiteboardSetBrushTexture" }, // 3795678749
		{ &Z_Construct_UFunction_AWhiteboardController_Server_WhiteboardSetCurrentColor, "Server_WhiteboardSetCurrentColor" }, // 4103379035
		{ &Z_Construct_UFunction_AWhiteboardController_Server_WhiteboardSetCurrentTool, "Server_WhiteboardSetCurrentTool" }, // 3587687155
		{ &Z_Construct_UFunction_AWhiteboardController_Server_WhiteboardSetFigureTexture, "Server_WhiteboardSetFigureTexture" }, // 2839090299
		{ &Z_Construct_UFunction_AWhiteboardController_Server_WhiteboardSetTextString, "Server_WhiteboardSetTextString" }, // 565031070
		{ &Z_Construct_UFunction_AWhiteboardController_Server_WhiteboardStartDrawing, "Server_WhiteboardStartDrawing" }, // 3937235846
		{ &Z_Construct_UFunction_AWhiteboardController_Server_WhiteboardUndo, "Server_WhiteboardUndo" }, // 691129044
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AWhiteboardController>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_AWhiteboardController_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_APlayerController,
	(UObject* (*)())Z_Construct_UPackage__Script_AdvancedDrawingBoard,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AWhiteboardController_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AWhiteboardController_Statics::ClassParams = {
	&AWhiteboardController::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	0,
	0,
	0x009002A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AWhiteboardController_Statics::Class_MetaDataParams), Z_Construct_UClass_AWhiteboardController_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AWhiteboardController()
{
	if (!Z_Registration_Info_UClass_AWhiteboardController.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AWhiteboardController.OuterSingleton, Z_Construct_UClass_AWhiteboardController_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AWhiteboardController.OuterSingleton;
}
template<> ADVANCEDDRAWINGBOARD_API UClass* StaticClass<AWhiteboardController>()
{
	return AWhiteboardController::StaticClass();
}
AWhiteboardController::AWhiteboardController(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(AWhiteboardController);
AWhiteboardController::~AWhiteboardController() {}
// End Class AWhiteboardController

// Begin Registration
struct Z_CompiledInDeferFile_FID_Advanced_WhiteBoard_Plugins_AdvancedDrawingBoard_Source_AdvancedDrawingBoard_Public_Controller_AWhiteboard_Player_Controller_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AWhiteboardController, AWhiteboardController::StaticClass, TEXT("AWhiteboardController"), &Z_Registration_Info_UClass_AWhiteboardController, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AWhiteboardController), 3436523818U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Advanced_WhiteBoard_Plugins_AdvancedDrawingBoard_Source_AdvancedDrawingBoard_Public_Controller_AWhiteboard_Player_Controller_h_385590001(TEXT("/Script/AdvancedDrawingBoard"),
	Z_CompiledInDeferFile_FID_Advanced_WhiteBoard_Plugins_AdvancedDrawingBoard_Source_AdvancedDrawingBoard_Public_Controller_AWhiteboard_Player_Controller_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Advanced_WhiteBoard_Plugins_AdvancedDrawingBoard_Source_AdvancedDrawingBoard_Public_Controller_AWhiteboard_Player_Controller_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
