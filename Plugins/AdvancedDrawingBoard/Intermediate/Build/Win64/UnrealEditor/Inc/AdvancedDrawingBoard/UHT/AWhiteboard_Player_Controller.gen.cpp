// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Controller/AWhiteboard_Player_Controller.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeAWhiteboard_Player_Controller() {}

// ********** Begin Cross Module References ********************************************************
ADVANCEDDRAWINGBOARD_API UClass* Z_Construct_UClass_AWhiteboardActor_NoRegister();
ADVANCEDDRAWINGBOARD_API UClass* Z_Construct_UClass_AWhiteboardController();
ADVANCEDDRAWINGBOARD_API UClass* Z_Construct_UClass_AWhiteboardController_NoRegister();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
ENGINE_API UClass* Z_Construct_UClass_APawn_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_APlayerController();
ENGINE_API UClass* Z_Construct_UClass_UInputComponent_NoRegister();
UPackage* Z_Construct_UPackage__Script_AdvancedDrawingBoard();
// ********** End Cross Module References **********************************************************

// ********** Begin Class AWhiteboardController Function Client_CleanupInteractionUI ***************
struct WhiteboardController_eventClient_CleanupInteractionUI_Parms
{
	APawn* InteractingPlayer;
};
static FName NAME_AWhiteboardController_Client_CleanupInteractionUI = FName(TEXT("Client_CleanupInteractionUI"));
void AWhiteboardController::Client_CleanupInteractionUI(APawn* InteractingPlayer)
{
	WhiteboardController_eventClient_CleanupInteractionUI_Parms Parms;
	Parms.InteractingPlayer=InteractingPlayer;
	UFunction* Func = FindFunctionChecked(NAME_AWhiteboardController_Client_CleanupInteractionUI);
	ProcessEvent(Func,&Parms);
}
struct Z_Construct_UFunction_AWhiteboardController_Client_CleanupInteractionUI_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Controller/AWhiteboard_Player_Controller.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InteractingPlayer;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AWhiteboardController_Client_CleanupInteractionUI_Statics::NewProp_InteractingPlayer = { "InteractingPlayer", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WhiteboardController_eventClient_CleanupInteractionUI_Parms, InteractingPlayer), Z_Construct_UClass_APawn_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AWhiteboardController_Client_CleanupInteractionUI_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AWhiteboardController_Client_CleanupInteractionUI_Statics::NewProp_InteractingPlayer,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AWhiteboardController_Client_CleanupInteractionUI_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AWhiteboardController_Client_CleanupInteractionUI_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AWhiteboardController, nullptr, "Client_CleanupInteractionUI", Z_Construct_UFunction_AWhiteboardController_Client_CleanupInteractionUI_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AWhiteboardController_Client_CleanupInteractionUI_Statics::PropPointers), sizeof(WhiteboardController_eventClient_CleanupInteractionUI_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x01020CC0, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AWhiteboardController_Client_CleanupInteractionUI_Statics::Function_MetaDataParams), Z_Construct_UFunction_AWhiteboardController_Client_CleanupInteractionUI_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(WhiteboardController_eventClient_CleanupInteractionUI_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AWhiteboardController_Client_CleanupInteractionUI()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AWhiteboardController_Client_CleanupInteractionUI_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AWhiteboardController::execClient_CleanupInteractionUI)
{
	P_GET_OBJECT(APawn,Z_Param_InteractingPlayer);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Client_CleanupInteractionUI_Implementation(Z_Param_InteractingPlayer);
	P_NATIVE_END;
}
// ********** End Class AWhiteboardController Function Client_CleanupInteractionUI *****************

// ********** Begin Class AWhiteboardController Function OnPlayerJoinedInteraction *****************
struct WhiteboardController_eventOnPlayerJoinedInteraction_Parms
{
	APawn* InteractingPlayer;
	AWhiteboardActor* WhiteboardActor;
};
static FName NAME_AWhiteboardController_OnPlayerJoinedInteraction = FName(TEXT("OnPlayerJoinedInteraction"));
void AWhiteboardController::OnPlayerJoinedInteraction(APawn* InteractingPlayer, AWhiteboardActor* WhiteboardActor)
{
	WhiteboardController_eventOnPlayerJoinedInteraction_Parms Parms;
	Parms.InteractingPlayer=InteractingPlayer;
	Parms.WhiteboardActor=WhiteboardActor;
	UFunction* Func = FindFunctionChecked(NAME_AWhiteboardController_OnPlayerJoinedInteraction);
	ProcessEvent(Func,&Parms);
}
struct Z_Construct_UFunction_AWhiteboardController_OnPlayerJoinedInteraction_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "UI Events" },
		{ "ModuleRelativePath", "Public/Controller/AWhiteboard_Player_Controller.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InteractingPlayer;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WhiteboardActor;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AWhiteboardController_OnPlayerJoinedInteraction_Statics::NewProp_InteractingPlayer = { "InteractingPlayer", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WhiteboardController_eventOnPlayerJoinedInteraction_Parms, InteractingPlayer), Z_Construct_UClass_APawn_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AWhiteboardController_OnPlayerJoinedInteraction_Statics::NewProp_WhiteboardActor = { "WhiteboardActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WhiteboardController_eventOnPlayerJoinedInteraction_Parms, WhiteboardActor), Z_Construct_UClass_AWhiteboardActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AWhiteboardController_OnPlayerJoinedInteraction_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AWhiteboardController_OnPlayerJoinedInteraction_Statics::NewProp_InteractingPlayer,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AWhiteboardController_OnPlayerJoinedInteraction_Statics::NewProp_WhiteboardActor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AWhiteboardController_OnPlayerJoinedInteraction_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AWhiteboardController_OnPlayerJoinedInteraction_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AWhiteboardController, nullptr, "OnPlayerJoinedInteraction", Z_Construct_UFunction_AWhiteboardController_OnPlayerJoinedInteraction_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AWhiteboardController_OnPlayerJoinedInteraction_Statics::PropPointers), sizeof(WhiteboardController_eventOnPlayerJoinedInteraction_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AWhiteboardController_OnPlayerJoinedInteraction_Statics::Function_MetaDataParams), Z_Construct_UFunction_AWhiteboardController_OnPlayerJoinedInteraction_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(WhiteboardController_eventOnPlayerJoinedInteraction_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AWhiteboardController_OnPlayerJoinedInteraction()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AWhiteboardController_OnPlayerJoinedInteraction_Statics::FuncParams);
	}
	return ReturnFunction;
}
// ********** End Class AWhiteboardController Function OnPlayerJoinedInteraction *******************

// ********** Begin Class AWhiteboardController Function OnPlayerLeftInteraction *******************
struct WhiteboardController_eventOnPlayerLeftInteraction_Parms
{
	APawn* InteractingPlayer;
	AWhiteboardActor* WhiteboardActor;
};
static FName NAME_AWhiteboardController_OnPlayerLeftInteraction = FName(TEXT("OnPlayerLeftInteraction"));
void AWhiteboardController::OnPlayerLeftInteraction(APawn* InteractingPlayer, AWhiteboardActor* WhiteboardActor)
{
	WhiteboardController_eventOnPlayerLeftInteraction_Parms Parms;
	Parms.InteractingPlayer=InteractingPlayer;
	Parms.WhiteboardActor=WhiteboardActor;
	UFunction* Func = FindFunctionChecked(NAME_AWhiteboardController_OnPlayerLeftInteraction);
	ProcessEvent(Func,&Parms);
}
struct Z_Construct_UFunction_AWhiteboardController_OnPlayerLeftInteraction_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "UI Events" },
		{ "ModuleRelativePath", "Public/Controller/AWhiteboard_Player_Controller.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InteractingPlayer;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WhiteboardActor;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AWhiteboardController_OnPlayerLeftInteraction_Statics::NewProp_InteractingPlayer = { "InteractingPlayer", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WhiteboardController_eventOnPlayerLeftInteraction_Parms, InteractingPlayer), Z_Construct_UClass_APawn_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AWhiteboardController_OnPlayerLeftInteraction_Statics::NewProp_WhiteboardActor = { "WhiteboardActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WhiteboardController_eventOnPlayerLeftInteraction_Parms, WhiteboardActor), Z_Construct_UClass_AWhiteboardActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AWhiteboardController_OnPlayerLeftInteraction_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AWhiteboardController_OnPlayerLeftInteraction_Statics::NewProp_InteractingPlayer,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AWhiteboardController_OnPlayerLeftInteraction_Statics::NewProp_WhiteboardActor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AWhiteboardController_OnPlayerLeftInteraction_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AWhiteboardController_OnPlayerLeftInteraction_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AWhiteboardController, nullptr, "OnPlayerLeftInteraction", Z_Construct_UFunction_AWhiteboardController_OnPlayerLeftInteraction_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AWhiteboardController_OnPlayerLeftInteraction_Statics::PropPointers), sizeof(WhiteboardController_eventOnPlayerLeftInteraction_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AWhiteboardController_OnPlayerLeftInteraction_Statics::Function_MetaDataParams), Z_Construct_UFunction_AWhiteboardController_OnPlayerLeftInteraction_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(WhiteboardController_eventOnPlayerLeftInteraction_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AWhiteboardController_OnPlayerLeftInteraction()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AWhiteboardController_OnPlayerLeftInteraction_Statics::FuncParams);
	}
	return ReturnFunction;
}
// ********** End Class AWhiteboardController Function OnPlayerLeftInteraction *********************

// ********** Begin Class AWhiteboardController Function RestoreGameInputMode **********************
struct Z_Construct_UFunction_AWhiteboardController_RestoreGameInputMode_Statics
{
	struct WhiteboardController_eventRestoreGameInputMode_Parms
	{
		APawn* InteractingPlayer;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Input Remove\n" },
#endif
		{ "ModuleRelativePath", "Public/Controller/AWhiteboard_Player_Controller.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Input Remove" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InteractingPlayer;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AWhiteboardController_RestoreGameInputMode_Statics::NewProp_InteractingPlayer = { "InteractingPlayer", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WhiteboardController_eventRestoreGameInputMode_Parms, InteractingPlayer), Z_Construct_UClass_APawn_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AWhiteboardController_RestoreGameInputMode_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AWhiteboardController_RestoreGameInputMode_Statics::NewProp_InteractingPlayer,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AWhiteboardController_RestoreGameInputMode_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AWhiteboardController_RestoreGameInputMode_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AWhiteboardController, nullptr, "RestoreGameInputMode", Z_Construct_UFunction_AWhiteboardController_RestoreGameInputMode_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AWhiteboardController_RestoreGameInputMode_Statics::PropPointers), sizeof(Z_Construct_UFunction_AWhiteboardController_RestoreGameInputMode_Statics::WhiteboardController_eventRestoreGameInputMode_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AWhiteboardController_RestoreGameInputMode_Statics::Function_MetaDataParams), Z_Construct_UFunction_AWhiteboardController_RestoreGameInputMode_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_AWhiteboardController_RestoreGameInputMode_Statics::WhiteboardController_eventRestoreGameInputMode_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AWhiteboardController_RestoreGameInputMode()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AWhiteboardController_RestoreGameInputMode_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AWhiteboardController::execRestoreGameInputMode)
{
	P_GET_OBJECT(APawn,Z_Param_InteractingPlayer);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->RestoreGameInputMode(Z_Param_InteractingPlayer);
	P_NATIVE_END;
}
// ********** End Class AWhiteboardController Function RestoreGameInputMode ************************

// ********** Begin Class AWhiteboardController Function Server_EndWhiteboardInteraction ***********
struct WhiteboardController_eventServer_EndWhiteboardInteraction_Parms
{
	AWhiteboardActor* Whiteboard;
	APawn* InteractingPlayer;
};
static FName NAME_AWhiteboardController_Server_EndWhiteboardInteraction = FName(TEXT("Server_EndWhiteboardInteraction"));
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
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AWhiteboardController_Server_EndWhiteboardInteraction_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AWhiteboardController, nullptr, "Server_EndWhiteboardInteraction", Z_Construct_UFunction_AWhiteboardController_Server_EndWhiteboardInteraction_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AWhiteboardController_Server_EndWhiteboardInteraction_Statics::PropPointers), sizeof(WhiteboardController_eventServer_EndWhiteboardInteraction_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00220CC0, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AWhiteboardController_Server_EndWhiteboardInteraction_Statics::Function_MetaDataParams), Z_Construct_UFunction_AWhiteboardController_Server_EndWhiteboardInteraction_Statics::Function_MetaDataParams)},  };
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
// ********** End Class AWhiteboardController Function Server_EndWhiteboardInteraction *************

// ********** Begin Class AWhiteboardController Function Server_RequestWhiteboardInteraction *******
struct WhiteboardController_eventServer_RequestWhiteboardInteraction_Parms
{
	AWhiteboardActor* Whiteboard;
	APawn* InteractingPlayer;
};
static FName NAME_AWhiteboardController_Server_RequestWhiteboardInteraction = FName(TEXT("Server_RequestWhiteboardInteraction"));
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
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AWhiteboardController_Server_RequestWhiteboardInteraction_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AWhiteboardController, nullptr, "Server_RequestWhiteboardInteraction", Z_Construct_UFunction_AWhiteboardController_Server_RequestWhiteboardInteraction_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AWhiteboardController_Server_RequestWhiteboardInteraction_Statics::PropPointers), sizeof(WhiteboardController_eventServer_RequestWhiteboardInteraction_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00220CC0, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AWhiteboardController_Server_RequestWhiteboardInteraction_Statics::Function_MetaDataParams), Z_Construct_UFunction_AWhiteboardController_Server_RequestWhiteboardInteraction_Statics::Function_MetaDataParams)},  };
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
// ********** End Class AWhiteboardController Function Server_RequestWhiteboardInteraction *********

// ********** Begin Class AWhiteboardController Function Server_WhiteboardAddText ******************
struct WhiteboardController_eventServer_WhiteboardAddText_Parms
{
	AWhiteboardActor* Whiteboard;
	FVector2D CanvasPosition;
	FString Text;
	FLinearColor Color;
	float Size;
};
static FName NAME_AWhiteboardController_Server_WhiteboardAddText = FName(TEXT("Server_WhiteboardAddText"));
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
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AWhiteboardController_Server_WhiteboardAddText_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AWhiteboardController, nullptr, "Server_WhiteboardAddText", Z_Construct_UFunction_AWhiteboardController_Server_WhiteboardAddText_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AWhiteboardController_Server_WhiteboardAddText_Statics::PropPointers), sizeof(WhiteboardController_eventServer_WhiteboardAddText_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00A20CC0, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AWhiteboardController_Server_WhiteboardAddText_Statics::Function_MetaDataParams), Z_Construct_UFunction_AWhiteboardController_Server_WhiteboardAddText_Statics::Function_MetaDataParams)},  };
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
// ********** End Class AWhiteboardController Function Server_WhiteboardAddText ********************

// ********** Begin Class AWhiteboardController Function Server_WhiteboardClearWhiteboard **********
struct WhiteboardController_eventServer_WhiteboardClearWhiteboard_Parms
{
	AWhiteboardActor* Whiteboard;
};
static FName NAME_AWhiteboardController_Server_WhiteboardClearWhiteboard = FName(TEXT("Server_WhiteboardClearWhiteboard"));
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
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AWhiteboardController_Server_WhiteboardClearWhiteboard_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AWhiteboardController, nullptr, "Server_WhiteboardClearWhiteboard", Z_Construct_UFunction_AWhiteboardController_Server_WhiteboardClearWhiteboard_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AWhiteboardController_Server_WhiteboardClearWhiteboard_Statics::PropPointers), sizeof(WhiteboardController_eventServer_WhiteboardClearWhiteboard_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00220CC0, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AWhiteboardController_Server_WhiteboardClearWhiteboard_Statics::Function_MetaDataParams), Z_Construct_UFunction_AWhiteboardController_Server_WhiteboardClearWhiteboard_Statics::Function_MetaDataParams)},  };
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
// ********** End Class AWhiteboardController Function Server_WhiteboardClearWhiteboard ************

// ********** Begin Class AWhiteboardController Function Server_WhiteboardContinueDrawing **********
struct WhiteboardController_eventServer_WhiteboardContinueDrawing_Parms
{
	AWhiteboardActor* Whiteboard;
	FVector2D CanvasPosition;
};
static FName NAME_AWhiteboardController_Server_WhiteboardContinueDrawing = FName(TEXT("Server_WhiteboardContinueDrawing"));
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
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AWhiteboardController_Server_WhiteboardContinueDrawing_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AWhiteboardController, nullptr, "Server_WhiteboardContinueDrawing", Z_Construct_UFunction_AWhiteboardController_Server_WhiteboardContinueDrawing_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AWhiteboardController_Server_WhiteboardContinueDrawing_Statics::PropPointers), sizeof(WhiteboardController_eventServer_WhiteboardContinueDrawing_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00A20CC0, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AWhiteboardController_Server_WhiteboardContinueDrawing_Statics::Function_MetaDataParams), Z_Construct_UFunction_AWhiteboardController_Server_WhiteboardContinueDrawing_Statics::Function_MetaDataParams)},  };
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
// ********** End Class AWhiteboardController Function Server_WhiteboardContinueDrawing ************

// ********** Begin Class AWhiteboardController Function Server_WhiteboardDrawFigure ***************
struct WhiteboardController_eventServer_WhiteboardDrawFigure_Parms
{
	AWhiteboardActor* Whiteboard;
	FVector2D CanvasPosition;
	int32 SelectedFigureIndex;
	FLinearColor Color;
	float Size;
};
static FName NAME_AWhiteboardController_Server_WhiteboardDrawFigure = FName(TEXT("Server_WhiteboardDrawFigure"));
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
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AWhiteboardController_Server_WhiteboardDrawFigure_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AWhiteboardController, nullptr, "Server_WhiteboardDrawFigure", Z_Construct_UFunction_AWhiteboardController_Server_WhiteboardDrawFigure_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AWhiteboardController_Server_WhiteboardDrawFigure_Statics::PropPointers), sizeof(WhiteboardController_eventServer_WhiteboardDrawFigure_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00A20CC0, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AWhiteboardController_Server_WhiteboardDrawFigure_Statics::Function_MetaDataParams), Z_Construct_UFunction_AWhiteboardController_Server_WhiteboardDrawFigure_Statics::Function_MetaDataParams)},  };
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
// ********** End Class AWhiteboardController Function Server_WhiteboardDrawFigure *****************

// ********** Begin Class AWhiteboardController Function Server_WhiteboardEndDrawing ***************
struct WhiteboardController_eventServer_WhiteboardEndDrawing_Parms
{
	AWhiteboardActor* Whiteboard;
};
static FName NAME_AWhiteboardController_Server_WhiteboardEndDrawing = FName(TEXT("Server_WhiteboardEndDrawing"));
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
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AWhiteboardController_Server_WhiteboardEndDrawing_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AWhiteboardController, nullptr, "Server_WhiteboardEndDrawing", Z_Construct_UFunction_AWhiteboardController_Server_WhiteboardEndDrawing_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AWhiteboardController_Server_WhiteboardEndDrawing_Statics::PropPointers), sizeof(WhiteboardController_eventServer_WhiteboardEndDrawing_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00220CC0, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AWhiteboardController_Server_WhiteboardEndDrawing_Statics::Function_MetaDataParams), Z_Construct_UFunction_AWhiteboardController_Server_WhiteboardEndDrawing_Statics::Function_MetaDataParams)},  };
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
// ********** End Class AWhiteboardController Function Server_WhiteboardEndDrawing *****************

// ********** Begin Class AWhiteboardController Function Server_WhiteboardRedo *********************
struct WhiteboardController_eventServer_WhiteboardRedo_Parms
{
	AWhiteboardActor* Whiteboard;
};
static FName NAME_AWhiteboardController_Server_WhiteboardRedo = FName(TEXT("Server_WhiteboardRedo"));
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
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AWhiteboardController_Server_WhiteboardRedo_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AWhiteboardController, nullptr, "Server_WhiteboardRedo", Z_Construct_UFunction_AWhiteboardController_Server_WhiteboardRedo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AWhiteboardController_Server_WhiteboardRedo_Statics::PropPointers), sizeof(WhiteboardController_eventServer_WhiteboardRedo_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00220CC0, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AWhiteboardController_Server_WhiteboardRedo_Statics::Function_MetaDataParams), Z_Construct_UFunction_AWhiteboardController_Server_WhiteboardRedo_Statics::Function_MetaDataParams)},  };
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
// ********** End Class AWhiteboardController Function Server_WhiteboardRedo ***********************

// ********** Begin Class AWhiteboardController Function Server_WhiteboardStartDrawing *************
struct WhiteboardController_eventServer_WhiteboardStartDrawing_Parms
{
	AWhiteboardActor* Whiteboard;
	APawn* DrawingPawn;
	FVector2D CanvasPosition;
};
static FName NAME_AWhiteboardController_Server_WhiteboardStartDrawing = FName(TEXT("Server_WhiteboardStartDrawing"));
void AWhiteboardController::Server_WhiteboardStartDrawing(AWhiteboardActor* Whiteboard, APawn* DrawingPawn, FVector2D const& CanvasPosition)
{
	WhiteboardController_eventServer_WhiteboardStartDrawing_Parms Parms;
	Parms.Whiteboard=Whiteboard;
	Parms.DrawingPawn=DrawingPawn;
	Parms.CanvasPosition=CanvasPosition;
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
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DrawingPawn;
	static const UECodeGen_Private::FStructPropertyParams NewProp_CanvasPosition;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AWhiteboardController_Server_WhiteboardStartDrawing_Statics::NewProp_Whiteboard = { "Whiteboard", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WhiteboardController_eventServer_WhiteboardStartDrawing_Parms, Whiteboard), Z_Construct_UClass_AWhiteboardActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AWhiteboardController_Server_WhiteboardStartDrawing_Statics::NewProp_DrawingPawn = { "DrawingPawn", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WhiteboardController_eventServer_WhiteboardStartDrawing_Parms, DrawingPawn), Z_Construct_UClass_APawn_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AWhiteboardController_Server_WhiteboardStartDrawing_Statics::NewProp_CanvasPosition = { "CanvasPosition", nullptr, (EPropertyFlags)0x0010000008000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WhiteboardController_eventServer_WhiteboardStartDrawing_Parms, CanvasPosition), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CanvasPosition_MetaData), NewProp_CanvasPosition_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AWhiteboardController_Server_WhiteboardStartDrawing_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AWhiteboardController_Server_WhiteboardStartDrawing_Statics::NewProp_Whiteboard,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AWhiteboardController_Server_WhiteboardStartDrawing_Statics::NewProp_DrawingPawn,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AWhiteboardController_Server_WhiteboardStartDrawing_Statics::NewProp_CanvasPosition,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AWhiteboardController_Server_WhiteboardStartDrawing_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AWhiteboardController_Server_WhiteboardStartDrawing_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AWhiteboardController, nullptr, "Server_WhiteboardStartDrawing", Z_Construct_UFunction_AWhiteboardController_Server_WhiteboardStartDrawing_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AWhiteboardController_Server_WhiteboardStartDrawing_Statics::PropPointers), sizeof(WhiteboardController_eventServer_WhiteboardStartDrawing_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00A20CC0, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AWhiteboardController_Server_WhiteboardStartDrawing_Statics::Function_MetaDataParams), Z_Construct_UFunction_AWhiteboardController_Server_WhiteboardStartDrawing_Statics::Function_MetaDataParams)},  };
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
	P_GET_OBJECT(APawn,Z_Param_DrawingPawn);
	P_GET_STRUCT(FVector2D,Z_Param_CanvasPosition);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Server_WhiteboardStartDrawing_Implementation(Z_Param_Whiteboard,Z_Param_DrawingPawn,Z_Param_CanvasPosition);
	P_NATIVE_END;
}
// ********** End Class AWhiteboardController Function Server_WhiteboardStartDrawing ***************

// ********** Begin Class AWhiteboardController Function Server_WhiteboardUndo *********************
struct WhiteboardController_eventServer_WhiteboardUndo_Parms
{
	AWhiteboardActor* Whiteboard;
};
static FName NAME_AWhiteboardController_Server_WhiteboardUndo = FName(TEXT("Server_WhiteboardUndo"));
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
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AWhiteboardController_Server_WhiteboardUndo_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AWhiteboardController, nullptr, "Server_WhiteboardUndo", Z_Construct_UFunction_AWhiteboardController_Server_WhiteboardUndo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AWhiteboardController_Server_WhiteboardUndo_Statics::PropPointers), sizeof(WhiteboardController_eventServer_WhiteboardUndo_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00220CC0, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AWhiteboardController_Server_WhiteboardUndo_Statics::Function_MetaDataParams), Z_Construct_UFunction_AWhiteboardController_Server_WhiteboardUndo_Statics::Function_MetaDataParams)},  };
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
// ********** End Class AWhiteboardController Function Server_WhiteboardUndo ***********************

// ********** Begin Class AWhiteboardController Function SetupWhiteboardInputMode ******************
struct Z_Construct_UFunction_AWhiteboardController_SetupWhiteboardInputMode_Statics
{
	struct WhiteboardController_eventSetupWhiteboardInputMode_Parms
	{
		APawn* InteractingPlayer;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Input Setup\n" },
#endif
		{ "ModuleRelativePath", "Public/Controller/AWhiteboard_Player_Controller.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Input Setup" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InteractingPlayer;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AWhiteboardController_SetupWhiteboardInputMode_Statics::NewProp_InteractingPlayer = { "InteractingPlayer", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WhiteboardController_eventSetupWhiteboardInputMode_Parms, InteractingPlayer), Z_Construct_UClass_APawn_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AWhiteboardController_SetupWhiteboardInputMode_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AWhiteboardController_SetupWhiteboardInputMode_Statics::NewProp_InteractingPlayer,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AWhiteboardController_SetupWhiteboardInputMode_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AWhiteboardController_SetupWhiteboardInputMode_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AWhiteboardController, nullptr, "SetupWhiteboardInputMode", Z_Construct_UFunction_AWhiteboardController_SetupWhiteboardInputMode_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AWhiteboardController_SetupWhiteboardInputMode_Statics::PropPointers), sizeof(Z_Construct_UFunction_AWhiteboardController_SetupWhiteboardInputMode_Statics::WhiteboardController_eventSetupWhiteboardInputMode_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AWhiteboardController_SetupWhiteboardInputMode_Statics::Function_MetaDataParams), Z_Construct_UFunction_AWhiteboardController_SetupWhiteboardInputMode_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_AWhiteboardController_SetupWhiteboardInputMode_Statics::WhiteboardController_eventSetupWhiteboardInputMode_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AWhiteboardController_SetupWhiteboardInputMode()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AWhiteboardController_SetupWhiteboardInputMode_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AWhiteboardController::execSetupWhiteboardInputMode)
{
	P_GET_OBJECT(APawn,Z_Param_InteractingPlayer);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetupWhiteboardInputMode(Z_Param_InteractingPlayer);
	P_NATIVE_END;
}
// ********** End Class AWhiteboardController Function SetupWhiteboardInputMode ********************

// ********** Begin Class AWhiteboardController ****************************************************
void AWhiteboardController::StaticRegisterNativesAWhiteboardController()
{
	UClass* Class = AWhiteboardController::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "Client_CleanupInteractionUI", &AWhiteboardController::execClient_CleanupInteractionUI },
		{ "RestoreGameInputMode", &AWhiteboardController::execRestoreGameInputMode },
		{ "Server_EndWhiteboardInteraction", &AWhiteboardController::execServer_EndWhiteboardInteraction },
		{ "Server_RequestWhiteboardInteraction", &AWhiteboardController::execServer_RequestWhiteboardInteraction },
		{ "Server_WhiteboardAddText", &AWhiteboardController::execServer_WhiteboardAddText },
		{ "Server_WhiteboardClearWhiteboard", &AWhiteboardController::execServer_WhiteboardClearWhiteboard },
		{ "Server_WhiteboardContinueDrawing", &AWhiteboardController::execServer_WhiteboardContinueDrawing },
		{ "Server_WhiteboardDrawFigure", &AWhiteboardController::execServer_WhiteboardDrawFigure },
		{ "Server_WhiteboardEndDrawing", &AWhiteboardController::execServer_WhiteboardEndDrawing },
		{ "Server_WhiteboardRedo", &AWhiteboardController::execServer_WhiteboardRedo },
		{ "Server_WhiteboardStartDrawing", &AWhiteboardController::execServer_WhiteboardStartDrawing },
		{ "Server_WhiteboardUndo", &AWhiteboardController::execServer_WhiteboardUndo },
		{ "SetupWhiteboardInputMode", &AWhiteboardController::execSetupWhiteboardInputMode },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_AWhiteboardController;
UClass* AWhiteboardController::GetPrivateStaticClass()
{
	using TClass = AWhiteboardController;
	if (!Z_Registration_Info_UClass_AWhiteboardController.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("WhiteboardController"),
			Z_Registration_Info_UClass_AWhiteboardController.InnerSingleton,
			StaticRegisterNativesAWhiteboardController,
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
	return Z_Registration_Info_UClass_AWhiteboardController.InnerSingleton;
}
UClass* Z_Construct_UClass_AWhiteboardController_NoRegister()
{
	return AWhiteboardController::GetPrivateStaticClass();
}
struct Z_Construct_UClass_AWhiteboardController_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Collision Rendering Transformation" },
		{ "IncludePath", "Controller/AWhiteboard_Player_Controller.h" },
		{ "ModuleRelativePath", "Public/Controller/AWhiteboard_Player_Controller.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OriginalInputComponent_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Controller/AWhiteboard_Player_Controller.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OriginalInputComponent;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_AWhiteboardController_Client_CleanupInteractionUI, "Client_CleanupInteractionUI" }, // 2641670482
		{ &Z_Construct_UFunction_AWhiteboardController_OnPlayerJoinedInteraction, "OnPlayerJoinedInteraction" }, // 2348824982
		{ &Z_Construct_UFunction_AWhiteboardController_OnPlayerLeftInteraction, "OnPlayerLeftInteraction" }, // 289997979
		{ &Z_Construct_UFunction_AWhiteboardController_RestoreGameInputMode, "RestoreGameInputMode" }, // 2524641105
		{ &Z_Construct_UFunction_AWhiteboardController_Server_EndWhiteboardInteraction, "Server_EndWhiteboardInteraction" }, // 1594144420
		{ &Z_Construct_UFunction_AWhiteboardController_Server_RequestWhiteboardInteraction, "Server_RequestWhiteboardInteraction" }, // 2932584202
		{ &Z_Construct_UFunction_AWhiteboardController_Server_WhiteboardAddText, "Server_WhiteboardAddText" }, // 3188761246
		{ &Z_Construct_UFunction_AWhiteboardController_Server_WhiteboardClearWhiteboard, "Server_WhiteboardClearWhiteboard" }, // 3301629198
		{ &Z_Construct_UFunction_AWhiteboardController_Server_WhiteboardContinueDrawing, "Server_WhiteboardContinueDrawing" }, // 3503577743
		{ &Z_Construct_UFunction_AWhiteboardController_Server_WhiteboardDrawFigure, "Server_WhiteboardDrawFigure" }, // 3336695034
		{ &Z_Construct_UFunction_AWhiteboardController_Server_WhiteboardEndDrawing, "Server_WhiteboardEndDrawing" }, // 4266373456
		{ &Z_Construct_UFunction_AWhiteboardController_Server_WhiteboardRedo, "Server_WhiteboardRedo" }, // 393793492
		{ &Z_Construct_UFunction_AWhiteboardController_Server_WhiteboardStartDrawing, "Server_WhiteboardStartDrawing" }, // 786939619
		{ &Z_Construct_UFunction_AWhiteboardController_Server_WhiteboardUndo, "Server_WhiteboardUndo" }, // 155172943
		{ &Z_Construct_UFunction_AWhiteboardController_SetupWhiteboardInputMode, "SetupWhiteboardInputMode" }, // 968131685
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AWhiteboardController>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AWhiteboardController_Statics::NewProp_OriginalInputComponent = { "OriginalInputComponent", nullptr, (EPropertyFlags)0x0040000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AWhiteboardController, OriginalInputComponent), Z_Construct_UClass_UInputComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OriginalInputComponent_MetaData), NewProp_OriginalInputComponent_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AWhiteboardController_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWhiteboardController_Statics::NewProp_OriginalInputComponent,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AWhiteboardController_Statics::PropPointers) < 2048);
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
	Z_Construct_UClass_AWhiteboardController_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_AWhiteboardController_Statics::PropPointers),
	0,
	0x009003A4u,
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
AWhiteboardController::AWhiteboardController(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(AWhiteboardController);
AWhiteboardController::~AWhiteboardController() {}
// ********** End Class AWhiteboardController ******************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_SPARKELON_2025_Prototype_2025_Advanced_WhiteBoard_Plugins_AdvancedDrawingBoard_Source_AdvancedDrawingBoard_Public_Controller_AWhiteboard_Player_Controller_h__Script_AdvancedDrawingBoard_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AWhiteboardController, AWhiteboardController::StaticClass, TEXT("AWhiteboardController"), &Z_Registration_Info_UClass_AWhiteboardController, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AWhiteboardController), 59628663U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_SPARKELON_2025_Prototype_2025_Advanced_WhiteBoard_Plugins_AdvancedDrawingBoard_Source_AdvancedDrawingBoard_Public_Controller_AWhiteboard_Player_Controller_h__Script_AdvancedDrawingBoard_1361185977(TEXT("/Script/AdvancedDrawingBoard"),
	Z_CompiledInDeferFile_FID_SPARKELON_2025_Prototype_2025_Advanced_WhiteBoard_Plugins_AdvancedDrawingBoard_Source_AdvancedDrawingBoard_Public_Controller_AWhiteboard_Player_Controller_h__Script_AdvancedDrawingBoard_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_SPARKELON_2025_Prototype_2025_Advanced_WhiteBoard_Plugins_AdvancedDrawingBoard_Source_AdvancedDrawingBoard_Public_Controller_AWhiteboard_Player_Controller_h__Script_AdvancedDrawingBoard_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
