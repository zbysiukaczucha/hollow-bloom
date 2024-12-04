// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "StatsComponent.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef GNOMECUNNING_StatsComponent_generated_h
#error "StatsComponent.generated.h already included, missing '#pragma once' in StatsComponent.h"
#endif
#define GNOMECUNNING_StatsComponent_generated_h

#define FID_GnomeCunning_Source_GnomeCunning_Public_StatsComponent_h_10_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execLevelUp); \
	DECLARE_FUNCTION(execIncreaseXP); \
	DECLARE_FUNCTION(execIncreaseStamina); \
	DECLARE_FUNCTION(execDecreaseStamina); \
	DECLARE_FUNCTION(execIncreaseHealth); \
	DECLARE_FUNCTION(execDecreaseHealth);


#define FID_GnomeCunning_Source_GnomeCunning_Public_StatsComponent_h_10_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUStatsComponent(); \
	friend struct Z_Construct_UClass_UStatsComponent_Statics; \
public: \
	DECLARE_CLASS(UStatsComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/GnomeCunning"), NO_API) \
	DECLARE_SERIALIZER(UStatsComponent)


#define FID_GnomeCunning_Source_GnomeCunning_Public_StatsComponent_h_10_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UStatsComponent(UStatsComponent&&); \
	UStatsComponent(const UStatsComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UStatsComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UStatsComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UStatsComponent) \
	NO_API virtual ~UStatsComponent();


#define FID_GnomeCunning_Source_GnomeCunning_Public_StatsComponent_h_7_PROLOG
#define FID_GnomeCunning_Source_GnomeCunning_Public_StatsComponent_h_10_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_GnomeCunning_Source_GnomeCunning_Public_StatsComponent_h_10_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_GnomeCunning_Source_GnomeCunning_Public_StatsComponent_h_10_INCLASS_NO_PURE_DECLS \
	FID_GnomeCunning_Source_GnomeCunning_Public_StatsComponent_h_10_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GNOMECUNNING_API UClass* StaticClass<class UStatsComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_GnomeCunning_Source_GnomeCunning_Public_StatsComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
