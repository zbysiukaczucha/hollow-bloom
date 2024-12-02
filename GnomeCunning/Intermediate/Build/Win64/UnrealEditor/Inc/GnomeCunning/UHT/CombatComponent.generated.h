// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "CombatComponent.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef GNOMECUNNING_CombatComponent_generated_h
#error "CombatComponent.generated.h already included, missing '#pragma once' in CombatComponent.h"
#endif
#define GNOMECUNNING_CombatComponent_generated_h

#define FID_GnomeCunning_Source_GnomeCunning_Public_CombatComponent_h_22_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUCombatComponent(); \
	friend struct Z_Construct_UClass_UCombatComponent_Statics; \
public: \
	DECLARE_CLASS(UCombatComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/GnomeCunning"), NO_API) \
	DECLARE_SERIALIZER(UCombatComponent)


#define FID_GnomeCunning_Source_GnomeCunning_Public_CombatComponent_h_22_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UCombatComponent(UCombatComponent&&); \
	UCombatComponent(const UCombatComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCombatComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCombatComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UCombatComponent) \
	NO_API virtual ~UCombatComponent();


#define FID_GnomeCunning_Source_GnomeCunning_Public_CombatComponent_h_19_PROLOG
#define FID_GnomeCunning_Source_GnomeCunning_Public_CombatComponent_h_22_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_GnomeCunning_Source_GnomeCunning_Public_CombatComponent_h_22_INCLASS_NO_PURE_DECLS \
	FID_GnomeCunning_Source_GnomeCunning_Public_CombatComponent_h_22_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GNOMECUNNING_API UClass* StaticClass<class UCombatComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_GnomeCunning_Source_GnomeCunning_Public_CombatComponent_h


#define FOREACH_ENUM_EMOVEMENTDIRECTION(op) \
	op(EMovementDirection::Forward) \
	op(EMovementDirection::Backward) \
	op(EMovementDirection::Left) \
	op(EMovementDirection::Right) 

enum class EMovementDirection : uint8;
template<> struct TIsUEnumClass<EMovementDirection> { enum { Value = true }; };
template<> GNOMECUNNING_API UEnum* StaticEnum<EMovementDirection>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
