// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GnomeCunning/GnomeCunningGameMode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGnomeCunningGameMode() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
GNOMECUNNING_API UClass* Z_Construct_UClass_AGnomeCunningGameMode();
GNOMECUNNING_API UClass* Z_Construct_UClass_AGnomeCunningGameMode_NoRegister();
UPackage* Z_Construct_UPackage__Script_GnomeCunning();
// End Cross Module References

// Begin Class AGnomeCunningGameMode
void AGnomeCunningGameMode::StaticRegisterNativesAGnomeCunningGameMode()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AGnomeCunningGameMode);
UClass* Z_Construct_UClass_AGnomeCunningGameMode_NoRegister()
{
	return AGnomeCunningGameMode::StaticClass();
}
struct Z_Construct_UClass_AGnomeCunningGameMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "GnomeCunningGameMode.h" },
		{ "ModuleRelativePath", "GnomeCunningGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AGnomeCunningGameMode>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_AGnomeCunningGameMode_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AGameModeBase,
	(UObject* (*)())Z_Construct_UPackage__Script_GnomeCunning,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AGnomeCunningGameMode_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AGnomeCunningGameMode_Statics::ClassParams = {
	&AGnomeCunningGameMode::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AGnomeCunningGameMode_Statics::Class_MetaDataParams), Z_Construct_UClass_AGnomeCunningGameMode_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AGnomeCunningGameMode()
{
	if (!Z_Registration_Info_UClass_AGnomeCunningGameMode.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AGnomeCunningGameMode.OuterSingleton, Z_Construct_UClass_AGnomeCunningGameMode_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AGnomeCunningGameMode.OuterSingleton;
}
template<> GNOMECUNNING_API UClass* StaticClass<AGnomeCunningGameMode>()
{
	return AGnomeCunningGameMode::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AGnomeCunningGameMode);
AGnomeCunningGameMode::~AGnomeCunningGameMode() {}
// End Class AGnomeCunningGameMode

// Begin Registration
struct Z_CompiledInDeferFile_FID_GnomeCunning_Source_GnomeCunning_GnomeCunningGameMode_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AGnomeCunningGameMode, AGnomeCunningGameMode::StaticClass, TEXT("AGnomeCunningGameMode"), &Z_Registration_Info_UClass_AGnomeCunningGameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AGnomeCunningGameMode), 804874668U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GnomeCunning_Source_GnomeCunning_GnomeCunningGameMode_h_3501445329(TEXT("/Script/GnomeCunning"),
	Z_CompiledInDeferFile_FID_GnomeCunning_Source_GnomeCunning_GnomeCunningGameMode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_GnomeCunning_Source_GnomeCunning_GnomeCunningGameMode_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
