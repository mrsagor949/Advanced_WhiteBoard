// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "UI/WhiteboardUI.h"

#ifdef ADVANCEDDRAWINGBOARD_WhiteboardUI_generated_h
#error "WhiteboardUI.generated.h already included, missing '#pragma once' in WhiteboardUI.h"
#endif
#define ADVANCEDDRAWINGBOARD_WhiteboardUI_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

enum class EDrawingTool : uint8;
struct FLinearColor;

// ********** Begin Class UWhiteboardUI ************************************************************
#define FID_SPARKELON_2025_Prototype_2025_Advanced_WhiteBoard_Plugins_AdvancedDrawingBoard_Source_AdvancedDrawingBoard_Public_UI_WhiteboardUI_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetBrushSize); \
	DECLARE_FUNCTION(execGetCurrentColor); \
	DECLARE_FUNCTION(execGetCurrentTool); \
	DECLARE_FUNCTION(execAddText); \
	DECLARE_FUNCTION(execExportToSVG); \
	DECLARE_FUNCTION(execExportToPNG); \
	DECLARE_FUNCTION(execRedo); \
	DECLARE_FUNCTION(execUndo); \
	DECLARE_FUNCTION(execClearWhiteboard); \
	DECLARE_FUNCTION(execSetText); \
	DECLARE_FUNCTION(execSetFigureTexture); \
	DECLARE_FUNCTION(execSetBrushTexture); \
	DECLARE_FUNCTION(execSetBrushSize); \
	DECLARE_FUNCTION(execSetDrawingColor); \
	DECLARE_FUNCTION(execSetDrawingTool);


#define FID_SPARKELON_2025_Prototype_2025_Advanced_WhiteBoard_Plugins_AdvancedDrawingBoard_Source_AdvancedDrawingBoard_Public_UI_WhiteboardUI_h_16_CALLBACK_WRAPPERS
ADVANCEDDRAWINGBOARD_API UClass* Z_Construct_UClass_UWhiteboardUI_NoRegister();

#define FID_SPARKELON_2025_Prototype_2025_Advanced_WhiteBoard_Plugins_AdvancedDrawingBoard_Source_AdvancedDrawingBoard_Public_UI_WhiteboardUI_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUWhiteboardUI(); \
	friend struct Z_Construct_UClass_UWhiteboardUI_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ADVANCEDDRAWINGBOARD_API UClass* Z_Construct_UClass_UWhiteboardUI_NoRegister(); \
public: \
	DECLARE_CLASS2(UWhiteboardUI, UUserWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AdvancedDrawingBoard"), Z_Construct_UClass_UWhiteboardUI_NoRegister) \
	DECLARE_SERIALIZER(UWhiteboardUI)


#define FID_SPARKELON_2025_Prototype_2025_Advanced_WhiteBoard_Plugins_AdvancedDrawingBoard_Source_AdvancedDrawingBoard_Public_UI_WhiteboardUI_h_16_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UWhiteboardUI(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UWhiteboardUI(UWhiteboardUI&&) = delete; \
	UWhiteboardUI(const UWhiteboardUI&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UWhiteboardUI); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UWhiteboardUI); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UWhiteboardUI) \
	NO_API virtual ~UWhiteboardUI();


#define FID_SPARKELON_2025_Prototype_2025_Advanced_WhiteBoard_Plugins_AdvancedDrawingBoard_Source_AdvancedDrawingBoard_Public_UI_WhiteboardUI_h_13_PROLOG
#define FID_SPARKELON_2025_Prototype_2025_Advanced_WhiteBoard_Plugins_AdvancedDrawingBoard_Source_AdvancedDrawingBoard_Public_UI_WhiteboardUI_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_SPARKELON_2025_Prototype_2025_Advanced_WhiteBoard_Plugins_AdvancedDrawingBoard_Source_AdvancedDrawingBoard_Public_UI_WhiteboardUI_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_SPARKELON_2025_Prototype_2025_Advanced_WhiteBoard_Plugins_AdvancedDrawingBoard_Source_AdvancedDrawingBoard_Public_UI_WhiteboardUI_h_16_CALLBACK_WRAPPERS \
	FID_SPARKELON_2025_Prototype_2025_Advanced_WhiteBoard_Plugins_AdvancedDrawingBoard_Source_AdvancedDrawingBoard_Public_UI_WhiteboardUI_h_16_INCLASS_NO_PURE_DECLS \
	FID_SPARKELON_2025_Prototype_2025_Advanced_WhiteBoard_Plugins_AdvancedDrawingBoard_Source_AdvancedDrawingBoard_Public_UI_WhiteboardUI_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UWhiteboardUI;

// ********** End Class UWhiteboardUI **************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_SPARKELON_2025_Prototype_2025_Advanced_WhiteBoard_Plugins_AdvancedDrawingBoard_Source_AdvancedDrawingBoard_Public_UI_WhiteboardUI_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
