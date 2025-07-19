// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Actor/WhiteboardActor.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class APawn;
class APlayerController;
class UPrimitiveComponent;
enum class EDrawingTool : uint8;
struct FHitResult;
struct FLinearColor;
struct FStroke;
#ifdef ADVANCEDDRAWINGBOARD_WhiteboardActor_generated_h
#error "WhiteboardActor.generated.h already included, missing '#pragma once' in WhiteboardActor.h"
#endif
#define ADVANCEDDRAWINGBOARD_WhiteboardActor_generated_h

#define FID_Advanced_WhiteBoard_Plugins_AdvancedDrawingBoard_Source_AdvancedDrawingBoard_Public_Actor_WhiteboardActor_h_33_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FDrawingPoint_Statics; \
	ADVANCEDDRAWINGBOARD_API static class UScriptStruct* StaticStruct();


template<> ADVANCEDDRAWINGBOARD_API UScriptStruct* StaticStruct<struct FDrawingPoint>();

#define FID_Advanced_WhiteBoard_Plugins_AdvancedDrawingBoard_Source_AdvancedDrawingBoard_Public_Actor_WhiteboardActor_h_67_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FStroke_Statics; \
	ADVANCEDDRAWINGBOARD_API static class UScriptStruct* StaticStruct();


template<> ADVANCEDDRAWINGBOARD_API UScriptStruct* StaticStruct<struct FStroke>();

#define FID_Advanced_WhiteBoard_Plugins_AdvancedDrawingBoard_Source_AdvancedDrawingBoard_Public_Actor_WhiteboardActor_h_107_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void Client_SyncWhiteboardState_Implementation(TArray<FStroke> const& History, int32 HistoryIndex); \
	virtual void Multicast_UpdateShapePreview_Implementation(FVector2D const& StartPos, FVector2D const& EndPos, EDrawingTool Tool, FLinearColor Color, float Size, int32 StrokeID); \
	virtual void Multicast_SyncWhiteboardState_Implementation(TArray<FStroke> const& History, int32 HistoryIndex); \
	virtual void Multicast_UpdateHistory_Implementation(TArray<FStroke> const& NewHistory, int32 NewHistoryIndex); \
	virtual void Multicast_ClearWhiteboard_Implementation(); \
	virtual void Multicast_UpdateDrawing_Implementation(FStroke const& NewStroke); \
	virtual void Multicast_EndDrawing_Implementation(int32 StrokeID); \
	virtual void Multicast_ContinueDrawing_Implementation(FVector2D const& CanvasPosition, int32 StrokeID); \
	virtual void Multicast_StartDrawing_Implementation(FVector2D const& CanvasPosition, EDrawingTool Tool, FLinearColor Color, float Size, int32 BrushTextureIndex, int32 FigureTextureIndex, int32 StrokeID); \
	virtual void Server_SetFigureTexture_Implementation(int32 TextureIndex); \
	virtual void Server_SetBrushTexture_Implementation(int32 TextureIndex); \
	virtual void Server_SetBrushSize_Implementation(float NewSize); \
	virtual void Server_SetCurrentColor_Implementation(FLinearColor NewColor); \
	virtual void Server_SetCurrentTool_Implementation(EDrawingTool NewTool); \
	virtual void Server_Redo_Implementation(); \
	virtual void Server_Undo_Implementation(); \
	virtual void Server_ClearWhiteboard_Implementation(); \
	virtual void Server_DrawFigure_Implementation(FVector2D const& CanvasPosition, int32 SelectedFigureIndex, FLinearColor Color, float Size); \
	virtual void Server_AddText_Implementation(FVector2D const& CanvasPosition, const FString& Text, FLinearColor Color, float Size); \
	virtual void Server_EndDrawing_Implementation(); \
	virtual void Server_ContinueDrawing_Implementation(FVector2D const& CanvasPosition); \
	virtual void Server_StartDrawing_Implementation(FVector2D const& CanvasPosition, EDrawingTool Tool, FLinearColor Color, float Size, int32 BrushTextureIndex, int32 FigureTextureIndex); \
	virtual void Server_SetTextString_Implementation(const FString& NewTextString); \
	DECLARE_FUNCTION(execOnRep_InteractingPawns); \
	DECLARE_FUNCTION(execOnRep_StrokeHistory); \
	DECLARE_FUNCTION(execOnTriggerEndOverlap); \
	DECLARE_FUNCTION(execOnTriggerBeginOverlap); \
	DECLARE_FUNCTION(execIsShapeTool); \
	DECLARE_FUNCTION(execCanInteractLocally); \
	DECLARE_FUNCTION(execDebugNetworkState); \
	DECLARE_FUNCTION(execClientEndDrawing); \
	DECLARE_FUNCTION(execClientContinueDrawing); \
	DECLARE_FUNCTION(execClientStartDrawing); \
	DECLARE_FUNCTION(execCanClientDraw); \
	DECLARE_FUNCTION(execClient_SyncWhiteboardState); \
	DECLARE_FUNCTION(execRemoveInteractingPlayer); \
	DECLARE_FUNCTION(execCanAcceptMorePlayers); \
	DECLARE_FUNCTION(execGetInteractingPlayerCount); \
	DECLARE_FUNCTION(execIsPlayerInteracting); \
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
	DECLARE_FUNCTION(execMulticast_EndDrawing); \
	DECLARE_FUNCTION(execMulticast_ContinueDrawing); \
	DECLARE_FUNCTION(execMulticast_StartDrawing); \
	DECLARE_FUNCTION(execServer_SetFigureTexture); \
	DECLARE_FUNCTION(execServer_SetBrushTexture); \
	DECLARE_FUNCTION(execServer_SetBrushSize); \
	DECLARE_FUNCTION(execServer_SetCurrentColor); \
	DECLARE_FUNCTION(execServer_SetCurrentTool); \
	DECLARE_FUNCTION(execServer_Redo); \
	DECLARE_FUNCTION(execServer_Undo); \
	DECLARE_FUNCTION(execServer_ClearWhiteboard); \
	DECLARE_FUNCTION(execServer_DrawFigure); \
	DECLARE_FUNCTION(execServer_AddText); \
	DECLARE_FUNCTION(execServer_EndDrawing); \
	DECLARE_FUNCTION(execServer_ContinueDrawing); \
	DECLARE_FUNCTION(execServer_StartDrawing); \
	DECLARE_FUNCTION(execDrawFigure); \
	DECLARE_FUNCTION(execAddText); \
	DECLARE_FUNCTION(execServer_SetTextString); \
	DECLARE_FUNCTION(execSetTextString); \
	DECLARE_FUNCTION(execEndDrawing); \
	DECLARE_FUNCTION(execContinueDrawing); \
	DECLARE_FUNCTION(execStartDrawing); \
	DECLARE_FUNCTION(execExportToSVG); \
	DECLARE_FUNCTION(execExportToPNG); \
	DECLARE_FUNCTION(execRedo); \
	DECLARE_FUNCTION(execUndo); \
	DECLARE_FUNCTION(execClearWhiteboard); \
	DECLARE_FUNCTION(execWorldToCanvasPosition); \
	DECLARE_FUNCTION(execIsPlayerInRange); \
	DECLARE_FUNCTION(execSetFigureTexture); \
	DECLARE_FUNCTION(execSetBrushTexture); \
	DECLARE_FUNCTION(execSetBrushSize); \
	DECLARE_FUNCTION(execSetCurrentColor); \
	DECLARE_FUNCTION(execSetCurrentTool);


#define FID_Advanced_WhiteBoard_Plugins_AdvancedDrawingBoard_Source_AdvancedDrawingBoard_Public_Actor_WhiteboardActor_h_107_CALLBACK_WRAPPERS
#define FID_Advanced_WhiteBoard_Plugins_AdvancedDrawingBoard_Source_AdvancedDrawingBoard_Public_Actor_WhiteboardActor_h_107_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAWhiteboardActor(); \
	friend struct Z_Construct_UClass_AWhiteboardActor_Statics; \
public: \
	DECLARE_CLASS(AWhiteboardActor, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/AdvancedDrawingBoard"), NO_API) \
	DECLARE_SERIALIZER(AWhiteboardActor) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		CurrentTool=NETFIELD_REP_START, \
		CurrentColor, \
		BrushSize, \
		SelectedBrushTextureIndex, \
		SelectedFigureTextureIndex, \
		StrokeHistory, \
		CurrentHistoryIndex, \
		NextStrokeID, \
		CurrentTextString, \
		MaxInteractingPlayers, \
		InteractingPawns, \
		NETFIELD_REP_END=InteractingPawns	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define FID_Advanced_WhiteBoard_Plugins_AdvancedDrawingBoard_Source_AdvancedDrawingBoard_Public_Actor_WhiteboardActor_h_107_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	AWhiteboardActor(AWhiteboardActor&&); \
	AWhiteboardActor(const AWhiteboardActor&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AWhiteboardActor); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AWhiteboardActor); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AWhiteboardActor) \
	NO_API virtual ~AWhiteboardActor();


#define FID_Advanced_WhiteBoard_Plugins_AdvancedDrawingBoard_Source_AdvancedDrawingBoard_Public_Actor_WhiteboardActor_h_104_PROLOG
#define FID_Advanced_WhiteBoard_Plugins_AdvancedDrawingBoard_Source_AdvancedDrawingBoard_Public_Actor_WhiteboardActor_h_107_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Advanced_WhiteBoard_Plugins_AdvancedDrawingBoard_Source_AdvancedDrawingBoard_Public_Actor_WhiteboardActor_h_107_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Advanced_WhiteBoard_Plugins_AdvancedDrawingBoard_Source_AdvancedDrawingBoard_Public_Actor_WhiteboardActor_h_107_CALLBACK_WRAPPERS \
	FID_Advanced_WhiteBoard_Plugins_AdvancedDrawingBoard_Source_AdvancedDrawingBoard_Public_Actor_WhiteboardActor_h_107_INCLASS_NO_PURE_DECLS \
	FID_Advanced_WhiteBoard_Plugins_AdvancedDrawingBoard_Source_AdvancedDrawingBoard_Public_Actor_WhiteboardActor_h_107_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ADVANCEDDRAWINGBOARD_API UClass* StaticClass<class AWhiteboardActor>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Advanced_WhiteBoard_Plugins_AdvancedDrawingBoard_Source_AdvancedDrawingBoard_Public_Actor_WhiteboardActor_h


#define FOREACH_ENUM_EDRAWINGTOOL(op) \
	op(EDrawingTool::Brush) \
	op(EDrawingTool::Pencil) \
	op(EDrawingTool::Eraser) \
	op(EDrawingTool::Text) \
	op(EDrawingTool::Line) \
	op(EDrawingTool::Rectangle) \
	op(EDrawingTool::Circle) \
	op(EDrawingTool::Texture) \
	op(EDrawingTool::Figure) 

enum class EDrawingTool : uint8;
template<> struct TIsUEnumClass<EDrawingTool> { enum { Value = true }; };
template<> ADVANCEDDRAWINGBOARD_API UEnum* StaticEnum<EDrawingTool>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
