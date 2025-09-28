// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Actor/WhiteboardActor.h"
#include "Engine/HitResult.h"
#include "Library/Whiteboard_Types.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeWhiteboardActor() {}

// ********** Begin Cross Module References ********************************************************
ADVANCEDDRAWINGBOARD_API UClass* Z_Construct_UClass_AWhiteboardActor();
ADVANCEDDRAWINGBOARD_API UClass* Z_Construct_UClass_AWhiteboardActor_NoRegister();
ADVANCEDDRAWINGBOARD_API UEnum* Z_Construct_UEnum_AdvancedDrawingBoard_EDrawingTool();
ADVANCEDDRAWINGBOARD_API UScriptStruct* Z_Construct_UScriptStruct_FPlayerDrawingState();
ADVANCEDDRAWINGBOARD_API UScriptStruct* Z_Construct_UScriptStruct_FReplicatedPlayerDrawingState();
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
// ********** End Cross Module References **********************************************************

// ********** Begin Class AWhiteboardActor Function CanAcceptMorePlayers ***************************
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
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AWhiteboardActor_CanAcceptMorePlayers_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AWhiteboardActor, nullptr, "CanAcceptMorePlayers", Z_Construct_UFunction_AWhiteboardActor_CanAcceptMorePlayers_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AWhiteboardActor_CanAcceptMorePlayers_Statics::PropPointers), sizeof(Z_Construct_UFunction_AWhiteboardActor_CanAcceptMorePlayers_Statics::WhiteboardActor_eventCanAcceptMorePlayers_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AWhiteboardActor_CanAcceptMorePlayers_Statics::Function_MetaDataParams), Z_Construct_UFunction_AWhiteboardActor_CanAcceptMorePlayers_Statics::Function_MetaDataParams)},  };
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
// ********** End Class AWhiteboardActor Function CanAcceptMorePlayers *****************************

// ********** Begin Class AWhiteboardActor Function CanClientDraw **********************************
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
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AWhiteboardActor_CanClientDraw_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AWhiteboardActor, nullptr, "CanClientDraw", Z_Construct_UFunction_AWhiteboardActor_CanClientDraw_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AWhiteboardActor_CanClientDraw_Statics::PropPointers), sizeof(Z_Construct_UFunction_AWhiteboardActor_CanClientDraw_Statics::WhiteboardActor_eventCanClientDraw_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AWhiteboardActor_CanClientDraw_Statics::Function_MetaDataParams), Z_Construct_UFunction_AWhiteboardActor_CanClientDraw_Statics::Function_MetaDataParams)},  };
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
// ********** End Class AWhiteboardActor Function CanClientDraw ************************************

// ********** Begin Class AWhiteboardActor Function CanInteractLocally *****************************
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
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AWhiteboardActor_CanInteractLocally_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AWhiteboardActor, nullptr, "CanInteractLocally", Z_Construct_UFunction_AWhiteboardActor_CanInteractLocally_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AWhiteboardActor_CanInteractLocally_Statics::PropPointers), sizeof(Z_Construct_UFunction_AWhiteboardActor_CanInteractLocally_Statics::WhiteboardActor_eventCanInteractLocally_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AWhiteboardActor_CanInteractLocally_Statics::Function_MetaDataParams), Z_Construct_UFunction_AWhiteboardActor_CanInteractLocally_Statics::Function_MetaDataParams)},  };
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
// ********** End Class AWhiteboardActor Function CanInteractLocally *******************************

// ********** Begin Class AWhiteboardActor Function CanPlayerInteract ******************************
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
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AWhiteboardActor_CanPlayerInteract_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AWhiteboardActor, nullptr, "CanPlayerInteract", Z_Construct_UFunction_AWhiteboardActor_CanPlayerInteract_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AWhiteboardActor_CanPlayerInteract_Statics::PropPointers), sizeof(Z_Construct_UFunction_AWhiteboardActor_CanPlayerInteract_Statics::WhiteboardActor_eventCanPlayerInteract_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AWhiteboardActor_CanPlayerInteract_Statics::Function_MetaDataParams), Z_Construct_UFunction_AWhiteboardActor_CanPlayerInteract_Statics::Function_MetaDataParams)},  };
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
// ********** End Class AWhiteboardActor Function CanPlayerInteract ********************************

// ********** Begin Class AWhiteboardActor Function CleanupInteractionUI ***************************
struct Z_Construct_UFunction_AWhiteboardActor_CleanupInteractionUI_Statics
{
	struct WhiteboardActor_eventCleanupInteractionUI_Parms
	{
		APawn* InteractingPlayer;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Actor/WhiteboardActor.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InteractingPlayer;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AWhiteboardActor_CleanupInteractionUI_Statics::NewProp_InteractingPlayer = { "InteractingPlayer", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WhiteboardActor_eventCleanupInteractionUI_Parms, InteractingPlayer), Z_Construct_UClass_APawn_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AWhiteboardActor_CleanupInteractionUI_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AWhiteboardActor_CleanupInteractionUI_Statics::NewProp_InteractingPlayer,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AWhiteboardActor_CleanupInteractionUI_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AWhiteboardActor_CleanupInteractionUI_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AWhiteboardActor, nullptr, "CleanupInteractionUI", Z_Construct_UFunction_AWhiteboardActor_CleanupInteractionUI_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AWhiteboardActor_CleanupInteractionUI_Statics::PropPointers), sizeof(Z_Construct_UFunction_AWhiteboardActor_CleanupInteractionUI_Statics::WhiteboardActor_eventCleanupInteractionUI_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AWhiteboardActor_CleanupInteractionUI_Statics::Function_MetaDataParams), Z_Construct_UFunction_AWhiteboardActor_CleanupInteractionUI_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_AWhiteboardActor_CleanupInteractionUI_Statics::WhiteboardActor_eventCleanupInteractionUI_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AWhiteboardActor_CleanupInteractionUI()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AWhiteboardActor_CleanupInteractionUI_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AWhiteboardActor::execCleanupInteractionUI)
{
	P_GET_OBJECT(APawn,Z_Param_InteractingPlayer);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->CleanupInteractionUI(Z_Param_InteractingPlayer);
	P_NATIVE_END;
}
// ********** End Class AWhiteboardActor Function CleanupInteractionUI *****************************

// ********** Begin Class AWhiteboardActor Function ClearWhiteboard ********************************
struct Z_Construct_UFunction_AWhiteboardActor_ClearWhiteboard_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Whiteboard|Drawing Tools" },
		{ "ModuleRelativePath", "Public/Actor/WhiteboardActor.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AWhiteboardActor_ClearWhiteboard_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AWhiteboardActor, nullptr, "ClearWhiteboard", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AWhiteboardActor_ClearWhiteboard_Statics::Function_MetaDataParams), Z_Construct_UFunction_AWhiteboardActor_ClearWhiteboard_Statics::Function_MetaDataParams)},  };
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
// ********** End Class AWhiteboardActor Function ClearWhiteboard **********************************

// ********** Begin Class AWhiteboardActor Function Client_CleanupInteractionUI ********************
struct WhiteboardActor_eventClient_CleanupInteractionUI_Parms
{
	APawn* InteractingPlayer;
};
static FName NAME_AWhiteboardActor_Client_CleanupInteractionUI = FName(TEXT("Client_CleanupInteractionUI"));
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
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AWhiteboardActor_Client_CleanupInteractionUI_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AWhiteboardActor, nullptr, "Client_CleanupInteractionUI", Z_Construct_UFunction_AWhiteboardActor_Client_CleanupInteractionUI_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AWhiteboardActor_Client_CleanupInteractionUI_Statics::PropPointers), sizeof(WhiteboardActor_eventClient_CleanupInteractionUI_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x01020CC0, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AWhiteboardActor_Client_CleanupInteractionUI_Statics::Function_MetaDataParams), Z_Construct_UFunction_AWhiteboardActor_Client_CleanupInteractionUI_Statics::Function_MetaDataParams)},  };
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
// ********** End Class AWhiteboardActor Function Client_CleanupInteractionUI **********************

// ********** Begin Class AWhiteboardActor Function Client_InitializeCanvases **********************
static FName NAME_AWhiteboardActor_Client_InitializeCanvases = FName(TEXT("Client_InitializeCanvases"));
void AWhiteboardActor::Client_InitializeCanvases()
{
	UFunction* Func = FindFunctionChecked(NAME_AWhiteboardActor_Client_InitializeCanvases);
	ProcessEvent(Func,NULL);
}
struct Z_Construct_UFunction_AWhiteboardActor_Client_InitializeCanvases_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// RPC functions for canvas initialization\n" },
#endif
		{ "ModuleRelativePath", "Public/Actor/WhiteboardActor.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "RPC functions for canvas initialization" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AWhiteboardActor_Client_InitializeCanvases_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AWhiteboardActor, nullptr, "Client_InitializeCanvases", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x01020CC0, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AWhiteboardActor_Client_InitializeCanvases_Statics::Function_MetaDataParams), Z_Construct_UFunction_AWhiteboardActor_Client_InitializeCanvases_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_AWhiteboardActor_Client_InitializeCanvases()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AWhiteboardActor_Client_InitializeCanvases_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AWhiteboardActor::execClient_InitializeCanvases)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Client_InitializeCanvases_Implementation();
	P_NATIVE_END;
}
// ********** End Class AWhiteboardActor Function Client_InitializeCanvases ************************

// ********** Begin Class AWhiteboardActor Function Client_SetupInteractionUI **********************
struct WhiteboardActor_eventClient_SetupInteractionUI_Parms
{
	APawn* InteractingPlayer;
};
static FName NAME_AWhiteboardActor_Client_SetupInteractionUI = FName(TEXT("Client_SetupInteractionUI"));
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
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AWhiteboardActor_Client_SetupInteractionUI_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AWhiteboardActor, nullptr, "Client_SetupInteractionUI", Z_Construct_UFunction_AWhiteboardActor_Client_SetupInteractionUI_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AWhiteboardActor_Client_SetupInteractionUI_Statics::PropPointers), sizeof(WhiteboardActor_eventClient_SetupInteractionUI_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x01020CC0, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AWhiteboardActor_Client_SetupInteractionUI_Statics::Function_MetaDataParams), Z_Construct_UFunction_AWhiteboardActor_Client_SetupInteractionUI_Statics::Function_MetaDataParams)},  };
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
// ********** End Class AWhiteboardActor Function Client_SetupInteractionUI ************************

// ********** Begin Class AWhiteboardActor Function Client_SyncWhiteboardState *********************
struct WhiteboardActor_eventClient_SyncWhiteboardState_Parms
{
	TArray<FStroke> History;
	int32 HistoryIndex;
};
static FName NAME_AWhiteboardActor_Client_SyncWhiteboardState = FName(TEXT("Client_SyncWhiteboardState"));
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
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AWhiteboardActor_Client_SyncWhiteboardState_Statics::NewProp_History_Inner = { "History", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FStroke, METADATA_PARAMS(0, nullptr) }; // 2672491957
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_AWhiteboardActor_Client_SyncWhiteboardState_Statics::NewProp_History = { "History", nullptr, (EPropertyFlags)0x0010000008000082, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WhiteboardActor_eventClient_SyncWhiteboardState_Parms, History), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_History_MetaData), NewProp_History_MetaData) }; // 2672491957
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AWhiteboardActor_Client_SyncWhiteboardState_Statics::NewProp_HistoryIndex = { "HistoryIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WhiteboardActor_eventClient_SyncWhiteboardState_Parms, HistoryIndex), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AWhiteboardActor_Client_SyncWhiteboardState_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AWhiteboardActor_Client_SyncWhiteboardState_Statics::NewProp_History_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AWhiteboardActor_Client_SyncWhiteboardState_Statics::NewProp_History,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AWhiteboardActor_Client_SyncWhiteboardState_Statics::NewProp_HistoryIndex,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AWhiteboardActor_Client_SyncWhiteboardState_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AWhiteboardActor_Client_SyncWhiteboardState_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AWhiteboardActor, nullptr, "Client_SyncWhiteboardState", Z_Construct_UFunction_AWhiteboardActor_Client_SyncWhiteboardState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AWhiteboardActor_Client_SyncWhiteboardState_Statics::PropPointers), sizeof(WhiteboardActor_eventClient_SyncWhiteboardState_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x01020CC0, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AWhiteboardActor_Client_SyncWhiteboardState_Statics::Function_MetaDataParams), Z_Construct_UFunction_AWhiteboardActor_Client_SyncWhiteboardState_Statics::Function_MetaDataParams)},  };
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
// ********** End Class AWhiteboardActor Function Client_SyncWhiteboardState ***********************

// ********** Begin Class AWhiteboardActor Function ClientStartDrawing *****************************
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
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AWhiteboardActor_ClientStartDrawing_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AWhiteboardActor, nullptr, "ClientStartDrawing", Z_Construct_UFunction_AWhiteboardActor_ClientStartDrawing_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AWhiteboardActor_ClientStartDrawing_Statics::PropPointers), sizeof(Z_Construct_UFunction_AWhiteboardActor_ClientStartDrawing_Statics::WhiteboardActor_eventClientStartDrawing_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AWhiteboardActor_ClientStartDrawing_Statics::Function_MetaDataParams), Z_Construct_UFunction_AWhiteboardActor_ClientStartDrawing_Statics::Function_MetaDataParams)},  };
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
// ********** End Class AWhiteboardActor Function ClientStartDrawing *******************************

// ********** Begin Class AWhiteboardActor Function DebugNetworkState ******************************
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
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AWhiteboardActor_DebugNetworkState_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AWhiteboardActor, nullptr, "DebugNetworkState", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AWhiteboardActor_DebugNetworkState_Statics::Function_MetaDataParams), Z_Construct_UFunction_AWhiteboardActor_DebugNetworkState_Statics::Function_MetaDataParams)},  };
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
// ********** End Class AWhiteboardActor Function DebugNetworkState ********************************

// ********** Begin Class AWhiteboardActor Function DebugPlayerToolState ***************************
struct Z_Construct_UFunction_AWhiteboardActor_DebugPlayerToolState_Statics
{
	struct WhiteboardActor_eventDebugPlayerToolState_Parms
	{
		APawn* Player;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Debug" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// DEBUG\n" },
#endif
		{ "ModuleRelativePath", "Public/Actor/WhiteboardActor.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "DEBUG" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Player;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AWhiteboardActor_DebugPlayerToolState_Statics::NewProp_Player = { "Player", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WhiteboardActor_eventDebugPlayerToolState_Parms, Player), Z_Construct_UClass_APawn_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AWhiteboardActor_DebugPlayerToolState_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AWhiteboardActor_DebugPlayerToolState_Statics::NewProp_Player,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AWhiteboardActor_DebugPlayerToolState_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AWhiteboardActor_DebugPlayerToolState_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AWhiteboardActor, nullptr, "DebugPlayerToolState", Z_Construct_UFunction_AWhiteboardActor_DebugPlayerToolState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AWhiteboardActor_DebugPlayerToolState_Statics::PropPointers), sizeof(Z_Construct_UFunction_AWhiteboardActor_DebugPlayerToolState_Statics::WhiteboardActor_eventDebugPlayerToolState_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AWhiteboardActor_DebugPlayerToolState_Statics::Function_MetaDataParams), Z_Construct_UFunction_AWhiteboardActor_DebugPlayerToolState_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_AWhiteboardActor_DebugPlayerToolState_Statics::WhiteboardActor_eventDebugPlayerToolState_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AWhiteboardActor_DebugPlayerToolState()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AWhiteboardActor_DebugPlayerToolState_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AWhiteboardActor::execDebugPlayerToolState)
{
	P_GET_OBJECT(APawn,Z_Param_Player);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->DebugPlayerToolState(Z_Param_Player);
	P_NATIVE_END;
}
// ********** End Class AWhiteboardActor Function DebugPlayerToolState *****************************

// ********** Begin Class AWhiteboardActor Function DrawFigure *************************************
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
#if !UE_BUILD_SHIPPING
		{ "Comment", "//  UFUNCTION(BlueprintCallable, Category = \"Whiteboard\")\n//  void AddText(const FVector2D& CanvasPosition, const FString& Text);\n" },
#endif
		{ "ModuleRelativePath", "Public/Actor/WhiteboardActor.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "UFUNCTION(BlueprintCallable, Category = \"Whiteboard\")\nvoid AddText(const FVector2D& CanvasPosition, const FString& Text);" },
#endif
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
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AWhiteboardActor_DrawFigure_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AWhiteboardActor, nullptr, "DrawFigure", Z_Construct_UFunction_AWhiteboardActor_DrawFigure_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AWhiteboardActor_DrawFigure_Statics::PropPointers), sizeof(Z_Construct_UFunction_AWhiteboardActor_DrawFigure_Statics::WhiteboardActor_eventDrawFigure_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AWhiteboardActor_DrawFigure_Statics::Function_MetaDataParams), Z_Construct_UFunction_AWhiteboardActor_DrawFigure_Statics::Function_MetaDataParams)},  };
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
// ********** End Class AWhiteboardActor Function DrawFigure ***************************************

// ********** Begin Class AWhiteboardActor Function EndInteraction *********************************
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
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AWhiteboardActor_EndInteraction_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AWhiteboardActor, nullptr, "EndInteraction", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AWhiteboardActor_EndInteraction_Statics::Function_MetaDataParams), Z_Construct_UFunction_AWhiteboardActor_EndInteraction_Statics::Function_MetaDataParams)},  };
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
// ********** End Class AWhiteboardActor Function EndInteraction ***********************************

// ********** Begin Class AWhiteboardActor Function EndInteractionForPlayer ************************
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
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AWhiteboardActor_EndInteractionForPlayer_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AWhiteboardActor, nullptr, "EndInteractionForPlayer", Z_Construct_UFunction_AWhiteboardActor_EndInteractionForPlayer_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AWhiteboardActor_EndInteractionForPlayer_Statics::PropPointers), sizeof(Z_Construct_UFunction_AWhiteboardActor_EndInteractionForPlayer_Statics::WhiteboardActor_eventEndInteractionForPlayer_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AWhiteboardActor_EndInteractionForPlayer_Statics::Function_MetaDataParams), Z_Construct_UFunction_AWhiteboardActor_EndInteractionForPlayer_Statics::Function_MetaDataParams)},  };
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
// ********** End Class AWhiteboardActor Function EndInteractionForPlayer **************************

// ********** Begin Class AWhiteboardActor Function ExportToPNG ************************************
struct Z_Construct_UFunction_AWhiteboardActor_ExportToPNG_Statics
{
	struct WhiteboardActor_eventExportToPNG_Parms
	{
		FString FilePath;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Whiteboard|Drawing Tools" },
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
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AWhiteboardActor_ExportToPNG_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AWhiteboardActor, nullptr, "ExportToPNG", Z_Construct_UFunction_AWhiteboardActor_ExportToPNG_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AWhiteboardActor_ExportToPNG_Statics::PropPointers), sizeof(Z_Construct_UFunction_AWhiteboardActor_ExportToPNG_Statics::WhiteboardActor_eventExportToPNG_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AWhiteboardActor_ExportToPNG_Statics::Function_MetaDataParams), Z_Construct_UFunction_AWhiteboardActor_ExportToPNG_Statics::Function_MetaDataParams)},  };
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
// ********** End Class AWhiteboardActor Function ExportToPNG **************************************

// ********** Begin Class AWhiteboardActor Function ExportToSVG ************************************
struct Z_Construct_UFunction_AWhiteboardActor_ExportToSVG_Statics
{
	struct WhiteboardActor_eventExportToSVG_Parms
	{
		FString FilePath;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Whiteboard|Drawing Tools" },
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
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AWhiteboardActor_ExportToSVG_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AWhiteboardActor, nullptr, "ExportToSVG", Z_Construct_UFunction_AWhiteboardActor_ExportToSVG_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AWhiteboardActor_ExportToSVG_Statics::PropPointers), sizeof(Z_Construct_UFunction_AWhiteboardActor_ExportToSVG_Statics::WhiteboardActor_eventExportToSVG_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AWhiteboardActor_ExportToSVG_Statics::Function_MetaDataParams), Z_Construct_UFunction_AWhiteboardActor_ExportToSVG_Statics::Function_MetaDataParams)},  };
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
// ********** End Class AWhiteboardActor Function ExportToSVG **************************************

// ********** Begin Class AWhiteboardActor Function GetBrushSize ***********************************
struct Z_Construct_UFunction_AWhiteboardActor_GetBrushSize_Statics
{
	struct WhiteboardActor_eventGetBrushSize_Parms
	{
		APawn* Player;
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Whiteboard|Drawing Tools" },
		{ "ModuleRelativePath", "Public/Actor/WhiteboardActor.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Player;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AWhiteboardActor_GetBrushSize_Statics::NewProp_Player = { "Player", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WhiteboardActor_eventGetBrushSize_Parms, Player), Z_Construct_UClass_APawn_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AWhiteboardActor_GetBrushSize_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WhiteboardActor_eventGetBrushSize_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AWhiteboardActor_GetBrushSize_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AWhiteboardActor_GetBrushSize_Statics::NewProp_Player,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AWhiteboardActor_GetBrushSize_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AWhiteboardActor_GetBrushSize_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AWhiteboardActor_GetBrushSize_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AWhiteboardActor, nullptr, "GetBrushSize", Z_Construct_UFunction_AWhiteboardActor_GetBrushSize_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AWhiteboardActor_GetBrushSize_Statics::PropPointers), sizeof(Z_Construct_UFunction_AWhiteboardActor_GetBrushSize_Statics::WhiteboardActor_eventGetBrushSize_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AWhiteboardActor_GetBrushSize_Statics::Function_MetaDataParams), Z_Construct_UFunction_AWhiteboardActor_GetBrushSize_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_AWhiteboardActor_GetBrushSize_Statics::WhiteboardActor_eventGetBrushSize_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AWhiteboardActor_GetBrushSize()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AWhiteboardActor_GetBrushSize_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AWhiteboardActor::execGetBrushSize)
{
	P_GET_OBJECT(APawn,Z_Param_Player);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->GetBrushSize(Z_Param_Player);
	P_NATIVE_END;
}
// ********** End Class AWhiteboardActor Function GetBrushSize *************************************

// ********** Begin Class AWhiteboardActor Function GetCanvasHeight ********************************
struct Z_Construct_UFunction_AWhiteboardActor_GetCanvasHeight_Statics
{
	struct WhiteboardActor_eventGetCanvasHeight_Parms
	{
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Whiteboard|Properties" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Get Canvas Height\n" },
#endif
		{ "ModuleRelativePath", "Public/Actor/WhiteboardActor.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Get Canvas Height" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AWhiteboardActor_GetCanvasHeight_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WhiteboardActor_eventGetCanvasHeight_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AWhiteboardActor_GetCanvasHeight_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AWhiteboardActor_GetCanvasHeight_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AWhiteboardActor_GetCanvasHeight_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AWhiteboardActor_GetCanvasHeight_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AWhiteboardActor, nullptr, "GetCanvasHeight", Z_Construct_UFunction_AWhiteboardActor_GetCanvasHeight_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AWhiteboardActor_GetCanvasHeight_Statics::PropPointers), sizeof(Z_Construct_UFunction_AWhiteboardActor_GetCanvasHeight_Statics::WhiteboardActor_eventGetCanvasHeight_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AWhiteboardActor_GetCanvasHeight_Statics::Function_MetaDataParams), Z_Construct_UFunction_AWhiteboardActor_GetCanvasHeight_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_AWhiteboardActor_GetCanvasHeight_Statics::WhiteboardActor_eventGetCanvasHeight_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AWhiteboardActor_GetCanvasHeight()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AWhiteboardActor_GetCanvasHeight_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AWhiteboardActor::execGetCanvasHeight)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->GetCanvasHeight();
	P_NATIVE_END;
}
// ********** End Class AWhiteboardActor Function GetCanvasHeight **********************************

// ********** Begin Class AWhiteboardActor Function GetCanvasWidth *********************************
struct Z_Construct_UFunction_AWhiteboardActor_GetCanvasWidth_Statics
{
	struct WhiteboardActor_eventGetCanvasWidth_Parms
	{
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Whiteboard|Properties" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Get Canvas Width\n" },
#endif
		{ "ModuleRelativePath", "Public/Actor/WhiteboardActor.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Get Canvas Width" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AWhiteboardActor_GetCanvasWidth_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WhiteboardActor_eventGetCanvasWidth_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AWhiteboardActor_GetCanvasWidth_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AWhiteboardActor_GetCanvasWidth_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AWhiteboardActor_GetCanvasWidth_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AWhiteboardActor_GetCanvasWidth_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AWhiteboardActor, nullptr, "GetCanvasWidth", Z_Construct_UFunction_AWhiteboardActor_GetCanvasWidth_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AWhiteboardActor_GetCanvasWidth_Statics::PropPointers), sizeof(Z_Construct_UFunction_AWhiteboardActor_GetCanvasWidth_Statics::WhiteboardActor_eventGetCanvasWidth_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AWhiteboardActor_GetCanvasWidth_Statics::Function_MetaDataParams), Z_Construct_UFunction_AWhiteboardActor_GetCanvasWidth_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_AWhiteboardActor_GetCanvasWidth_Statics::WhiteboardActor_eventGetCanvasWidth_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AWhiteboardActor_GetCanvasWidth()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AWhiteboardActor_GetCanvasWidth_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AWhiteboardActor::execGetCanvasWidth)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->GetCanvasWidth();
	P_NATIVE_END;
}
// ********** End Class AWhiteboardActor Function GetCanvasWidth ***********************************

// ********** Begin Class AWhiteboardActor Function GetCurrentColor ********************************
struct Z_Construct_UFunction_AWhiteboardActor_GetCurrentColor_Statics
{
	struct WhiteboardActor_eventGetCurrentColor_Parms
	{
		APawn* Player;
		FLinearColor ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Whiteboard|Drawing Tools" },
		{ "ModuleRelativePath", "Public/Actor/WhiteboardActor.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Player;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AWhiteboardActor_GetCurrentColor_Statics::NewProp_Player = { "Player", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WhiteboardActor_eventGetCurrentColor_Parms, Player), Z_Construct_UClass_APawn_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AWhiteboardActor_GetCurrentColor_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WhiteboardActor_eventGetCurrentColor_Parms, ReturnValue), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AWhiteboardActor_GetCurrentColor_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AWhiteboardActor_GetCurrentColor_Statics::NewProp_Player,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AWhiteboardActor_GetCurrentColor_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AWhiteboardActor_GetCurrentColor_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AWhiteboardActor_GetCurrentColor_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AWhiteboardActor, nullptr, "GetCurrentColor", Z_Construct_UFunction_AWhiteboardActor_GetCurrentColor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AWhiteboardActor_GetCurrentColor_Statics::PropPointers), sizeof(Z_Construct_UFunction_AWhiteboardActor_GetCurrentColor_Statics::WhiteboardActor_eventGetCurrentColor_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54820401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AWhiteboardActor_GetCurrentColor_Statics::Function_MetaDataParams), Z_Construct_UFunction_AWhiteboardActor_GetCurrentColor_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_AWhiteboardActor_GetCurrentColor_Statics::WhiteboardActor_eventGetCurrentColor_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AWhiteboardActor_GetCurrentColor()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AWhiteboardActor_GetCurrentColor_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AWhiteboardActor::execGetCurrentColor)
{
	P_GET_OBJECT(APawn,Z_Param_Player);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FLinearColor*)Z_Param__Result=P_THIS->GetCurrentColor(Z_Param_Player);
	P_NATIVE_END;
}
// ********** End Class AWhiteboardActor Function GetCurrentColor **********************************

// ********** Begin Class AWhiteboardActor Function GetCurrentTextString ***************************
struct Z_Construct_UFunction_AWhiteboardActor_GetCurrentTextString_Statics
{
	struct WhiteboardActor_eventGetCurrentTextString_Parms
	{
		APawn* Player;
		FString ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Whiteboard|Drawing Tools" },
		{ "ModuleRelativePath", "Public/Actor/WhiteboardActor.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Player;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AWhiteboardActor_GetCurrentTextString_Statics::NewProp_Player = { "Player", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WhiteboardActor_eventGetCurrentTextString_Parms, Player), Z_Construct_UClass_APawn_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AWhiteboardActor_GetCurrentTextString_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WhiteboardActor_eventGetCurrentTextString_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AWhiteboardActor_GetCurrentTextString_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AWhiteboardActor_GetCurrentTextString_Statics::NewProp_Player,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AWhiteboardActor_GetCurrentTextString_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AWhiteboardActor_GetCurrentTextString_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AWhiteboardActor_GetCurrentTextString_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AWhiteboardActor, nullptr, "GetCurrentTextString", Z_Construct_UFunction_AWhiteboardActor_GetCurrentTextString_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AWhiteboardActor_GetCurrentTextString_Statics::PropPointers), sizeof(Z_Construct_UFunction_AWhiteboardActor_GetCurrentTextString_Statics::WhiteboardActor_eventGetCurrentTextString_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AWhiteboardActor_GetCurrentTextString_Statics::Function_MetaDataParams), Z_Construct_UFunction_AWhiteboardActor_GetCurrentTextString_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_AWhiteboardActor_GetCurrentTextString_Statics::WhiteboardActor_eventGetCurrentTextString_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AWhiteboardActor_GetCurrentTextString()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AWhiteboardActor_GetCurrentTextString_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AWhiteboardActor::execGetCurrentTextString)
{
	P_GET_OBJECT(APawn,Z_Param_Player);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FString*)Z_Param__Result=P_THIS->GetCurrentTextString(Z_Param_Player);
	P_NATIVE_END;
}
// ********** End Class AWhiteboardActor Function GetCurrentTextString *****************************

// ********** Begin Class AWhiteboardActor Function GetCurrentTool *********************************
struct Z_Construct_UFunction_AWhiteboardActor_GetCurrentTool_Statics
{
	struct WhiteboardActor_eventGetCurrentTool_Parms
	{
		EDrawingTool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Whiteboard|Drawing Tools" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Update tool getters to be player-specific\n" },
#endif
		{ "ModuleRelativePath", "Public/Actor/WhiteboardActor.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Update tool getters to be player-specific" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AWhiteboardActor_GetCurrentTool_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_AWhiteboardActor_GetCurrentTool_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WhiteboardActor_eventGetCurrentTool_Parms, ReturnValue), Z_Construct_UEnum_AdvancedDrawingBoard_EDrawingTool, METADATA_PARAMS(0, nullptr) }; // 3146191471
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AWhiteboardActor_GetCurrentTool_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AWhiteboardActor_GetCurrentTool_Statics::NewProp_ReturnValue_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AWhiteboardActor_GetCurrentTool_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AWhiteboardActor_GetCurrentTool_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AWhiteboardActor_GetCurrentTool_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AWhiteboardActor, nullptr, "GetCurrentTool", Z_Construct_UFunction_AWhiteboardActor_GetCurrentTool_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AWhiteboardActor_GetCurrentTool_Statics::PropPointers), sizeof(Z_Construct_UFunction_AWhiteboardActor_GetCurrentTool_Statics::WhiteboardActor_eventGetCurrentTool_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AWhiteboardActor_GetCurrentTool_Statics::Function_MetaDataParams), Z_Construct_UFunction_AWhiteboardActor_GetCurrentTool_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_AWhiteboardActor_GetCurrentTool_Statics::WhiteboardActor_eventGetCurrentTool_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AWhiteboardActor_GetCurrentTool()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AWhiteboardActor_GetCurrentTool_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AWhiteboardActor::execGetCurrentTool)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(EDrawingTool*)Z_Param__Result=P_THIS->GetCurrentTool();
	P_NATIVE_END;
}
// ********** End Class AWhiteboardActor Function GetCurrentTool ***********************************

// ********** Begin Class AWhiteboardActor Function GetInteractingPlayerCount **********************
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
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AWhiteboardActor_GetInteractingPlayerCount_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AWhiteboardActor, nullptr, "GetInteractingPlayerCount", Z_Construct_UFunction_AWhiteboardActor_GetInteractingPlayerCount_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AWhiteboardActor_GetInteractingPlayerCount_Statics::PropPointers), sizeof(Z_Construct_UFunction_AWhiteboardActor_GetInteractingPlayerCount_Statics::WhiteboardActor_eventGetInteractingPlayerCount_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AWhiteboardActor_GetInteractingPlayerCount_Statics::Function_MetaDataParams), Z_Construct_UFunction_AWhiteboardActor_GetInteractingPlayerCount_Statics::Function_MetaDataParams)},  };
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
// ********** End Class AWhiteboardActor Function GetInteractingPlayerCount ************************

// ********** Begin Class AWhiteboardActor Function GetPlayerDrawingState **************************
struct Z_Construct_UFunction_AWhiteboardActor_GetPlayerDrawingState_Statics
{
	struct WhiteboardActor_eventGetPlayerDrawingState_Parms
	{
		APawn* Player;
		FPlayerDrawingState ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Whiteboard|Drawing Tools" },
		{ "ModuleRelativePath", "Public/Actor/WhiteboardActor.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Player;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AWhiteboardActor_GetPlayerDrawingState_Statics::NewProp_Player = { "Player", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WhiteboardActor_eventGetPlayerDrawingState_Parms, Player), Z_Construct_UClass_APawn_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AWhiteboardActor_GetPlayerDrawingState_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WhiteboardActor_eventGetPlayerDrawingState_Parms, ReturnValue), Z_Construct_UScriptStruct_FPlayerDrawingState, METADATA_PARAMS(0, nullptr) }; // 2209676374
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AWhiteboardActor_GetPlayerDrawingState_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AWhiteboardActor_GetPlayerDrawingState_Statics::NewProp_Player,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AWhiteboardActor_GetPlayerDrawingState_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AWhiteboardActor_GetPlayerDrawingState_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AWhiteboardActor_GetPlayerDrawingState_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AWhiteboardActor, nullptr, "GetPlayerDrawingState", Z_Construct_UFunction_AWhiteboardActor_GetPlayerDrawingState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AWhiteboardActor_GetPlayerDrawingState_Statics::PropPointers), sizeof(Z_Construct_UFunction_AWhiteboardActor_GetPlayerDrawingState_Statics::WhiteboardActor_eventGetPlayerDrawingState_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AWhiteboardActor_GetPlayerDrawingState_Statics::Function_MetaDataParams), Z_Construct_UFunction_AWhiteboardActor_GetPlayerDrawingState_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_AWhiteboardActor_GetPlayerDrawingState_Statics::WhiteboardActor_eventGetPlayerDrawingState_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AWhiteboardActor_GetPlayerDrawingState()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AWhiteboardActor_GetPlayerDrawingState_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AWhiteboardActor::execGetPlayerDrawingState)
{
	P_GET_OBJECT(APawn,Z_Param_Player);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FPlayerDrawingState*)Z_Param__Result=P_THIS->GetPlayerDrawingState(Z_Param_Player);
	P_NATIVE_END;
}
// ********** End Class AWhiteboardActor Function GetPlayerDrawingState ****************************

// ********** Begin Class AWhiteboardActor Function GetSelectedBrushTextureIndex *******************
struct Z_Construct_UFunction_AWhiteboardActor_GetSelectedBrushTextureIndex_Statics
{
	struct WhiteboardActor_eventGetSelectedBrushTextureIndex_Parms
	{
		APawn* Player;
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Whiteboard|Drawing Tools" },
		{ "ModuleRelativePath", "Public/Actor/WhiteboardActor.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Player;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AWhiteboardActor_GetSelectedBrushTextureIndex_Statics::NewProp_Player = { "Player", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WhiteboardActor_eventGetSelectedBrushTextureIndex_Parms, Player), Z_Construct_UClass_APawn_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AWhiteboardActor_GetSelectedBrushTextureIndex_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WhiteboardActor_eventGetSelectedBrushTextureIndex_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AWhiteboardActor_GetSelectedBrushTextureIndex_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AWhiteboardActor_GetSelectedBrushTextureIndex_Statics::NewProp_Player,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AWhiteboardActor_GetSelectedBrushTextureIndex_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AWhiteboardActor_GetSelectedBrushTextureIndex_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AWhiteboardActor_GetSelectedBrushTextureIndex_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AWhiteboardActor, nullptr, "GetSelectedBrushTextureIndex", Z_Construct_UFunction_AWhiteboardActor_GetSelectedBrushTextureIndex_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AWhiteboardActor_GetSelectedBrushTextureIndex_Statics::PropPointers), sizeof(Z_Construct_UFunction_AWhiteboardActor_GetSelectedBrushTextureIndex_Statics::WhiteboardActor_eventGetSelectedBrushTextureIndex_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AWhiteboardActor_GetSelectedBrushTextureIndex_Statics::Function_MetaDataParams), Z_Construct_UFunction_AWhiteboardActor_GetSelectedBrushTextureIndex_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_AWhiteboardActor_GetSelectedBrushTextureIndex_Statics::WhiteboardActor_eventGetSelectedBrushTextureIndex_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AWhiteboardActor_GetSelectedBrushTextureIndex()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AWhiteboardActor_GetSelectedBrushTextureIndex_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AWhiteboardActor::execGetSelectedBrushTextureIndex)
{
	P_GET_OBJECT(APawn,Z_Param_Player);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->GetSelectedBrushTextureIndex(Z_Param_Player);
	P_NATIVE_END;
}
// ********** End Class AWhiteboardActor Function GetSelectedBrushTextureIndex *********************

// ********** Begin Class AWhiteboardActor Function GetSelectedFigureTextureIndex ******************
struct Z_Construct_UFunction_AWhiteboardActor_GetSelectedFigureTextureIndex_Statics
{
	struct WhiteboardActor_eventGetSelectedFigureTextureIndex_Parms
	{
		APawn* Player;
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Whiteboard|Drawing Tools" },
		{ "ModuleRelativePath", "Public/Actor/WhiteboardActor.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Player;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AWhiteboardActor_GetSelectedFigureTextureIndex_Statics::NewProp_Player = { "Player", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WhiteboardActor_eventGetSelectedFigureTextureIndex_Parms, Player), Z_Construct_UClass_APawn_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AWhiteboardActor_GetSelectedFigureTextureIndex_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WhiteboardActor_eventGetSelectedFigureTextureIndex_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AWhiteboardActor_GetSelectedFigureTextureIndex_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AWhiteboardActor_GetSelectedFigureTextureIndex_Statics::NewProp_Player,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AWhiteboardActor_GetSelectedFigureTextureIndex_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AWhiteboardActor_GetSelectedFigureTextureIndex_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AWhiteboardActor_GetSelectedFigureTextureIndex_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AWhiteboardActor, nullptr, "GetSelectedFigureTextureIndex", Z_Construct_UFunction_AWhiteboardActor_GetSelectedFigureTextureIndex_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AWhiteboardActor_GetSelectedFigureTextureIndex_Statics::PropPointers), sizeof(Z_Construct_UFunction_AWhiteboardActor_GetSelectedFigureTextureIndex_Statics::WhiteboardActor_eventGetSelectedFigureTextureIndex_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AWhiteboardActor_GetSelectedFigureTextureIndex_Statics::Function_MetaDataParams), Z_Construct_UFunction_AWhiteboardActor_GetSelectedFigureTextureIndex_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_AWhiteboardActor_GetSelectedFigureTextureIndex_Statics::WhiteboardActor_eventGetSelectedFigureTextureIndex_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AWhiteboardActor_GetSelectedFigureTextureIndex()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AWhiteboardActor_GetSelectedFigureTextureIndex_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AWhiteboardActor::execGetSelectedFigureTextureIndex)
{
	P_GET_OBJECT(APawn,Z_Param_Player);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->GetSelectedFigureTextureIndex(Z_Param_Player);
	P_NATIVE_END;
}
// ********** End Class AWhiteboardActor Function GetSelectedFigureTextureIndex ********************

// ********** Begin Class AWhiteboardActor Function GetWhiteboardCamera ****************************
struct Z_Construct_UFunction_AWhiteboardActor_GetWhiteboardCamera_Statics
{
	struct WhiteboardActor_eventGetWhiteboardCamera_Parms
	{
		UCameraComponent* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Whiteboard" },
		{ "ModuleRelativePath", "Public/Actor/WhiteboardActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AWhiteboardActor_GetWhiteboardCamera_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WhiteboardActor_eventGetWhiteboardCamera_Parms, ReturnValue), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AWhiteboardActor_GetWhiteboardCamera_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AWhiteboardActor_GetWhiteboardCamera_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AWhiteboardActor_GetWhiteboardCamera_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AWhiteboardActor_GetWhiteboardCamera_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AWhiteboardActor, nullptr, "GetWhiteboardCamera", Z_Construct_UFunction_AWhiteboardActor_GetWhiteboardCamera_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AWhiteboardActor_GetWhiteboardCamera_Statics::PropPointers), sizeof(Z_Construct_UFunction_AWhiteboardActor_GetWhiteboardCamera_Statics::WhiteboardActor_eventGetWhiteboardCamera_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AWhiteboardActor_GetWhiteboardCamera_Statics::Function_MetaDataParams), Z_Construct_UFunction_AWhiteboardActor_GetWhiteboardCamera_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_AWhiteboardActor_GetWhiteboardCamera_Statics::WhiteboardActor_eventGetWhiteboardCamera_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AWhiteboardActor_GetWhiteboardCamera()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AWhiteboardActor_GetWhiteboardCamera_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AWhiteboardActor::execGetWhiteboardCamera)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UCameraComponent**)Z_Param__Result=P_THIS->GetWhiteboardCamera();
	P_NATIVE_END;
}
// ********** End Class AWhiteboardActor Function GetWhiteboardCamera ******************************

// ********** Begin Class AWhiteboardActor Function GetWhiteboardMesh ******************************
struct Z_Construct_UFunction_AWhiteboardActor_GetWhiteboardMesh_Statics
{
	struct WhiteboardActor_eventGetWhiteboardMesh_Parms
	{
		UStaticMeshComponent* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Whiteboard|Properties" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "///////////////////////////// WHITEBOARD UTILITIES////////////////////\n// Get Whiteboard Mesh\n" },
#endif
		{ "ModuleRelativePath", "Public/Actor/WhiteboardActor.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "WHITEBOARD UTILITIES\nGet Whiteboard Mesh" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AWhiteboardActor_GetWhiteboardMesh_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WhiteboardActor_eventGetWhiteboardMesh_Parms, ReturnValue), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AWhiteboardActor_GetWhiteboardMesh_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AWhiteboardActor_GetWhiteboardMesh_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AWhiteboardActor_GetWhiteboardMesh_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AWhiteboardActor_GetWhiteboardMesh_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AWhiteboardActor, nullptr, "GetWhiteboardMesh", Z_Construct_UFunction_AWhiteboardActor_GetWhiteboardMesh_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AWhiteboardActor_GetWhiteboardMesh_Statics::PropPointers), sizeof(Z_Construct_UFunction_AWhiteboardActor_GetWhiteboardMesh_Statics::WhiteboardActor_eventGetWhiteboardMesh_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AWhiteboardActor_GetWhiteboardMesh_Statics::Function_MetaDataParams), Z_Construct_UFunction_AWhiteboardActor_GetWhiteboardMesh_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_AWhiteboardActor_GetWhiteboardMesh_Statics::WhiteboardActor_eventGetWhiteboardMesh_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AWhiteboardActor_GetWhiteboardMesh()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AWhiteboardActor_GetWhiteboardMesh_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AWhiteboardActor::execGetWhiteboardMesh)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UStaticMeshComponent**)Z_Param__Result=P_THIS->GetWhiteboardMesh();
	P_NATIVE_END;
}
// ********** End Class AWhiteboardActor Function GetWhiteboardMesh ********************************

// ********** Begin Class AWhiteboardActor Function InitializeWhiteboard ***************************
struct Z_Construct_UFunction_AWhiteboardActor_InitializeWhiteboard_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Whiteboard" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Initialize function\n" },
#endif
		{ "ModuleRelativePath", "Public/Actor/WhiteboardActor.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Initialize function" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AWhiteboardActor_InitializeWhiteboard_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AWhiteboardActor, nullptr, "InitializeWhiteboard", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AWhiteboardActor_InitializeWhiteboard_Statics::Function_MetaDataParams), Z_Construct_UFunction_AWhiteboardActor_InitializeWhiteboard_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_AWhiteboardActor_InitializeWhiteboard()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AWhiteboardActor_InitializeWhiteboard_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AWhiteboardActor::execInitializeWhiteboard)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->InitializeWhiteboard();
	P_NATIVE_END;
}
// ********** End Class AWhiteboardActor Function InitializeWhiteboard *****************************

// ********** Begin Class AWhiteboardActor Function IsPlayerInRange ********************************
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
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AWhiteboardActor_IsPlayerInRange_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AWhiteboardActor, nullptr, "IsPlayerInRange", Z_Construct_UFunction_AWhiteboardActor_IsPlayerInRange_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AWhiteboardActor_IsPlayerInRange_Statics::PropPointers), sizeof(Z_Construct_UFunction_AWhiteboardActor_IsPlayerInRange_Statics::WhiteboardActor_eventIsPlayerInRange_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AWhiteboardActor_IsPlayerInRange_Statics::Function_MetaDataParams), Z_Construct_UFunction_AWhiteboardActor_IsPlayerInRange_Statics::Function_MetaDataParams)},  };
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
// ********** End Class AWhiteboardActor Function IsPlayerInRange **********************************

// ********** Begin Class AWhiteboardActor Function IsPlayerInteracting ****************************
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
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AWhiteboardActor_IsPlayerInteracting_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AWhiteboardActor, nullptr, "IsPlayerInteracting", Z_Construct_UFunction_AWhiteboardActor_IsPlayerInteracting_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AWhiteboardActor_IsPlayerInteracting_Statics::PropPointers), sizeof(Z_Construct_UFunction_AWhiteboardActor_IsPlayerInteracting_Statics::WhiteboardActor_eventIsPlayerInteracting_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AWhiteboardActor_IsPlayerInteracting_Statics::Function_MetaDataParams), Z_Construct_UFunction_AWhiteboardActor_IsPlayerInteracting_Statics::Function_MetaDataParams)},  };
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
// ********** End Class AWhiteboardActor Function IsPlayerInteracting ******************************

// ********** Begin Class AWhiteboardActor Function IsShapeTool ************************************
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
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_AWhiteboardActor_IsShapeTool_Statics::NewProp_Tool = { "Tool", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WhiteboardActor_eventIsShapeTool_Parms, Tool), Z_Construct_UEnum_AdvancedDrawingBoard_EDrawingTool, METADATA_PARAMS(0, nullptr) }; // 3146191471
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
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AWhiteboardActor_IsShapeTool_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AWhiteboardActor, nullptr, "IsShapeTool", Z_Construct_UFunction_AWhiteboardActor_IsShapeTool_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AWhiteboardActor_IsShapeTool_Statics::PropPointers), sizeof(Z_Construct_UFunction_AWhiteboardActor_IsShapeTool_Statics::WhiteboardActor_eventIsShapeTool_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AWhiteboardActor_IsShapeTool_Statics::Function_MetaDataParams), Z_Construct_UFunction_AWhiteboardActor_IsShapeTool_Statics::Function_MetaDataParams)},  };
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
	*(bool*)Z_Param__Result=AWhiteboardActor::IsShapeTool(EDrawingTool(Z_Param_Tool));
	P_NATIVE_END;
}
// ********** End Class AWhiteboardActor Function IsShapeTool **************************************

// ********** Begin Class AWhiteboardActor Function Multicast_ClearWhiteboard **********************
static FName NAME_AWhiteboardActor_Multicast_ClearWhiteboard = FName(TEXT("Multicast_ClearWhiteboard"));
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
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AWhiteboardActor_Multicast_ClearWhiteboard_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AWhiteboardActor, nullptr, "Multicast_ClearWhiteboard", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00024CC0, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AWhiteboardActor_Multicast_ClearWhiteboard_Statics::Function_MetaDataParams), Z_Construct_UFunction_AWhiteboardActor_Multicast_ClearWhiteboard_Statics::Function_MetaDataParams)},  };
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
// ********** End Class AWhiteboardActor Function Multicast_ClearWhiteboard ************************

// ********** Begin Class AWhiteboardActor Function Multicast_DrawStroke ***************************
struct WhiteboardActor_eventMulticast_DrawStroke_Parms
{
	FStroke Stroke;
};
static FName NAME_AWhiteboardActor_Multicast_DrawStroke = FName(TEXT("Multicast_DrawStroke"));
void AWhiteboardActor::Multicast_DrawStroke(FStroke const& Stroke)
{
	WhiteboardActor_eventMulticast_DrawStroke_Parms Parms;
	Parms.Stroke=Stroke;
	UFunction* Func = FindFunctionChecked(NAME_AWhiteboardActor_Multicast_DrawStroke);
	ProcessEvent(Func,&Parms);
}
struct Z_Construct_UFunction_AWhiteboardActor_Multicast_DrawStroke_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Actor/WhiteboardActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Stroke_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Stroke;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AWhiteboardActor_Multicast_DrawStroke_Statics::NewProp_Stroke = { "Stroke", nullptr, (EPropertyFlags)0x0010000008000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WhiteboardActor_eventMulticast_DrawStroke_Parms, Stroke), Z_Construct_UScriptStruct_FStroke, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Stroke_MetaData), NewProp_Stroke_MetaData) }; // 2672491957
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AWhiteboardActor_Multicast_DrawStroke_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AWhiteboardActor_Multicast_DrawStroke_Statics::NewProp_Stroke,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AWhiteboardActor_Multicast_DrawStroke_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AWhiteboardActor_Multicast_DrawStroke_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AWhiteboardActor, nullptr, "Multicast_DrawStroke", Z_Construct_UFunction_AWhiteboardActor_Multicast_DrawStroke_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AWhiteboardActor_Multicast_DrawStroke_Statics::PropPointers), sizeof(WhiteboardActor_eventMulticast_DrawStroke_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00084CC0, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AWhiteboardActor_Multicast_DrawStroke_Statics::Function_MetaDataParams), Z_Construct_UFunction_AWhiteboardActor_Multicast_DrawStroke_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(WhiteboardActor_eventMulticast_DrawStroke_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AWhiteboardActor_Multicast_DrawStroke()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AWhiteboardActor_Multicast_DrawStroke_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AWhiteboardActor::execMulticast_DrawStroke)
{
	P_GET_STRUCT(FStroke,Z_Param_Stroke);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Multicast_DrawStroke_Implementation(Z_Param_Stroke);
	P_NATIVE_END;
}
// ********** End Class AWhiteboardActor Function Multicast_DrawStroke *****************************

// ********** Begin Class AWhiteboardActor Function Multicast_EndDrawing ***************************
struct WhiteboardActor_eventMulticast_EndDrawing_Parms
{
	APawn* DrawingPlayer;
	FStroke CompletedStroke;
};
static FName NAME_AWhiteboardActor_Multicast_EndDrawing = FName(TEXT("Multicast_EndDrawing"));
void AWhiteboardActor::Multicast_EndDrawing(APawn* DrawingPlayer, FStroke const& CompletedStroke)
{
	WhiteboardActor_eventMulticast_EndDrawing_Parms Parms;
	Parms.DrawingPlayer=DrawingPlayer;
	Parms.CompletedStroke=CompletedStroke;
	UFunction* Func = FindFunctionChecked(NAME_AWhiteboardActor_Multicast_EndDrawing);
	ProcessEvent(Func,&Parms);
}
struct Z_Construct_UFunction_AWhiteboardActor_Multicast_EndDrawing_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Actor/WhiteboardActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CompletedStroke_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DrawingPlayer;
	static const UECodeGen_Private::FStructPropertyParams NewProp_CompletedStroke;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AWhiteboardActor_Multicast_EndDrawing_Statics::NewProp_DrawingPlayer = { "DrawingPlayer", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WhiteboardActor_eventMulticast_EndDrawing_Parms, DrawingPlayer), Z_Construct_UClass_APawn_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AWhiteboardActor_Multicast_EndDrawing_Statics::NewProp_CompletedStroke = { "CompletedStroke", nullptr, (EPropertyFlags)0x0010000008000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WhiteboardActor_eventMulticast_EndDrawing_Parms, CompletedStroke), Z_Construct_UScriptStruct_FStroke, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CompletedStroke_MetaData), NewProp_CompletedStroke_MetaData) }; // 2672491957
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AWhiteboardActor_Multicast_EndDrawing_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AWhiteboardActor_Multicast_EndDrawing_Statics::NewProp_DrawingPlayer,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AWhiteboardActor_Multicast_EndDrawing_Statics::NewProp_CompletedStroke,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AWhiteboardActor_Multicast_EndDrawing_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AWhiteboardActor_Multicast_EndDrawing_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AWhiteboardActor, nullptr, "Multicast_EndDrawing", Z_Construct_UFunction_AWhiteboardActor_Multicast_EndDrawing_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AWhiteboardActor_Multicast_EndDrawing_Statics::PropPointers), sizeof(WhiteboardActor_eventMulticast_EndDrawing_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00024CC0, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AWhiteboardActor_Multicast_EndDrawing_Statics::Function_MetaDataParams), Z_Construct_UFunction_AWhiteboardActor_Multicast_EndDrawing_Statics::Function_MetaDataParams)},  };
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
	P_GET_OBJECT(APawn,Z_Param_DrawingPlayer);
	P_GET_STRUCT(FStroke,Z_Param_CompletedStroke);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Multicast_EndDrawing_Implementation(Z_Param_DrawingPlayer,Z_Param_CompletedStroke);
	P_NATIVE_END;
}
// ********** End Class AWhiteboardActor Function Multicast_EndDrawing *****************************

// ********** Begin Class AWhiteboardActor Function Multicast_ForceClientInitialization ************
static FName NAME_AWhiteboardActor_Multicast_ForceClientInitialization = FName(TEXT("Multicast_ForceClientInitialization"));
void AWhiteboardActor::Multicast_ForceClientInitialization()
{
	UFunction* Func = FindFunctionChecked(NAME_AWhiteboardActor_Multicast_ForceClientInitialization);
	ProcessEvent(Func,NULL);
}
struct Z_Construct_UFunction_AWhiteboardActor_Multicast_ForceClientInitialization_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Actor/WhiteboardActor.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AWhiteboardActor_Multicast_ForceClientInitialization_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AWhiteboardActor, nullptr, "Multicast_ForceClientInitialization", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00024CC0, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AWhiteboardActor_Multicast_ForceClientInitialization_Statics::Function_MetaDataParams), Z_Construct_UFunction_AWhiteboardActor_Multicast_ForceClientInitialization_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_AWhiteboardActor_Multicast_ForceClientInitialization()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AWhiteboardActor_Multicast_ForceClientInitialization_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AWhiteboardActor::execMulticast_ForceClientInitialization)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Multicast_ForceClientInitialization_Implementation();
	P_NATIVE_END;
}
// ********** End Class AWhiteboardActor Function Multicast_ForceClientInitialization **************

// ********** Begin Class AWhiteboardActor Function Multicast_StartDrawing *************************
struct WhiteboardActor_eventMulticast_StartDrawing_Parms
{
	APawn* DrawingPlayer;
	FVector2D CanvasPosition;
	int32 StrokeID;
};
static FName NAME_AWhiteboardActor_Multicast_StartDrawing = FName(TEXT("Multicast_StartDrawing"));
void AWhiteboardActor::Multicast_StartDrawing(APawn* DrawingPlayer, FVector2D const& CanvasPosition, int32 StrokeID)
{
	WhiteboardActor_eventMulticast_StartDrawing_Parms Parms;
	Parms.DrawingPlayer=DrawingPlayer;
	Parms.CanvasPosition=CanvasPosition;
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
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DrawingPlayer;
	static const UECodeGen_Private::FStructPropertyParams NewProp_CanvasPosition;
	static const UECodeGen_Private::FIntPropertyParams NewProp_StrokeID;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AWhiteboardActor_Multicast_StartDrawing_Statics::NewProp_DrawingPlayer = { "DrawingPlayer", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WhiteboardActor_eventMulticast_StartDrawing_Parms, DrawingPlayer), Z_Construct_UClass_APawn_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AWhiteboardActor_Multicast_StartDrawing_Statics::NewProp_CanvasPosition = { "CanvasPosition", nullptr, (EPropertyFlags)0x0010000008000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WhiteboardActor_eventMulticast_StartDrawing_Parms, CanvasPosition), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CanvasPosition_MetaData), NewProp_CanvasPosition_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AWhiteboardActor_Multicast_StartDrawing_Statics::NewProp_StrokeID = { "StrokeID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WhiteboardActor_eventMulticast_StartDrawing_Parms, StrokeID), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AWhiteboardActor_Multicast_StartDrawing_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AWhiteboardActor_Multicast_StartDrawing_Statics::NewProp_DrawingPlayer,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AWhiteboardActor_Multicast_StartDrawing_Statics::NewProp_CanvasPosition,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AWhiteboardActor_Multicast_StartDrawing_Statics::NewProp_StrokeID,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AWhiteboardActor_Multicast_StartDrawing_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AWhiteboardActor_Multicast_StartDrawing_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AWhiteboardActor, nullptr, "Multicast_StartDrawing", Z_Construct_UFunction_AWhiteboardActor_Multicast_StartDrawing_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AWhiteboardActor_Multicast_StartDrawing_Statics::PropPointers), sizeof(WhiteboardActor_eventMulticast_StartDrawing_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00824CC0, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AWhiteboardActor_Multicast_StartDrawing_Statics::Function_MetaDataParams), Z_Construct_UFunction_AWhiteboardActor_Multicast_StartDrawing_Statics::Function_MetaDataParams)},  };
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
	P_GET_OBJECT(APawn,Z_Param_DrawingPlayer);
	P_GET_STRUCT(FVector2D,Z_Param_CanvasPosition);
	P_GET_PROPERTY(FIntProperty,Z_Param_StrokeID);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Multicast_StartDrawing_Implementation(Z_Param_DrawingPlayer,Z_Param_CanvasPosition,Z_Param_StrokeID);
	P_NATIVE_END;
}
// ********** End Class AWhiteboardActor Function Multicast_StartDrawing ***************************

// ********** Begin Class AWhiteboardActor Function Multicast_SyncWhiteboardState ******************
struct WhiteboardActor_eventMulticast_SyncWhiteboardState_Parms
{
	TArray<FStroke> History;
	int32 HistoryIndex;
};
static FName NAME_AWhiteboardActor_Multicast_SyncWhiteboardState = FName(TEXT("Multicast_SyncWhiteboardState"));
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
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AWhiteboardActor_Multicast_SyncWhiteboardState_Statics::NewProp_History_Inner = { "History", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FStroke, METADATA_PARAMS(0, nullptr) }; // 2672491957
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_AWhiteboardActor_Multicast_SyncWhiteboardState_Statics::NewProp_History = { "History", nullptr, (EPropertyFlags)0x0010000008000082, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WhiteboardActor_eventMulticast_SyncWhiteboardState_Parms, History), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_History_MetaData), NewProp_History_MetaData) }; // 2672491957
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AWhiteboardActor_Multicast_SyncWhiteboardState_Statics::NewProp_HistoryIndex = { "HistoryIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WhiteboardActor_eventMulticast_SyncWhiteboardState_Parms, HistoryIndex), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AWhiteboardActor_Multicast_SyncWhiteboardState_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AWhiteboardActor_Multicast_SyncWhiteboardState_Statics::NewProp_History_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AWhiteboardActor_Multicast_SyncWhiteboardState_Statics::NewProp_History,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AWhiteboardActor_Multicast_SyncWhiteboardState_Statics::NewProp_HistoryIndex,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AWhiteboardActor_Multicast_SyncWhiteboardState_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AWhiteboardActor_Multicast_SyncWhiteboardState_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AWhiteboardActor, nullptr, "Multicast_SyncWhiteboardState", Z_Construct_UFunction_AWhiteboardActor_Multicast_SyncWhiteboardState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AWhiteboardActor_Multicast_SyncWhiteboardState_Statics::PropPointers), sizeof(WhiteboardActor_eventMulticast_SyncWhiteboardState_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00024CC0, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AWhiteboardActor_Multicast_SyncWhiteboardState_Statics::Function_MetaDataParams), Z_Construct_UFunction_AWhiteboardActor_Multicast_SyncWhiteboardState_Statics::Function_MetaDataParams)},  };
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
// ********** End Class AWhiteboardActor Function Multicast_SyncWhiteboardState ********************

// ********** Begin Class AWhiteboardActor Function Multicast_UpdateDrawing ************************
struct WhiteboardActor_eventMulticast_UpdateDrawing_Parms
{
	APawn* DrawingPlayer;
	FVector2D CanvasPosition;
	int32 StrokeID;
};
static FName NAME_AWhiteboardActor_Multicast_UpdateDrawing = FName(TEXT("Multicast_UpdateDrawing"));
void AWhiteboardActor::Multicast_UpdateDrawing(APawn* DrawingPlayer, FVector2D const& CanvasPosition, int32 StrokeID)
{
	WhiteboardActor_eventMulticast_UpdateDrawing_Parms Parms;
	Parms.DrawingPlayer=DrawingPlayer;
	Parms.CanvasPosition=CanvasPosition;
	Parms.StrokeID=StrokeID;
	UFunction* Func = FindFunctionChecked(NAME_AWhiteboardActor_Multicast_UpdateDrawing);
	ProcessEvent(Func,&Parms);
}
struct Z_Construct_UFunction_AWhiteboardActor_Multicast_UpdateDrawing_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Actor/WhiteboardActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CanvasPosition_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DrawingPlayer;
	static const UECodeGen_Private::FStructPropertyParams NewProp_CanvasPosition;
	static const UECodeGen_Private::FIntPropertyParams NewProp_StrokeID;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AWhiteboardActor_Multicast_UpdateDrawing_Statics::NewProp_DrawingPlayer = { "DrawingPlayer", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WhiteboardActor_eventMulticast_UpdateDrawing_Parms, DrawingPlayer), Z_Construct_UClass_APawn_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AWhiteboardActor_Multicast_UpdateDrawing_Statics::NewProp_CanvasPosition = { "CanvasPosition", nullptr, (EPropertyFlags)0x0010000008000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WhiteboardActor_eventMulticast_UpdateDrawing_Parms, CanvasPosition), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CanvasPosition_MetaData), NewProp_CanvasPosition_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AWhiteboardActor_Multicast_UpdateDrawing_Statics::NewProp_StrokeID = { "StrokeID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WhiteboardActor_eventMulticast_UpdateDrawing_Parms, StrokeID), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AWhiteboardActor_Multicast_UpdateDrawing_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AWhiteboardActor_Multicast_UpdateDrawing_Statics::NewProp_DrawingPlayer,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AWhiteboardActor_Multicast_UpdateDrawing_Statics::NewProp_CanvasPosition,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AWhiteboardActor_Multicast_UpdateDrawing_Statics::NewProp_StrokeID,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AWhiteboardActor_Multicast_UpdateDrawing_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AWhiteboardActor_Multicast_UpdateDrawing_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AWhiteboardActor, nullptr, "Multicast_UpdateDrawing", Z_Construct_UFunction_AWhiteboardActor_Multicast_UpdateDrawing_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AWhiteboardActor_Multicast_UpdateDrawing_Statics::PropPointers), sizeof(WhiteboardActor_eventMulticast_UpdateDrawing_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00824CC0, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AWhiteboardActor_Multicast_UpdateDrawing_Statics::Function_MetaDataParams), Z_Construct_UFunction_AWhiteboardActor_Multicast_UpdateDrawing_Statics::Function_MetaDataParams)},  };
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
	P_GET_OBJECT(APawn,Z_Param_DrawingPlayer);
	P_GET_STRUCT(FVector2D,Z_Param_CanvasPosition);
	P_GET_PROPERTY(FIntProperty,Z_Param_StrokeID);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Multicast_UpdateDrawing_Implementation(Z_Param_DrawingPlayer,Z_Param_CanvasPosition,Z_Param_StrokeID);
	P_NATIVE_END;
}
// ********** End Class AWhiteboardActor Function Multicast_UpdateDrawing **************************

// ********** Begin Class AWhiteboardActor Function Multicast_UpdateDrawingCanvas ******************
struct WhiteboardActor_eventMulticast_UpdateDrawingCanvas_Parms
{
	FStroke NewStroke;
};
static FName NAME_AWhiteboardActor_Multicast_UpdateDrawingCanvas = FName(TEXT("Multicast_UpdateDrawingCanvas"));
void AWhiteboardActor::Multicast_UpdateDrawingCanvas(FStroke const& NewStroke)
{
	WhiteboardActor_eventMulticast_UpdateDrawingCanvas_Parms Parms;
	Parms.NewStroke=NewStroke;
	UFunction* Func = FindFunctionChecked(NAME_AWhiteboardActor_Multicast_UpdateDrawingCanvas);
	ProcessEvent(Func,&Parms);
}
struct Z_Construct_UFunction_AWhiteboardActor_Multicast_UpdateDrawingCanvas_Statics
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
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AWhiteboardActor_Multicast_UpdateDrawingCanvas_Statics::NewProp_NewStroke = { "NewStroke", nullptr, (EPropertyFlags)0x0010000008000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WhiteboardActor_eventMulticast_UpdateDrawingCanvas_Parms, NewStroke), Z_Construct_UScriptStruct_FStroke, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NewStroke_MetaData), NewProp_NewStroke_MetaData) }; // 2672491957
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AWhiteboardActor_Multicast_UpdateDrawingCanvas_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AWhiteboardActor_Multicast_UpdateDrawingCanvas_Statics::NewProp_NewStroke,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AWhiteboardActor_Multicast_UpdateDrawingCanvas_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AWhiteboardActor_Multicast_UpdateDrawingCanvas_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AWhiteboardActor, nullptr, "Multicast_UpdateDrawingCanvas", Z_Construct_UFunction_AWhiteboardActor_Multicast_UpdateDrawingCanvas_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AWhiteboardActor_Multicast_UpdateDrawingCanvas_Statics::PropPointers), sizeof(WhiteboardActor_eventMulticast_UpdateDrawingCanvas_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00024CC0, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AWhiteboardActor_Multicast_UpdateDrawingCanvas_Statics::Function_MetaDataParams), Z_Construct_UFunction_AWhiteboardActor_Multicast_UpdateDrawingCanvas_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(WhiteboardActor_eventMulticast_UpdateDrawingCanvas_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AWhiteboardActor_Multicast_UpdateDrawingCanvas()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AWhiteboardActor_Multicast_UpdateDrawingCanvas_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AWhiteboardActor::execMulticast_UpdateDrawingCanvas)
{
	P_GET_STRUCT(FStroke,Z_Param_NewStroke);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Multicast_UpdateDrawingCanvas_Implementation(Z_Param_NewStroke);
	P_NATIVE_END;
}
// ********** End Class AWhiteboardActor Function Multicast_UpdateDrawingCanvas ********************

// ********** Begin Class AWhiteboardActor Function Multicast_UpdateHistory ************************
struct WhiteboardActor_eventMulticast_UpdateHistory_Parms
{
	TArray<FStroke> NewHistory;
	int32 NewHistoryIndex;
};
static FName NAME_AWhiteboardActor_Multicast_UpdateHistory = FName(TEXT("Multicast_UpdateHistory"));
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
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AWhiteboardActor_Multicast_UpdateHistory_Statics::NewProp_NewHistory_Inner = { "NewHistory", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FStroke, METADATA_PARAMS(0, nullptr) }; // 2672491957
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_AWhiteboardActor_Multicast_UpdateHistory_Statics::NewProp_NewHistory = { "NewHistory", nullptr, (EPropertyFlags)0x0010000008000082, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WhiteboardActor_eventMulticast_UpdateHistory_Parms, NewHistory), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NewHistory_MetaData), NewProp_NewHistory_MetaData) }; // 2672491957
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AWhiteboardActor_Multicast_UpdateHistory_Statics::NewProp_NewHistoryIndex = { "NewHistoryIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WhiteboardActor_eventMulticast_UpdateHistory_Parms, NewHistoryIndex), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AWhiteboardActor_Multicast_UpdateHistory_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AWhiteboardActor_Multicast_UpdateHistory_Statics::NewProp_NewHistory_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AWhiteboardActor_Multicast_UpdateHistory_Statics::NewProp_NewHistory,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AWhiteboardActor_Multicast_UpdateHistory_Statics::NewProp_NewHistoryIndex,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AWhiteboardActor_Multicast_UpdateHistory_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AWhiteboardActor_Multicast_UpdateHistory_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AWhiteboardActor, nullptr, "Multicast_UpdateHistory", Z_Construct_UFunction_AWhiteboardActor_Multicast_UpdateHistory_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AWhiteboardActor_Multicast_UpdateHistory_Statics::PropPointers), sizeof(WhiteboardActor_eventMulticast_UpdateHistory_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00024CC0, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AWhiteboardActor_Multicast_UpdateHistory_Statics::Function_MetaDataParams), Z_Construct_UFunction_AWhiteboardActor_Multicast_UpdateHistory_Statics::Function_MetaDataParams)},  };
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
// ********** End Class AWhiteboardActor Function Multicast_UpdateHistory **************************

// ********** Begin Class AWhiteboardActor Function Multicast_UpdatePlayerToolState ****************
struct WhiteboardActor_eventMulticast_UpdatePlayerToolState_Parms
{
	APawn* Player;
	FPlayerDrawingState NewState;
};
static FName NAME_AWhiteboardActor_Multicast_UpdatePlayerToolState = FName(TEXT("Multicast_UpdatePlayerToolState"));
void AWhiteboardActor::Multicast_UpdatePlayerToolState(APawn* Player, FPlayerDrawingState const& NewState)
{
	WhiteboardActor_eventMulticast_UpdatePlayerToolState_Parms Parms;
	Parms.Player=Player;
	Parms.NewState=NewState;
	UFunction* Func = FindFunctionChecked(NAME_AWhiteboardActor_Multicast_UpdatePlayerToolState);
	ProcessEvent(Func,&Parms);
}
struct Z_Construct_UFunction_AWhiteboardActor_Multicast_UpdatePlayerToolState_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Actor/WhiteboardActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NewState_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Player;
	static const UECodeGen_Private::FStructPropertyParams NewProp_NewState;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AWhiteboardActor_Multicast_UpdatePlayerToolState_Statics::NewProp_Player = { "Player", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WhiteboardActor_eventMulticast_UpdatePlayerToolState_Parms, Player), Z_Construct_UClass_APawn_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AWhiteboardActor_Multicast_UpdatePlayerToolState_Statics::NewProp_NewState = { "NewState", nullptr, (EPropertyFlags)0x0010000008000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WhiteboardActor_eventMulticast_UpdatePlayerToolState_Parms, NewState), Z_Construct_UScriptStruct_FPlayerDrawingState, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NewState_MetaData), NewProp_NewState_MetaData) }; // 2209676374
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AWhiteboardActor_Multicast_UpdatePlayerToolState_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AWhiteboardActor_Multicast_UpdatePlayerToolState_Statics::NewProp_Player,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AWhiteboardActor_Multicast_UpdatePlayerToolState_Statics::NewProp_NewState,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AWhiteboardActor_Multicast_UpdatePlayerToolState_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AWhiteboardActor_Multicast_UpdatePlayerToolState_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AWhiteboardActor, nullptr, "Multicast_UpdatePlayerToolState", Z_Construct_UFunction_AWhiteboardActor_Multicast_UpdatePlayerToolState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AWhiteboardActor_Multicast_UpdatePlayerToolState_Statics::PropPointers), sizeof(WhiteboardActor_eventMulticast_UpdatePlayerToolState_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00024CC0, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AWhiteboardActor_Multicast_UpdatePlayerToolState_Statics::Function_MetaDataParams), Z_Construct_UFunction_AWhiteboardActor_Multicast_UpdatePlayerToolState_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(WhiteboardActor_eventMulticast_UpdatePlayerToolState_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AWhiteboardActor_Multicast_UpdatePlayerToolState()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AWhiteboardActor_Multicast_UpdatePlayerToolState_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AWhiteboardActor::execMulticast_UpdatePlayerToolState)
{
	P_GET_OBJECT(APawn,Z_Param_Player);
	P_GET_STRUCT(FPlayerDrawingState,Z_Param_NewState);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Multicast_UpdatePlayerToolState_Implementation(Z_Param_Player,Z_Param_NewState);
	P_NATIVE_END;
}
// ********** End Class AWhiteboardActor Function Multicast_UpdatePlayerToolState ******************

// ********** Begin Class AWhiteboardActor Function Multicast_UpdateShapePreview *******************
struct WhiteboardActor_eventMulticast_UpdateShapePreview_Parms
{
	APawn* DrawingPlayer;
	FVector2D StartPos;
	FVector2D EndPos;
	EDrawingTool Tool;
	FLinearColor Color;
	float Size;
	int32 StrokeID;
};
static FName NAME_AWhiteboardActor_Multicast_UpdateShapePreview = FName(TEXT("Multicast_UpdateShapePreview"));
void AWhiteboardActor::Multicast_UpdateShapePreview(APawn* DrawingPlayer, FVector2D const& StartPos, FVector2D const& EndPos, EDrawingTool Tool, FLinearColor Color, float Size, int32 StrokeID)
{
	WhiteboardActor_eventMulticast_UpdateShapePreview_Parms Parms;
	Parms.DrawingPlayer=DrawingPlayer;
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
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DrawingPlayer;
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
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AWhiteboardActor_Multicast_UpdateShapePreview_Statics::NewProp_DrawingPlayer = { "DrawingPlayer", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WhiteboardActor_eventMulticast_UpdateShapePreview_Parms, DrawingPlayer), Z_Construct_UClass_APawn_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AWhiteboardActor_Multicast_UpdateShapePreview_Statics::NewProp_StartPos = { "StartPos", nullptr, (EPropertyFlags)0x0010000008000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WhiteboardActor_eventMulticast_UpdateShapePreview_Parms, StartPos), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StartPos_MetaData), NewProp_StartPos_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AWhiteboardActor_Multicast_UpdateShapePreview_Statics::NewProp_EndPos = { "EndPos", nullptr, (EPropertyFlags)0x0010000008000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WhiteboardActor_eventMulticast_UpdateShapePreview_Parms, EndPos), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EndPos_MetaData), NewProp_EndPos_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AWhiteboardActor_Multicast_UpdateShapePreview_Statics::NewProp_Tool_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_AWhiteboardActor_Multicast_UpdateShapePreview_Statics::NewProp_Tool = { "Tool", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WhiteboardActor_eventMulticast_UpdateShapePreview_Parms, Tool), Z_Construct_UEnum_AdvancedDrawingBoard_EDrawingTool, METADATA_PARAMS(0, nullptr) }; // 3146191471
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AWhiteboardActor_Multicast_UpdateShapePreview_Statics::NewProp_Color = { "Color", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WhiteboardActor_eventMulticast_UpdateShapePreview_Parms, Color), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AWhiteboardActor_Multicast_UpdateShapePreview_Statics::NewProp_Size = { "Size", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WhiteboardActor_eventMulticast_UpdateShapePreview_Parms, Size), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AWhiteboardActor_Multicast_UpdateShapePreview_Statics::NewProp_StrokeID = { "StrokeID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WhiteboardActor_eventMulticast_UpdateShapePreview_Parms, StrokeID), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AWhiteboardActor_Multicast_UpdateShapePreview_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AWhiteboardActor_Multicast_UpdateShapePreview_Statics::NewProp_DrawingPlayer,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AWhiteboardActor_Multicast_UpdateShapePreview_Statics::NewProp_StartPos,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AWhiteboardActor_Multicast_UpdateShapePreview_Statics::NewProp_EndPos,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AWhiteboardActor_Multicast_UpdateShapePreview_Statics::NewProp_Tool_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AWhiteboardActor_Multicast_UpdateShapePreview_Statics::NewProp_Tool,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AWhiteboardActor_Multicast_UpdateShapePreview_Statics::NewProp_Color,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AWhiteboardActor_Multicast_UpdateShapePreview_Statics::NewProp_Size,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AWhiteboardActor_Multicast_UpdateShapePreview_Statics::NewProp_StrokeID,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AWhiteboardActor_Multicast_UpdateShapePreview_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AWhiteboardActor_Multicast_UpdateShapePreview_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AWhiteboardActor, nullptr, "Multicast_UpdateShapePreview", Z_Construct_UFunction_AWhiteboardActor_Multicast_UpdateShapePreview_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AWhiteboardActor_Multicast_UpdateShapePreview_Statics::PropPointers), sizeof(WhiteboardActor_eventMulticast_UpdateShapePreview_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00824CC0, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AWhiteboardActor_Multicast_UpdateShapePreview_Statics::Function_MetaDataParams), Z_Construct_UFunction_AWhiteboardActor_Multicast_UpdateShapePreview_Statics::Function_MetaDataParams)},  };
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
	P_GET_OBJECT(APawn,Z_Param_DrawingPlayer);
	P_GET_STRUCT(FVector2D,Z_Param_StartPos);
	P_GET_STRUCT(FVector2D,Z_Param_EndPos);
	P_GET_ENUM(EDrawingTool,Z_Param_Tool);
	P_GET_STRUCT(FLinearColor,Z_Param_Color);
	P_GET_PROPERTY(FFloatProperty,Z_Param_Size);
	P_GET_PROPERTY(FIntProperty,Z_Param_StrokeID);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Multicast_UpdateShapePreview_Implementation(Z_Param_DrawingPlayer,Z_Param_StartPos,Z_Param_EndPos,EDrawingTool(Z_Param_Tool),Z_Param_Color,Z_Param_Size,Z_Param_StrokeID);
	P_NATIVE_END;
}
// ********** End Class AWhiteboardActor Function Multicast_UpdateShapePreview *********************

// ********** Begin Class AWhiteboardActor Function OnInteractionEnded *****************************
struct WhiteboardActor_eventOnInteractionEnded_Parms
{
	APawn* Player;
};
static FName NAME_AWhiteboardActor_OnInteractionEnded = FName(TEXT("OnInteractionEnded"));
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
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AWhiteboardActor_OnInteractionEnded_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AWhiteboardActor, nullptr, "OnInteractionEnded", Z_Construct_UFunction_AWhiteboardActor_OnInteractionEnded_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AWhiteboardActor_OnInteractionEnded_Statics::PropPointers), sizeof(WhiteboardActor_eventOnInteractionEnded_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AWhiteboardActor_OnInteractionEnded_Statics::Function_MetaDataParams), Z_Construct_UFunction_AWhiteboardActor_OnInteractionEnded_Statics::Function_MetaDataParams)},  };
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
// ********** End Class AWhiteboardActor Function OnInteractionEnded *******************************

// ********** Begin Class AWhiteboardActor Function OnInteractionStarted ***************************
struct WhiteboardActor_eventOnInteractionStarted_Parms
{
	APawn* Player;
};
static FName NAME_AWhiteboardActor_OnInteractionStarted = FName(TEXT("OnInteractionStarted"));
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
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AWhiteboardActor_OnInteractionStarted_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AWhiteboardActor, nullptr, "OnInteractionStarted", Z_Construct_UFunction_AWhiteboardActor_OnInteractionStarted_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AWhiteboardActor_OnInteractionStarted_Statics::PropPointers), sizeof(WhiteboardActor_eventOnInteractionStarted_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AWhiteboardActor_OnInteractionStarted_Statics::Function_MetaDataParams), Z_Construct_UFunction_AWhiteboardActor_OnInteractionStarted_Statics::Function_MetaDataParams)},  };
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
// ********** End Class AWhiteboardActor Function OnInteractionStarted *****************************

// ********** Begin Class AWhiteboardActor Function OnPlayerEnteredRange ***************************
struct WhiteboardActor_eventOnPlayerEnteredRange_Parms
{
	APawn* Player;
};
static FName NAME_AWhiteboardActor_OnPlayerEnteredRange = FName(TEXT("OnPlayerEnteredRange"));
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
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AWhiteboardActor_OnPlayerEnteredRange_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AWhiteboardActor, nullptr, "OnPlayerEnteredRange", Z_Construct_UFunction_AWhiteboardActor_OnPlayerEnteredRange_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AWhiteboardActor_OnPlayerEnteredRange_Statics::PropPointers), sizeof(WhiteboardActor_eventOnPlayerEnteredRange_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AWhiteboardActor_OnPlayerEnteredRange_Statics::Function_MetaDataParams), Z_Construct_UFunction_AWhiteboardActor_OnPlayerEnteredRange_Statics::Function_MetaDataParams)},  };
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
// ********** End Class AWhiteboardActor Function OnPlayerEnteredRange *****************************

// ********** Begin Class AWhiteboardActor Function OnPlayerExitedRange ****************************
struct WhiteboardActor_eventOnPlayerExitedRange_Parms
{
	APawn* Player;
};
static FName NAME_AWhiteboardActor_OnPlayerExitedRange = FName(TEXT("OnPlayerExitedRange"));
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
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AWhiteboardActor_OnPlayerExitedRange_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AWhiteboardActor, nullptr, "OnPlayerExitedRange", Z_Construct_UFunction_AWhiteboardActor_OnPlayerExitedRange_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AWhiteboardActor_OnPlayerExitedRange_Statics::PropPointers), sizeof(WhiteboardActor_eventOnPlayerExitedRange_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AWhiteboardActor_OnPlayerExitedRange_Statics::Function_MetaDataParams), Z_Construct_UFunction_AWhiteboardActor_OnPlayerExitedRange_Statics::Function_MetaDataParams)},  };
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
// ********** End Class AWhiteboardActor Function OnPlayerExitedRange ******************************

// ********** Begin Class AWhiteboardActor Function OnRep_DrawingCanvas ****************************
struct Z_Construct_UFunction_AWhiteboardActor_OnRep_DrawingCanvas_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Actor/WhiteboardActor.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AWhiteboardActor_OnRep_DrawingCanvas_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AWhiteboardActor, nullptr, "OnRep_DrawingCanvas", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AWhiteboardActor_OnRep_DrawingCanvas_Statics::Function_MetaDataParams), Z_Construct_UFunction_AWhiteboardActor_OnRep_DrawingCanvas_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_AWhiteboardActor_OnRep_DrawingCanvas()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AWhiteboardActor_OnRep_DrawingCanvas_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AWhiteboardActor::execOnRep_DrawingCanvas)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnRep_DrawingCanvas();
	P_NATIVE_END;
}
// ********** End Class AWhiteboardActor Function OnRep_DrawingCanvas ******************************

// ********** Begin Class AWhiteboardActor Function OnRep_InteractingPawns *************************
struct Z_Construct_UFunction_AWhiteboardActor_OnRep_InteractingPawns_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Actor/WhiteboardActor.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AWhiteboardActor_OnRep_InteractingPawns_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AWhiteboardActor, nullptr, "OnRep_InteractingPawns", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AWhiteboardActor_OnRep_InteractingPawns_Statics::Function_MetaDataParams), Z_Construct_UFunction_AWhiteboardActor_OnRep_InteractingPawns_Statics::Function_MetaDataParams)},  };
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
// ********** End Class AWhiteboardActor Function OnRep_InteractingPawns ***************************

// ********** Begin Class AWhiteboardActor Function OnRep_PlayerDrawingStates **********************
struct Z_Construct_UFunction_AWhiteboardActor_OnRep_PlayerDrawingStates_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Add rep notify\n" },
#endif
		{ "ModuleRelativePath", "Public/Actor/WhiteboardActor.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Add rep notify" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AWhiteboardActor_OnRep_PlayerDrawingStates_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AWhiteboardActor, nullptr, "OnRep_PlayerDrawingStates", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AWhiteboardActor_OnRep_PlayerDrawingStates_Statics::Function_MetaDataParams), Z_Construct_UFunction_AWhiteboardActor_OnRep_PlayerDrawingStates_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_AWhiteboardActor_OnRep_PlayerDrawingStates()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AWhiteboardActor_OnRep_PlayerDrawingStates_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AWhiteboardActor::execOnRep_PlayerDrawingStates)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnRep_PlayerDrawingStates();
	P_NATIVE_END;
}
// ********** End Class AWhiteboardActor Function OnRep_PlayerDrawingStates ************************

// ********** Begin Class AWhiteboardActor Function OnRep_StrokeHistory ****************************
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
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AWhiteboardActor_OnRep_StrokeHistory_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AWhiteboardActor, nullptr, "OnRep_StrokeHistory", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AWhiteboardActor_OnRep_StrokeHistory_Statics::Function_MetaDataParams), Z_Construct_UFunction_AWhiteboardActor_OnRep_StrokeHistory_Statics::Function_MetaDataParams)},  };
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
// ********** End Class AWhiteboardActor Function OnRep_StrokeHistory ******************************

// ********** Begin Class AWhiteboardActor Function OnTriggerBeginOverlap **************************
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
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AWhiteboardActor_OnTriggerBeginOverlap_Statics::NewProp_SweepResult = { "SweepResult", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WhiteboardActor_eventOnTriggerBeginOverlap_Parms, SweepResult), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SweepResult_MetaData), NewProp_SweepResult_MetaData) }; // 267591329
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AWhiteboardActor_OnTriggerBeginOverlap_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AWhiteboardActor_OnTriggerBeginOverlap_Statics::NewProp_OverlappedComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AWhiteboardActor_OnTriggerBeginOverlap_Statics::NewProp_OtherActor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AWhiteboardActor_OnTriggerBeginOverlap_Statics::NewProp_OtherComp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AWhiteboardActor_OnTriggerBeginOverlap_Statics::NewProp_OtherBodyIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AWhiteboardActor_OnTriggerBeginOverlap_Statics::NewProp_bFromSweep,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AWhiteboardActor_OnTriggerBeginOverlap_Statics::NewProp_SweepResult,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AWhiteboardActor_OnTriggerBeginOverlap_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AWhiteboardActor_OnTriggerBeginOverlap_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AWhiteboardActor, nullptr, "OnTriggerBeginOverlap", Z_Construct_UFunction_AWhiteboardActor_OnTriggerBeginOverlap_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AWhiteboardActor_OnTriggerBeginOverlap_Statics::PropPointers), sizeof(Z_Construct_UFunction_AWhiteboardActor_OnTriggerBeginOverlap_Statics::WhiteboardActor_eventOnTriggerBeginOverlap_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00480401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AWhiteboardActor_OnTriggerBeginOverlap_Statics::Function_MetaDataParams), Z_Construct_UFunction_AWhiteboardActor_OnTriggerBeginOverlap_Statics::Function_MetaDataParams)},  };
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
// ********** End Class AWhiteboardActor Function OnTriggerBeginOverlap ****************************

// ********** Begin Class AWhiteboardActor Function OnTriggerEndOverlap ****************************
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
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AWhiteboardActor_OnTriggerEndOverlap_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AWhiteboardActor, nullptr, "OnTriggerEndOverlap", Z_Construct_UFunction_AWhiteboardActor_OnTriggerEndOverlap_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AWhiteboardActor_OnTriggerEndOverlap_Statics::PropPointers), sizeof(Z_Construct_UFunction_AWhiteboardActor_OnTriggerEndOverlap_Statics::WhiteboardActor_eventOnTriggerEndOverlap_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AWhiteboardActor_OnTriggerEndOverlap_Statics::Function_MetaDataParams), Z_Construct_UFunction_AWhiteboardActor_OnTriggerEndOverlap_Statics::Function_MetaDataParams)},  };
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
// ********** End Class AWhiteboardActor Function OnTriggerEndOverlap ******************************

// ********** Begin Class AWhiteboardActor Function PlayerEndDrawing *******************************
struct Z_Construct_UFunction_AWhiteboardActor_PlayerEndDrawing_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Whiteboard" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "///////////////////////////////// END DRAWING ////////////////////////////////////\n" },
#endif
		{ "ModuleRelativePath", "Public/Actor/WhiteboardActor.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "END DRAWING" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AWhiteboardActor_PlayerEndDrawing_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AWhiteboardActor, nullptr, "PlayerEndDrawing", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AWhiteboardActor_PlayerEndDrawing_Statics::Function_MetaDataParams), Z_Construct_UFunction_AWhiteboardActor_PlayerEndDrawing_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_AWhiteboardActor_PlayerEndDrawing()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AWhiteboardActor_PlayerEndDrawing_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AWhiteboardActor::execPlayerEndDrawing)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->PlayerEndDrawing();
	P_NATIVE_END;
}
// ********** End Class AWhiteboardActor Function PlayerEndDrawing *********************************

// ********** Begin Class AWhiteboardActor Function PlayerStartDrawing *****************************
struct Z_Construct_UFunction_AWhiteboardActor_PlayerStartDrawing_Statics
{
	struct WhiteboardActor_eventPlayerStartDrawing_Parms
	{
		FVector2D CanvasPosition;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Whiteboard" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//////////////////////////////////////////// START DRAWING ////////////////////////\n" },
#endif
		{ "ModuleRelativePath", "Public/Actor/WhiteboardActor.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "START DRAWING" },
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
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AWhiteboardActor_PlayerStartDrawing_Statics::NewProp_CanvasPosition = { "CanvasPosition", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WhiteboardActor_eventPlayerStartDrawing_Parms, CanvasPosition), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CanvasPosition_MetaData), NewProp_CanvasPosition_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AWhiteboardActor_PlayerStartDrawing_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AWhiteboardActor_PlayerStartDrawing_Statics::NewProp_CanvasPosition,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AWhiteboardActor_PlayerStartDrawing_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AWhiteboardActor_PlayerStartDrawing_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AWhiteboardActor, nullptr, "PlayerStartDrawing", Z_Construct_UFunction_AWhiteboardActor_PlayerStartDrawing_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AWhiteboardActor_PlayerStartDrawing_Statics::PropPointers), sizeof(Z_Construct_UFunction_AWhiteboardActor_PlayerStartDrawing_Statics::WhiteboardActor_eventPlayerStartDrawing_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AWhiteboardActor_PlayerStartDrawing_Statics::Function_MetaDataParams), Z_Construct_UFunction_AWhiteboardActor_PlayerStartDrawing_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_AWhiteboardActor_PlayerStartDrawing_Statics::WhiteboardActor_eventPlayerStartDrawing_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AWhiteboardActor_PlayerStartDrawing()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AWhiteboardActor_PlayerStartDrawing_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AWhiteboardActor::execPlayerStartDrawing)
{
	P_GET_STRUCT_REF(FVector2D,Z_Param_Out_CanvasPosition);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->PlayerStartDrawing(Z_Param_Out_CanvasPosition);
	P_NATIVE_END;
}
// ********** End Class AWhiteboardActor Function PlayerStartDrawing *******************************

// ********** Begin Class AWhiteboardActor Function PlayerUpdateDrawing ****************************
struct Z_Construct_UFunction_AWhiteboardActor_PlayerUpdateDrawing_Statics
{
	struct WhiteboardActor_eventPlayerUpdateDrawing_Parms
	{
		FVector2D CanvasPosition;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Whiteboard" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "///////////////////////////////// UPDATE DRAWING ////////////////////////////////////\n" },
#endif
		{ "ModuleRelativePath", "Public/Actor/WhiteboardActor.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "UPDATE DRAWING" },
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
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AWhiteboardActor_PlayerUpdateDrawing_Statics::NewProp_CanvasPosition = { "CanvasPosition", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WhiteboardActor_eventPlayerUpdateDrawing_Parms, CanvasPosition), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CanvasPosition_MetaData), NewProp_CanvasPosition_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AWhiteboardActor_PlayerUpdateDrawing_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AWhiteboardActor_PlayerUpdateDrawing_Statics::NewProp_CanvasPosition,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AWhiteboardActor_PlayerUpdateDrawing_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AWhiteboardActor_PlayerUpdateDrawing_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AWhiteboardActor, nullptr, "PlayerUpdateDrawing", Z_Construct_UFunction_AWhiteboardActor_PlayerUpdateDrawing_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AWhiteboardActor_PlayerUpdateDrawing_Statics::PropPointers), sizeof(Z_Construct_UFunction_AWhiteboardActor_PlayerUpdateDrawing_Statics::WhiteboardActor_eventPlayerUpdateDrawing_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AWhiteboardActor_PlayerUpdateDrawing_Statics::Function_MetaDataParams), Z_Construct_UFunction_AWhiteboardActor_PlayerUpdateDrawing_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_AWhiteboardActor_PlayerUpdateDrawing_Statics::WhiteboardActor_eventPlayerUpdateDrawing_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AWhiteboardActor_PlayerUpdateDrawing()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AWhiteboardActor_PlayerUpdateDrawing_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AWhiteboardActor::execPlayerUpdateDrawing)
{
	P_GET_STRUCT_REF(FVector2D,Z_Param_Out_CanvasPosition);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->PlayerUpdateDrawing(Z_Param_Out_CanvasPosition);
	P_NATIVE_END;
}
// ********** End Class AWhiteboardActor Function PlayerUpdateDrawing ******************************

// ********** Begin Class AWhiteboardActor Function Redo *******************************************
struct Z_Construct_UFunction_AWhiteboardActor_Redo_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Whiteboard|Drawing Tools" },
		{ "ModuleRelativePath", "Public/Actor/WhiteboardActor.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AWhiteboardActor_Redo_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AWhiteboardActor, nullptr, "Redo", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AWhiteboardActor_Redo_Statics::Function_MetaDataParams), Z_Construct_UFunction_AWhiteboardActor_Redo_Statics::Function_MetaDataParams)},  };
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
// ********** End Class AWhiteboardActor Function Redo *********************************************

// ********** Begin Class AWhiteboardActor Function RemoveInteractingPlayer ************************
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
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AWhiteboardActor_RemoveInteractingPlayer_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AWhiteboardActor, nullptr, "RemoveInteractingPlayer", Z_Construct_UFunction_AWhiteboardActor_RemoveInteractingPlayer_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AWhiteboardActor_RemoveInteractingPlayer_Statics::PropPointers), sizeof(Z_Construct_UFunction_AWhiteboardActor_RemoveInteractingPlayer_Statics::WhiteboardActor_eventRemoveInteractingPlayer_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AWhiteboardActor_RemoveInteractingPlayer_Statics::Function_MetaDataParams), Z_Construct_UFunction_AWhiteboardActor_RemoveInteractingPlayer_Statics::Function_MetaDataParams)},  };
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
// ********** End Class AWhiteboardActor Function RemoveInteractingPlayer **************************

// ********** Begin Class AWhiteboardActor Function RequestEndInteraction **************************
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
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AWhiteboardActor_RequestEndInteraction_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AWhiteboardActor, nullptr, "RequestEndInteraction", Z_Construct_UFunction_AWhiteboardActor_RequestEndInteraction_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AWhiteboardActor_RequestEndInteraction_Statics::PropPointers), sizeof(Z_Construct_UFunction_AWhiteboardActor_RequestEndInteraction_Statics::WhiteboardActor_eventRequestEndInteraction_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AWhiteboardActor_RequestEndInteraction_Statics::Function_MetaDataParams), Z_Construct_UFunction_AWhiteboardActor_RequestEndInteraction_Statics::Function_MetaDataParams)},  };
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
// ********** End Class AWhiteboardActor Function RequestEndInteraction ****************************

// ********** Begin Class AWhiteboardActor Function RequestInteraction *****************************
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
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AWhiteboardActor_RequestInteraction_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AWhiteboardActor, nullptr, "RequestInteraction", Z_Construct_UFunction_AWhiteboardActor_RequestInteraction_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AWhiteboardActor_RequestInteraction_Statics::PropPointers), sizeof(Z_Construct_UFunction_AWhiteboardActor_RequestInteraction_Statics::WhiteboardActor_eventRequestInteraction_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AWhiteboardActor_RequestInteraction_Statics::Function_MetaDataParams), Z_Construct_UFunction_AWhiteboardActor_RequestInteraction_Statics::Function_MetaDataParams)},  };
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
// ********** End Class AWhiteboardActor Function RequestInteraction *******************************

// ********** Begin Class AWhiteboardActor Function Server_ClearWhiteboard *************************
static FName NAME_AWhiteboardActor_Server_ClearWhiteboard = FName(TEXT("Server_ClearWhiteboard"));
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
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AWhiteboardActor_Server_ClearWhiteboard_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AWhiteboardActor, nullptr, "Server_ClearWhiteboard", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00220CC0, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AWhiteboardActor_Server_ClearWhiteboard_Statics::Function_MetaDataParams), Z_Construct_UFunction_AWhiteboardActor_Server_ClearWhiteboard_Statics::Function_MetaDataParams)},  };
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
// ********** End Class AWhiteboardActor Function Server_ClearWhiteboard ***************************

// ********** Begin Class AWhiteboardActor Function Server_DrawFigure ******************************
struct WhiteboardActor_eventServer_DrawFigure_Parms
{
	FVector2D CanvasPosition;
	FPlayerDrawingState PlayerToolState;
};
static FName NAME_AWhiteboardActor_Server_DrawFigure = FName(TEXT("Server_DrawFigure"));
void AWhiteboardActor::Server_DrawFigure(FVector2D const& CanvasPosition, FPlayerDrawingState const& PlayerToolState)
{
	WhiteboardActor_eventServer_DrawFigure_Parms Parms;
	Parms.CanvasPosition=CanvasPosition;
	Parms.PlayerToolState=PlayerToolState;
	UFunction* Func = FindFunctionChecked(NAME_AWhiteboardActor_Server_DrawFigure);
	ProcessEvent(Func,&Parms);
}
struct Z_Construct_UFunction_AWhiteboardActor_Server_DrawFigure_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/*\n\n    UFUNCTION(Server, Reliable)\n    void Server_AddText(const FVector2D& CanvasPosition, const FString& Text, FLinearColor Color, float Size);\n\n    */" },
#endif
		{ "ModuleRelativePath", "Public/Actor/WhiteboardActor.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "UFUNCTION(Server, Reliable)\nvoid Server_AddText(const FVector2D& CanvasPosition, const FString& Text, FLinearColor Color, float Size);" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CanvasPosition_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PlayerToolState_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_CanvasPosition;
	static const UECodeGen_Private::FStructPropertyParams NewProp_PlayerToolState;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AWhiteboardActor_Server_DrawFigure_Statics::NewProp_CanvasPosition = { "CanvasPosition", nullptr, (EPropertyFlags)0x0010000008000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WhiteboardActor_eventServer_DrawFigure_Parms, CanvasPosition), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CanvasPosition_MetaData), NewProp_CanvasPosition_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AWhiteboardActor_Server_DrawFigure_Statics::NewProp_PlayerToolState = { "PlayerToolState", nullptr, (EPropertyFlags)0x0010000008000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WhiteboardActor_eventServer_DrawFigure_Parms, PlayerToolState), Z_Construct_UScriptStruct_FPlayerDrawingState, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PlayerToolState_MetaData), NewProp_PlayerToolState_MetaData) }; // 2209676374
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AWhiteboardActor_Server_DrawFigure_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AWhiteboardActor_Server_DrawFigure_Statics::NewProp_CanvasPosition,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AWhiteboardActor_Server_DrawFigure_Statics::NewProp_PlayerToolState,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AWhiteboardActor_Server_DrawFigure_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AWhiteboardActor_Server_DrawFigure_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AWhiteboardActor, nullptr, "Server_DrawFigure", Z_Construct_UFunction_AWhiteboardActor_Server_DrawFigure_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AWhiteboardActor_Server_DrawFigure_Statics::PropPointers), sizeof(WhiteboardActor_eventServer_DrawFigure_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00A20CC0, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AWhiteboardActor_Server_DrawFigure_Statics::Function_MetaDataParams), Z_Construct_UFunction_AWhiteboardActor_Server_DrawFigure_Statics::Function_MetaDataParams)},  };
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
	P_GET_STRUCT(FPlayerDrawingState,Z_Param_PlayerToolState);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Server_DrawFigure_Implementation(Z_Param_CanvasPosition,Z_Param_PlayerToolState);
	P_NATIVE_END;
}
// ********** End Class AWhiteboardActor Function Server_DrawFigure ********************************

// ********** Begin Class AWhiteboardActor Function Server_EndDrawing ******************************
struct WhiteboardActor_eventServer_EndDrawing_Parms
{
	APawn* DrawingPlayer;
};
static FName NAME_AWhiteboardActor_Server_EndDrawing = FName(TEXT("Server_EndDrawing"));
void AWhiteboardActor::Server_EndDrawing(APawn* DrawingPlayer)
{
	WhiteboardActor_eventServer_EndDrawing_Parms Parms;
	Parms.DrawingPlayer=DrawingPlayer;
	UFunction* Func = FindFunctionChecked(NAME_AWhiteboardActor_Server_EndDrawing);
	ProcessEvent(Func,&Parms);
}
struct Z_Construct_UFunction_AWhiteboardActor_Server_EndDrawing_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Actor/WhiteboardActor.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DrawingPlayer;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AWhiteboardActor_Server_EndDrawing_Statics::NewProp_DrawingPlayer = { "DrawingPlayer", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WhiteboardActor_eventServer_EndDrawing_Parms, DrawingPlayer), Z_Construct_UClass_APawn_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AWhiteboardActor_Server_EndDrawing_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AWhiteboardActor_Server_EndDrawing_Statics::NewProp_DrawingPlayer,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AWhiteboardActor_Server_EndDrawing_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AWhiteboardActor_Server_EndDrawing_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AWhiteboardActor, nullptr, "Server_EndDrawing", Z_Construct_UFunction_AWhiteboardActor_Server_EndDrawing_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AWhiteboardActor_Server_EndDrawing_Statics::PropPointers), sizeof(WhiteboardActor_eventServer_EndDrawing_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00220CC0, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AWhiteboardActor_Server_EndDrawing_Statics::Function_MetaDataParams), Z_Construct_UFunction_AWhiteboardActor_Server_EndDrawing_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(WhiteboardActor_eventServer_EndDrawing_Parms) < MAX_uint16);
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
	P_GET_OBJECT(APawn,Z_Param_DrawingPlayer);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Server_EndDrawing_Implementation(Z_Param_DrawingPlayer);
	P_NATIVE_END;
}
// ********** End Class AWhiteboardActor Function Server_EndDrawing ********************************

// ********** Begin Class AWhiteboardActor Function Server_Redo ************************************
static FName NAME_AWhiteboardActor_Server_Redo = FName(TEXT("Server_Redo"));
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
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AWhiteboardActor_Server_Redo_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AWhiteboardActor, nullptr, "Server_Redo", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00220CC0, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AWhiteboardActor_Server_Redo_Statics::Function_MetaDataParams), Z_Construct_UFunction_AWhiteboardActor_Server_Redo_Statics::Function_MetaDataParams)},  };
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
// ********** End Class AWhiteboardActor Function Server_Redo **************************************

// ********** Begin Class AWhiteboardActor Function Server_RequestCanvasInitialization *************
static FName NAME_AWhiteboardActor_Server_RequestCanvasInitialization = FName(TEXT("Server_RequestCanvasInitialization"));
void AWhiteboardActor::Server_RequestCanvasInitialization()
{
	UFunction* Func = FindFunctionChecked(NAME_AWhiteboardActor_Server_RequestCanvasInitialization);
	ProcessEvent(Func,NULL);
}
struct Z_Construct_UFunction_AWhiteboardActor_Server_RequestCanvasInitialization_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Actor/WhiteboardActor.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AWhiteboardActor_Server_RequestCanvasInitialization_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AWhiteboardActor, nullptr, "Server_RequestCanvasInitialization", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00220CC0, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AWhiteboardActor_Server_RequestCanvasInitialization_Statics::Function_MetaDataParams), Z_Construct_UFunction_AWhiteboardActor_Server_RequestCanvasInitialization_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_AWhiteboardActor_Server_RequestCanvasInitialization()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AWhiteboardActor_Server_RequestCanvasInitialization_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AWhiteboardActor::execServer_RequestCanvasInitialization)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Server_RequestCanvasInitialization_Implementation();
	P_NATIVE_END;
}
// ********** End Class AWhiteboardActor Function Server_RequestCanvasInitialization ***************

// ********** Begin Class AWhiteboardActor Function Server_StartDrawing ****************************
struct WhiteboardActor_eventServer_StartDrawing_Parms
{
	APawn* DrawingPlayer;
	FVector2D CanvasPosition;
};
static FName NAME_AWhiteboardActor_Server_StartDrawing = FName(TEXT("Server_StartDrawing"));
void AWhiteboardActor::Server_StartDrawing(APawn* DrawingPlayer, FVector2D const& CanvasPosition)
{
	WhiteboardActor_eventServer_StartDrawing_Parms Parms;
	Parms.DrawingPlayer=DrawingPlayer;
	Parms.CanvasPosition=CanvasPosition;
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
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DrawingPlayer;
	static const UECodeGen_Private::FStructPropertyParams NewProp_CanvasPosition;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AWhiteboardActor_Server_StartDrawing_Statics::NewProp_DrawingPlayer = { "DrawingPlayer", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WhiteboardActor_eventServer_StartDrawing_Parms, DrawingPlayer), Z_Construct_UClass_APawn_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AWhiteboardActor_Server_StartDrawing_Statics::NewProp_CanvasPosition = { "CanvasPosition", nullptr, (EPropertyFlags)0x0010000008000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WhiteboardActor_eventServer_StartDrawing_Parms, CanvasPosition), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CanvasPosition_MetaData), NewProp_CanvasPosition_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AWhiteboardActor_Server_StartDrawing_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AWhiteboardActor_Server_StartDrawing_Statics::NewProp_DrawingPlayer,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AWhiteboardActor_Server_StartDrawing_Statics::NewProp_CanvasPosition,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AWhiteboardActor_Server_StartDrawing_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AWhiteboardActor_Server_StartDrawing_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AWhiteboardActor, nullptr, "Server_StartDrawing", Z_Construct_UFunction_AWhiteboardActor_Server_StartDrawing_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AWhiteboardActor_Server_StartDrawing_Statics::PropPointers), sizeof(WhiteboardActor_eventServer_StartDrawing_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00A20CC0, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AWhiteboardActor_Server_StartDrawing_Statics::Function_MetaDataParams), Z_Construct_UFunction_AWhiteboardActor_Server_StartDrawing_Statics::Function_MetaDataParams)},  };
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
	P_GET_OBJECT(APawn,Z_Param_DrawingPlayer);
	P_GET_STRUCT(FVector2D,Z_Param_CanvasPosition);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Server_StartDrawing_Implementation(Z_Param_DrawingPlayer,Z_Param_CanvasPosition);
	P_NATIVE_END;
}
// ********** End Class AWhiteboardActor Function Server_StartDrawing ******************************

// ********** Begin Class AWhiteboardActor Function Server_Undo ************************************
static FName NAME_AWhiteboardActor_Server_Undo = FName(TEXT("Server_Undo"));
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
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AWhiteboardActor_Server_Undo_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AWhiteboardActor, nullptr, "Server_Undo", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00220CC0, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AWhiteboardActor_Server_Undo_Statics::Function_MetaDataParams), Z_Construct_UFunction_AWhiteboardActor_Server_Undo_Statics::Function_MetaDataParams)},  };
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
// ********** End Class AWhiteboardActor Function Server_Undo **************************************

// ********** Begin Class AWhiteboardActor Function Server_UpdateDrawing ***************************
struct WhiteboardActor_eventServer_UpdateDrawing_Parms
{
	APawn* DrawingPlayer;
	FVector2D CanvasPosition;
};
static FName NAME_AWhiteboardActor_Server_UpdateDrawing = FName(TEXT("Server_UpdateDrawing"));
void AWhiteboardActor::Server_UpdateDrawing(APawn* DrawingPlayer, FVector2D const& CanvasPosition)
{
	WhiteboardActor_eventServer_UpdateDrawing_Parms Parms;
	Parms.DrawingPlayer=DrawingPlayer;
	Parms.CanvasPosition=CanvasPosition;
	UFunction* Func = FindFunctionChecked(NAME_AWhiteboardActor_Server_UpdateDrawing);
	ProcessEvent(Func,&Parms);
}
struct Z_Construct_UFunction_AWhiteboardActor_Server_UpdateDrawing_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Actor/WhiteboardActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CanvasPosition_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DrawingPlayer;
	static const UECodeGen_Private::FStructPropertyParams NewProp_CanvasPosition;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AWhiteboardActor_Server_UpdateDrawing_Statics::NewProp_DrawingPlayer = { "DrawingPlayer", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WhiteboardActor_eventServer_UpdateDrawing_Parms, DrawingPlayer), Z_Construct_UClass_APawn_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AWhiteboardActor_Server_UpdateDrawing_Statics::NewProp_CanvasPosition = { "CanvasPosition", nullptr, (EPropertyFlags)0x0010000008000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WhiteboardActor_eventServer_UpdateDrawing_Parms, CanvasPosition), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CanvasPosition_MetaData), NewProp_CanvasPosition_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AWhiteboardActor_Server_UpdateDrawing_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AWhiteboardActor_Server_UpdateDrawing_Statics::NewProp_DrawingPlayer,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AWhiteboardActor_Server_UpdateDrawing_Statics::NewProp_CanvasPosition,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AWhiteboardActor_Server_UpdateDrawing_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AWhiteboardActor_Server_UpdateDrawing_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AWhiteboardActor, nullptr, "Server_UpdateDrawing", Z_Construct_UFunction_AWhiteboardActor_Server_UpdateDrawing_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AWhiteboardActor_Server_UpdateDrawing_Statics::PropPointers), sizeof(WhiteboardActor_eventServer_UpdateDrawing_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00A20CC0, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AWhiteboardActor_Server_UpdateDrawing_Statics::Function_MetaDataParams), Z_Construct_UFunction_AWhiteboardActor_Server_UpdateDrawing_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(WhiteboardActor_eventServer_UpdateDrawing_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AWhiteboardActor_Server_UpdateDrawing()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AWhiteboardActor_Server_UpdateDrawing_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AWhiteboardActor::execServer_UpdateDrawing)
{
	P_GET_OBJECT(APawn,Z_Param_DrawingPlayer);
	P_GET_STRUCT(FVector2D,Z_Param_CanvasPosition);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Server_UpdateDrawing_Implementation(Z_Param_DrawingPlayer,Z_Param_CanvasPosition);
	P_NATIVE_END;
}
// ********** End Class AWhiteboardActor Function Server_UpdateDrawing *****************************

// ********** Begin Class AWhiteboardActor Function Server_UpdatePlayerDrawingState ****************
struct WhiteboardActor_eventServer_UpdatePlayerDrawingState_Parms
{
	APawn* Player;
	FPlayerDrawingState NewState;
};
static FName NAME_AWhiteboardActor_Server_UpdatePlayerDrawingState = FName(TEXT("Server_UpdatePlayerDrawingState"));
void AWhiteboardActor::Server_UpdatePlayerDrawingState(APawn* Player, FPlayerDrawingState const& NewState)
{
	WhiteboardActor_eventServer_UpdatePlayerDrawingState_Parms Parms;
	Parms.Player=Player;
	Parms.NewState=NewState;
	UFunction* Func = FindFunctionChecked(NAME_AWhiteboardActor_Server_UpdatePlayerDrawingState);
	ProcessEvent(Func,&Parms);
}
struct Z_Construct_UFunction_AWhiteboardActor_Server_UpdatePlayerDrawingState_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "//////////////////////////////////////////////////////////////////////////////\n///////////////////////////////// PLAYER TOOL CHANGE /////////////////////////\n/////////////////////////////////////////////////////////////////////////////\n" },
#endif
		{ "ModuleRelativePath", "Public/Actor/WhiteboardActor.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "PLAYER TOOL CHANGE /" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NewState_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Player;
	static const UECodeGen_Private::FStructPropertyParams NewProp_NewState;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AWhiteboardActor_Server_UpdatePlayerDrawingState_Statics::NewProp_Player = { "Player", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WhiteboardActor_eventServer_UpdatePlayerDrawingState_Parms, Player), Z_Construct_UClass_APawn_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AWhiteboardActor_Server_UpdatePlayerDrawingState_Statics::NewProp_NewState = { "NewState", nullptr, (EPropertyFlags)0x0010000008000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WhiteboardActor_eventServer_UpdatePlayerDrawingState_Parms, NewState), Z_Construct_UScriptStruct_FPlayerDrawingState, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NewState_MetaData), NewProp_NewState_MetaData) }; // 2209676374
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AWhiteboardActor_Server_UpdatePlayerDrawingState_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AWhiteboardActor_Server_UpdatePlayerDrawingState_Statics::NewProp_Player,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AWhiteboardActor_Server_UpdatePlayerDrawingState_Statics::NewProp_NewState,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AWhiteboardActor_Server_UpdatePlayerDrawingState_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AWhiteboardActor_Server_UpdatePlayerDrawingState_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AWhiteboardActor, nullptr, "Server_UpdatePlayerDrawingState", Z_Construct_UFunction_AWhiteboardActor_Server_UpdatePlayerDrawingState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AWhiteboardActor_Server_UpdatePlayerDrawingState_Statics::PropPointers), sizeof(WhiteboardActor_eventServer_UpdatePlayerDrawingState_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00220CC0, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AWhiteboardActor_Server_UpdatePlayerDrawingState_Statics::Function_MetaDataParams), Z_Construct_UFunction_AWhiteboardActor_Server_UpdatePlayerDrawingState_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(WhiteboardActor_eventServer_UpdatePlayerDrawingState_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AWhiteboardActor_Server_UpdatePlayerDrawingState()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AWhiteboardActor_Server_UpdatePlayerDrawingState_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AWhiteboardActor::execServer_UpdatePlayerDrawingState)
{
	P_GET_OBJECT(APawn,Z_Param_Player);
	P_GET_STRUCT(FPlayerDrawingState,Z_Param_NewState);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Server_UpdatePlayerDrawingState_Implementation(Z_Param_Player,Z_Param_NewState);
	P_NATIVE_END;
}
// ********** End Class AWhiteboardActor Function Server_UpdatePlayerDrawingState ******************

// ********** Begin Class AWhiteboardActor Function SetPlayerBrushSize *****************************
struct Z_Construct_UFunction_AWhiteboardActor_SetPlayerBrushSize_Statics
{
	struct WhiteboardActor_eventSetPlayerBrushSize_Parms
	{
		APawn* Player;
		float NewSize;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Whiteboard|Drawing Tools" },
		{ "ModuleRelativePath", "Public/Actor/WhiteboardActor.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Player;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_NewSize;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AWhiteboardActor_SetPlayerBrushSize_Statics::NewProp_Player = { "Player", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WhiteboardActor_eventSetPlayerBrushSize_Parms, Player), Z_Construct_UClass_APawn_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AWhiteboardActor_SetPlayerBrushSize_Statics::NewProp_NewSize = { "NewSize", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WhiteboardActor_eventSetPlayerBrushSize_Parms, NewSize), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AWhiteboardActor_SetPlayerBrushSize_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AWhiteboardActor_SetPlayerBrushSize_Statics::NewProp_Player,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AWhiteboardActor_SetPlayerBrushSize_Statics::NewProp_NewSize,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AWhiteboardActor_SetPlayerBrushSize_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AWhiteboardActor_SetPlayerBrushSize_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AWhiteboardActor, nullptr, "SetPlayerBrushSize", Z_Construct_UFunction_AWhiteboardActor_SetPlayerBrushSize_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AWhiteboardActor_SetPlayerBrushSize_Statics::PropPointers), sizeof(Z_Construct_UFunction_AWhiteboardActor_SetPlayerBrushSize_Statics::WhiteboardActor_eventSetPlayerBrushSize_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AWhiteboardActor_SetPlayerBrushSize_Statics::Function_MetaDataParams), Z_Construct_UFunction_AWhiteboardActor_SetPlayerBrushSize_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_AWhiteboardActor_SetPlayerBrushSize_Statics::WhiteboardActor_eventSetPlayerBrushSize_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AWhiteboardActor_SetPlayerBrushSize()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AWhiteboardActor_SetPlayerBrushSize_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AWhiteboardActor::execSetPlayerBrushSize)
{
	P_GET_OBJECT(APawn,Z_Param_Player);
	P_GET_PROPERTY(FFloatProperty,Z_Param_NewSize);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetPlayerBrushSize(Z_Param_Player,Z_Param_NewSize);
	P_NATIVE_END;
}
// ********** End Class AWhiteboardActor Function SetPlayerBrushSize *******************************

// ********** Begin Class AWhiteboardActor Function SetPlayerBrushTextureIndex *********************
struct Z_Construct_UFunction_AWhiteboardActor_SetPlayerBrushTextureIndex_Statics
{
	struct WhiteboardActor_eventSetPlayerBrushTextureIndex_Parms
	{
		APawn* Player;
		int32 TextureIndex;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Whiteboard|Drawing Tools" },
		{ "ModuleRelativePath", "Public/Actor/WhiteboardActor.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Player;
	static const UECodeGen_Private::FIntPropertyParams NewProp_TextureIndex;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AWhiteboardActor_SetPlayerBrushTextureIndex_Statics::NewProp_Player = { "Player", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WhiteboardActor_eventSetPlayerBrushTextureIndex_Parms, Player), Z_Construct_UClass_APawn_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AWhiteboardActor_SetPlayerBrushTextureIndex_Statics::NewProp_TextureIndex = { "TextureIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WhiteboardActor_eventSetPlayerBrushTextureIndex_Parms, TextureIndex), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AWhiteboardActor_SetPlayerBrushTextureIndex_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AWhiteboardActor_SetPlayerBrushTextureIndex_Statics::NewProp_Player,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AWhiteboardActor_SetPlayerBrushTextureIndex_Statics::NewProp_TextureIndex,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AWhiteboardActor_SetPlayerBrushTextureIndex_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AWhiteboardActor_SetPlayerBrushTextureIndex_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AWhiteboardActor, nullptr, "SetPlayerBrushTextureIndex", Z_Construct_UFunction_AWhiteboardActor_SetPlayerBrushTextureIndex_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AWhiteboardActor_SetPlayerBrushTextureIndex_Statics::PropPointers), sizeof(Z_Construct_UFunction_AWhiteboardActor_SetPlayerBrushTextureIndex_Statics::WhiteboardActor_eventSetPlayerBrushTextureIndex_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AWhiteboardActor_SetPlayerBrushTextureIndex_Statics::Function_MetaDataParams), Z_Construct_UFunction_AWhiteboardActor_SetPlayerBrushTextureIndex_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_AWhiteboardActor_SetPlayerBrushTextureIndex_Statics::WhiteboardActor_eventSetPlayerBrushTextureIndex_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AWhiteboardActor_SetPlayerBrushTextureIndex()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AWhiteboardActor_SetPlayerBrushTextureIndex_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AWhiteboardActor::execSetPlayerBrushTextureIndex)
{
	P_GET_OBJECT(APawn,Z_Param_Player);
	P_GET_PROPERTY(FIntProperty,Z_Param_TextureIndex);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetPlayerBrushTextureIndex(Z_Param_Player,Z_Param_TextureIndex);
	P_NATIVE_END;
}
// ********** End Class AWhiteboardActor Function SetPlayerBrushTextureIndex ***********************

// ********** Begin Class AWhiteboardActor Function SetPlayerColor *********************************
struct Z_Construct_UFunction_AWhiteboardActor_SetPlayerColor_Statics
{
	struct WhiteboardActor_eventSetPlayerColor_Parms
	{
		APawn* Player;
		FLinearColor NewColor;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Whiteboard|Drawing Tools" },
		{ "ModuleRelativePath", "Public/Actor/WhiteboardActor.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Player;
	static const UECodeGen_Private::FStructPropertyParams NewProp_NewColor;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AWhiteboardActor_SetPlayerColor_Statics::NewProp_Player = { "Player", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WhiteboardActor_eventSetPlayerColor_Parms, Player), Z_Construct_UClass_APawn_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AWhiteboardActor_SetPlayerColor_Statics::NewProp_NewColor = { "NewColor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WhiteboardActor_eventSetPlayerColor_Parms, NewColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AWhiteboardActor_SetPlayerColor_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AWhiteboardActor_SetPlayerColor_Statics::NewProp_Player,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AWhiteboardActor_SetPlayerColor_Statics::NewProp_NewColor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AWhiteboardActor_SetPlayerColor_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AWhiteboardActor_SetPlayerColor_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AWhiteboardActor, nullptr, "SetPlayerColor", Z_Construct_UFunction_AWhiteboardActor_SetPlayerColor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AWhiteboardActor_SetPlayerColor_Statics::PropPointers), sizeof(Z_Construct_UFunction_AWhiteboardActor_SetPlayerColor_Statics::WhiteboardActor_eventSetPlayerColor_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AWhiteboardActor_SetPlayerColor_Statics::Function_MetaDataParams), Z_Construct_UFunction_AWhiteboardActor_SetPlayerColor_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_AWhiteboardActor_SetPlayerColor_Statics::WhiteboardActor_eventSetPlayerColor_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AWhiteboardActor_SetPlayerColor()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AWhiteboardActor_SetPlayerColor_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AWhiteboardActor::execSetPlayerColor)
{
	P_GET_OBJECT(APawn,Z_Param_Player);
	P_GET_STRUCT(FLinearColor,Z_Param_NewColor);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetPlayerColor(Z_Param_Player,Z_Param_NewColor);
	P_NATIVE_END;
}
// ********** End Class AWhiteboardActor Function SetPlayerColor ***********************************

// ********** Begin Class AWhiteboardActor Function SetPlayerFigureTextureIndex ********************
struct Z_Construct_UFunction_AWhiteboardActor_SetPlayerFigureTextureIndex_Statics
{
	struct WhiteboardActor_eventSetPlayerFigureTextureIndex_Parms
	{
		APawn* Player;
		int32 TextureIndex;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Whiteboard|Drawing Tools" },
		{ "ModuleRelativePath", "Public/Actor/WhiteboardActor.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Player;
	static const UECodeGen_Private::FIntPropertyParams NewProp_TextureIndex;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AWhiteboardActor_SetPlayerFigureTextureIndex_Statics::NewProp_Player = { "Player", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WhiteboardActor_eventSetPlayerFigureTextureIndex_Parms, Player), Z_Construct_UClass_APawn_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AWhiteboardActor_SetPlayerFigureTextureIndex_Statics::NewProp_TextureIndex = { "TextureIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WhiteboardActor_eventSetPlayerFigureTextureIndex_Parms, TextureIndex), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AWhiteboardActor_SetPlayerFigureTextureIndex_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AWhiteboardActor_SetPlayerFigureTextureIndex_Statics::NewProp_Player,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AWhiteboardActor_SetPlayerFigureTextureIndex_Statics::NewProp_TextureIndex,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AWhiteboardActor_SetPlayerFigureTextureIndex_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AWhiteboardActor_SetPlayerFigureTextureIndex_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AWhiteboardActor, nullptr, "SetPlayerFigureTextureIndex", Z_Construct_UFunction_AWhiteboardActor_SetPlayerFigureTextureIndex_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AWhiteboardActor_SetPlayerFigureTextureIndex_Statics::PropPointers), sizeof(Z_Construct_UFunction_AWhiteboardActor_SetPlayerFigureTextureIndex_Statics::WhiteboardActor_eventSetPlayerFigureTextureIndex_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AWhiteboardActor_SetPlayerFigureTextureIndex_Statics::Function_MetaDataParams), Z_Construct_UFunction_AWhiteboardActor_SetPlayerFigureTextureIndex_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_AWhiteboardActor_SetPlayerFigureTextureIndex_Statics::WhiteboardActor_eventSetPlayerFigureTextureIndex_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AWhiteboardActor_SetPlayerFigureTextureIndex()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AWhiteboardActor_SetPlayerFigureTextureIndex_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AWhiteboardActor::execSetPlayerFigureTextureIndex)
{
	P_GET_OBJECT(APawn,Z_Param_Player);
	P_GET_PROPERTY(FIntProperty,Z_Param_TextureIndex);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetPlayerFigureTextureIndex(Z_Param_Player,Z_Param_TextureIndex);
	P_NATIVE_END;
}
// ********** End Class AWhiteboardActor Function SetPlayerFigureTextureIndex **********************

// ********** Begin Class AWhiteboardActor Function SetPlayerTextString ****************************
struct Z_Construct_UFunction_AWhiteboardActor_SetPlayerTextString_Statics
{
	struct WhiteboardActor_eventSetPlayerTextString_Parms
	{
		APawn* Player;
		FString NewTextString;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Whiteboard|Drawing Tools" },
		{ "ModuleRelativePath", "Public/Actor/WhiteboardActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NewTextString_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Player;
	static const UECodeGen_Private::FStrPropertyParams NewProp_NewTextString;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AWhiteboardActor_SetPlayerTextString_Statics::NewProp_Player = { "Player", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WhiteboardActor_eventSetPlayerTextString_Parms, Player), Z_Construct_UClass_APawn_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AWhiteboardActor_SetPlayerTextString_Statics::NewProp_NewTextString = { "NewTextString", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WhiteboardActor_eventSetPlayerTextString_Parms, NewTextString), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NewTextString_MetaData), NewProp_NewTextString_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AWhiteboardActor_SetPlayerTextString_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AWhiteboardActor_SetPlayerTextString_Statics::NewProp_Player,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AWhiteboardActor_SetPlayerTextString_Statics::NewProp_NewTextString,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AWhiteboardActor_SetPlayerTextString_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AWhiteboardActor_SetPlayerTextString_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AWhiteboardActor, nullptr, "SetPlayerTextString", Z_Construct_UFunction_AWhiteboardActor_SetPlayerTextString_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AWhiteboardActor_SetPlayerTextString_Statics::PropPointers), sizeof(Z_Construct_UFunction_AWhiteboardActor_SetPlayerTextString_Statics::WhiteboardActor_eventSetPlayerTextString_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AWhiteboardActor_SetPlayerTextString_Statics::Function_MetaDataParams), Z_Construct_UFunction_AWhiteboardActor_SetPlayerTextString_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_AWhiteboardActor_SetPlayerTextString_Statics::WhiteboardActor_eventSetPlayerTextString_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AWhiteboardActor_SetPlayerTextString()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AWhiteboardActor_SetPlayerTextString_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AWhiteboardActor::execSetPlayerTextString)
{
	P_GET_OBJECT(APawn,Z_Param_Player);
	P_GET_PROPERTY(FStrProperty,Z_Param_NewTextString);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetPlayerTextString(Z_Param_Player,Z_Param_NewTextString);
	P_NATIVE_END;
}
// ********** End Class AWhiteboardActor Function SetPlayerTextString ******************************

// ********** Begin Class AWhiteboardActor Function SetPlayerTool **********************************
struct Z_Construct_UFunction_AWhiteboardActor_SetPlayerTool_Statics
{
	struct WhiteboardActor_eventSetPlayerTool_Parms
	{
		EDrawingTool NewTool;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Whiteboard|Drawing Tools" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Set Drawing Tools For Specific Player\n" },
#endif
		{ "ModuleRelativePath", "Public/Actor/WhiteboardActor.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Set Drawing Tools For Specific Player" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_NewTool_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_NewTool;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AWhiteboardActor_SetPlayerTool_Statics::NewProp_NewTool_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_AWhiteboardActor_SetPlayerTool_Statics::NewProp_NewTool = { "NewTool", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WhiteboardActor_eventSetPlayerTool_Parms, NewTool), Z_Construct_UEnum_AdvancedDrawingBoard_EDrawingTool, METADATA_PARAMS(0, nullptr) }; // 3146191471
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AWhiteboardActor_SetPlayerTool_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AWhiteboardActor_SetPlayerTool_Statics::NewProp_NewTool_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AWhiteboardActor_SetPlayerTool_Statics::NewProp_NewTool,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AWhiteboardActor_SetPlayerTool_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AWhiteboardActor_SetPlayerTool_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AWhiteboardActor, nullptr, "SetPlayerTool", Z_Construct_UFunction_AWhiteboardActor_SetPlayerTool_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AWhiteboardActor_SetPlayerTool_Statics::PropPointers), sizeof(Z_Construct_UFunction_AWhiteboardActor_SetPlayerTool_Statics::WhiteboardActor_eventSetPlayerTool_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AWhiteboardActor_SetPlayerTool_Statics::Function_MetaDataParams), Z_Construct_UFunction_AWhiteboardActor_SetPlayerTool_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_AWhiteboardActor_SetPlayerTool_Statics::WhiteboardActor_eventSetPlayerTool_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AWhiteboardActor_SetPlayerTool()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AWhiteboardActor_SetPlayerTool_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AWhiteboardActor::execSetPlayerTool)
{
	P_GET_ENUM(EDrawingTool,Z_Param_NewTool);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetPlayerTool(EDrawingTool(Z_Param_NewTool));
	P_NATIVE_END;
}
// ********** End Class AWhiteboardActor Function SetPlayerTool ************************************

// ********** Begin Class AWhiteboardActor Function SetupInteractionUI *****************************
struct Z_Construct_UFunction_AWhiteboardActor_SetupInteractionUI_Statics
{
	struct WhiteboardActor_eventSetupInteractionUI_Parms
	{
		APawn* InteractingPlayer;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Actor/WhiteboardActor.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InteractingPlayer;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AWhiteboardActor_SetupInteractionUI_Statics::NewProp_InteractingPlayer = { "InteractingPlayer", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WhiteboardActor_eventSetupInteractionUI_Parms, InteractingPlayer), Z_Construct_UClass_APawn_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AWhiteboardActor_SetupInteractionUI_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AWhiteboardActor_SetupInteractionUI_Statics::NewProp_InteractingPlayer,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AWhiteboardActor_SetupInteractionUI_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AWhiteboardActor_SetupInteractionUI_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AWhiteboardActor, nullptr, "SetupInteractionUI", Z_Construct_UFunction_AWhiteboardActor_SetupInteractionUI_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AWhiteboardActor_SetupInteractionUI_Statics::PropPointers), sizeof(Z_Construct_UFunction_AWhiteboardActor_SetupInteractionUI_Statics::WhiteboardActor_eventSetupInteractionUI_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AWhiteboardActor_SetupInteractionUI_Statics::Function_MetaDataParams), Z_Construct_UFunction_AWhiteboardActor_SetupInteractionUI_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_AWhiteboardActor_SetupInteractionUI_Statics::WhiteboardActor_eventSetupInteractionUI_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AWhiteboardActor_SetupInteractionUI()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AWhiteboardActor_SetupInteractionUI_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AWhiteboardActor::execSetupInteractionUI)
{
	P_GET_OBJECT(APawn,Z_Param_InteractingPlayer);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetupInteractionUI(Z_Param_InteractingPlayer);
	P_NATIVE_END;
}
// ********** End Class AWhiteboardActor Function SetupInteractionUI *******************************

// ********** Begin Class AWhiteboardActor Function StartInteraction *******************************
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
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AWhiteboardActor_StartInteraction_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AWhiteboardActor, nullptr, "StartInteraction", Z_Construct_UFunction_AWhiteboardActor_StartInteraction_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AWhiteboardActor_StartInteraction_Statics::PropPointers), sizeof(Z_Construct_UFunction_AWhiteboardActor_StartInteraction_Statics::WhiteboardActor_eventStartInteraction_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AWhiteboardActor_StartInteraction_Statics::Function_MetaDataParams), Z_Construct_UFunction_AWhiteboardActor_StartInteraction_Statics::Function_MetaDataParams)},  };
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
// ********** End Class AWhiteboardActor Function StartInteraction *********************************

// ********** Begin Class AWhiteboardActor Function SyncWhiteboardState ****************************
struct Z_Construct_UFunction_AWhiteboardActor_SyncWhiteboardState_Statics
{
	struct WhiteboardActor_eventSyncWhiteboardState_Parms
	{
		TArray<FStroke> History;
		int32 HistoryIndex;
	};
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
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AWhiteboardActor_SyncWhiteboardState_Statics::NewProp_History_Inner = { "History", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FStroke, METADATA_PARAMS(0, nullptr) }; // 2672491957
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_AWhiteboardActor_SyncWhiteboardState_Statics::NewProp_History = { "History", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WhiteboardActor_eventSyncWhiteboardState_Parms, History), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_History_MetaData), NewProp_History_MetaData) }; // 2672491957
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AWhiteboardActor_SyncWhiteboardState_Statics::NewProp_HistoryIndex = { "HistoryIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WhiteboardActor_eventSyncWhiteboardState_Parms, HistoryIndex), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AWhiteboardActor_SyncWhiteboardState_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AWhiteboardActor_SyncWhiteboardState_Statics::NewProp_History_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AWhiteboardActor_SyncWhiteboardState_Statics::NewProp_History,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AWhiteboardActor_SyncWhiteboardState_Statics::NewProp_HistoryIndex,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AWhiteboardActor_SyncWhiteboardState_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AWhiteboardActor_SyncWhiteboardState_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AWhiteboardActor, nullptr, "SyncWhiteboardState", Z_Construct_UFunction_AWhiteboardActor_SyncWhiteboardState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AWhiteboardActor_SyncWhiteboardState_Statics::PropPointers), sizeof(Z_Construct_UFunction_AWhiteboardActor_SyncWhiteboardState_Statics::WhiteboardActor_eventSyncWhiteboardState_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AWhiteboardActor_SyncWhiteboardState_Statics::Function_MetaDataParams), Z_Construct_UFunction_AWhiteboardActor_SyncWhiteboardState_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_AWhiteboardActor_SyncWhiteboardState_Statics::WhiteboardActor_eventSyncWhiteboardState_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AWhiteboardActor_SyncWhiteboardState()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AWhiteboardActor_SyncWhiteboardState_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AWhiteboardActor::execSyncWhiteboardState)
{
	P_GET_TARRAY_REF(FStroke,Z_Param_Out_History);
	P_GET_PROPERTY(FIntProperty,Z_Param_HistoryIndex);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SyncWhiteboardState(Z_Param_Out_History,Z_Param_HistoryIndex);
	P_NATIVE_END;
}
// ********** End Class AWhiteboardActor Function SyncWhiteboardState ******************************

// ********** Begin Class AWhiteboardActor Function Undo *******************************************
struct Z_Construct_UFunction_AWhiteboardActor_Undo_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Whiteboard|Drawing Tools" },
		{ "ModuleRelativePath", "Public/Actor/WhiteboardActor.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AWhiteboardActor_Undo_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AWhiteboardActor, nullptr, "Undo", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AWhiteboardActor_Undo_Statics::Function_MetaDataParams), Z_Construct_UFunction_AWhiteboardActor_Undo_Statics::Function_MetaDataParams)},  };
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
// ********** End Class AWhiteboardActor Function Undo *********************************************

// ********** Begin Class AWhiteboardActor Function UpdatePlayerDrawingState ***********************
struct Z_Construct_UFunction_AWhiteboardActor_UpdatePlayerDrawingState_Statics
{
	struct WhiteboardActor_eventUpdatePlayerDrawingState_Parms
	{
		APawn* Player;
		FPlayerDrawingState NewState;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Whiteboard|Drawing Tools" },
		{ "ModuleRelativePath", "Public/Actor/WhiteboardActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NewState_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Player;
	static const UECodeGen_Private::FStructPropertyParams NewProp_NewState;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AWhiteboardActor_UpdatePlayerDrawingState_Statics::NewProp_Player = { "Player", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WhiteboardActor_eventUpdatePlayerDrawingState_Parms, Player), Z_Construct_UClass_APawn_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AWhiteboardActor_UpdatePlayerDrawingState_Statics::NewProp_NewState = { "NewState", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WhiteboardActor_eventUpdatePlayerDrawingState_Parms, NewState), Z_Construct_UScriptStruct_FPlayerDrawingState, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NewState_MetaData), NewProp_NewState_MetaData) }; // 2209676374
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AWhiteboardActor_UpdatePlayerDrawingState_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AWhiteboardActor_UpdatePlayerDrawingState_Statics::NewProp_Player,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AWhiteboardActor_UpdatePlayerDrawingState_Statics::NewProp_NewState,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AWhiteboardActor_UpdatePlayerDrawingState_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AWhiteboardActor_UpdatePlayerDrawingState_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AWhiteboardActor, nullptr, "UpdatePlayerDrawingState", Z_Construct_UFunction_AWhiteboardActor_UpdatePlayerDrawingState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AWhiteboardActor_UpdatePlayerDrawingState_Statics::PropPointers), sizeof(Z_Construct_UFunction_AWhiteboardActor_UpdatePlayerDrawingState_Statics::WhiteboardActor_eventUpdatePlayerDrawingState_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AWhiteboardActor_UpdatePlayerDrawingState_Statics::Function_MetaDataParams), Z_Construct_UFunction_AWhiteboardActor_UpdatePlayerDrawingState_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_AWhiteboardActor_UpdatePlayerDrawingState_Statics::WhiteboardActor_eventUpdatePlayerDrawingState_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AWhiteboardActor_UpdatePlayerDrawingState()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AWhiteboardActor_UpdatePlayerDrawingState_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AWhiteboardActor::execUpdatePlayerDrawingState)
{
	P_GET_OBJECT(APawn,Z_Param_Player);
	P_GET_STRUCT_REF(FPlayerDrawingState,Z_Param_Out_NewState);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->UpdatePlayerDrawingState(Z_Param_Player,Z_Param_Out_NewState);
	P_NATIVE_END;
}
// ********** End Class AWhiteboardActor Function UpdatePlayerDrawingState *************************

// ********** Begin Class AWhiteboardActor Function WorldToCanvasPosition **************************
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
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AWhiteboardActor_WorldToCanvasPosition_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AWhiteboardActor, nullptr, "WorldToCanvasPosition", Z_Construct_UFunction_AWhiteboardActor_WorldToCanvasPosition_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AWhiteboardActor_WorldToCanvasPosition_Statics::PropPointers), sizeof(Z_Construct_UFunction_AWhiteboardActor_WorldToCanvasPosition_Statics::WhiteboardActor_eventWorldToCanvasPosition_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54C20401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AWhiteboardActor_WorldToCanvasPosition_Statics::Function_MetaDataParams), Z_Construct_UFunction_AWhiteboardActor_WorldToCanvasPosition_Statics::Function_MetaDataParams)},  };
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
// ********** End Class AWhiteboardActor Function WorldToCanvasPosition ****************************

// ********** Begin Class AWhiteboardActor *********************************************************
void AWhiteboardActor::StaticRegisterNativesAWhiteboardActor()
{
	UClass* Class = AWhiteboardActor::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "CanAcceptMorePlayers", &AWhiteboardActor::execCanAcceptMorePlayers },
		{ "CanClientDraw", &AWhiteboardActor::execCanClientDraw },
		{ "CanInteractLocally", &AWhiteboardActor::execCanInteractLocally },
		{ "CanPlayerInteract", &AWhiteboardActor::execCanPlayerInteract },
		{ "CleanupInteractionUI", &AWhiteboardActor::execCleanupInteractionUI },
		{ "ClearWhiteboard", &AWhiteboardActor::execClearWhiteboard },
		{ "Client_CleanupInteractionUI", &AWhiteboardActor::execClient_CleanupInteractionUI },
		{ "Client_InitializeCanvases", &AWhiteboardActor::execClient_InitializeCanvases },
		{ "Client_SetupInteractionUI", &AWhiteboardActor::execClient_SetupInteractionUI },
		{ "Client_SyncWhiteboardState", &AWhiteboardActor::execClient_SyncWhiteboardState },
		{ "ClientStartDrawing", &AWhiteboardActor::execClientStartDrawing },
		{ "DebugNetworkState", &AWhiteboardActor::execDebugNetworkState },
		{ "DebugPlayerToolState", &AWhiteboardActor::execDebugPlayerToolState },
		{ "DrawFigure", &AWhiteboardActor::execDrawFigure },
		{ "EndInteraction", &AWhiteboardActor::execEndInteraction },
		{ "EndInteractionForPlayer", &AWhiteboardActor::execEndInteractionForPlayer },
		{ "ExportToPNG", &AWhiteboardActor::execExportToPNG },
		{ "ExportToSVG", &AWhiteboardActor::execExportToSVG },
		{ "GetBrushSize", &AWhiteboardActor::execGetBrushSize },
		{ "GetCanvasHeight", &AWhiteboardActor::execGetCanvasHeight },
		{ "GetCanvasWidth", &AWhiteboardActor::execGetCanvasWidth },
		{ "GetCurrentColor", &AWhiteboardActor::execGetCurrentColor },
		{ "GetCurrentTextString", &AWhiteboardActor::execGetCurrentTextString },
		{ "GetCurrentTool", &AWhiteboardActor::execGetCurrentTool },
		{ "GetInteractingPlayerCount", &AWhiteboardActor::execGetInteractingPlayerCount },
		{ "GetPlayerDrawingState", &AWhiteboardActor::execGetPlayerDrawingState },
		{ "GetSelectedBrushTextureIndex", &AWhiteboardActor::execGetSelectedBrushTextureIndex },
		{ "GetSelectedFigureTextureIndex", &AWhiteboardActor::execGetSelectedFigureTextureIndex },
		{ "GetWhiteboardCamera", &AWhiteboardActor::execGetWhiteboardCamera },
		{ "GetWhiteboardMesh", &AWhiteboardActor::execGetWhiteboardMesh },
		{ "InitializeWhiteboard", &AWhiteboardActor::execInitializeWhiteboard },
		{ "IsPlayerInRange", &AWhiteboardActor::execIsPlayerInRange },
		{ "IsPlayerInteracting", &AWhiteboardActor::execIsPlayerInteracting },
		{ "IsShapeTool", &AWhiteboardActor::execIsShapeTool },
		{ "Multicast_ClearWhiteboard", &AWhiteboardActor::execMulticast_ClearWhiteboard },
		{ "Multicast_DrawStroke", &AWhiteboardActor::execMulticast_DrawStroke },
		{ "Multicast_EndDrawing", &AWhiteboardActor::execMulticast_EndDrawing },
		{ "Multicast_ForceClientInitialization", &AWhiteboardActor::execMulticast_ForceClientInitialization },
		{ "Multicast_StartDrawing", &AWhiteboardActor::execMulticast_StartDrawing },
		{ "Multicast_SyncWhiteboardState", &AWhiteboardActor::execMulticast_SyncWhiteboardState },
		{ "Multicast_UpdateDrawing", &AWhiteboardActor::execMulticast_UpdateDrawing },
		{ "Multicast_UpdateDrawingCanvas", &AWhiteboardActor::execMulticast_UpdateDrawingCanvas },
		{ "Multicast_UpdateHistory", &AWhiteboardActor::execMulticast_UpdateHistory },
		{ "Multicast_UpdatePlayerToolState", &AWhiteboardActor::execMulticast_UpdatePlayerToolState },
		{ "Multicast_UpdateShapePreview", &AWhiteboardActor::execMulticast_UpdateShapePreview },
		{ "OnRep_DrawingCanvas", &AWhiteboardActor::execOnRep_DrawingCanvas },
		{ "OnRep_InteractingPawns", &AWhiteboardActor::execOnRep_InteractingPawns },
		{ "OnRep_PlayerDrawingStates", &AWhiteboardActor::execOnRep_PlayerDrawingStates },
		{ "OnRep_StrokeHistory", &AWhiteboardActor::execOnRep_StrokeHistory },
		{ "OnTriggerBeginOverlap", &AWhiteboardActor::execOnTriggerBeginOverlap },
		{ "OnTriggerEndOverlap", &AWhiteboardActor::execOnTriggerEndOverlap },
		{ "PlayerEndDrawing", &AWhiteboardActor::execPlayerEndDrawing },
		{ "PlayerStartDrawing", &AWhiteboardActor::execPlayerStartDrawing },
		{ "PlayerUpdateDrawing", &AWhiteboardActor::execPlayerUpdateDrawing },
		{ "Redo", &AWhiteboardActor::execRedo },
		{ "RemoveInteractingPlayer", &AWhiteboardActor::execRemoveInteractingPlayer },
		{ "RequestEndInteraction", &AWhiteboardActor::execRequestEndInteraction },
		{ "RequestInteraction", &AWhiteboardActor::execRequestInteraction },
		{ "Server_ClearWhiteboard", &AWhiteboardActor::execServer_ClearWhiteboard },
		{ "Server_DrawFigure", &AWhiteboardActor::execServer_DrawFigure },
		{ "Server_EndDrawing", &AWhiteboardActor::execServer_EndDrawing },
		{ "Server_Redo", &AWhiteboardActor::execServer_Redo },
		{ "Server_RequestCanvasInitialization", &AWhiteboardActor::execServer_RequestCanvasInitialization },
		{ "Server_StartDrawing", &AWhiteboardActor::execServer_StartDrawing },
		{ "Server_Undo", &AWhiteboardActor::execServer_Undo },
		{ "Server_UpdateDrawing", &AWhiteboardActor::execServer_UpdateDrawing },
		{ "Server_UpdatePlayerDrawingState", &AWhiteboardActor::execServer_UpdatePlayerDrawingState },
		{ "SetPlayerBrushSize", &AWhiteboardActor::execSetPlayerBrushSize },
		{ "SetPlayerBrushTextureIndex", &AWhiteboardActor::execSetPlayerBrushTextureIndex },
		{ "SetPlayerColor", &AWhiteboardActor::execSetPlayerColor },
		{ "SetPlayerFigureTextureIndex", &AWhiteboardActor::execSetPlayerFigureTextureIndex },
		{ "SetPlayerTextString", &AWhiteboardActor::execSetPlayerTextString },
		{ "SetPlayerTool", &AWhiteboardActor::execSetPlayerTool },
		{ "SetupInteractionUI", &AWhiteboardActor::execSetupInteractionUI },
		{ "StartInteraction", &AWhiteboardActor::execStartInteraction },
		{ "SyncWhiteboardState", &AWhiteboardActor::execSyncWhiteboardState },
		{ "Undo", &AWhiteboardActor::execUndo },
		{ "UpdatePlayerDrawingState", &AWhiteboardActor::execUpdatePlayerDrawingState },
		{ "WorldToCanvasPosition", &AWhiteboardActor::execWorldToCanvasPosition },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_AWhiteboardActor;
UClass* AWhiteboardActor::GetPrivateStaticClass()
{
	using TClass = AWhiteboardActor;
	if (!Z_Registration_Info_UClass_AWhiteboardActor.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("WhiteboardActor"),
			Z_Registration_Info_UClass_AWhiteboardActor.InnerSingleton,
			StaticRegisterNativesAWhiteboardActor,
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
	return Z_Registration_Info_UClass_AWhiteboardActor.InnerSingleton;
}
UClass* Z_Construct_UClass_AWhiteboardActor_NoRegister()
{
	return AWhiteboardActor::GetPrivateStaticClass();
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
		{ "Comment", "///////////////////////// ACTOR COMPONENTS //////////////////////////////\n" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Actor/WhiteboardActor.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "/ ACTOR COMPONENTS" },
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
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsInitialized_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "//////////////////////////////////////////////////////////////////////////////\n//////////////////////////// Initialize Whiteboard ///////////////////////////\n/////////////////////////////////////////////////////////////////////////////////\n" },
#endif
		{ "ModuleRelativePath", "Public/Actor/WhiteboardActor.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "/ Initialize Whiteboard" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InitMaterialIndex_MetaData[] = {
		{ "Category", "Drawing" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "///////////////////////// WHITEBOARD PROPERTIES //////////////////////////////\n" },
#endif
		{ "ModuleRelativePath", "Public/Actor/WhiteboardActor.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "/ WHITEBOARD PROPERTIES" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DrawingCanvas_MetaData[] = {
		{ "ModuleRelativePath", "Public/Actor/WhiteboardActor.h" },
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
		{ "Comment", "///////////////////////// WHITEBOARD DIMENSION //////////////////////////////\n" },
#endif
		{ "ModuleRelativePath", "Public/Actor/WhiteboardActor.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "/ WHITEBOARD DIMENSION" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WhiteboardHeight_MetaData[] = {
		{ "Category", "Whiteboard" },
		{ "ModuleRelativePath", "Public/Actor/WhiteboardActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BrushTextures_MetaData[] = {
		{ "Category", "Drawing" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "///////////////////////// DRAWING PROPERTIES //////////////////////////////\n" },
#endif
		{ "ModuleRelativePath", "Public/Actor/WhiteboardActor.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "/ DRAWING PROPERTIES" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FigureTextures_MetaData[] = {
		{ "Category", "Drawing" },
		{ "ModuleRelativePath", "Public/Actor/WhiteboardActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PlayerDrawingStates_MetaData[] = {
		{ "Category", "Drawing" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Add proper replication for player states\n" },
#endif
		{ "ModuleRelativePath", "Public/Actor/WhiteboardActor.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Add proper replication for player states" },
#endif
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
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ClientPredictedStrokes_MetaData[] = {
		{ "ModuleRelativePath", "Public/Actor/WhiteboardActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ActiveStrokes_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Current active strokes per player\n" },
#endif
		{ "ModuleRelativePath", "Public/Actor/WhiteboardActor.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Current active strokes per player" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PlayerShapeDrawingStates_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Shape drawing state per player\n" },
#endif
		{ "ModuleRelativePath", "Public/Actor/WhiteboardActor.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Shape drawing state per player" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LocalPlayerStatesCache_MetaData[] = {
		{ "ModuleRelativePath", "Public/Actor/WhiteboardActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurrentStrokes_MetaData[] = {
		{ "ModuleRelativePath", "Public/Actor/WhiteboardActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PlayerDrawingShapes_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Shape drawing state per player\n" },
#endif
		{ "ModuleRelativePath", "Public/Actor/WhiteboardActor.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Shape drawing state per player" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WhiteboardMesh;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InteractionVolume;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WhiteboardCamera;
	static void NewProp_bIsInitialized_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsInitialized;
	static const UECodeGen_Private::FIntPropertyParams NewProp_InitMaterialIndex;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DrawingCanvas;
	static const UECodeGen_Private::FIntPropertyParams NewProp_CanvasWidth;
	static const UECodeGen_Private::FIntPropertyParams NewProp_CanvasHeight;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_InteractionDistance;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_WhiteboardWidth;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_WhiteboardHeight;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_BrushTextures_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_BrushTextures;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_FigureTextures_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_FigureTextures;
	static const UECodeGen_Private::FStructPropertyParams NewProp_PlayerDrawingStates_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_PlayerDrawingStates;
	static const UECodeGen_Private::FStructPropertyParams NewProp_StrokeHistory_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_StrokeHistory;
	static const UECodeGen_Private::FIntPropertyParams NewProp_CurrentHistoryIndex;
	static const UECodeGen_Private::FIntPropertyParams NewProp_NextStrokeID;
	static void NewProp_bCanInteract_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bCanInteract;
	static const UECodeGen_Private::FIntPropertyParams NewProp_MaxInteractingPlayers;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InteractingPawns_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_InteractingPawns;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ClientPredictedStrokes_ValueProp;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ClientPredictedStrokes_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_ClientPredictedStrokes;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ActiveStrokes_ValueProp;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ActiveStrokes_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_ActiveStrokes;
	static const UECodeGen_Private::FBoolPropertyParams NewProp_PlayerShapeDrawingStates_ValueProp;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PlayerShapeDrawingStates_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_PlayerShapeDrawingStates;
	static const UECodeGen_Private::FStructPropertyParams NewProp_LocalPlayerStatesCache_ValueProp;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_LocalPlayerStatesCache_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_LocalPlayerStatesCache;
	static const UECodeGen_Private::FStructPropertyParams NewProp_CurrentStrokes_ValueProp;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CurrentStrokes_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_CurrentStrokes;
	static const UECodeGen_Private::FBoolPropertyParams NewProp_PlayerDrawingShapes_ValueProp;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PlayerDrawingShapes_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_PlayerDrawingShapes;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_AWhiteboardActor_CanAcceptMorePlayers, "CanAcceptMorePlayers" }, // 711054184
		{ &Z_Construct_UFunction_AWhiteboardActor_CanClientDraw, "CanClientDraw" }, // 235298270
		{ &Z_Construct_UFunction_AWhiteboardActor_CanInteractLocally, "CanInteractLocally" }, // 2955333244
		{ &Z_Construct_UFunction_AWhiteboardActor_CanPlayerInteract, "CanPlayerInteract" }, // 25843174
		{ &Z_Construct_UFunction_AWhiteboardActor_CleanupInteractionUI, "CleanupInteractionUI" }, // 483936319
		{ &Z_Construct_UFunction_AWhiteboardActor_ClearWhiteboard, "ClearWhiteboard" }, // 1892569384
		{ &Z_Construct_UFunction_AWhiteboardActor_Client_CleanupInteractionUI, "Client_CleanupInteractionUI" }, // 3218440281
		{ &Z_Construct_UFunction_AWhiteboardActor_Client_InitializeCanvases, "Client_InitializeCanvases" }, // 1639213046
		{ &Z_Construct_UFunction_AWhiteboardActor_Client_SetupInteractionUI, "Client_SetupInteractionUI" }, // 652768882
		{ &Z_Construct_UFunction_AWhiteboardActor_Client_SyncWhiteboardState, "Client_SyncWhiteboardState" }, // 1164782776
		{ &Z_Construct_UFunction_AWhiteboardActor_ClientStartDrawing, "ClientStartDrawing" }, // 1586725453
		{ &Z_Construct_UFunction_AWhiteboardActor_DebugNetworkState, "DebugNetworkState" }, // 324981643
		{ &Z_Construct_UFunction_AWhiteboardActor_DebugPlayerToolState, "DebugPlayerToolState" }, // 3424652226
		{ &Z_Construct_UFunction_AWhiteboardActor_DrawFigure, "DrawFigure" }, // 1810216881
		{ &Z_Construct_UFunction_AWhiteboardActor_EndInteraction, "EndInteraction" }, // 3982744336
		{ &Z_Construct_UFunction_AWhiteboardActor_EndInteractionForPlayer, "EndInteractionForPlayer" }, // 2006991637
		{ &Z_Construct_UFunction_AWhiteboardActor_ExportToPNG, "ExportToPNG" }, // 1566915720
		{ &Z_Construct_UFunction_AWhiteboardActor_ExportToSVG, "ExportToSVG" }, // 3057465167
		{ &Z_Construct_UFunction_AWhiteboardActor_GetBrushSize, "GetBrushSize" }, // 2848556706
		{ &Z_Construct_UFunction_AWhiteboardActor_GetCanvasHeight, "GetCanvasHeight" }, // 61114837
		{ &Z_Construct_UFunction_AWhiteboardActor_GetCanvasWidth, "GetCanvasWidth" }, // 2624620493
		{ &Z_Construct_UFunction_AWhiteboardActor_GetCurrentColor, "GetCurrentColor" }, // 2834176765
		{ &Z_Construct_UFunction_AWhiteboardActor_GetCurrentTextString, "GetCurrentTextString" }, // 3633356088
		{ &Z_Construct_UFunction_AWhiteboardActor_GetCurrentTool, "GetCurrentTool" }, // 637741996
		{ &Z_Construct_UFunction_AWhiteboardActor_GetInteractingPlayerCount, "GetInteractingPlayerCount" }, // 3321050753
		{ &Z_Construct_UFunction_AWhiteboardActor_GetPlayerDrawingState, "GetPlayerDrawingState" }, // 2388905884
		{ &Z_Construct_UFunction_AWhiteboardActor_GetSelectedBrushTextureIndex, "GetSelectedBrushTextureIndex" }, // 3027744681
		{ &Z_Construct_UFunction_AWhiteboardActor_GetSelectedFigureTextureIndex, "GetSelectedFigureTextureIndex" }, // 1228395029
		{ &Z_Construct_UFunction_AWhiteboardActor_GetWhiteboardCamera, "GetWhiteboardCamera" }, // 3966439677
		{ &Z_Construct_UFunction_AWhiteboardActor_GetWhiteboardMesh, "GetWhiteboardMesh" }, // 1725150247
		{ &Z_Construct_UFunction_AWhiteboardActor_InitializeWhiteboard, "InitializeWhiteboard" }, // 1439900471
		{ &Z_Construct_UFunction_AWhiteboardActor_IsPlayerInRange, "IsPlayerInRange" }, // 1936910934
		{ &Z_Construct_UFunction_AWhiteboardActor_IsPlayerInteracting, "IsPlayerInteracting" }, // 1748126187
		{ &Z_Construct_UFunction_AWhiteboardActor_IsShapeTool, "IsShapeTool" }, // 2506256348
		{ &Z_Construct_UFunction_AWhiteboardActor_Multicast_ClearWhiteboard, "Multicast_ClearWhiteboard" }, // 2996873633
		{ &Z_Construct_UFunction_AWhiteboardActor_Multicast_DrawStroke, "Multicast_DrawStroke" }, // 2861147542
		{ &Z_Construct_UFunction_AWhiteboardActor_Multicast_EndDrawing, "Multicast_EndDrawing" }, // 575747389
		{ &Z_Construct_UFunction_AWhiteboardActor_Multicast_ForceClientInitialization, "Multicast_ForceClientInitialization" }, // 2305724847
		{ &Z_Construct_UFunction_AWhiteboardActor_Multicast_StartDrawing, "Multicast_StartDrawing" }, // 1175965257
		{ &Z_Construct_UFunction_AWhiteboardActor_Multicast_SyncWhiteboardState, "Multicast_SyncWhiteboardState" }, // 616716704
		{ &Z_Construct_UFunction_AWhiteboardActor_Multicast_UpdateDrawing, "Multicast_UpdateDrawing" }, // 3505603778
		{ &Z_Construct_UFunction_AWhiteboardActor_Multicast_UpdateDrawingCanvas, "Multicast_UpdateDrawingCanvas" }, // 924386014
		{ &Z_Construct_UFunction_AWhiteboardActor_Multicast_UpdateHistory, "Multicast_UpdateHistory" }, // 4000237222
		{ &Z_Construct_UFunction_AWhiteboardActor_Multicast_UpdatePlayerToolState, "Multicast_UpdatePlayerToolState" }, // 642411294
		{ &Z_Construct_UFunction_AWhiteboardActor_Multicast_UpdateShapePreview, "Multicast_UpdateShapePreview" }, // 2398612739
		{ &Z_Construct_UFunction_AWhiteboardActor_OnInteractionEnded, "OnInteractionEnded" }, // 1479386912
		{ &Z_Construct_UFunction_AWhiteboardActor_OnInteractionStarted, "OnInteractionStarted" }, // 3404679221
		{ &Z_Construct_UFunction_AWhiteboardActor_OnPlayerEnteredRange, "OnPlayerEnteredRange" }, // 2295688453
		{ &Z_Construct_UFunction_AWhiteboardActor_OnPlayerExitedRange, "OnPlayerExitedRange" }, // 1642070895
		{ &Z_Construct_UFunction_AWhiteboardActor_OnRep_DrawingCanvas, "OnRep_DrawingCanvas" }, // 3677715125
		{ &Z_Construct_UFunction_AWhiteboardActor_OnRep_InteractingPawns, "OnRep_InteractingPawns" }, // 3506982468
		{ &Z_Construct_UFunction_AWhiteboardActor_OnRep_PlayerDrawingStates, "OnRep_PlayerDrawingStates" }, // 679145298
		{ &Z_Construct_UFunction_AWhiteboardActor_OnRep_StrokeHistory, "OnRep_StrokeHistory" }, // 1662485597
		{ &Z_Construct_UFunction_AWhiteboardActor_OnTriggerBeginOverlap, "OnTriggerBeginOverlap" }, // 2111615363
		{ &Z_Construct_UFunction_AWhiteboardActor_OnTriggerEndOverlap, "OnTriggerEndOverlap" }, // 1527792465
		{ &Z_Construct_UFunction_AWhiteboardActor_PlayerEndDrawing, "PlayerEndDrawing" }, // 2454277402
		{ &Z_Construct_UFunction_AWhiteboardActor_PlayerStartDrawing, "PlayerStartDrawing" }, // 2449270522
		{ &Z_Construct_UFunction_AWhiteboardActor_PlayerUpdateDrawing, "PlayerUpdateDrawing" }, // 3716712636
		{ &Z_Construct_UFunction_AWhiteboardActor_Redo, "Redo" }, // 320893797
		{ &Z_Construct_UFunction_AWhiteboardActor_RemoveInteractingPlayer, "RemoveInteractingPlayer" }, // 3889334613
		{ &Z_Construct_UFunction_AWhiteboardActor_RequestEndInteraction, "RequestEndInteraction" }, // 2824245837
		{ &Z_Construct_UFunction_AWhiteboardActor_RequestInteraction, "RequestInteraction" }, // 86993721
		{ &Z_Construct_UFunction_AWhiteboardActor_Server_ClearWhiteboard, "Server_ClearWhiteboard" }, // 3415553987
		{ &Z_Construct_UFunction_AWhiteboardActor_Server_DrawFigure, "Server_DrawFigure" }, // 1363781481
		{ &Z_Construct_UFunction_AWhiteboardActor_Server_EndDrawing, "Server_EndDrawing" }, // 2370355601
		{ &Z_Construct_UFunction_AWhiteboardActor_Server_Redo, "Server_Redo" }, // 1849145248
		{ &Z_Construct_UFunction_AWhiteboardActor_Server_RequestCanvasInitialization, "Server_RequestCanvasInitialization" }, // 342196084
		{ &Z_Construct_UFunction_AWhiteboardActor_Server_StartDrawing, "Server_StartDrawing" }, // 4028445276
		{ &Z_Construct_UFunction_AWhiteboardActor_Server_Undo, "Server_Undo" }, // 327139181
		{ &Z_Construct_UFunction_AWhiteboardActor_Server_UpdateDrawing, "Server_UpdateDrawing" }, // 3168687431
		{ &Z_Construct_UFunction_AWhiteboardActor_Server_UpdatePlayerDrawingState, "Server_UpdatePlayerDrawingState" }, // 1815234416
		{ &Z_Construct_UFunction_AWhiteboardActor_SetPlayerBrushSize, "SetPlayerBrushSize" }, // 666497426
		{ &Z_Construct_UFunction_AWhiteboardActor_SetPlayerBrushTextureIndex, "SetPlayerBrushTextureIndex" }, // 498704919
		{ &Z_Construct_UFunction_AWhiteboardActor_SetPlayerColor, "SetPlayerColor" }, // 358506416
		{ &Z_Construct_UFunction_AWhiteboardActor_SetPlayerFigureTextureIndex, "SetPlayerFigureTextureIndex" }, // 2081430415
		{ &Z_Construct_UFunction_AWhiteboardActor_SetPlayerTextString, "SetPlayerTextString" }, // 3329864089
		{ &Z_Construct_UFunction_AWhiteboardActor_SetPlayerTool, "SetPlayerTool" }, // 1516747299
		{ &Z_Construct_UFunction_AWhiteboardActor_SetupInteractionUI, "SetupInteractionUI" }, // 4001457725
		{ &Z_Construct_UFunction_AWhiteboardActor_StartInteraction, "StartInteraction" }, // 2393937586
		{ &Z_Construct_UFunction_AWhiteboardActor_SyncWhiteboardState, "SyncWhiteboardState" }, // 2327494464
		{ &Z_Construct_UFunction_AWhiteboardActor_Undo, "Undo" }, // 3525181436
		{ &Z_Construct_UFunction_AWhiteboardActor_UpdatePlayerDrawingState, "UpdatePlayerDrawingState" }, // 3643279487
		{ &Z_Construct_UFunction_AWhiteboardActor_WorldToCanvasPosition, "WorldToCanvasPosition" }, // 3068999171
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
void Z_Construct_UClass_AWhiteboardActor_Statics::NewProp_bIsInitialized_SetBit(void* Obj)
{
	((AWhiteboardActor*)Obj)->bIsInitialized = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AWhiteboardActor_Statics::NewProp_bIsInitialized = { "bIsInitialized", nullptr, (EPropertyFlags)0x0010000000000020, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AWhiteboardActor), &Z_Construct_UClass_AWhiteboardActor_Statics::NewProp_bIsInitialized_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsInitialized_MetaData), NewProp_bIsInitialized_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AWhiteboardActor_Statics::NewProp_InitMaterialIndex = { "InitMaterialIndex", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AWhiteboardActor, InitMaterialIndex), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InitMaterialIndex_MetaData), NewProp_InitMaterialIndex_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AWhiteboardActor_Statics::NewProp_DrawingCanvas = { "DrawingCanvas", "OnRep_DrawingCanvas", (EPropertyFlags)0x0010000100000020, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AWhiteboardActor, DrawingCanvas), Z_Construct_UClass_UTextureRenderTarget2D_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DrawingCanvas_MetaData), NewProp_DrawingCanvas_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AWhiteboardActor_Statics::NewProp_CanvasWidth = { "CanvasWidth", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AWhiteboardActor, CanvasWidth), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CanvasWidth_MetaData), NewProp_CanvasWidth_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AWhiteboardActor_Statics::NewProp_CanvasHeight = { "CanvasHeight", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AWhiteboardActor, CanvasHeight), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CanvasHeight_MetaData), NewProp_CanvasHeight_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AWhiteboardActor_Statics::NewProp_InteractionDistance = { "InteractionDistance", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AWhiteboardActor, InteractionDistance), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InteractionDistance_MetaData), NewProp_InteractionDistance_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AWhiteboardActor_Statics::NewProp_WhiteboardWidth = { "WhiteboardWidth", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AWhiteboardActor, WhiteboardWidth), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WhiteboardWidth_MetaData), NewProp_WhiteboardWidth_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AWhiteboardActor_Statics::NewProp_WhiteboardHeight = { "WhiteboardHeight", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AWhiteboardActor, WhiteboardHeight), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WhiteboardHeight_MetaData), NewProp_WhiteboardHeight_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AWhiteboardActor_Statics::NewProp_BrushTextures_Inner = { "BrushTextures", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AWhiteboardActor_Statics::NewProp_BrushTextures = { "BrushTextures", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AWhiteboardActor, BrushTextures), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BrushTextures_MetaData), NewProp_BrushTextures_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AWhiteboardActor_Statics::NewProp_FigureTextures_Inner = { "FigureTextures", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AWhiteboardActor_Statics::NewProp_FigureTextures = { "FigureTextures", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AWhiteboardActor, FigureTextures), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FigureTextures_MetaData), NewProp_FigureTextures_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AWhiteboardActor_Statics::NewProp_PlayerDrawingStates_Inner = { "PlayerDrawingStates", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FReplicatedPlayerDrawingState, METADATA_PARAMS(0, nullptr) }; // 1236709121
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AWhiteboardActor_Statics::NewProp_PlayerDrawingStates = { "PlayerDrawingStates", "OnRep_PlayerDrawingStates", (EPropertyFlags)0x0010000100000034, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AWhiteboardActor, PlayerDrawingStates), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PlayerDrawingStates_MetaData), NewProp_PlayerDrawingStates_MetaData) }; // 1236709121
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AWhiteboardActor_Statics::NewProp_StrokeHistory_Inner = { "StrokeHistory", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FStroke, METADATA_PARAMS(0, nullptr) }; // 2672491957
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AWhiteboardActor_Statics::NewProp_StrokeHistory = { "StrokeHistory", nullptr, (EPropertyFlags)0x0010000000000020, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AWhiteboardActor, StrokeHistory), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StrokeHistory_MetaData), NewProp_StrokeHistory_MetaData) }; // 2672491957
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AWhiteboardActor_Statics::NewProp_CurrentHistoryIndex = { "CurrentHistoryIndex", nullptr, (EPropertyFlags)0x0010000000000020, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AWhiteboardActor, CurrentHistoryIndex), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurrentHistoryIndex_MetaData), NewProp_CurrentHistoryIndex_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AWhiteboardActor_Statics::NewProp_NextStrokeID = { "NextStrokeID", nullptr, (EPropertyFlags)0x0010000000000020, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AWhiteboardActor, NextStrokeID), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NextStrokeID_MetaData), NewProp_NextStrokeID_MetaData) };
void Z_Construct_UClass_AWhiteboardActor_Statics::NewProp_bCanInteract_SetBit(void* Obj)
{
	((AWhiteboardActor*)Obj)->bCanInteract = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AWhiteboardActor_Statics::NewProp_bCanInteract = { "bCanInteract", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AWhiteboardActor), &Z_Construct_UClass_AWhiteboardActor_Statics::NewProp_bCanInteract_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bCanInteract_MetaData), NewProp_bCanInteract_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AWhiteboardActor_Statics::NewProp_MaxInteractingPlayers = { "MaxInteractingPlayers", nullptr, (EPropertyFlags)0x0010000000000025, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AWhiteboardActor, MaxInteractingPlayers), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxInteractingPlayers_MetaData), NewProp_MaxInteractingPlayers_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AWhiteboardActor_Statics::NewProp_InteractingPawns_Inner = { "InteractingPawns", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_APawn_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AWhiteboardActor_Statics::NewProp_InteractingPawns = { "InteractingPawns", "OnRep_InteractingPawns", (EPropertyFlags)0x0010000100000034, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AWhiteboardActor, InteractingPawns), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InteractingPawns_MetaData), NewProp_InteractingPawns_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AWhiteboardActor_Statics::NewProp_ClientPredictedStrokes_ValueProp = { "ClientPredictedStrokes", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UScriptStruct_FStroke, METADATA_PARAMS(0, nullptr) }; // 2672491957
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AWhiteboardActor_Statics::NewProp_ClientPredictedStrokes_Key_KeyProp = { "ClientPredictedStrokes_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_APawn_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_AWhiteboardActor_Statics::NewProp_ClientPredictedStrokes = { "ClientPredictedStrokes", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AWhiteboardActor, ClientPredictedStrokes), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ClientPredictedStrokes_MetaData), NewProp_ClientPredictedStrokes_MetaData) }; // 2672491957
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AWhiteboardActor_Statics::NewProp_ActiveStrokes_ValueProp = { "ActiveStrokes", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UScriptStruct_FStroke, METADATA_PARAMS(0, nullptr) }; // 2672491957
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AWhiteboardActor_Statics::NewProp_ActiveStrokes_Key_KeyProp = { "ActiveStrokes_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_APawn_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_AWhiteboardActor_Statics::NewProp_ActiveStrokes = { "ActiveStrokes", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AWhiteboardActor, ActiveStrokes), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ActiveStrokes_MetaData), NewProp_ActiveStrokes_MetaData) }; // 2672491957
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AWhiteboardActor_Statics::NewProp_PlayerShapeDrawingStates_ValueProp = { "PlayerShapeDrawingStates", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AWhiteboardActor_Statics::NewProp_PlayerShapeDrawingStates_Key_KeyProp = { "PlayerShapeDrawingStates_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_APawn_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_AWhiteboardActor_Statics::NewProp_PlayerShapeDrawingStates = { "PlayerShapeDrawingStates", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AWhiteboardActor, PlayerShapeDrawingStates), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PlayerShapeDrawingStates_MetaData), NewProp_PlayerShapeDrawingStates_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AWhiteboardActor_Statics::NewProp_LocalPlayerStatesCache_ValueProp = { "LocalPlayerStatesCache", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UScriptStruct_FPlayerDrawingState, METADATA_PARAMS(0, nullptr) }; // 2209676374
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AWhiteboardActor_Statics::NewProp_LocalPlayerStatesCache_Key_KeyProp = { "LocalPlayerStatesCache_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_APawn_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_AWhiteboardActor_Statics::NewProp_LocalPlayerStatesCache = { "LocalPlayerStatesCache", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AWhiteboardActor, LocalPlayerStatesCache), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LocalPlayerStatesCache_MetaData), NewProp_LocalPlayerStatesCache_MetaData) }; // 2209676374
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AWhiteboardActor_Statics::NewProp_CurrentStrokes_ValueProp = { "CurrentStrokes", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UScriptStruct_FStroke, METADATA_PARAMS(0, nullptr) }; // 2672491957
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AWhiteboardActor_Statics::NewProp_CurrentStrokes_Key_KeyProp = { "CurrentStrokes_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_APawn_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_AWhiteboardActor_Statics::NewProp_CurrentStrokes = { "CurrentStrokes", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AWhiteboardActor, CurrentStrokes), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurrentStrokes_MetaData), NewProp_CurrentStrokes_MetaData) }; // 2672491957
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AWhiteboardActor_Statics::NewProp_PlayerDrawingShapes_ValueProp = { "PlayerDrawingShapes", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AWhiteboardActor_Statics::NewProp_PlayerDrawingShapes_Key_KeyProp = { "PlayerDrawingShapes_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_APawn_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_AWhiteboardActor_Statics::NewProp_PlayerDrawingShapes = { "PlayerDrawingShapes", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AWhiteboardActor, PlayerDrawingShapes), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PlayerDrawingShapes_MetaData), NewProp_PlayerDrawingShapes_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AWhiteboardActor_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWhiteboardActor_Statics::NewProp_WhiteboardMesh,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWhiteboardActor_Statics::NewProp_InteractionVolume,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWhiteboardActor_Statics::NewProp_WhiteboardCamera,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWhiteboardActor_Statics::NewProp_bIsInitialized,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWhiteboardActor_Statics::NewProp_InitMaterialIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWhiteboardActor_Statics::NewProp_DrawingCanvas,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWhiteboardActor_Statics::NewProp_CanvasWidth,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWhiteboardActor_Statics::NewProp_CanvasHeight,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWhiteboardActor_Statics::NewProp_InteractionDistance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWhiteboardActor_Statics::NewProp_WhiteboardWidth,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWhiteboardActor_Statics::NewProp_WhiteboardHeight,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWhiteboardActor_Statics::NewProp_BrushTextures_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWhiteboardActor_Statics::NewProp_BrushTextures,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWhiteboardActor_Statics::NewProp_FigureTextures_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWhiteboardActor_Statics::NewProp_FigureTextures,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWhiteboardActor_Statics::NewProp_PlayerDrawingStates_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWhiteboardActor_Statics::NewProp_PlayerDrawingStates,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWhiteboardActor_Statics::NewProp_StrokeHistory_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWhiteboardActor_Statics::NewProp_StrokeHistory,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWhiteboardActor_Statics::NewProp_CurrentHistoryIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWhiteboardActor_Statics::NewProp_NextStrokeID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWhiteboardActor_Statics::NewProp_bCanInteract,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWhiteboardActor_Statics::NewProp_MaxInteractingPlayers,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWhiteboardActor_Statics::NewProp_InteractingPawns_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWhiteboardActor_Statics::NewProp_InteractingPawns,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWhiteboardActor_Statics::NewProp_ClientPredictedStrokes_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWhiteboardActor_Statics::NewProp_ClientPredictedStrokes_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWhiteboardActor_Statics::NewProp_ClientPredictedStrokes,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWhiteboardActor_Statics::NewProp_ActiveStrokes_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWhiteboardActor_Statics::NewProp_ActiveStrokes_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWhiteboardActor_Statics::NewProp_ActiveStrokes,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWhiteboardActor_Statics::NewProp_PlayerShapeDrawingStates_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWhiteboardActor_Statics::NewProp_PlayerShapeDrawingStates_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWhiteboardActor_Statics::NewProp_PlayerShapeDrawingStates,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWhiteboardActor_Statics::NewProp_LocalPlayerStatesCache_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWhiteboardActor_Statics::NewProp_LocalPlayerStatesCache_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWhiteboardActor_Statics::NewProp_LocalPlayerStatesCache,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWhiteboardActor_Statics::NewProp_CurrentStrokes_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWhiteboardActor_Statics::NewProp_CurrentStrokes_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWhiteboardActor_Statics::NewProp_CurrentStrokes,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWhiteboardActor_Statics::NewProp_PlayerDrawingShapes_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWhiteboardActor_Statics::NewProp_PlayerDrawingShapes_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWhiteboardActor_Statics::NewProp_PlayerDrawingShapes,
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
	0x009001A4u,
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
#if VALIDATE_CLASS_REPS
void AWhiteboardActor::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
{
	static FName Name_bIsInitialized(TEXT("bIsInitialized"));
	static FName Name_DrawingCanvas(TEXT("DrawingCanvas"));
	static FName Name_PlayerDrawingStates(TEXT("PlayerDrawingStates"));
	static FName Name_StrokeHistory(TEXT("StrokeHistory"));
	static FName Name_CurrentHistoryIndex(TEXT("CurrentHistoryIndex"));
	static FName Name_NextStrokeID(TEXT("NextStrokeID"));
	static FName Name_MaxInteractingPlayers(TEXT("MaxInteractingPlayers"));
	static FName Name_InteractingPawns(TEXT("InteractingPawns"));
	const bool bIsValid = true
		&& Name_bIsInitialized == ClassReps[(int32)ENetFields_Private::bIsInitialized].Property->GetFName()
		&& Name_DrawingCanvas == ClassReps[(int32)ENetFields_Private::DrawingCanvas].Property->GetFName()
		&& Name_PlayerDrawingStates == ClassReps[(int32)ENetFields_Private::PlayerDrawingStates].Property->GetFName()
		&& Name_StrokeHistory == ClassReps[(int32)ENetFields_Private::StrokeHistory].Property->GetFName()
		&& Name_CurrentHistoryIndex == ClassReps[(int32)ENetFields_Private::CurrentHistoryIndex].Property->GetFName()
		&& Name_NextStrokeID == ClassReps[(int32)ENetFields_Private::NextStrokeID].Property->GetFName()
		&& Name_MaxInteractingPlayers == ClassReps[(int32)ENetFields_Private::MaxInteractingPlayers].Property->GetFName()
		&& Name_InteractingPawns == ClassReps[(int32)ENetFields_Private::InteractingPawns].Property->GetFName();
	checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in AWhiteboardActor"));
}
#endif
DEFINE_VTABLE_PTR_HELPER_CTOR(AWhiteboardActor);
AWhiteboardActor::~AWhiteboardActor() {}
// ********** End Class AWhiteboardActor ***********************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_SPARKELON_2025_Prototype_2025_Advanced_WhiteBoard_Plugins_AdvancedDrawingBoard_Source_AdvancedDrawingBoard_Public_Actor_WhiteboardActor_h__Script_AdvancedDrawingBoard_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AWhiteboardActor, AWhiteboardActor::StaticClass, TEXT("AWhiteboardActor"), &Z_Registration_Info_UClass_AWhiteboardActor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AWhiteboardActor), 2880181840U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_SPARKELON_2025_Prototype_2025_Advanced_WhiteBoard_Plugins_AdvancedDrawingBoard_Source_AdvancedDrawingBoard_Public_Actor_WhiteboardActor_h__Script_AdvancedDrawingBoard_1410320035(TEXT("/Script/AdvancedDrawingBoard"),
	Z_CompiledInDeferFile_FID_SPARKELON_2025_Prototype_2025_Advanced_WhiteBoard_Plugins_AdvancedDrawingBoard_Source_AdvancedDrawingBoard_Public_Actor_WhiteboardActor_h__Script_AdvancedDrawingBoard_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_SPARKELON_2025_Prototype_2025_Advanced_WhiteBoard_Plugins_AdvancedDrawingBoard_Source_AdvancedDrawingBoard_Public_Actor_WhiteboardActor_h__Script_AdvancedDrawingBoard_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
