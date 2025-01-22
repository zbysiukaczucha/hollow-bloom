// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "HollowBloom/Public/CombatComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCombatComponent() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_ACharacter_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputAction_NoRegister();
HOLLOWBLOOM_API UClass* Z_Construct_UClass_UCombatComponent();
HOLLOWBLOOM_API UClass* Z_Construct_UClass_UCombatComponent_NoRegister();
HOLLOWBLOOM_API UEnum* Z_Construct_UEnum_HollowBloom_EMovementDirection();
UPackage* Z_Construct_UPackage__Script_HollowBloom();
// End Cross Module References

// Begin Enum EMovementDirection
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EMovementDirection;
static UEnum* EMovementDirection_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EMovementDirection.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EMovementDirection.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_HollowBloom_EMovementDirection, (UObject*)Z_Construct_UPackage__Script_HollowBloom(), TEXT("EMovementDirection"));
	}
	return Z_Registration_Info_UEnum_EMovementDirection.OuterSingleton;
}
template<> HOLLOWBLOOM_API UEnum* StaticEnum<EMovementDirection>()
{
	return EMovementDirection_StaticEnum();
}
struct Z_Construct_UEnum_HollowBloom_EMovementDirection_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Backward.DisplayName", "Backward" },
		{ "Backward.Name", "EMovementDirection::Backward" },
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Custom enum for Movement Direction\n" },
#endif
		{ "Forward.DisplayName", "Forward" },
		{ "Forward.Name", "EMovementDirection::Forward" },
		{ "Left.DisplayName", "Left" },
		{ "Left.Name", "EMovementDirection::Left" },
		{ "ModuleRelativePath", "Public/CombatComponent.h" },
		{ "Right.DisplayName", "Right" },
		{ "Right.Name", "EMovementDirection::Right" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Custom enum for Movement Direction" },
#endif
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EMovementDirection::Forward", (int64)EMovementDirection::Forward },
		{ "EMovementDirection::Backward", (int64)EMovementDirection::Backward },
		{ "EMovementDirection::Left", (int64)EMovementDirection::Left },
		{ "EMovementDirection::Right", (int64)EMovementDirection::Right },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_HollowBloom_EMovementDirection_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_HollowBloom,
	nullptr,
	"EMovementDirection",
	"EMovementDirection",
	Z_Construct_UEnum_HollowBloom_EMovementDirection_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_HollowBloom_EMovementDirection_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_HollowBloom_EMovementDirection_Statics::Enum_MetaDataParams), Z_Construct_UEnum_HollowBloom_EMovementDirection_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_HollowBloom_EMovementDirection()
{
	if (!Z_Registration_Info_UEnum_EMovementDirection.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EMovementDirection.InnerSingleton, Z_Construct_UEnum_HollowBloom_EMovementDirection_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EMovementDirection.InnerSingleton;
}
// End Enum EMovementDirection

// Begin Class UCombatComponent
void UCombatComponent::StaticRegisterNativesUCombatComponent()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCombatComponent);
UClass* Z_Construct_UClass_UCombatComponent_NoRegister()
{
	return UCombatComponent::StaticClass();
}
struct Z_Construct_UClass_UCombatComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "CombatComponent.h" },
		{ "ModuleRelativePath", "Public/CombatComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TargetLockActor_MetaData[] = {
		{ "Category", "Combat" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Variables\n" },
#endif
		{ "ModuleRelativePath", "Public/CombatComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Variables" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PlayerBP_MetaData[] = {
		{ "Category", "Player" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Reference to the target actor being locked on\n" },
#endif
		{ "ModuleRelativePath", "Public/CombatComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Reference to the target actor being locked on" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TargetLockWidgetClass_MetaData[] = {
		{ "Category", "UI" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Reference to the BP Third Person Character\n" },
#endif
		{ "ModuleRelativePath", "Public/CombatComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Reference to the BP Third Person Character" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TargetLockWidget_MetaData[] = {
		{ "Category", "UI" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Reference to the Target Lock Widget Class\n" },
#endif
		{ "ModuleRelativePath", "Public/CombatComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Reference to the Target Lock Widget Class" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsAttacking_MetaData[] = {
		{ "Category", "Combat" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Reference to the Target Lock Widget Actor\n" },
#endif
		{ "ModuleRelativePath", "Public/CombatComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Reference to the Target Lock Widget Actor" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsComboAttacking_MetaData[] = {
		{ "Category", "Combat" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Is the character currently attacking?\n" },
#endif
		{ "ModuleRelativePath", "Public/CombatComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Is the character currently attacking?" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsCasting_MetaData[] = {
		{ "Category", "Combat" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Is the character performing a combo attack?\n" },
#endif
		{ "ModuleRelativePath", "Public/CombatComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Is the character performing a combo attack?" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SwordDamage_MetaData[] = {
		{ "Category", "Combat" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Is the character currently casting a spell?\n" },
#endif
		{ "ModuleRelativePath", "Public/CombatComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Is the character currently casting a spell?" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SpellDamage_MetaData[] = {
		{ "Category", "Combat" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Base damage dealt by the sword\n" },
#endif
		{ "ModuleRelativePath", "Public/CombatComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Base damage dealt by the sword" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsDodging_MetaData[] = {
		{ "Category", "Movement" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Base damage dealt by the spell\n" },
#endif
		{ "ModuleRelativePath", "Public/CombatComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Base damage dealt by the spell" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MovementDirection_MetaData[] = {
		{ "Category", "Movement" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Is the character dodging?\n" },
#endif
		{ "ModuleRelativePath", "Public/CombatComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Is the character dodging?" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TargetLock_MetaData[] = {
		{ "Category", "Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Current movement direction\n" },
#endif
		{ "ModuleRelativePath", "Public/CombatComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Current movement direction" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_TargetLockActor;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PlayerBP;
	static const UECodeGen_Private::FClassPropertyParams NewProp_TargetLockWidgetClass;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_TargetLockWidget;
	static void NewProp_bIsAttacking_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsAttacking;
	static void NewProp_bIsComboAttacking_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsComboAttacking;
	static void NewProp_bIsCasting_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsCasting;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_SwordDamage;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_SpellDamage;
	static void NewProp_bIsDodging_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsDodging;
	static const UECodeGen_Private::FBytePropertyParams NewProp_MovementDirection_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_MovementDirection;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_TargetLock;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCombatComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCombatComponent_Statics::NewProp_TargetLockActor = { "TargetLockActor", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCombatComponent, TargetLockActor), Z_Construct_UClass_ACharacter_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TargetLockActor_MetaData), NewProp_TargetLockActor_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCombatComponent_Statics::NewProp_PlayerBP = { "PlayerBP", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCombatComponent, PlayerBP), Z_Construct_UClass_ACharacter_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PlayerBP_MetaData), NewProp_PlayerBP_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UCombatComponent_Statics::NewProp_TargetLockWidgetClass = { "TargetLockWidgetClass", nullptr, (EPropertyFlags)0x0014000000010001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCombatComponent, TargetLockWidgetClass), Z_Construct_UClass_UClass, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TargetLockWidgetClass_MetaData), NewProp_TargetLockWidgetClass_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCombatComponent_Statics::NewProp_TargetLockWidget = { "TargetLockWidget", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCombatComponent, TargetLockWidget), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TargetLockWidget_MetaData), NewProp_TargetLockWidget_MetaData) };
void Z_Construct_UClass_UCombatComponent_Statics::NewProp_bIsAttacking_SetBit(void* Obj)
{
	((UCombatComponent*)Obj)->bIsAttacking = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UCombatComponent_Statics::NewProp_bIsAttacking = { "bIsAttacking", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UCombatComponent), &Z_Construct_UClass_UCombatComponent_Statics::NewProp_bIsAttacking_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsAttacking_MetaData), NewProp_bIsAttacking_MetaData) };
void Z_Construct_UClass_UCombatComponent_Statics::NewProp_bIsComboAttacking_SetBit(void* Obj)
{
	((UCombatComponent*)Obj)->bIsComboAttacking = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UCombatComponent_Statics::NewProp_bIsComboAttacking = { "bIsComboAttacking", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UCombatComponent), &Z_Construct_UClass_UCombatComponent_Statics::NewProp_bIsComboAttacking_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsComboAttacking_MetaData), NewProp_bIsComboAttacking_MetaData) };
void Z_Construct_UClass_UCombatComponent_Statics::NewProp_bIsCasting_SetBit(void* Obj)
{
	((UCombatComponent*)Obj)->bIsCasting = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UCombatComponent_Statics::NewProp_bIsCasting = { "bIsCasting", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UCombatComponent), &Z_Construct_UClass_UCombatComponent_Statics::NewProp_bIsCasting_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsCasting_MetaData), NewProp_bIsCasting_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCombatComponent_Statics::NewProp_SwordDamage = { "SwordDamage", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCombatComponent, SwordDamage), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SwordDamage_MetaData), NewProp_SwordDamage_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCombatComponent_Statics::NewProp_SpellDamage = { "SpellDamage", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCombatComponent, SpellDamage), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SpellDamage_MetaData), NewProp_SpellDamage_MetaData) };
void Z_Construct_UClass_UCombatComponent_Statics::NewProp_bIsDodging_SetBit(void* Obj)
{
	((UCombatComponent*)Obj)->bIsDodging = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UCombatComponent_Statics::NewProp_bIsDodging = { "bIsDodging", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UCombatComponent), &Z_Construct_UClass_UCombatComponent_Statics::NewProp_bIsDodging_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsDodging_MetaData), NewProp_bIsDodging_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UCombatComponent_Statics::NewProp_MovementDirection_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UCombatComponent_Statics::NewProp_MovementDirection = { "MovementDirection", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCombatComponent, MovementDirection), Z_Construct_UEnum_HollowBloom_EMovementDirection, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MovementDirection_MetaData), NewProp_MovementDirection_MetaData) }; // 3099772746
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCombatComponent_Statics::NewProp_TargetLock = { "TargetLock", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCombatComponent, TargetLock), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TargetLock_MetaData), NewProp_TargetLock_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCombatComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCombatComponent_Statics::NewProp_TargetLockActor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCombatComponent_Statics::NewProp_PlayerBP,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCombatComponent_Statics::NewProp_TargetLockWidgetClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCombatComponent_Statics::NewProp_TargetLockWidget,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCombatComponent_Statics::NewProp_bIsAttacking,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCombatComponent_Statics::NewProp_bIsComboAttacking,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCombatComponent_Statics::NewProp_bIsCasting,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCombatComponent_Statics::NewProp_SwordDamage,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCombatComponent_Statics::NewProp_SpellDamage,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCombatComponent_Statics::NewProp_bIsDodging,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCombatComponent_Statics::NewProp_MovementDirection_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCombatComponent_Statics::NewProp_MovementDirection,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCombatComponent_Statics::NewProp_TargetLock,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCombatComponent_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UCombatComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UActorComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_HollowBloom,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCombatComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UCombatComponent_Statics::ClassParams = {
	&UCombatComponent::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UCombatComponent_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UCombatComponent_Statics::PropPointers),
	0,
	0x00A000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCombatComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UCombatComponent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UCombatComponent()
{
	if (!Z_Registration_Info_UClass_UCombatComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCombatComponent.OuterSingleton, Z_Construct_UClass_UCombatComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UCombatComponent.OuterSingleton;
}
template<> HOLLOWBLOOM_API UClass* StaticClass<UCombatComponent>()
{
	return UCombatComponent::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UCombatComponent);
UCombatComponent::~UCombatComponent() {}
// End Class UCombatComponent

// Begin Registration
struct Z_CompiledInDeferFile_FID_HollowBloom_Source_HollowBloom_Public_CombatComponent_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EMovementDirection_StaticEnum, TEXT("EMovementDirection"), &Z_Registration_Info_UEnum_EMovementDirection, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3099772746U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UCombatComponent, UCombatComponent::StaticClass, TEXT("UCombatComponent"), &Z_Registration_Info_UClass_UCombatComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCombatComponent), 669792793U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HollowBloom_Source_HollowBloom_Public_CombatComponent_h_1531107790(TEXT("/Script/HollowBloom"),
	Z_CompiledInDeferFile_FID_HollowBloom_Source_HollowBloom_Public_CombatComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HollowBloom_Source_HollowBloom_Public_CombatComponent_h_Statics::ClassInfo),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_HollowBloom_Source_HollowBloom_Public_CombatComponent_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HollowBloom_Source_HollowBloom_Public_CombatComponent_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
