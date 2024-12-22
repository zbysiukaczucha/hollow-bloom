// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GnomeCunning/Public/Quest.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeQuest() {}

// Begin Cross Module References
GNOMECUNNING_API UScriptStruct* Z_Construct_UScriptStruct_FQuest();
UPackage* Z_Construct_UPackage__Script_GnomeCunning();
// End Cross Module References

// Begin ScriptStruct FQuest
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_Quest;
class UScriptStruct* FQuest::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_Quest.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_Quest.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FQuest, (UObject*)Z_Construct_UPackage__Script_GnomeCunning(), TEXT("Quest"));
	}
	return Z_Registration_Info_UScriptStruct_Quest.OuterSingleton;
}
template<> GNOMECUNNING_API UScriptStruct* StaticStruct<FQuest>()
{
	return FQuest::StaticStruct();
}
struct Z_Construct_UScriptStruct_FQuest_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "ModuleRelativePath", "Public/Quest.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_QuestName_MetaData[] = {
		{ "Category", "Quest" },
		{ "ModuleRelativePath", "Public/Quest.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_QuestDescription_MetaData[] = {
		{ "Category", "Quest" },
		{ "ModuleRelativePath", "Public/Quest.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsCompleted_MetaData[] = {
		{ "Category", "Quest" },
		{ "ModuleRelativePath", "Public/Quest.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_QuestName;
	static const UECodeGen_Private::FStrPropertyParams NewProp_QuestDescription;
	static void NewProp_bIsCompleted_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsCompleted;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FQuest>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FQuest_Statics::NewProp_QuestName = { "QuestName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FQuest, QuestName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_QuestName_MetaData), NewProp_QuestName_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FQuest_Statics::NewProp_QuestDescription = { "QuestDescription", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FQuest, QuestDescription), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_QuestDescription_MetaData), NewProp_QuestDescription_MetaData) };
void Z_Construct_UScriptStruct_FQuest_Statics::NewProp_bIsCompleted_SetBit(void* Obj)
{
	((FQuest*)Obj)->bIsCompleted = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FQuest_Statics::NewProp_bIsCompleted = { "bIsCompleted", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FQuest), &Z_Construct_UScriptStruct_FQuest_Statics::NewProp_bIsCompleted_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsCompleted_MetaData), NewProp_bIsCompleted_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FQuest_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FQuest_Statics::NewProp_QuestName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FQuest_Statics::NewProp_QuestDescription,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FQuest_Statics::NewProp_bIsCompleted,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FQuest_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FQuest_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_GnomeCunning,
	nullptr,
	&NewStructOps,
	"Quest",
	Z_Construct_UScriptStruct_FQuest_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FQuest_Statics::PropPointers),
	sizeof(FQuest),
	alignof(FQuest),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FQuest_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FQuest_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FQuest()
{
	if (!Z_Registration_Info_UScriptStruct_Quest.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_Quest.InnerSingleton, Z_Construct_UScriptStruct_FQuest_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_Quest.InnerSingleton;
}
// End ScriptStruct FQuest

// Begin Registration
struct Z_CompiledInDeferFile_FID_GnomeCunning_Source_GnomeCunning_Public_Quest_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FQuest::StaticStruct, Z_Construct_UScriptStruct_FQuest_Statics::NewStructOps, TEXT("Quest"), &Z_Registration_Info_UScriptStruct_Quest, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FQuest), 2999807275U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GnomeCunning_Source_GnomeCunning_Public_Quest_h_2819368025(TEXT("/Script/GnomeCunning"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_GnomeCunning_Source_GnomeCunning_Public_Quest_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_GnomeCunning_Source_GnomeCunning_Public_Quest_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
