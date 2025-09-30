// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Controller/AWhiteboard_Player_Controller.h"

#ifdef ADVANCEDDRAWINGBOARD_AWhiteboard_Player_Controller_generated_h
#error "AWhiteboard_Player_Controller.generated.h already included, missing '#pragma once' in AWhiteboard_Player_Controller.h"
#endif
#define ADVANCEDDRAWINGBOARD_AWhiteboard_Player_Controller_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

class APawn;
class AWhiteboardActor;
enum class EDrawingTool : uint8;
struct FLinearColor;
struct FPlayerDrawingState;
struct FStroke;

// ********** Begin Class AWhiteboardController ****************************************************
#define FID_SPARKELON_2025_Prototype_2025_Advanced_WhiteBoard_Plugins_AdvancedDrawingBoard_Source_AdvancedDrawingBoard_Public_Controller_AWhiteboard_Player_Controller_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void Server_WhiteboardRedo_Implementation(AWhiteboardActor* Whiteboard); \
	virtual void Server_WhiteboardUndo_Implementation(AWhiteboardActor* Whiteboard); \
	virtual void Server_WhiteboardClearWhiteboard_Implementation(AWhiteboardActor* Whiteboard); \
	virtual void Server_WhiteboardDrawFigure_Implementation(AWhiteboardActor* Whiteboard, FVector2D const& CanvasPosition, FPlayerDrawingState const& PlayerToolState); \
	virtual void Server_WhiteboardAddText_Implementation(AWhiteboardActor* Whiteboard, FVector2D const& CanvasPosition, const FString& Text, FLinearColor Color, float Size); \
	virtual void Server_WhiteboardDrawImmediateStroke_Implementation(APawn* DrawingPlayer, AWhiteboardActor* Whiteboard, FStroke const& ImmediateStroke); \
	virtual void Server_WhiteboardEndDrawing_Implementation(APawn* DrawingPlayer, AWhiteboardActor* Whiteboard); \
	virtual void Server_WhiteboardUpdateDrawing_Implementation(APawn* DrawingPlayer, AWhiteboardActor* Whiteboard, FVector2D const& CanvasPosition, EDrawingTool Tool, FLinearColor Color, float BrushSize); \
	virtual void Server_WhiteboardStartDrawing_Implementation(APawn* DrawingPlayer, AWhiteboardActor* Whiteboard, FVector2D const& CanvasPosition, EDrawingTool Tool, FLinearColor Color, float BrushSize, int32 BrushTextureIndex, int32 FigureTextureIndex); \
	virtual void Server_UpdatePlayerToolState_Implementation(AWhiteboardActor* Whiteboard, EDrawingTool Tool, FLinearColor Color, float Size, int32 BrushTextureIndex, int32 FigureTextureIndex); \
	virtual void Server_EndWhiteboardInteraction_Implementation(AWhiteboardActor* Whiteboard, APawn* InteractingPlayer); \
	virtual void Server_RequestWhiteboardInteraction_Implementation(AWhiteboardActor* Whiteboard, APawn* InteractingPlayer); \
	virtual void Client_CleanupInteractionUI_Implementation(APawn* InteractingPlayer); \
	DECLARE_FUNCTION(execServer_WhiteboardRedo); \
	DECLARE_FUNCTION(execServer_WhiteboardUndo); \
	DECLARE_FUNCTION(execServer_WhiteboardClearWhiteboard); \
	DECLARE_FUNCTION(execServer_WhiteboardDrawFigure); \
	DECLARE_FUNCTION(execServer_WhiteboardAddText); \
	DECLARE_FUNCTION(execServer_WhiteboardDrawImmediateStroke); \
	DECLARE_FUNCTION(execServer_WhiteboardEndDrawing); \
	DECLARE_FUNCTION(execServer_WhiteboardUpdateDrawing); \
	DECLARE_FUNCTION(execServer_WhiteboardStartDrawing); \
	DECLARE_FUNCTION(execServer_UpdatePlayerToolState); \
	DECLARE_FUNCTION(execServer_EndWhiteboardInteraction); \
	DECLARE_FUNCTION(execServer_RequestWhiteboardInteraction); \
	DECLARE_FUNCTION(execClient_CleanupInteractionUI); \
	DECLARE_FUNCTION(execRestoreGameInputMode); \
	DECLARE_FUNCTION(execSetupWhiteboardInputMode);


#define FID_SPARKELON_2025_Prototype_2025_Advanced_WhiteBoard_Plugins_AdvancedDrawingBoard_Source_AdvancedDrawingBoard_Public_Controller_AWhiteboard_Player_Controller_h_19_CALLBACK_WRAPPERS
ADVANCEDDRAWINGBOARD_API UClass* Z_Construct_UClass_AWhiteboardController_NoRegister();

#define FID_SPARKELON_2025_Prototype_2025_Advanced_WhiteBoard_Plugins_AdvancedDrawingBoard_Source_AdvancedDrawingBoard_Public_Controller_AWhiteboard_Player_Controller_h_19_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAWhiteboardController(); \
	friend struct Z_Construct_UClass_AWhiteboardController_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ADVANCEDDRAWINGBOARD_API UClass* Z_Construct_UClass_AWhiteboardController_NoRegister(); \
public: \
	DECLARE_CLASS2(AWhiteboardController, APlayerController, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/AdvancedDrawingBoard"), Z_Construct_UClass_AWhiteboardController_NoRegister) \
	DECLARE_SERIALIZER(AWhiteboardController)


#define FID_SPARKELON_2025_Prototype_2025_Advanced_WhiteBoard_Plugins_AdvancedDrawingBoard_Source_AdvancedDrawingBoard_Public_Controller_AWhiteboard_Player_Controller_h_19_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AWhiteboardController(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	AWhiteboardController(AWhiteboardController&&) = delete; \
	AWhiteboardController(const AWhiteboardController&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AWhiteboardController); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AWhiteboardController); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AWhiteboardController) \
	NO_API virtual ~AWhiteboardController();


#define FID_SPARKELON_2025_Prototype_2025_Advanced_WhiteBoard_Plugins_AdvancedDrawingBoard_Source_AdvancedDrawingBoard_Public_Controller_AWhiteboard_Player_Controller_h_16_PROLOG
#define FID_SPARKELON_2025_Prototype_2025_Advanced_WhiteBoard_Plugins_AdvancedDrawingBoard_Source_AdvancedDrawingBoard_Public_Controller_AWhiteboard_Player_Controller_h_19_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_SPARKELON_2025_Prototype_2025_Advanced_WhiteBoard_Plugins_AdvancedDrawingBoard_Source_AdvancedDrawingBoard_Public_Controller_AWhiteboard_Player_Controller_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_SPARKELON_2025_Prototype_2025_Advanced_WhiteBoard_Plugins_AdvancedDrawingBoard_Source_AdvancedDrawingBoard_Public_Controller_AWhiteboard_Player_Controller_h_19_CALLBACK_WRAPPERS \
	FID_SPARKELON_2025_Prototype_2025_Advanced_WhiteBoard_Plugins_AdvancedDrawingBoard_Source_AdvancedDrawingBoard_Public_Controller_AWhiteboard_Player_Controller_h_19_INCLASS_NO_PURE_DECLS \
	FID_SPARKELON_2025_Prototype_2025_Advanced_WhiteBoard_Plugins_AdvancedDrawingBoard_Source_AdvancedDrawingBoard_Public_Controller_AWhiteboard_Player_Controller_h_19_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class AWhiteboardController;

// ********** End Class AWhiteboardController ******************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_SPARKELON_2025_Prototype_2025_Advanced_WhiteBoard_Plugins_AdvancedDrawingBoard_Source_AdvancedDrawingBoard_Public_Controller_AWhiteboard_Player_Controller_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
