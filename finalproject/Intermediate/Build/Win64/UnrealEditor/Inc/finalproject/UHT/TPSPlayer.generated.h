// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "TPSPlayer.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef FINALPROJECT_TPSPlayer_generated_h
#error "TPSPlayer.generated.h already included, missing '#pragma once' in TPSPlayer.h"
#endif
#define FINALPROJECT_TPSPlayer_generated_h

#define FID_Github_game_engine_finalproject_Source_finalproject_Public_TPSPlayer_h_14_SPARSE_DATA
#define FID_Github_game_engine_finalproject_Source_finalproject_Public_TPSPlayer_h_14_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Github_game_engine_finalproject_Source_finalproject_Public_TPSPlayer_h_14_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Github_game_engine_finalproject_Source_finalproject_Public_TPSPlayer_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void OnGameOver_Implementation(); \
 \
	DECLARE_FUNCTION(execOnGameOver); \
	DECLARE_FUNCTION(execOnHitEvent);


#define FID_Github_game_engine_finalproject_Source_finalproject_Public_TPSPlayer_h_14_ACCESSORS
#define FID_Github_game_engine_finalproject_Source_finalproject_Public_TPSPlayer_h_14_CALLBACK_WRAPPERS
#define FID_Github_game_engine_finalproject_Source_finalproject_Public_TPSPlayer_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesATPSPlayer(); \
	friend struct Z_Construct_UClass_ATPSPlayer_Statics; \
public: \
	DECLARE_CLASS(ATPSPlayer, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/finalproject"), NO_API) \
	DECLARE_SERIALIZER(ATPSPlayer)


#define FID_Github_game_engine_finalproject_Source_finalproject_Public_TPSPlayer_h_14_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ATPSPlayer(ATPSPlayer&&); \
	NO_API ATPSPlayer(const ATPSPlayer&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ATPSPlayer); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ATPSPlayer); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ATPSPlayer) \
	NO_API virtual ~ATPSPlayer();


#define FID_Github_game_engine_finalproject_Source_finalproject_Public_TPSPlayer_h_11_PROLOG
#define FID_Github_game_engine_finalproject_Source_finalproject_Public_TPSPlayer_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Github_game_engine_finalproject_Source_finalproject_Public_TPSPlayer_h_14_SPARSE_DATA \
	FID_Github_game_engine_finalproject_Source_finalproject_Public_TPSPlayer_h_14_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Github_game_engine_finalproject_Source_finalproject_Public_TPSPlayer_h_14_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Github_game_engine_finalproject_Source_finalproject_Public_TPSPlayer_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Github_game_engine_finalproject_Source_finalproject_Public_TPSPlayer_h_14_ACCESSORS \
	FID_Github_game_engine_finalproject_Source_finalproject_Public_TPSPlayer_h_14_CALLBACK_WRAPPERS \
	FID_Github_game_engine_finalproject_Source_finalproject_Public_TPSPlayer_h_14_INCLASS_NO_PURE_DECLS \
	FID_Github_game_engine_finalproject_Source_finalproject_Public_TPSPlayer_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> FINALPROJECT_API UClass* StaticClass<class ATPSPlayer>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Github_game_engine_finalproject_Source_finalproject_Public_TPSPlayer_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
