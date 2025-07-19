// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "UI/UI_ImportFile.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ADVANCEDDRAWINGBOARD_UI_ImportFile_generated_h
#error "UI_ImportFile.generated.h already included, missing '#pragma once' in UI_ImportFile.h"
#endif
#define ADVANCEDDRAWINGBOARD_UI_ImportFile_generated_h

#define FID_Advanced_WhiteBoard_Plugins_AdvancedDrawingBoard_Source_AdvancedDrawingBoard_Public_UI_UI_ImportFile_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execPrintData); \
	DECLARE_FUNCTION(execOpenFileDialog);


#define FID_Advanced_WhiteBoard_Plugins_AdvancedDrawingBoard_Source_AdvancedDrawingBoard_Public_UI_UI_ImportFile_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUUI_ImportFile(); \
	friend struct Z_Construct_UClass_UUI_ImportFile_Statics; \
public: \
	DECLARE_CLASS(UUI_ImportFile, UUserWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AdvancedDrawingBoard"), NO_API) \
	DECLARE_SERIALIZER(UUI_ImportFile)


#define FID_Advanced_WhiteBoard_Plugins_AdvancedDrawingBoard_Source_AdvancedDrawingBoard_Public_UI_UI_ImportFile_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UUI_ImportFile(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UUI_ImportFile(UUI_ImportFile&&); \
	UUI_ImportFile(const UUI_ImportFile&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UUI_ImportFile); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UUI_ImportFile); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UUI_ImportFile) \
	NO_API virtual ~UUI_ImportFile();


#define FID_Advanced_WhiteBoard_Plugins_AdvancedDrawingBoard_Source_AdvancedDrawingBoard_Public_UI_UI_ImportFile_h_12_PROLOG
#define FID_Advanced_WhiteBoard_Plugins_AdvancedDrawingBoard_Source_AdvancedDrawingBoard_Public_UI_UI_ImportFile_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Advanced_WhiteBoard_Plugins_AdvancedDrawingBoard_Source_AdvancedDrawingBoard_Public_UI_UI_ImportFile_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Advanced_WhiteBoard_Plugins_AdvancedDrawingBoard_Source_AdvancedDrawingBoard_Public_UI_UI_ImportFile_h_15_INCLASS_NO_PURE_DECLS \
	FID_Advanced_WhiteBoard_Plugins_AdvancedDrawingBoard_Source_AdvancedDrawingBoard_Public_UI_UI_ImportFile_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ADVANCEDDRAWINGBOARD_API UClass* StaticClass<class UUI_ImportFile>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Advanced_WhiteBoard_Plugins_AdvancedDrawingBoard_Source_AdvancedDrawingBoard_Public_UI_UI_ImportFile_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
