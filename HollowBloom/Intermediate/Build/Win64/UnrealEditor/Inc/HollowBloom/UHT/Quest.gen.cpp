// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "HollowBloom/Public/Quest.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeQuest() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UDataTable_NoRegister();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTableRowBase();
HOLLOWBLOOM_API UScriptStruct* Z_Construct_UScriptStruct_FQuest();
UPackage* Z_Construct_UPackage__Script_HollowBloom();
// End Cross Module References

// Begin ScriptStruct FQuest
static_assert(std::is_polymorphic<FQuest>() == std::is_polymorphic<FTableRowBase>(), "USTRUCT FQuest cannot be polymorphic unless super FTableRowBase is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_Quest;
class UScriptStruct* FQuest::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_Quest.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_Quest.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FQuest, (UObject*)Z_Construct_UPackage__Script_HollowBloom(), TEXT("Quest"));
	}
	return Z_Registration_Info_UScriptStruct_Quest.OuterSingleton;
}
template<> HOLLOWBLOOM_API UScriptStruct* StaticStruct<FQuest>()
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
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_QuestID_MetaData[] = {
		{ "Category", "Quest" },
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
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_XP_MetaData[] = {
		{ "Category", "Quest" },
		{ "ModuleRelativePath", "Public/Quest.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsCompleted_MetaData[] = {
		{ "Category", "Quest" },
		{ "ModuleRelativePath", "Public/Quest.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CompletedDialogueRow_MetaData[] = {
		{ "Category", "Quest" },
		{ "ModuleRelativePath", "Public/Quest.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DialogueTable_MetaData[] = {
		{ "Category", "Quest" },
		{ "ModuleRelativePath", "Public/Quest.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_QuestID;
	static const UECodeGen_Private::FStrPropertyParams NewProp_QuestName;
	static const UECodeGen_Private::FStrPropertyParams NewProp_QuestDescription;
	static const UECodeGen_Private::FIntPropertyParams NewProp_XP;
	static void NewProp_bIsCompleted_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsCompleted;
	static const UECodeGen_Private::FNamePropertyParams NewProp_CompletedDialogueRow;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DialogueTable;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FQuest>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FQuest_Statics::NewProp_QuestID = { "QuestID", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FQuest, QuestID), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_QuestID_MetaData), NewProp_QuestID_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FQuest_Statics::NewProp_QuestName = { "QuestName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FQuest, QuestName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_QuestName_MetaData), NewProp_QuestName_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FQuest_Statics::NewProp_QuestDescription = { "QuestDescription", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FQuest, QuestDescription), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_QuestDescription_MetaData), NewProp_QuestDescription_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FQuest_Statics::NewProp_XP = { "XP", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FQuest, XP), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_XP_MetaData), NewProp_XP_MetaData) };
void Z_Construct_UScriptStruct_FQuest_Statics::NewProp_bIsCompleted_SetBit(void* Obj)
{
	((FQuest*)Obj)->bIsCompleted = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FQuest_Statics::NewProp_bIsCompleted = { "bIsCompleted", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FQuest), &Z_Construct_UScriptStruct_FQuest_Statics::NewProp_bIsCompleted_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsCompleted_MetaData), NewProp_bIsCompleted_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FQuest_Statics::NewProp_CompletedDialogueRow = { "CompletedDialogueRow", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FQuest, CompletedDialogueRow), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CompletedDialogueRow_MetaData), NewProp_CompletedDialogueRow_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FQuest_Statics::NewProp_DialogueTable = { "DialogueTable", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FQuest, DialogueTable), Z_Construct_UClass_UDataTable_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DialogueTable_MetaData), NewProp_DialogueTable_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FQuest_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FQuest_Statics::NewProp_QuestID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FQuest_Statics::NewProp_QuestName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FQuest_Statics::NewProp_QuestDescription,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FQuest_Statics::NewProp_XP,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FQuest_Statics::NewProp_bIsCompleted,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FQuest_Statics::NewProp_CompletedDialogueRow,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FQuest_Statics::NewProp_DialogueTable,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FQuest_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FQuest_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_HollowBloom,
	Z_Construct_UScriptStruct_FTableRowBase,
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
struct Z_CompiledInDeferFile_FID_HollowBloom_Source_HollowBloom_Public_Quest_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FQuest::StaticStruct, Z_Construct_UScriptStruct_FQuest_Statics::NewStructOps, TEXT("Quest"), &Z_Registration_Info_UScriptStruct_Quest, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FQuest), 216950288U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HollowBloom_Source_HollowBloom_Public_Quest_h_1091089808(TEXT("/Script/HollowBloom"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_HollowBloom_Source_HollowBloom_Public_Quest_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HollowBloom_Source_HollowBloom_Public_Quest_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
