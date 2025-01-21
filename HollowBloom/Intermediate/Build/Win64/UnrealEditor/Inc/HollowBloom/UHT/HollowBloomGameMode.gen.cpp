// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "HollowBloom/HollowBloomGameMode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHollowBloomGameMode() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
HOLLOWBLOOM_API UClass* Z_Construct_UClass_AHollowBloomGameMode();
HOLLOWBLOOM_API UClass* Z_Construct_UClass_AHollowBloomGameMode_NoRegister();
UPackage* Z_Construct_UPackage__Script_HollowBloom();
// End Cross Module References

// Begin Class AHollowBloomGameMode
void AHollowBloomGameMode::StaticRegisterNativesAHollowBloomGameMode()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AHollowBloomGameMode);
UClass* Z_Construct_UClass_AHollowBloomGameMode_NoRegister()
{
	return AHollowBloomGameMode::StaticClass();
}
struct Z_Construct_UClass_AHollowBloomGameMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "HollowBloomGameMode.h" },
		{ "ModuleRelativePath", "HollowBloomGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AHollowBloomGameMode>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_AHollowBloomGameMode_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AGameModeBase,
	(UObject* (*)())Z_Construct_UPackage__Script_HollowBloom,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AHollowBloomGameMode_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AHollowBloomGameMode_Statics::ClassParams = {
	&AHollowBloomGameMode::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x008802ACu,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AHollowBloomGameMode_Statics::Class_MetaDataParams), Z_Construct_UClass_AHollowBloomGameMode_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AHollowBloomGameMode()
{
	if (!Z_Registration_Info_UClass_AHollowBloomGameMode.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AHollowBloomGameMode.OuterSingleton, Z_Construct_UClass_AHollowBloomGameMode_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AHollowBloomGameMode.OuterSingleton;
}
template<> HOLLOWBLOOM_API UClass* StaticClass<AHollowBloomGameMode>()
{
	return AHollowBloomGameMode::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AHollowBloomGameMode);
AHollowBloomGameMode::~AHollowBloomGameMode() {}
// End Class AHollowBloomGameMode

// Begin Registration
struct Z_CompiledInDeferFile_FID_HollowBloom_Source_HollowBloom_HollowBloomGameMode_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AHollowBloomGameMode, AHollowBloomGameMode::StaticClass, TEXT("AHollowBloomGameMode"), &Z_Registration_Info_UClass_AHollowBloomGameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AHollowBloomGameMode), 1237511303U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HollowBloom_Source_HollowBloom_HollowBloomGameMode_h_2608238510(TEXT("/Script/HollowBloom"),
	Z_CompiledInDeferFile_FID_HollowBloom_Source_HollowBloom_HollowBloomGameMode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HollowBloom_Source_HollowBloom_HollowBloomGameMode_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
