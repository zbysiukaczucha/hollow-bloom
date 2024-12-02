// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "PlayerStats.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef GNOMECUNNING_PlayerStats_generated_h
#error "PlayerStats.generated.h already included, missing '#pragma once' in PlayerStats.h"
#endif
#define GNOMECUNNING_PlayerStats_generated_h

#define FID_GnomeCunning_Source_GnomeCunning_Public_PlayerStats_h_10_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execLevelUp); \
	DECLARE_FUNCTION(execIncreaseXP); \
	DECLARE_FUNCTION(execIncreaseStamina); \
	DECLARE_FUNCTION(execDecreaseStamina); \
	DECLARE_FUNCTION(execIncreaseHealth); \
	DECLARE_FUNCTION(execDecreaseHealth);


#define FID_GnomeCunning_Source_GnomeCunning_Public_PlayerStats_h_10_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPlayerStats(); \
	friend struct Z_Construct_UClass_UPlayerStats_Statics; \
public: \
	DECLARE_CLASS(UPlayerStats, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/GnomeCunning"), NO_API) \
	DECLARE_SERIALIZER(UPlayerStats)


#define FID_GnomeCunning_Source_GnomeCunning_Public_PlayerStats_h_10_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UPlayerStats(UPlayerStats&&); \
	UPlayerStats(const UPlayerStats&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPlayerStats); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPlayerStats); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UPlayerStats) \
	NO_API virtual ~UPlayerStats();


#define FID_GnomeCunning_Source_GnomeCunning_Public_PlayerStats_h_7_PROLOG
#define FID_GnomeCunning_Source_GnomeCunning_Public_PlayerStats_h_10_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_GnomeCunning_Source_GnomeCunning_Public_PlayerStats_h_10_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_GnomeCunning_Source_GnomeCunning_Public_PlayerStats_h_10_INCLASS_NO_PURE_DECLS \
	FID_GnomeCunning_Source_GnomeCunning_Public_PlayerStats_h_10_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GNOMECUNNING_API UClass* StaticClass<class UPlayerStats>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_GnomeCunning_Source_GnomeCunning_Public_PlayerStats_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
