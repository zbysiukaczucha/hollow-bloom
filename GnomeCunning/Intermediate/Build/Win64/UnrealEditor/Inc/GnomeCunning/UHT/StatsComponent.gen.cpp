// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GnomeCunning/Public/StatsComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeStatsComponent() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_ACharacter_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
GNOMECUNNING_API UClass* Z_Construct_UClass_UStatsComponent();
GNOMECUNNING_API UClass* Z_Construct_UClass_UStatsComponent_NoRegister();
UPackage* Z_Construct_UPackage__Script_GnomeCunning();
// End Cross Module References

// Begin Class UStatsComponent Function DecreaseHealth
struct Z_Construct_UFunction_UStatsComponent_DecreaseHealth_Statics
{
	struct StatsComponent_eventDecreaseHealth_Parms
	{
		float Amount;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Custom functionality for the component can be added here\n" },
#endif
		{ "ModuleRelativePath", "Public/StatsComponent.h" },
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
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UStatsComponent_DecreaseHealth_Statics::NewProp_Amount = { "Amount", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(StatsComponent_eventDecreaseHealth_Parms, Amount), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UStatsComponent_DecreaseHealth_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((StatsComponent_eventDecreaseHealth_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UStatsComponent_DecreaseHealth_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(StatsComponent_eventDecreaseHealth_Parms), &Z_Construct_UFunction_UStatsComponent_DecreaseHealth_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UStatsComponent_DecreaseHealth_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStatsComponent_DecreaseHealth_Statics::NewProp_Amount,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStatsComponent_DecreaseHealth_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UStatsComponent_DecreaseHealth_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UStatsComponent_DecreaseHealth_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UStatsComponent, nullptr, "DecreaseHealth", nullptr, nullptr, Z_Construct_UFunction_UStatsComponent_DecreaseHealth_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UStatsComponent_DecreaseHealth_Statics::PropPointers), sizeof(Z_Construct_UFunction_UStatsComponent_DecreaseHealth_Statics::StatsComponent_eventDecreaseHealth_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UStatsComponent_DecreaseHealth_Statics::Function_MetaDataParams), Z_Construct_UFunction_UStatsComponent_DecreaseHealth_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UStatsComponent_DecreaseHealth_Statics::StatsComponent_eventDecreaseHealth_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UStatsComponent_DecreaseHealth()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UStatsComponent_DecreaseHealth_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UStatsComponent::execDecreaseHealth)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_Amount);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->DecreaseHealth(Z_Param_Amount);
	P_NATIVE_END;
}
// End Class UStatsComponent Function DecreaseHealth

// Begin Class UStatsComponent Function DecreaseStamina
struct Z_Construct_UFunction_UStatsComponent_DecreaseStamina_Statics
{
	struct StatsComponent_eventDecreaseStamina_Parms
	{
		float Amount;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/StatsComponent.h" },
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
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UStatsComponent_DecreaseStamina_Statics::NewProp_Amount = { "Amount", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(StatsComponent_eventDecreaseStamina_Parms, Amount), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UStatsComponent_DecreaseStamina_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((StatsComponent_eventDecreaseStamina_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UStatsComponent_DecreaseStamina_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(StatsComponent_eventDecreaseStamina_Parms), &Z_Construct_UFunction_UStatsComponent_DecreaseStamina_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UStatsComponent_DecreaseStamina_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStatsComponent_DecreaseStamina_Statics::NewProp_Amount,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStatsComponent_DecreaseStamina_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UStatsComponent_DecreaseStamina_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UStatsComponent_DecreaseStamina_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UStatsComponent, nullptr, "DecreaseStamina", nullptr, nullptr, Z_Construct_UFunction_UStatsComponent_DecreaseStamina_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UStatsComponent_DecreaseStamina_Statics::PropPointers), sizeof(Z_Construct_UFunction_UStatsComponent_DecreaseStamina_Statics::StatsComponent_eventDecreaseStamina_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UStatsComponent_DecreaseStamina_Statics::Function_MetaDataParams), Z_Construct_UFunction_UStatsComponent_DecreaseStamina_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UStatsComponent_DecreaseStamina_Statics::StatsComponent_eventDecreaseStamina_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UStatsComponent_DecreaseStamina()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UStatsComponent_DecreaseStamina_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UStatsComponent::execDecreaseStamina)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_Amount);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->DecreaseStamina(Z_Param_Amount);
	P_NATIVE_END;
}
// End Class UStatsComponent Function DecreaseStamina

// Begin Class UStatsComponent Function IncreaseHealth
struct Z_Construct_UFunction_UStatsComponent_IncreaseHealth_Statics
{
	struct StatsComponent_eventIncreaseHealth_Parms
	{
		float Amount;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/StatsComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Amount;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UStatsComponent_IncreaseHealth_Statics::NewProp_Amount = { "Amount", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(StatsComponent_eventIncreaseHealth_Parms, Amount), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UStatsComponent_IncreaseHealth_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStatsComponent_IncreaseHealth_Statics::NewProp_Amount,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UStatsComponent_IncreaseHealth_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UStatsComponent_IncreaseHealth_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UStatsComponent, nullptr, "IncreaseHealth", nullptr, nullptr, Z_Construct_UFunction_UStatsComponent_IncreaseHealth_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UStatsComponent_IncreaseHealth_Statics::PropPointers), sizeof(Z_Construct_UFunction_UStatsComponent_IncreaseHealth_Statics::StatsComponent_eventIncreaseHealth_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UStatsComponent_IncreaseHealth_Statics::Function_MetaDataParams), Z_Construct_UFunction_UStatsComponent_IncreaseHealth_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UStatsComponent_IncreaseHealth_Statics::StatsComponent_eventIncreaseHealth_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UStatsComponent_IncreaseHealth()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UStatsComponent_IncreaseHealth_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UStatsComponent::execIncreaseHealth)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_Amount);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->IncreaseHealth(Z_Param_Amount);
	P_NATIVE_END;
}
// End Class UStatsComponent Function IncreaseHealth

// Begin Class UStatsComponent Function IncreaseStamina
struct Z_Construct_UFunction_UStatsComponent_IncreaseStamina_Statics
{
	struct StatsComponent_eventIncreaseStamina_Parms
	{
		float Amount;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/StatsComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Amount;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UStatsComponent_IncreaseStamina_Statics::NewProp_Amount = { "Amount", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(StatsComponent_eventIncreaseStamina_Parms, Amount), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UStatsComponent_IncreaseStamina_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStatsComponent_IncreaseStamina_Statics::NewProp_Amount,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UStatsComponent_IncreaseStamina_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UStatsComponent_IncreaseStamina_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UStatsComponent, nullptr, "IncreaseStamina", nullptr, nullptr, Z_Construct_UFunction_UStatsComponent_IncreaseStamina_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UStatsComponent_IncreaseStamina_Statics::PropPointers), sizeof(Z_Construct_UFunction_UStatsComponent_IncreaseStamina_Statics::StatsComponent_eventIncreaseStamina_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UStatsComponent_IncreaseStamina_Statics::Function_MetaDataParams), Z_Construct_UFunction_UStatsComponent_IncreaseStamina_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UStatsComponent_IncreaseStamina_Statics::StatsComponent_eventIncreaseStamina_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UStatsComponent_IncreaseStamina()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UStatsComponent_IncreaseStamina_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UStatsComponent::execIncreaseStamina)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_Amount);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->IncreaseStamina(Z_Param_Amount);
	P_NATIVE_END;
}
// End Class UStatsComponent Function IncreaseStamina

// Begin Class UStatsComponent Function IncreaseXP
struct Z_Construct_UFunction_UStatsComponent_IncreaseXP_Statics
{
	struct StatsComponent_eventIncreaseXP_Parms
	{
		int32 Amount;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/StatsComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_Amount;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UStatsComponent_IncreaseXP_Statics::NewProp_Amount = { "Amount", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(StatsComponent_eventIncreaseXP_Parms, Amount), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UStatsComponent_IncreaseXP_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStatsComponent_IncreaseXP_Statics::NewProp_Amount,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UStatsComponent_IncreaseXP_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UStatsComponent_IncreaseXP_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UStatsComponent, nullptr, "IncreaseXP", nullptr, nullptr, Z_Construct_UFunction_UStatsComponent_IncreaseXP_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UStatsComponent_IncreaseXP_Statics::PropPointers), sizeof(Z_Construct_UFunction_UStatsComponent_IncreaseXP_Statics::StatsComponent_eventIncreaseXP_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UStatsComponent_IncreaseXP_Statics::Function_MetaDataParams), Z_Construct_UFunction_UStatsComponent_IncreaseXP_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UStatsComponent_IncreaseXP_Statics::StatsComponent_eventIncreaseXP_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UStatsComponent_IncreaseXP()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UStatsComponent_IncreaseXP_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UStatsComponent::execIncreaseXP)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_Amount);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->IncreaseXP(Z_Param_Amount);
	P_NATIVE_END;
}
// End Class UStatsComponent Function IncreaseXP

// Begin Class UStatsComponent Function LevelUp
struct Z_Construct_UFunction_UStatsComponent_LevelUp_Statics
{
	struct StatsComponent_eventLevelUp_Parms
	{
		int32 newVigor;
		int32 newEndurance;
		int32 newFitness;
		int32 newMind;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/StatsComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_newVigor;
	static const UECodeGen_Private::FIntPropertyParams NewProp_newEndurance;
	static const UECodeGen_Private::FIntPropertyParams NewProp_newFitness;
	static const UECodeGen_Private::FIntPropertyParams NewProp_newMind;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UStatsComponent_LevelUp_Statics::NewProp_newVigor = { "newVigor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(StatsComponent_eventLevelUp_Parms, newVigor), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UStatsComponent_LevelUp_Statics::NewProp_newEndurance = { "newEndurance", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(StatsComponent_eventLevelUp_Parms, newEndurance), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UStatsComponent_LevelUp_Statics::NewProp_newFitness = { "newFitness", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(StatsComponent_eventLevelUp_Parms, newFitness), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UStatsComponent_LevelUp_Statics::NewProp_newMind = { "newMind", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(StatsComponent_eventLevelUp_Parms, newMind), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UStatsComponent_LevelUp_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStatsComponent_LevelUp_Statics::NewProp_newVigor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStatsComponent_LevelUp_Statics::NewProp_newEndurance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStatsComponent_LevelUp_Statics::NewProp_newFitness,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStatsComponent_LevelUp_Statics::NewProp_newMind,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UStatsComponent_LevelUp_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UStatsComponent_LevelUp_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UStatsComponent, nullptr, "LevelUp", nullptr, nullptr, Z_Construct_UFunction_UStatsComponent_LevelUp_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UStatsComponent_LevelUp_Statics::PropPointers), sizeof(Z_Construct_UFunction_UStatsComponent_LevelUp_Statics::StatsComponent_eventLevelUp_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UStatsComponent_LevelUp_Statics::Function_MetaDataParams), Z_Construct_UFunction_UStatsComponent_LevelUp_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UStatsComponent_LevelUp_Statics::StatsComponent_eventLevelUp_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UStatsComponent_LevelUp()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UStatsComponent_LevelUp_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UStatsComponent::execLevelUp)
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
// End Class UStatsComponent Function LevelUp

// Begin Class UStatsComponent
void UStatsComponent::StaticRegisterNativesUStatsComponent()
{
	UClass* Class = UStatsComponent::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "DecreaseHealth", &UStatsComponent::execDecreaseHealth },
		{ "DecreaseStamina", &UStatsComponent::execDecreaseStamina },
		{ "IncreaseHealth", &UStatsComponent::execIncreaseHealth },
		{ "IncreaseStamina", &UStatsComponent::execIncreaseStamina },
		{ "IncreaseXP", &UStatsComponent::execIncreaseXP },
		{ "LevelUp", &UStatsComponent::execLevelUp },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UStatsComponent);
UClass* Z_Construct_UClass_UStatsComponent_NoRegister()
{
	return UStatsComponent::StaticClass();
}
struct Z_Construct_UClass_UStatsComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "StatsComponent.h" },
		{ "ModuleRelativePath", "Public/StatsComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurrentHealth_MetaData[] = {
		{ "Category", "Health" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Variables\n" },
#endif
		{ "ModuleRelativePath", "Public/StatsComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Variables" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxHealth_MetaData[] = {
		{ "Category", "Health" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Current health of the player\n" },
#endif
		{ "ModuleRelativePath", "Public/StatsComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Current health of the player" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurrentStamina_MetaData[] = {
		{ "Category", "Stamina" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Maximum health of the player\n" },
#endif
		{ "ModuleRelativePath", "Public/StatsComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Maximum health of the player" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxStamina_MetaData[] = {
		{ "Category", "Stamina" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Current stamina of the player\n" },
#endif
		{ "ModuleRelativePath", "Public/StatsComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Current stamina of the player" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurrentXP_MetaData[] = {
		{ "Category", "Level" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Maximum stamina of the player\n" },
#endif
		{ "ModuleRelativePath", "Public/StatsComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Maximum stamina of the player" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxXP_MetaData[] = {
		{ "Category", "Level" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Current experience points of the player\n" },
#endif
		{ "ModuleRelativePath", "Public/StatsComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Current experience points of the player" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Level_MetaData[] = {
		{ "Category", "Level" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Experience points required to level up\n" },
#endif
		{ "ModuleRelativePath", "Public/StatsComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Experience points required to level up" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Vigor_MetaData[] = {
		{ "Category", "Stats" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Current level of the player\n" },
#endif
		{ "ModuleRelativePath", "Public/StatsComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Current level of the player" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Endurance_MetaData[] = {
		{ "Category", "Stats" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Stat for health and resistance\n" },
#endif
		{ "ModuleRelativePath", "Public/StatsComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Stat for health and resistance" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Fitness_MetaData[] = {
		{ "Category", "Stats" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Stat for stamina\n" },
#endif
		{ "ModuleRelativePath", "Public/StatsComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Stat for stamina" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Mind_MetaData[] = {
		{ "Category", "Stats" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Stat for physical damage\n" },
#endif
		{ "ModuleRelativePath", "Public/StatsComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Stat for physical damage" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PlayerCharacter_MetaData[] = {
		{ "Category", "StatsComponent" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Stat for magical damage\n" },
#endif
		{ "ModuleRelativePath", "Public/StatsComponent.h" },
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
		{ &Z_Construct_UFunction_UStatsComponent_DecreaseHealth, "DecreaseHealth" }, // 263062992
		{ &Z_Construct_UFunction_UStatsComponent_DecreaseStamina, "DecreaseStamina" }, // 856850250
		{ &Z_Construct_UFunction_UStatsComponent_IncreaseHealth, "IncreaseHealth" }, // 2426627231
		{ &Z_Construct_UFunction_UStatsComponent_IncreaseStamina, "IncreaseStamina" }, // 3441719462
		{ &Z_Construct_UFunction_UStatsComponent_IncreaseXP, "IncreaseXP" }, // 1851429443
		{ &Z_Construct_UFunction_UStatsComponent_LevelUp, "LevelUp" }, // 2404211631
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UStatsComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UStatsComponent_Statics::NewProp_CurrentHealth = { "CurrentHealth", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UStatsComponent, CurrentHealth), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurrentHealth_MetaData), NewProp_CurrentHealth_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UStatsComponent_Statics::NewProp_MaxHealth = { "MaxHealth", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UStatsComponent, MaxHealth), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxHealth_MetaData), NewProp_MaxHealth_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UStatsComponent_Statics::NewProp_CurrentStamina = { "CurrentStamina", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UStatsComponent, CurrentStamina), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurrentStamina_MetaData), NewProp_CurrentStamina_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UStatsComponent_Statics::NewProp_MaxStamina = { "MaxStamina", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UStatsComponent, MaxStamina), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxStamina_MetaData), NewProp_MaxStamina_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UStatsComponent_Statics::NewProp_CurrentXP = { "CurrentXP", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UStatsComponent, CurrentXP), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurrentXP_MetaData), NewProp_CurrentXP_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UStatsComponent_Statics::NewProp_MaxXP = { "MaxXP", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UStatsComponent, MaxXP), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxXP_MetaData), NewProp_MaxXP_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UStatsComponent_Statics::NewProp_Level = { "Level", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UStatsComponent, Level), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Level_MetaData), NewProp_Level_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UStatsComponent_Statics::NewProp_Vigor = { "Vigor", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UStatsComponent, Vigor), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Vigor_MetaData), NewProp_Vigor_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UStatsComponent_Statics::NewProp_Endurance = { "Endurance", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UStatsComponent, Endurance), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Endurance_MetaData), NewProp_Endurance_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UStatsComponent_Statics::NewProp_Fitness = { "Fitness", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UStatsComponent, Fitness), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Fitness_MetaData), NewProp_Fitness_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UStatsComponent_Statics::NewProp_Mind = { "Mind", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UStatsComponent, Mind), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Mind_MetaData), NewProp_Mind_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UStatsComponent_Statics::NewProp_PlayerCharacter = { "PlayerCharacter", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UStatsComponent, PlayerCharacter), Z_Construct_UClass_ACharacter_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PlayerCharacter_MetaData), NewProp_PlayerCharacter_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UStatsComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStatsComponent_Statics::NewProp_CurrentHealth,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStatsComponent_Statics::NewProp_MaxHealth,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStatsComponent_Statics::NewProp_CurrentStamina,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStatsComponent_Statics::NewProp_MaxStamina,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStatsComponent_Statics::NewProp_CurrentXP,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStatsComponent_Statics::NewProp_MaxXP,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStatsComponent_Statics::NewProp_Level,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStatsComponent_Statics::NewProp_Vigor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStatsComponent_Statics::NewProp_Endurance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStatsComponent_Statics::NewProp_Fitness,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStatsComponent_Statics::NewProp_Mind,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStatsComponent_Statics::NewProp_PlayerCharacter,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UStatsComponent_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UStatsComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UActorComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_GnomeCunning,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UStatsComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UStatsComponent_Statics::ClassParams = {
	&UStatsComponent::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UStatsComponent_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UStatsComponent_Statics::PropPointers),
	0,
	0x00A000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UStatsComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UStatsComponent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UStatsComponent()
{
	if (!Z_Registration_Info_UClass_UStatsComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UStatsComponent.OuterSingleton, Z_Construct_UClass_UStatsComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UStatsComponent.OuterSingleton;
}
template<> GNOMECUNNING_API UClass* StaticClass<UStatsComponent>()
{
	return UStatsComponent::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UStatsComponent);
UStatsComponent::~UStatsComponent() {}
// End Class UStatsComponent

// Begin Registration
struct Z_CompiledInDeferFile_FID_GnomeCunning_Source_GnomeCunning_Public_StatsComponent_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UStatsComponent, UStatsComponent::StaticClass, TEXT("UStatsComponent"), &Z_Registration_Info_UClass_UStatsComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UStatsComponent), 482518420U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GnomeCunning_Source_GnomeCunning_Public_StatsComponent_h_3013114442(TEXT("/Script/GnomeCunning"),
	Z_CompiledInDeferFile_FID_GnomeCunning_Source_GnomeCunning_Public_StatsComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_GnomeCunning_Source_GnomeCunning_Public_StatsComponent_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
