// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Controller/AWhiteboard_Player_Controller.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class APawn;
class AWhiteboardActor;
enum class EDrawingTool : uint8;
struct FLinearColor;
#ifdef ADVANCEDDRAWINGBOARD_AWhiteboard_Player_Controller_generated_h
#error "AWhiteboard_Player_Controller.generated.h already included, missing '#pragma once' in AWhiteboard_Player_Controller.h"
#endif
#define ADVANCEDDRAWINGBOARD_AWhiteboard_Player_Controller_generated_h

#define FID_Advanced_WhiteBoard_Plugins_AdvancedDrawingBoard_Source_AdvancedDrawingBoard_Public_Controller_AWhiteboard_Player_Controller_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void Server_WhiteboardSetTextString_Implementation(AWhiteboardActor* Whiteboard, const FString& NewTextString); \
	virtual void Server_WhiteboardSetFigureTexture_Implementation(AWhiteboardActor* Whiteboard, int32 TextureIndex); \
	virtual void Server_WhiteboardSetBrushTexture_Implementation(AWhiteboardActor* Whiteboard, int32 TextureIndex); \
	virtual void Server_WhiteboardSetBrushSize_Implementation(AWhiteboardActor* Whiteboard, float NewSize); \
	virtual void Server_WhiteboardSetCurrentColor_Implementation(AWhiteboardActor* Whiteboard, FLinearColor NewColor); \
	virtual void Server_WhiteboardSetCurrentTool_Implementation(AWhiteboardActor* Whiteboard, EDrawingTool NewTool); \
	virtual void Server_WhiteboardRedo_Implementation(AWhiteboardActor* Whiteboard); \
	virtual void Server_WhiteboardUndo_Implementation(AWhiteboardActor* Whiteboard); \
	virtual void Server_WhiteboardClearWhiteboard_Implementation(AWhiteboardActor* Whiteboard); \
	virtual void Server_WhiteboardDrawFigure_Implementation(AWhiteboardActor* Whiteboard, FVector2D const& CanvasPosition, int32 SelectedFigureIndex, FLinearColor Color, float Size); \
	virtual void Server_WhiteboardAddText_Implementation(AWhiteboardActor* Whiteboard, FVector2D const& CanvasPosition, const FString& Text, FLinearColor Color, float Size); \
	virtual void Server_WhiteboardEndDrawing_Implementation(AWhiteboardActor* Whiteboard); \
	virtual void Server_WhiteboardContinueDrawing_Implementation(AWhiteboardActor* Whiteboard, FVector2D const& CanvasPosition); \
	virtual void Server_WhiteboardStartDrawing_Implementation(AWhiteboardActor* Whiteboard, FVector2D const& CanvasPosition, EDrawingTool Tool, FLinearColor Color, float Size, int32 BrushTextureIndex, int32 FigureTextureIndex); \
	virtual void Server_EndWhiteboardInteraction_Implementation(AWhiteboardActor* Whiteboard, APawn* InteractingPlayer); \
	virtual void Server_RequestWhiteboardInteraction_Implementation(AWhiteboardActor* Whiteboard, APawn* InteractingPlayer); \
	DECLARE_FUNCTION(execServer_WhiteboardSetTextString); \
	DECLARE_FUNCTION(execServer_WhiteboardSetFigureTexture); \
	DECLARE_FUNCTION(execServer_WhiteboardSetBrushTexture); \
	DECLARE_FUNCTION(execServer_WhiteboardSetBrushSize); \
	DECLARE_FUNCTION(execServer_WhiteboardSetCurrentColor); \
	DECLARE_FUNCTION(execServer_WhiteboardSetCurrentTool); \
	DECLARE_FUNCTION(execServer_WhiteboardRedo); \
	DECLARE_FUNCTION(execServer_WhiteboardUndo); \
	DECLARE_FUNCTION(execServer_WhiteboardClearWhiteboard); \
	DECLARE_FUNCTION(execServer_WhiteboardDrawFigure); \
	DECLARE_FUNCTION(execServer_WhiteboardAddText); \
	DECLARE_FUNCTION(execServer_WhiteboardEndDrawing); \
	DECLARE_FUNCTION(execServer_WhiteboardContinueDrawing); \
	DECLARE_FUNCTION(execServer_WhiteboardStartDrawing); \
	DECLARE_FUNCTION(execServer_EndWhiteboardInteraction); \
	DECLARE_FUNCTION(execServer_RequestWhiteboardInteraction);


#define FID_Advanced_WhiteBoard_Plugins_AdvancedDrawingBoard_Source_AdvancedDrawingBoard_Public_Controller_AWhiteboard_Player_Controller_h_15_CALLBACK_WRAPPERS
#define FID_Advanced_WhiteBoard_Plugins_AdvancedDrawingBoard_Source_AdvancedDrawingBoard_Public_Controller_AWhiteboard_Player_Controller_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAWhiteboardController(); \
	friend struct Z_Construct_UClass_AWhiteboardController_Statics; \
public: \
	DECLARE_CLASS(AWhiteboardController, APlayerController, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/AdvancedDrawingBoard"), NO_API) \
	DECLARE_SERIALIZER(AWhiteboardController)


#define FID_Advanced_WhiteBoard_Plugins_AdvancedDrawingBoard_Source_AdvancedDrawingBoard_Public_Controller_AWhiteboard_Player_Controller_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AWhiteboardController(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	AWhiteboardController(AWhiteboardController&&); \
	AWhiteboardController(const AWhiteboardController&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AWhiteboardController); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AWhiteboardController); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AWhiteboardController) \
	NO_API virtual ~AWhiteboardController();


#define FID_Advanced_WhiteBoard_Plugins_AdvancedDrawingBoard_Source_AdvancedDrawingBoard_Public_Controller_AWhiteboard_Player_Controller_h_12_PROLOG
#define FID_Advanced_WhiteBoard_Plugins_AdvancedDrawingBoard_Source_AdvancedDrawingBoard_Public_Controller_AWhiteboard_Player_Controller_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Advanced_WhiteBoard_Plugins_AdvancedDrawingBoard_Source_AdvancedDrawingBoard_Public_Controller_AWhiteboard_Player_Controller_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Advanced_WhiteBoard_Plugins_AdvancedDrawingBoard_Source_AdvancedDrawingBoard_Public_Controller_AWhiteboard_Player_Controller_h_15_CALLBACK_WRAPPERS \
	FID_Advanced_WhiteBoard_Plugins_AdvancedDrawingBoard_Source_AdvancedDrawingBoard_Public_Controller_AWhiteboard_Player_Controller_h_15_INCLASS_NO_PURE_DECLS \
	FID_Advanced_WhiteBoard_Plugins_AdvancedDrawingBoard_Source_AdvancedDrawingBoard_Public_Controller_AWhiteboard_Player_Controller_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ADVANCEDDRAWINGBOARD_API UClass* StaticClass<class AWhiteboardController>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Advanced_WhiteBoard_Plugins_AdvancedDrawingBoard_Source_AdvancedDrawingBoard_Public_Controller_AWhiteboard_Player_Controller_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
