// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "HollowBloom/Public/Interactable.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInteractable() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
HOLLOWBLOOM_API UClass* Z_Construct_UClass_UInteractable();
HOLLOWBLOOM_API UClass* Z_Construct_UClass_UInteractable_NoRegister();
UPackage* Z_Construct_UPackage__Script_HollowBloom();
// End Cross Module References

// Begin Interface UInteractable Function OnInteract
struct Interactable_eventOnInteract_Parms
{
	AActor* Interactor;
};
void IInteractable::OnInteract(AActor* Interactor)
{
	check(0 && "Do not directly call Event functions in Interfaces. Call Execute_OnInteract instead.");
}
static FName NAME_UInteractable_OnInteract = FName(TEXT("OnInteract"));
void IInteractable::Execute_OnInteract(UObject* O, AActor* Interactor)
{
	check(O != NULL);
	check(O->GetClass()->ImplementsInterface(UInteractable::StaticClass()));
	Interactable_eventOnInteract_Parms Parms;
	UFunction* const Func = O->FindFunction(NAME_UInteractable_OnInteract);
	if (Func)
	{
		Parms.Interactor=Interactor;
		O->ProcessEvent(Func, &Parms);
	}
	else if (auto I = (IInteractable*)(O->GetNativeInterfaceAddress(UInteractable::StaticClass())))
	{
		I->OnInteract_Implementation(Interactor);
	}
}
struct Z_Construct_UFunction_UInteractable_OnInteract_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * @brief Called when an actor interacts with this object\n\x09 *\n\x09 * This function is marked as BlueprintCallable and BlueprintNativeEvent,\n\x09 * allowing it to be called from Blueprints and overridden in both C++ and Blueprints.\n\x09 *\n\x09 * @param Interactor The actor that is interacting with this object\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/Interactable.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "@brief Called when an actor interacts with this object\n\nThis function is marked as BlueprintCallable and BlueprintNativeEvent,\nallowing it to be called from Blueprints and overridden in both C++ and Blueprints.\n\n@param Interactor The actor that is interacting with this object" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Interactor;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UInteractable_OnInteract_Statics::NewProp_Interactor = { "Interactor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Interactable_eventOnInteract_Parms, Interactor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInteractable_OnInteract_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInteractable_OnInteract_Statics::NewProp_Interactor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInteractable_OnInteract_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInteractable_OnInteract_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInteractable, nullptr, "OnInteract", nullptr, nullptr, Z_Construct_UFunction_UInteractable_OnInteract_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInteractable_OnInteract_Statics::PropPointers), sizeof(Interactable_eventOnInteract_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInteractable_OnInteract_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInteractable_OnInteract_Statics::Function_MetaDataParams) };
static_assert(sizeof(Interactable_eventOnInteract_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInteractable_OnInteract()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInteractable_OnInteract_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(IInteractable::execOnInteract)
{
	P_GET_OBJECT(AActor,Z_Param_Interactor);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnInteract_Implementation(Z_Param_Interactor);
	P_NATIVE_END;
}
// End Interface UInteractable Function OnInteract

// Begin Interface UInteractable
void UInteractable::StaticRegisterNativesUInteractable()
{
	UClass* Class = UInteractable::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "OnInteract", &IInteractable::execOnInteract },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UInteractable);
UClass* Z_Construct_UClass_UInteractable_NoRegister()
{
	return UInteractable::StaticClass();
}
struct Z_Construct_UClass_UInteractable_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Interactable.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UInteractable_OnInteract, "OnInteract" }, // 812672841
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IInteractable>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UInteractable_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UInterface,
	(UObject* (*)())Z_Construct_UPackage__Script_HollowBloom,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UInteractable_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UInteractable_Statics::ClassParams = {
	&UInteractable::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	0,
	0,
	0x000040A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UInteractable_Statics::Class_MetaDataParams), Z_Construct_UClass_UInteractable_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UInteractable()
{
	if (!Z_Registration_Info_UClass_UInteractable.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UInteractable.OuterSingleton, Z_Construct_UClass_UInteractable_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UInteractable.OuterSingleton;
}
template<> HOLLOWBLOOM_API UClass* StaticClass<UInteractable>()
{
	return UInteractable::StaticClass();
}
UInteractable::UInteractable(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UInteractable);
UInteractable::~UInteractable() {}
// End Interface UInteractable

// Begin Registration
struct Z_CompiledInDeferFile_FID_HollowBloom_Source_HollowBloom_Public_Interactable_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UInteractable, UInteractable::StaticClass, TEXT("UInteractable"), &Z_Registration_Info_UClass_UInteractable, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UInteractable), 4103150368U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HollowBloom_Source_HollowBloom_Public_Interactable_h_839499105(TEXT("/Script/HollowBloom"),
	Z_CompiledInDeferFile_FID_HollowBloom_Source_HollowBloom_Public_Interactable_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HollowBloom_Source_HollowBloom_Public_Interactable_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
