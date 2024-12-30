// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGnomeCunning_init() {}
	GNOMECUNNING_API UFunction* Z_Construct_UDelegateFunction_GnomeCunning_OnLevelUp__DelegateSignature();
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_GnomeCunning;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_GnomeCunning()
	{
		if (!Z_Registration_Info_UPackage__Script_GnomeCunning.OuterSingleton)
		{
			static UObject* (*const SingletonFuncArray[])() = {
				(UObject* (*)())Z_Construct_UDelegateFunction_GnomeCunning_OnLevelUp__DelegateSignature,
			};
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/GnomeCunning",
				SingletonFuncArray,
				UE_ARRAY_COUNT(SingletonFuncArray),
				PKG_CompiledIn | 0x00000000,
				0xDB0A6F74,
				0xF43D46C9,
				METADATA_PARAMS(0, nullptr)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_GnomeCunning.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_GnomeCunning.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_GnomeCunning(Z_Construct_UPackage__Script_GnomeCunning, TEXT("/Script/GnomeCunning"), Z_Registration_Info_UPackage__Script_GnomeCunning, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0xDB0A6F74, 0xF43D46C9));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
