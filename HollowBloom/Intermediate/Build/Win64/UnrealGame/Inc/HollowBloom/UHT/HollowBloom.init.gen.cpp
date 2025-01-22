// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHollowBloom_init() {}
	HOLLOWBLOOM_API UFunction* Z_Construct_UDelegateFunction_HollowBloom_OnLevelUp__DelegateSignature();
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_HollowBloom;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_HollowBloom()
	{
		if (!Z_Registration_Info_UPackage__Script_HollowBloom.OuterSingleton)
		{
			static UObject* (*const SingletonFuncArray[])() = {
				(UObject* (*)())Z_Construct_UDelegateFunction_HollowBloom_OnLevelUp__DelegateSignature,
			};
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/HollowBloom",
				SingletonFuncArray,
				UE_ARRAY_COUNT(SingletonFuncArray),
				PKG_CompiledIn | 0x00000000,
				0xD7E5E33D,
				0x9C570569,
				METADATA_PARAMS(0, nullptr)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_HollowBloom.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_HollowBloom.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_HollowBloom(Z_Construct_UPackage__Script_HollowBloom, TEXT("/Script/HollowBloom"), Z_Registration_Info_UPackage__Script_HollowBloom, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0xD7E5E33D, 0x9C570569));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
