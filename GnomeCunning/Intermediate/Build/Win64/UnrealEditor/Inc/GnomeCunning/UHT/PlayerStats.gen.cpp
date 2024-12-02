// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GnomeCunning/Public/PlayerStats.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePlayerStats() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_ACharacter_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
GNOMECUNNING_API UClass* Z_Construct_UClass_UPlayerStats();
GNOMECUNNING_API UClass* Z_Construct_UClass_UPlayerStats_NoRegister();
UPackage* Z_Construct_UPackage__Script_GnomeCunning();
// End Cross Module References

// Begin Class UPlayerStats Function DecreaseHealth
struct Z_Construct_UFunction_UPlayerStats_DecreaseHealth_Statics
{
	struct PlayerStats_eventDecreaseHealth_Parms
	{
		float Amount;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Custom functionality for the component can be added here\n" },
#endif
		{ "ModuleRelativePath", "Public/PlayerStats.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Custom functionality for the component can be added here" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "DisplayName", "IsPlayerDead" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Amount;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UPlayerStats_DecreaseHealth_Statics::NewProp_Amount = { "Amount", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayerStats_eventDecreaseHealth_Parms, Amount), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UPlayerStats_DecreaseHealth_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((PlayerStats_eventDecreaseHealth_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPlayerStats_DecreaseHealth_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(PlayerStats_eventDecreaseHealth_Parms), &Z_Construct_UFunction_UPlayerStats_DecreaseHealth_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPlayerStats_DecreaseHealth_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayerStats_DecreaseHealth_Statics::NewProp_Amount,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayerStats_DecreaseHealth_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerStats_DecreaseHealth_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlayerStats_DecreaseHealth_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayerStats, nullptr, "DecreaseHealth", nullptr, nullptr, Z_Construct_UFunction_UPlayerStats_DecreaseHealth_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerStats_DecreaseHealth_Statics::PropPointers), sizeof(Z_Construct_UFunction_UPlayerStats_DecreaseHealth_Statics::PlayerStats_eventDecreaseHealth_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerStats_DecreaseHealth_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPlayerStats_DecreaseHealth_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UPlayerStats_DecreaseHealth_Statics::PlayerStats_eventDecreaseHealth_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UPlayerStats_DecreaseHealth()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPlayerStats_DecreaseHealth_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPlayerStats::execDecreaseHealth)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_Amount);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->DecreaseHealth(Z_Param_Amount);
	P_NATIVE_END;
}
// End Class UPlayerStats Function DecreaseHealth

// Begin Class UPlayerStats Function DecreaseStamina
struct Z_Construct_UFunction_UPlayerStats_DecreaseStamina_Statics
{
	struct PlayerStats_eventDecreaseStamina_Parms
	{
		float Amount;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PlayerStats.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "DisplayName", "HasEnoughStamina" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Amount;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UPlayerStats_DecreaseStamina_Statics::NewProp_Amount = { "Amount", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayerStats_eventDecreaseStamina_Parms, Amount), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UPlayerStats_DecreaseStamina_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((PlayerStats_eventDecreaseStamina_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPlayerStats_DecreaseStamina_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(PlayerStats_eventDecreaseStamina_Parms), &Z_Construct_UFunction_UPlayerStats_DecreaseStamina_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPlayerStats_DecreaseStamina_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayerStats_DecreaseStamina_Statics::NewProp_Amount,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayerStats_DecreaseStamina_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerStats_DecreaseStamina_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlayerStats_DecreaseStamina_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayerStats, nullptr, "DecreaseStamina", nullptr, nullptr, Z_Construct_UFunction_UPlayerStats_DecreaseStamina_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerStats_DecreaseStamina_Statics::PropPointers), sizeof(Z_Construct_UFunction_UPlayerStats_DecreaseStamina_Statics::PlayerStats_eventDecreaseStamina_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerStats_DecreaseStamina_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPlayerStats_DecreaseStamina_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UPlayerStats_DecreaseStamina_Statics::PlayerStats_eventDecreaseStamina_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UPlayerStats_DecreaseStamina()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPlayerStats_DecreaseStamina_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPlayerStats::execDecreaseStamina)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_Amount);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->DecreaseStamina(Z_Param_Amount);
	P_NATIVE_END;
}
// End Class UPlayerStats Function DecreaseStamina

// Begin Class UPlayerStats Function IncreaseHealth
struct Z_Construct_UFunction_UPlayerStats_IncreaseHealth_Statics
{
	struct PlayerStats_eventIncreaseHealth_Parms
	{
		float Amount;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PlayerStats.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Amount;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UPlayerStats_IncreaseHealth_Statics::NewProp_Amount = { "Amount", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayerStats_eventIncreaseHealth_Parms, Amount), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPlayerStats_IncreaseHealth_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayerStats_IncreaseHealth_Statics::NewProp_Amount,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerStats_IncreaseHealth_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlayerStats_IncreaseHealth_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayerStats, nullptr, "IncreaseHealth", nullptr, nullptr, Z_Construct_UFunction_UPlayerStats_IncreaseHealth_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerStats_IncreaseHealth_Statics::PropPointers), sizeof(Z_Construct_UFunction_UPlayerStats_IncreaseHealth_Statics::PlayerStats_eventIncreaseHealth_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerStats_IncreaseHealth_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPlayerStats_IncreaseHealth_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UPlayerStats_IncreaseHealth_Statics::PlayerStats_eventIncreaseHealth_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UPlayerStats_IncreaseHealth()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPlayerStats_IncreaseHealth_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPlayerStats::execIncreaseHealth)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_Amount);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->IncreaseHealth(Z_Param_Amount);
	P_NATIVE_END;
}
// End Class UPlayerStats Function IncreaseHealth

// Begin Class UPlayerStats Function IncreaseStamina
struct Z_Construct_UFunction_UPlayerStats_IncreaseStamina_Statics
{
	struct PlayerStats_eventIncreaseStamina_Parms
	{
		float Amount;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PlayerStats.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Amount;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UPlayerStats_IncreaseStamina_Statics::NewProp_Amount = { "Amount", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayerStats_eventIncreaseStamina_Parms, Amount), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPlayerStats_IncreaseStamina_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayerStats_IncreaseStamina_Statics::NewProp_Amount,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerStats_IncreaseStamina_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlayerStats_IncreaseStamina_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayerStats, nullptr, "IncreaseStamina", nullptr, nullptr, Z_Construct_UFunction_UPlayerStats_IncreaseStamina_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerStats_IncreaseStamina_Statics::PropPointers), sizeof(Z_Construct_UFunction_UPlayerStats_IncreaseStamina_Statics::PlayerStats_eventIncreaseStamina_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerStats_IncreaseStamina_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPlayerStats_IncreaseStamina_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UPlayerStats_IncreaseStamina_Statics::PlayerStats_eventIncreaseStamina_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UPlayerStats_IncreaseStamina()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPlayerStats_IncreaseStamina_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPlayerStats::execIncreaseStamina)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_Amount);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->IncreaseStamina(Z_Param_Amount);
	P_NATIVE_END;
}
// End Class UPlayerStats Function IncreaseStamina

// Begin Class UPlayerStats Function IncreaseXP
struct Z_Construct_UFunction_UPlayerStats_IncreaseXP_Statics
{
	struct PlayerStats_eventIncreaseXP_Parms
	{
		int32 Amount;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PlayerStats.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_Amount;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UPlayerStats_IncreaseXP_Statics::NewProp_Amount = { "Amount", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayerStats_eventIncreaseXP_Parms, Amount), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPlayerStats_IncreaseXP_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayerStats_IncreaseXP_Statics::NewProp_Amount,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerStats_IncreaseXP_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlayerStats_IncreaseXP_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayerStats, nullptr, "IncreaseXP", nullptr, nullptr, Z_Construct_UFunction_UPlayerStats_IncreaseXP_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerStats_IncreaseXP_Statics::PropPointers), sizeof(Z_Construct_UFunction_UPlayerStats_IncreaseXP_Statics::PlayerStats_eventIncreaseXP_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerStats_IncreaseXP_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPlayerStats_IncreaseXP_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UPlayerStats_IncreaseXP_Statics::PlayerStats_eventIncreaseXP_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UPlayerStats_IncreaseXP()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPlayerStats_IncreaseXP_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPlayerStats::execIncreaseXP)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_Amount);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->IncreaseXP(Z_Param_Amount);
	P_NATIVE_END;
}
// End Class UPlayerStats Function IncreaseXP

// Begin Class UPlayerStats Function LevelUp
struct Z_Construct_UFunction_UPlayerStats_LevelUp_Statics
{
	struct PlayerStats_eventLevelUp_Parms
	{
		int32 newVigor;
		int32 newEndurance;
		int32 newFitness;
		int32 newMind;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PlayerStats.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_newVigor;
	static const UECodeGen_Private::FIntPropertyParams NewProp_newEndurance;
	static const UECodeGen_Private::FIntPropertyParams NewProp_newFitness;
	static const UECodeGen_Private::FIntPropertyParams NewProp_newMind;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UPlayerStats_LevelUp_Statics::NewProp_newVigor = { "newVigor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayerStats_eventLevelUp_Parms, newVigor), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UPlayerStats_LevelUp_Statics::NewProp_newEndurance = { "newEndurance", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayerStats_eventLevelUp_Parms, newEndurance), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UPlayerStats_LevelUp_Statics::NewProp_newFitness = { "newFitness", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayerStats_eventLevelUp_Parms, newFitness), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UPlayerStats_LevelUp_Statics::NewProp_newMind = { "newMind", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayerStats_eventLevelUp_Parms, newMind), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPlayerStats_LevelUp_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayerStats_LevelUp_Statics::NewProp_newVigor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayerStats_LevelUp_Statics::NewProp_newEndurance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayerStats_LevelUp_Statics::NewProp_newFitness,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayerStats_LevelUp_Statics::NewProp_newMind,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerStats_LevelUp_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlayerStats_LevelUp_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayerStats, nullptr, "LevelUp", nullptr, nullptr, Z_Construct_UFunction_UPlayerStats_LevelUp_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerStats_LevelUp_Statics::PropPointers), sizeof(Z_Construct_UFunction_UPlayerStats_LevelUp_Statics::PlayerStats_eventLevelUp_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerStats_LevelUp_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPlayerStats_LevelUp_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UPlayerStats_LevelUp_Statics::PlayerStats_eventLevelUp_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UPlayerStats_LevelUp()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPlayerStats_LevelUp_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPlayerStats::execLevelUp)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_newVigor);
	P_GET_PROPERTY(FIntProperty,Z_Param_newEndurance);
	P_GET_PROPERTY(FIntProperty,Z_Param_newFitness);
	P_GET_PROPERTY(FIntProperty,Z_Param_newMind);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->LevelUp(Z_Param_newVigor,Z_Param_newEndurance,Z_Param_newFitness,Z_Param_newMind);
	P_NATIVE_END;
}
// End Class UPlayerStats Function LevelUp

// Begin Class UPlayerStats
void UPlayerStats::StaticRegisterNativesUPlayerStats()
{
	UClass* Class = UPlayerStats::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "DecreaseHealth", &UPlayerStats::execDecreaseHealth },
		{ "DecreaseStamina", &UPlayerStats::execDecreaseStamina },
		{ "IncreaseHealth", &UPlayerStats::execIncreaseHealth },
		{ "IncreaseStamina", &UPlayerStats::execIncreaseStamina },
		{ "IncreaseXP", &UPlayerStats::execIncreaseXP },
		{ "LevelUp", &UPlayerStats::execLevelUp },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPlayerStats);
UClass* Z_Construct_UClass_UPlayerStats_NoRegister()
{
	return UPlayerStats::StaticClass();
}
struct Z_Construct_UClass_UPlayerStats_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "PlayerStats.h" },
		{ "ModuleRelativePath", "Public/PlayerStats.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurrentHealth_MetaData[] = {
		{ "Category", "Health" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Variables\n" },
#endif
		{ "ModuleRelativePath", "Public/PlayerStats.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Variables" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxHealth_MetaData[] = {
		{ "Category", "Health" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Current health of the player\n" },
#endif
		{ "ModuleRelativePath", "Public/PlayerStats.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Current health of the player" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurrentStamina_MetaData[] = {
		{ "Category", "Stamina" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Maximum health of the player\n" },
#endif
		{ "ModuleRelativePath", "Public/PlayerStats.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Maximum health of the player" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxStamina_MetaData[] = {
		{ "Category", "Stamina" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Current stamina of the player\n" },
#endif
		{ "ModuleRelativePath", "Public/PlayerStats.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Current stamina of the player" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurrentXP_MetaData[] = {
		{ "Category", "Level" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Maximum stamina of the player\n" },
#endif
		{ "ModuleRelativePath", "Public/PlayerStats.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Maximum stamina of the player" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxXP_MetaData[] = {
		{ "Category", "Level" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Current experience points of the player\n" },
#endif
		{ "ModuleRelativePath", "Public/PlayerStats.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Current experience points of the player" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Level_MetaData[] = {
		{ "Category", "Level" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Experience points required to level up\n" },
#endif
		{ "ModuleRelativePath", "Public/PlayerStats.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Experience points required to level up" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Vigor_MetaData[] = {
		{ "Category", "Stats" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Current level of the player\n" },
#endif
		{ "ModuleRelativePath", "Public/PlayerStats.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Current level of the player" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Endurance_MetaData[] = {
		{ "Category", "Stats" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Stat for health and resistance\n" },
#endif
		{ "ModuleRelativePath", "Public/PlayerStats.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Stat for health and resistance" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Fitness_MetaData[] = {
		{ "Category", "Stats" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Stat for stamina\n" },
#endif
		{ "ModuleRelativePath", "Public/PlayerStats.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Stat for stamina" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Mind_MetaData[] = {
		{ "Category", "Stats" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Stat for physical damage\n" },
#endif
		{ "ModuleRelativePath", "Public/PlayerStats.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Stat for physical damage" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PlayerCharacter_MetaData[] = {
		{ "Category", "PlayerStats" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Stat for magical damage\n" },
#endif
		{ "ModuleRelativePath", "Public/PlayerStats.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Stat for magical damage" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_CurrentHealth;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxHealth;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_CurrentStamina;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxStamina;
	static const UECodeGen_Private::FIntPropertyParams NewProp_CurrentXP;
	static const UECodeGen_Private::FIntPropertyParams NewProp_MaxXP;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Level;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Vigor;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Endurance;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Fitness;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Mind;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PlayerCharacter;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UPlayerStats_DecreaseHealth, "DecreaseHealth" }, // 1329646948
		{ &Z_Construct_UFunction_UPlayerStats_DecreaseStamina, "DecreaseStamina" }, // 150222594
		{ &Z_Construct_UFunction_UPlayerStats_IncreaseHealth, "IncreaseHealth" }, // 2629536106
		{ &Z_Construct_UFunction_UPlayerStats_IncreaseStamina, "IncreaseStamina" }, // 3618476111
		{ &Z_Construct_UFunction_UPlayerStats_IncreaseXP, "IncreaseXP" }, // 2063767541
		{ &Z_Construct_UFunction_UPlayerStats_LevelUp, "LevelUp" }, // 2383362121
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPlayerStats>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPlayerStats_Statics::NewProp_CurrentHealth = { "CurrentHealth", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPlayerStats, CurrentHealth), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurrentHealth_MetaData), NewProp_CurrentHealth_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPlayerStats_Statics::NewProp_MaxHealth = { "MaxHealth", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPlayerStats, MaxHealth), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxHealth_MetaData), NewProp_MaxHealth_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPlayerStats_Statics::NewProp_CurrentStamina = { "CurrentStamina", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPlayerStats, CurrentStamina), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurrentStamina_MetaData), NewProp_CurrentStamina_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPlayerStats_Statics::NewProp_MaxStamina = { "MaxStamina", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPlayerStats, MaxStamina), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxStamina_MetaData), NewProp_MaxStamina_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UPlayerStats_Statics::NewProp_CurrentXP = { "CurrentXP", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPlayerStats, CurrentXP), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurrentXP_MetaData), NewProp_CurrentXP_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UPlayerStats_Statics::NewProp_MaxXP = { "MaxXP", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPlayerStats, MaxXP), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxXP_MetaData), NewProp_MaxXP_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UPlayerStats_Statics::NewProp_Level = { "Level", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPlayerStats, Level), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Level_MetaData), NewProp_Level_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UPlayerStats_Statics::NewProp_Vigor = { "Vigor", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPlayerStats, Vigor), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Vigor_MetaData), NewProp_Vigor_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UPlayerStats_Statics::NewProp_Endurance = { "Endurance", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPlayerStats, Endurance), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Endurance_MetaData), NewProp_Endurance_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UPlayerStats_Statics::NewProp_Fitness = { "Fitness", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPlayerStats, Fitness), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Fitness_MetaData), NewProp_Fitness_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UPlayerStats_Statics::NewProp_Mind = { "Mind", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPlayerStats, Mind), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Mind_MetaData), NewProp_Mind_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPlayerStats_Statics::NewProp_PlayerCharacter = { "PlayerCharacter", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPlayerStats, PlayerCharacter), Z_Construct_UClass_ACharacter_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PlayerCharacter_MetaData), NewProp_PlayerCharacter_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPlayerStats_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayerStats_Statics::NewProp_CurrentHealth,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayerStats_Statics::NewProp_MaxHealth,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayerStats_Statics::NewProp_CurrentStamina,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayerStats_Statics::NewProp_MaxStamina,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayerStats_Statics::NewProp_CurrentXP,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayerStats_Statics::NewProp_MaxXP,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayerStats_Statics::NewProp_Level,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayerStats_Statics::NewProp_Vigor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayerStats_Statics::NewProp_Endurance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayerStats_Statics::NewProp_Fitness,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayerStats_Statics::NewProp_Mind,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayerStats_Statics::NewProp_PlayerCharacter,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerStats_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UPlayerStats_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UActorComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_GnomeCunning,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerStats_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UPlayerStats_Statics::ClassParams = {
	&UPlayerStats::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UPlayerStats_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerStats_Statics::PropPointers),
	0,
	0x00A000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerStats_Statics::Class_MetaDataParams), Z_Construct_UClass_UPlayerStats_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UPlayerStats()
{
	if (!Z_Registration_Info_UClass_UPlayerStats.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPlayerStats.OuterSingleton, Z_Construct_UClass_UPlayerStats_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UPlayerStats.OuterSingleton;
}
template<> GNOMECUNNING_API UClass* StaticClass<UPlayerStats>()
{
	return UPlayerStats::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UPlayerStats);
UPlayerStats::~UPlayerStats() {}
// End Class UPlayerStats

// Begin Registration
struct Z_CompiledInDeferFile_FID_GnomeCunning_Source_GnomeCunning_Public_PlayerStats_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UPlayerStats, UPlayerStats::StaticClass, TEXT("UPlayerStats"), &Z_Registration_Info_UClass_UPlayerStats, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPlayerStats), 2697689330U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GnomeCunning_Source_GnomeCunning_Public_PlayerStats_h_4240841248(TEXT("/Script/GnomeCunning"),
	Z_CompiledInDeferFile_FID_GnomeCunning_Source_GnomeCunning_Public_PlayerStats_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_GnomeCunning_Source_GnomeCunning_Public_PlayerStats_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
