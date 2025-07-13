// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Components/WhiteboardInteractionComponent.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class EDrawingTool : uint8;
struct FLinearColor;
#ifdef ADVANCEDDRAWINGBOARD_WhiteboardInteractionComponent_generated_h
#error "WhiteboardInteractionComponent.generated.h already included, missing '#pragma once' in WhiteboardInteractionComponent.h"
#endif
#define ADVANCEDDRAWINGBOARD_WhiteboardInteractionComponent_generated_h

#define FID_Advanced_WhiteBoard_Plugins_AdvancedDrawingBoard_Source_AdvancedDrawingBoard_Public_Components_WhiteboardInteractionComponent_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetCurrentDrawingPosition); \
	DECLARE_FUNCTION(execExportToSVG); \
	DECLARE_FUNCTION(execExportToPNG); \
	DECLARE_FUNCTION(execRedo); \
	DECLARE_FUNCTION(execUndo); \
	DECLARE_FUNCTION(execClearWhiteboard); \
	DECLARE_FUNCTION(execAddTextAtPosition); \
	DECLARE_FUNCTION(execSetTextSize); \
	DECLARE_FUNCTION(execSetShapeFillColor); \
	DECLARE_FUNCTION(execSetFillShapes); \
	DECLARE_FUNCTION(execAddText); \
	DECLARE_FUNCTION(execSetBrushSize); \
	DECLARE_FUNCTION(execSetDrawingColor); \
	DECLARE_FUNCTION(execSetDrawingTool); \
	DECLARE_FUNCTION(execStopDrawing); \
	DECLARE_FUNCTION(execContinueDrawing); \
	DECLARE_FUNCTION(execStartDrawing); \
	DECLARE_FUNCTION(execIsInRangeOfWhiteboard); \
	DECLARE_FUNCTION(execEndInteraction); \
	DECLARE_FUNCTION(execStopDrawingInput); \
	DECLARE_FUNCTION(execStartDrawingInput); \
	DECLARE_FUNCTION(execTryToInteract);


#define FID_Advanced_WhiteBoard_Plugins_AdvancedDrawingBoard_Source_AdvancedDrawingBoard_Public_Components_WhiteboardInteractionComponent_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUWhiteboardInteractionComponent(); \
	friend struct Z_Construct_UClass_UWhiteboardInteractionComponent_Statics; \
public: \
	DECLARE_CLASS(UWhiteboardInteractionComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/AdvancedDrawingBoard"), NO_API) \
	DECLARE_SERIALIZER(UWhiteboardInteractionComponent)


#define FID_Advanced_WhiteBoard_Plugins_AdvancedDrawingBoard_Source_AdvancedDrawingBoard_Public_Components_WhiteboardInteractionComponent_h_13_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UWhiteboardInteractionComponent(UWhiteboardInteractionComponent&&); \
	UWhiteboardInteractionComponent(const UWhiteboardInteractionComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UWhiteboardInteractionComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UWhiteboardInteractionComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UWhiteboardInteractionComponent) \
	NO_API virtual ~UWhiteboardInteractionComponent();


#define FID_Advanced_WhiteBoard_Plugins_AdvancedDrawingBoard_Source_AdvancedDrawingBoard_Public_Components_WhiteboardInteractionComponent_h_10_PROLOG
#define FID_Advanced_WhiteBoard_Plugins_AdvancedDrawingBoard_Source_AdvancedDrawingBoard_Public_Components_WhiteboardInteractionComponent_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Advanced_WhiteBoard_Plugins_AdvancedDrawingBoard_Source_AdvancedDrawingBoard_Public_Components_WhiteboardInteractionComponent_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Advanced_WhiteBoard_Plugins_AdvancedDrawingBoard_Source_AdvancedDrawingBoard_Public_Components_WhiteboardInteractionComponent_h_13_INCLASS_NO_PURE_DECLS \
	FID_Advanced_WhiteBoard_Plugins_AdvancedDrawingBoard_Source_AdvancedDrawingBoard_Public_Components_WhiteboardInteractionComponent_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ADVANCEDDRAWINGBOARD_API UClass* StaticClass<class UWhiteboardInteractionComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Advanced_WhiteBoard_Plugins_AdvancedDrawingBoard_Source_AdvancedDrawingBoard_Public_Components_WhiteboardInteractionComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
