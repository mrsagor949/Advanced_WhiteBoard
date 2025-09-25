// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Components/WhiteboardInteractionComponent.h"

#ifdef ADVANCEDDRAWINGBOARD_WhiteboardInteractionComponent_generated_h
#error "WhiteboardInteractionComponent.generated.h already included, missing '#pragma once' in WhiteboardInteractionComponent.h"
#endif
#define ADVANCEDDRAWINGBOARD_WhiteboardInteractionComponent_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UWhiteboardInteractionComponent ******************************************
#define FID_SPARKELON_2025_Prototype_2025_Advanced_WhiteBoard_Plugins_AdvancedDrawingBoard_Source_AdvancedDrawingBoard_Public_Components_WhiteboardInteractionComponent_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetCurrentDrawingPosition); \
	DECLARE_FUNCTION(execExportToSVG); \
	DECLARE_FUNCTION(execExportToPNG); \
	DECLARE_FUNCTION(execRedo); \
	DECLARE_FUNCTION(execUndo); \
	DECLARE_FUNCTION(execClearWhiteboard); \
	DECLARE_FUNCTION(execContinueDrawing); \
	DECLARE_FUNCTION(execIsInRangeOfWhiteboard); \
	DECLARE_FUNCTION(execEndInteraction); \
	DECLARE_FUNCTION(execStopDrawingInput); \
	DECLARE_FUNCTION(execStartDrawingInput); \
	DECLARE_FUNCTION(execTryToInteract);


ADVANCEDDRAWINGBOARD_API UClass* Z_Construct_UClass_UWhiteboardInteractionComponent_NoRegister();

#define FID_SPARKELON_2025_Prototype_2025_Advanced_WhiteBoard_Plugins_AdvancedDrawingBoard_Source_AdvancedDrawingBoard_Public_Components_WhiteboardInteractionComponent_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUWhiteboardInteractionComponent(); \
	friend struct Z_Construct_UClass_UWhiteboardInteractionComponent_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ADVANCEDDRAWINGBOARD_API UClass* Z_Construct_UClass_UWhiteboardInteractionComponent_NoRegister(); \
public: \
	DECLARE_CLASS2(UWhiteboardInteractionComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/AdvancedDrawingBoard"), Z_Construct_UClass_UWhiteboardInteractionComponent_NoRegister) \
	DECLARE_SERIALIZER(UWhiteboardInteractionComponent)


#define FID_SPARKELON_2025_Prototype_2025_Advanced_WhiteBoard_Plugins_AdvancedDrawingBoard_Source_AdvancedDrawingBoard_Public_Components_WhiteboardInteractionComponent_h_14_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UWhiteboardInteractionComponent(UWhiteboardInteractionComponent&&) = delete; \
	UWhiteboardInteractionComponent(const UWhiteboardInteractionComponent&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UWhiteboardInteractionComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UWhiteboardInteractionComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UWhiteboardInteractionComponent) \
	NO_API virtual ~UWhiteboardInteractionComponent();


#define FID_SPARKELON_2025_Prototype_2025_Advanced_WhiteBoard_Plugins_AdvancedDrawingBoard_Source_AdvancedDrawingBoard_Public_Components_WhiteboardInteractionComponent_h_11_PROLOG
#define FID_SPARKELON_2025_Prototype_2025_Advanced_WhiteBoard_Plugins_AdvancedDrawingBoard_Source_AdvancedDrawingBoard_Public_Components_WhiteboardInteractionComponent_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_SPARKELON_2025_Prototype_2025_Advanced_WhiteBoard_Plugins_AdvancedDrawingBoard_Source_AdvancedDrawingBoard_Public_Components_WhiteboardInteractionComponent_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_SPARKELON_2025_Prototype_2025_Advanced_WhiteBoard_Plugins_AdvancedDrawingBoard_Source_AdvancedDrawingBoard_Public_Components_WhiteboardInteractionComponent_h_14_INCLASS_NO_PURE_DECLS \
	FID_SPARKELON_2025_Prototype_2025_Advanced_WhiteBoard_Plugins_AdvancedDrawingBoard_Source_AdvancedDrawingBoard_Public_Components_WhiteboardInteractionComponent_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UWhiteboardInteractionComponent;

// ********** End Class UWhiteboardInteractionComponent ********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_SPARKELON_2025_Prototype_2025_Advanced_WhiteBoard_Plugins_AdvancedDrawingBoard_Source_AdvancedDrawingBoard_Public_Components_WhiteboardInteractionComponent_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
