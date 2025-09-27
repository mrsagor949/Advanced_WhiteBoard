// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Actor/WhiteboardActor.h"

#ifdef ADVANCEDDRAWINGBOARD_WhiteboardActor_generated_h
#error "WhiteboardActor.generated.h already included, missing '#pragma once' in WhiteboardActor.h"
#endif
#define ADVANCEDDRAWINGBOARD_WhiteboardActor_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

class AActor;
class APawn;
class APlayerController;
class UCameraComponent;
class UPrimitiveComponent;
class UStaticMeshComponent;
enum class EDrawingTool : uint8;
struct FDrawingData;
struct FHitResult;
struct FLinearColor;
struct FPlayerDrawingState;
struct FStroke;

// ********** Begin Class AWhiteboardActor *********************************************************
#define FID_SPARKELON_2025_Prototype_2025_Advanced_WhiteBoard_Plugins_AdvancedDrawingBoard_Source_AdvancedDrawingBoard_Public_Actor_WhiteboardActor_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void Multicast_DrawStroke_Implementation(FStroke const& Stroke); \
	virtual void Multicast_HandleDrawing_Implementation(FDrawingData const& DrawingData); \
	virtual void Server_HandleDrawing_Implementation(FDrawingData const& DrawingData); \
	virtual void Client_CleanupInteractionUI_Implementation(APawn* InteractingPlayer); \
	virtual void Client_SetupInteractionUI_Implementation(APawn* InteractingPlayer); \
	virtual void Client_SyncWhiteboardState_Implementation(TArray<FStroke> const& History, int32 HistoryIndex); \
	virtual void Multicast_UpdateShapePreview_Implementation(APawn* DrawingPlayer, FVector2D const& StartPos, FVector2D const& EndPos, EDrawingTool Tool, FLinearColor Color, float Size, int32 StrokeID); \
	virtual void Multicast_SyncWhiteboardState_Implementation(TArray<FStroke> const& History, int32 HistoryIndex); \
	virtual void Multicast_UpdateHistory_Implementation(TArray<FStroke> const& NewHistory, int32 NewHistoryIndex); \
	virtual void Multicast_ClearWhiteboard_Implementation(); \
	virtual void Multicast_UpdateDrawing_Implementation(FStroke const& NewStroke); \
	virtual void Server_Redo_Implementation(); \
	virtual void Server_Undo_Implementation(); \
	virtual void Server_ClearWhiteboard_Implementation(); \
	virtual void Server_DrawFigure_Implementation(FVector2D const& CanvasPosition, int32 SelectedFigureIndex, FLinearColor Color, float Size); \
	virtual void Server_AddText_Implementation(FVector2D const& CanvasPosition, const FString& Text, FLinearColor Color, float Size); \
	virtual void Multicast_EndDrawing_Implementation(APawn* DrawingPlayer, FStroke const& CompletedStroke); \
	virtual void Server_EndDrawing_Implementation(APawn* DrawingPlayer); \
	virtual void Multicast_ContinueDrawing_Implementation(FDrawingData const& DrawingData); \
	virtual void Server_ContinueDrawing_Implementation(FDrawingData const& DrawingData); \
	virtual void Server_HandleEndDrawing_Implementation(APawn* DrawingPlayer); \
	virtual void Server_HandleContinueDrawing_Implementation(APawn* DrawingPlayer, FVector2D const& CanvasPosition); \
	virtual void Server_HandleStartDrawing_Implementation(APawn* DrawingPlayer, FVector2D const& CanvasPosition, FPlayerDrawingState const& PlayerState); \
	virtual void Multicast_StartDrawing_Implementation(FDrawingData const& DrawingData); \
	virtual void Server_StartDrawing_Implementation(FDrawingData const& DrawingData); \
	virtual void Multicast_UpdatePlayerToolState_Implementation(APawn* Player, EDrawingTool NewTool); \
	virtual void Server_SetPlayerTool_Implementation(APawn* Player, EDrawingTool NewTool); \
	virtual void Multicast_UpdatePlayerDrawingState_Implementation(APawn* Player, FPlayerDrawingState const& NewState); \
	virtual void Server_UpdatePlayerDrawingState_Implementation(APawn* Player, FPlayerDrawingState const& NewState); \
	virtual void Multicast_UpdatePlayerTool_Implementation(APawn* Player, EDrawingTool NewTool); \
	virtual void Server_UpdatePlayerTool_Implementation(APawn* Player, EDrawingTool NewTool); \
	DECLARE_FUNCTION(execGetCurrentPlayer); \
	DECLARE_FUNCTION(execMulticast_DrawStroke); \
	DECLARE_FUNCTION(execOnRep_InteractingPawns); \
	DECLARE_FUNCTION(execMulticast_HandleDrawing); \
	DECLARE_FUNCTION(execServer_HandleDrawing); \
	DECLARE_FUNCTION(execOnRep_StrokeHistory); \
	DECLARE_FUNCTION(execOnTriggerEndOverlap); \
	DECLARE_FUNCTION(execOnTriggerBeginOverlap); \
	DECLARE_FUNCTION(execDebugPlayerToolState); \
	DECLARE_FUNCTION(execGetWhiteboardCamera); \
	DECLARE_FUNCTION(execIsShapeTool); \
	DECLARE_FUNCTION(execWorldToCanvasPosition); \
	DECLARE_FUNCTION(execCanInteractLocally); \
	DECLARE_FUNCTION(execDebugNetworkState); \
	DECLARE_FUNCTION(execClient_CleanupInteractionUI); \
	DECLARE_FUNCTION(execCleanupInteractionUI); \
	DECLARE_FUNCTION(execClient_SetupInteractionUI); \
	DECLARE_FUNCTION(execSetupInteractionUI); \
	DECLARE_FUNCTION(execClientStartDrawing); \
	DECLARE_FUNCTION(execCanClientDraw); \
	DECLARE_FUNCTION(execClient_SyncWhiteboardState); \
	DECLARE_FUNCTION(execSyncWhiteboardState); \
	DECLARE_FUNCTION(execRemoveInteractingPlayer); \
	DECLARE_FUNCTION(execCanAcceptMorePlayers); \
	DECLARE_FUNCTION(execGetInteractingPlayerCount); \
	DECLARE_FUNCTION(execIsPlayerInteracting); \
	DECLARE_FUNCTION(execIsPlayerInRange); \
	DECLARE_FUNCTION(execCanPlayerInteract); \
	DECLARE_FUNCTION(execRequestEndInteraction); \
	DECLARE_FUNCTION(execRequestInteraction); \
	DECLARE_FUNCTION(execEndInteractionForPlayer); \
	DECLARE_FUNCTION(execEndInteraction); \
	DECLARE_FUNCTION(execStartInteraction); \
	DECLARE_FUNCTION(execMulticast_UpdateShapePreview); \
	DECLARE_FUNCTION(execMulticast_SyncWhiteboardState); \
	DECLARE_FUNCTION(execMulticast_UpdateHistory); \
	DECLARE_FUNCTION(execMulticast_ClearWhiteboard); \
	DECLARE_FUNCTION(execMulticast_UpdateDrawing); \
	DECLARE_FUNCTION(execServer_Redo); \
	DECLARE_FUNCTION(execServer_Undo); \
	DECLARE_FUNCTION(execServer_ClearWhiteboard); \
	DECLARE_FUNCTION(execServer_DrawFigure); \
	DECLARE_FUNCTION(execServer_AddText); \
	DECLARE_FUNCTION(execMulticast_EndDrawing); \
	DECLARE_FUNCTION(execServer_EndDrawing); \
	DECLARE_FUNCTION(execEndDrawing); \
	DECLARE_FUNCTION(execMulticast_ContinueDrawing); \
	DECLARE_FUNCTION(execServer_ContinueDrawing); \
	DECLARE_FUNCTION(execContinueDrawing); \
	DECLARE_FUNCTION(execServer_HandleEndDrawing); \
	DECLARE_FUNCTION(execServer_HandleContinueDrawing); \
	DECLARE_FUNCTION(execServer_HandleStartDrawing); \
	DECLARE_FUNCTION(execMulticast_StartDrawing); \
	DECLARE_FUNCTION(execServer_StartDrawing); \
	DECLARE_FUNCTION(execStartDrawing); \
	DECLARE_FUNCTION(execExportToSVG); \
	DECLARE_FUNCTION(execExportToPNG); \
	DECLARE_FUNCTION(execRedo); \
	DECLARE_FUNCTION(execUndo); \
	DECLARE_FUNCTION(execClearWhiteboard); \
	DECLARE_FUNCTION(execGetCanvasHeight); \
	DECLARE_FUNCTION(execGetCanvasWidth); \
	DECLARE_FUNCTION(execGetWhiteboardMesh); \
	DECLARE_FUNCTION(execSetPlayerTextString); \
	DECLARE_FUNCTION(execSetPlayerFigureTextureIndex); \
	DECLARE_FUNCTION(execSetPlayerBrushTextureIndex); \
	DECLARE_FUNCTION(execSetPlayerBrushSize); \
	DECLARE_FUNCTION(execSetPlayerColor); \
	DECLARE_FUNCTION(execMulticast_UpdatePlayerToolState); \
	DECLARE_FUNCTION(execServer_SetPlayerTool); \
	DECLARE_FUNCTION(execSetPlayerTool); \
	DECLARE_FUNCTION(execGetCurrentTextString); \
	DECLARE_FUNCTION(execGetSelectedFigureTextureIndex); \
	DECLARE_FUNCTION(execGetSelectedBrushTextureIndex); \
	DECLARE_FUNCTION(execGetBrushSize); \
	DECLARE_FUNCTION(execGetCurrentColor); \
	DECLARE_FUNCTION(execGetCurrentTool); \
	DECLARE_FUNCTION(execUpdatePlayerDrawingState); \
	DECLARE_FUNCTION(execMulticast_UpdatePlayerDrawingState); \
	DECLARE_FUNCTION(execServer_UpdatePlayerDrawingState); \
	DECLARE_FUNCTION(execGetPlayerDrawingState); \
	DECLARE_FUNCTION(execMulticast_UpdatePlayerTool); \
	DECLARE_FUNCTION(execServer_UpdatePlayerTool); \
	DECLARE_FUNCTION(execOnRep_PlayerDrawingStates); \
	DECLARE_FUNCTION(execOnRep_DrawingCanvas);


#define FID_SPARKELON_2025_Prototype_2025_Advanced_WhiteBoard_Plugins_AdvancedDrawingBoard_Source_AdvancedDrawingBoard_Public_Actor_WhiteboardActor_h_18_CALLBACK_WRAPPERS
ADVANCEDDRAWINGBOARD_API UClass* Z_Construct_UClass_AWhiteboardActor_NoRegister();

#define FID_SPARKELON_2025_Prototype_2025_Advanced_WhiteBoard_Plugins_AdvancedDrawingBoard_Source_AdvancedDrawingBoard_Public_Actor_WhiteboardActor_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAWhiteboardActor(); \
	friend struct Z_Construct_UClass_AWhiteboardActor_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ADVANCEDDRAWINGBOARD_API UClass* Z_Construct_UClass_AWhiteboardActor_NoRegister(); \
public: \
	DECLARE_CLASS2(AWhiteboardActor, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/AdvancedDrawingBoard"), Z_Construct_UClass_AWhiteboardActor_NoRegister) \
	DECLARE_SERIALIZER(AWhiteboardActor) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		DrawingCanvas=NETFIELD_REP_START, \
		PlayerDrawingStates, \
		StrokeHistory, \
		CurrentHistoryIndex, \
		NextStrokeID, \
		MaxInteractingPlayers, \
		InteractingPawns, \
		NETFIELD_REP_END=InteractingPawns	}; \
	DECLARE_VALIDATE_GENERATED_REP_ENUMS(NO_API)


#define FID_SPARKELON_2025_Prototype_2025_Advanced_WhiteBoard_Plugins_AdvancedDrawingBoard_Source_AdvancedDrawingBoard_Public_Actor_WhiteboardActor_h_18_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	AWhiteboardActor(AWhiteboardActor&&) = delete; \
	AWhiteboardActor(const AWhiteboardActor&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AWhiteboardActor); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AWhiteboardActor); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AWhiteboardActor) \
	NO_API virtual ~AWhiteboardActor();


#define FID_SPARKELON_2025_Prototype_2025_Advanced_WhiteBoard_Plugins_AdvancedDrawingBoard_Source_AdvancedDrawingBoard_Public_Actor_WhiteboardActor_h_15_PROLOG
#define FID_SPARKELON_2025_Prototype_2025_Advanced_WhiteBoard_Plugins_AdvancedDrawingBoard_Source_AdvancedDrawingBoard_Public_Actor_WhiteboardActor_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_SPARKELON_2025_Prototype_2025_Advanced_WhiteBoard_Plugins_AdvancedDrawingBoard_Source_AdvancedDrawingBoard_Public_Actor_WhiteboardActor_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_SPARKELON_2025_Prototype_2025_Advanced_WhiteBoard_Plugins_AdvancedDrawingBoard_Source_AdvancedDrawingBoard_Public_Actor_WhiteboardActor_h_18_CALLBACK_WRAPPERS \
	FID_SPARKELON_2025_Prototype_2025_Advanced_WhiteBoard_Plugins_AdvancedDrawingBoard_Source_AdvancedDrawingBoard_Public_Actor_WhiteboardActor_h_18_INCLASS_NO_PURE_DECLS \
	FID_SPARKELON_2025_Prototype_2025_Advanced_WhiteBoard_Plugins_AdvancedDrawingBoard_Source_AdvancedDrawingBoard_Public_Actor_WhiteboardActor_h_18_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class AWhiteboardActor;

// ********** End Class AWhiteboardActor ***********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_SPARKELON_2025_Prototype_2025_Advanced_WhiteBoard_Plugins_AdvancedDrawingBoard_Source_AdvancedDrawingBoard_Public_Actor_WhiteboardActor_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
