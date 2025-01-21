// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Interactable.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
#ifdef HOLLOWBLOOM_Interactable_generated_h
#error "Interactable.generated.h already included, missing '#pragma once' in Interactable.h"
#endif
#define HOLLOWBLOOM_Interactable_generated_h

#define FID_HollowBloom_Source_HollowBloom_Public_Interactable_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void OnInteract_Implementation(AActor* Interactor) {}; \
	DECLARE_FUNCTION(execOnInteract);


#define FID_HollowBloom_Source_HollowBloom_Public_Interactable_h_15_CALLBACK_WRAPPERS
#define FID_HollowBloom_Source_HollowBloom_Public_Interactable_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UInteractable(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UInteractable(UInteractable&&); \
	UInteractable(const UInteractable&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UInteractable); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInteractable); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UInteractable) \
	NO_API virtual ~UInteractable();


#define FID_HollowBloom_Source_HollowBloom_Public_Interactable_h_15_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUInteractable(); \
	friend struct Z_Construct_UClass_UInteractable_Statics; \
public: \
	DECLARE_CLASS(UInteractable, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/HollowBloom"), NO_API) \
	DECLARE_SERIALIZER(UInteractable)


#define FID_HollowBloom_Source_HollowBloom_Public_Interactable_h_15_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_HollowBloom_Source_HollowBloom_Public_Interactable_h_15_GENERATED_UINTERFACE_BODY() \
	FID_HollowBloom_Source_HollowBloom_Public_Interactable_h_15_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_HollowBloom_Source_HollowBloom_Public_Interactable_h_15_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IInteractable() {} \
public: \
	typedef UInteractable UClassType; \
	typedef IInteractable ThisClass; \
	static void Execute_OnInteract(UObject* O, AActor* Interactor); \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_HollowBloom_Source_HollowBloom_Public_Interactable_h_12_PROLOG
#define FID_HollowBloom_Source_HollowBloom_Public_Interactable_h_26_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_HollowBloom_Source_HollowBloom_Public_Interactable_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_HollowBloom_Source_HollowBloom_Public_Interactable_h_15_CALLBACK_WRAPPERS \
	FID_HollowBloom_Source_HollowBloom_Public_Interactable_h_15_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> HOLLOWBLOOM_API UClass* StaticClass<class UInteractable>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_HollowBloom_Source_HollowBloom_Public_Interactable_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
