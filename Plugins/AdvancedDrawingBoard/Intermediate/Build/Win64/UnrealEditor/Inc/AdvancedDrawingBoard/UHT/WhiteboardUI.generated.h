// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "UI/WhiteboardUI.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class EDrawingTool : uint8;
struct FLinearColor;
#ifdef ADVANCEDDRAWINGBOARD_WhiteboardUI_generated_h
#error "WhiteboardUI.generated.h already included, missing '#pragma once' in WhiteboardUI.h"
#endif
#define ADVANCEDDRAWINGBOARD_WhiteboardUI_generated_h

#define FID_Advanced_WhiteBoard_Plugins_AdvancedDrawingBoard_Source_AdvancedDrawingBoard_Public_UI_WhiteboardUI_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execAddText); \
	DECLARE_FUNCTION(execExportToSVG); \
	DECLARE_FUNCTION(execExportToPNG); \
	DECLARE_FUNCTION(execRedo); \
	DECLARE_FUNCTION(execUndo); \
	DECLARE_FUNCTION(execClearWhiteboard); \
	DECLARE_FUNCTION(execSetBrushTexture); \
	DECLARE_FUNCTION(execSetBrushSize); \
	DECLARE_FUNCTION(execSetDrawingColor); \
	DECLARE_FUNCTION(execSetDrawingTool);


#define FID_Advanced_WhiteBoard_Plugins_AdvancedDrawingBoard_Source_AdvancedDrawingBoard_Public_UI_WhiteboardUI_h_14_CALLBACK_WRAPPERS
#define FID_Advanced_WhiteBoard_Plugins_AdvancedDrawingBoard_Source_AdvancedDrawingBoard_Public_UI_WhiteboardUI_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUWhiteboardUI(); \
	friend struct Z_Construct_UClass_UWhiteboardUI_Statics; \
public: \
	DECLARE_CLASS(UWhiteboardUI, UUserWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AdvancedDrawingBoard"), NO_API) \
	DECLARE_SERIALIZER(UWhiteboardUI)


#define FID_Advanced_WhiteBoard_Plugins_AdvancedDrawingBoard_Source_AdvancedDrawingBoard_Public_UI_WhiteboardUI_h_14_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UWhiteboardUI(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UWhiteboardUI(UWhiteboardUI&&); \
	UWhiteboardUI(const UWhiteboardUI&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UWhiteboardUI); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UWhiteboardUI); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UWhiteboardUI) \
	NO_API virtual ~UWhiteboardUI();


#define FID_Advanced_WhiteBoard_Plugins_AdvancedDrawingBoard_Source_AdvancedDrawingBoard_Public_UI_WhiteboardUI_h_11_PROLOG
#define FID_Advanced_WhiteBoard_Plugins_AdvancedDrawingBoard_Source_AdvancedDrawingBoard_Public_UI_WhiteboardUI_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Advanced_WhiteBoard_Plugins_AdvancedDrawingBoard_Source_AdvancedDrawingBoard_Public_UI_WhiteboardUI_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Advanced_WhiteBoard_Plugins_AdvancedDrawingBoard_Source_AdvancedDrawingBoard_Public_UI_WhiteboardUI_h_14_CALLBACK_WRAPPERS \
	FID_Advanced_WhiteBoard_Plugins_AdvancedDrawingBoard_Source_AdvancedDrawingBoard_Public_UI_WhiteboardUI_h_14_INCLASS_NO_PURE_DECLS \
	FID_Advanced_WhiteBoard_Plugins_AdvancedDrawingBoard_Source_AdvancedDrawingBoard_Public_UI_WhiteboardUI_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ADVANCEDDRAWINGBOARD_API UClass* StaticClass<class UWhiteboardUI>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Advanced_WhiteBoard_Plugins_AdvancedDrawingBoard_Source_AdvancedDrawingBoard_Public_UI_WhiteboardUI_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
