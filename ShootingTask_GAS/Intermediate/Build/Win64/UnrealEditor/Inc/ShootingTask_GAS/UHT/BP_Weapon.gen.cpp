// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ShootingTask_GAS/BP_Weapon.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBP_Weapon() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AActor();
SHOOTINGTASK_GAS_API UClass* Z_Construct_UClass_ABP_Weapon();
SHOOTINGTASK_GAS_API UClass* Z_Construct_UClass_ABP_Weapon_NoRegister();
UPackage* Z_Construct_UPackage__Script_ShootingTask_GAS();
// End Cross Module References

// Begin Class ABP_Weapon
void ABP_Weapon::StaticRegisterNativesABP_Weapon()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ABP_Weapon);
UClass* Z_Construct_UClass_ABP_Weapon_NoRegister()
{
	return ABP_Weapon::StaticClass();
}
struct Z_Construct_UClass_ABP_Weapon_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "BP_Weapon.h" },
		{ "ModuleRelativePath", "BP_Weapon.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MyInt_MetaData[] = {
		{ "Category", "BP_Weapon" },
		{ "ModuleRelativePath", "BP_Weapon.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FireRate_MetaData[] = {
		{ "Category", "BP_Weapon" },
		{ "ModuleRelativePath", "BP_Weapon.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_IsMainWeapon_MetaData[] = {
		{ "Category", "BP_Weapon" },
		{ "ModuleRelativePath", "BP_Weapon.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_MyInt;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_FireRate;
	static void NewProp_IsMainWeapon_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_IsMainWeapon;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABP_Weapon>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_ABP_Weapon_Statics::NewProp_MyInt = { "MyInt", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABP_Weapon, MyInt), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MyInt_MetaData), NewProp_MyInt_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ABP_Weapon_Statics::NewProp_FireRate = { "FireRate", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABP_Weapon, FireRate), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FireRate_MetaData), NewProp_FireRate_MetaData) };
void Z_Construct_UClass_ABP_Weapon_Statics::NewProp_IsMainWeapon_SetBit(void* Obj)
{
	((ABP_Weapon*)Obj)->IsMainWeapon = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ABP_Weapon_Statics::NewProp_IsMainWeapon = { "IsMainWeapon", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ABP_Weapon), &Z_Construct_UClass_ABP_Weapon_Statics::NewProp_IsMainWeapon_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_IsMainWeapon_MetaData), NewProp_IsMainWeapon_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ABP_Weapon_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABP_Weapon_Statics::NewProp_MyInt,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABP_Weapon_Statics::NewProp_FireRate,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABP_Weapon_Statics::NewProp_IsMainWeapon,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ABP_Weapon_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ABP_Weapon_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_ShootingTask_GAS,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ABP_Weapon_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ABP_Weapon_Statics::ClassParams = {
	&ABP_Weapon::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_ABP_Weapon_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_ABP_Weapon_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ABP_Weapon_Statics::Class_MetaDataParams), Z_Construct_UClass_ABP_Weapon_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ABP_Weapon()
{
	if (!Z_Registration_Info_UClass_ABP_Weapon.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ABP_Weapon.OuterSingleton, Z_Construct_UClass_ABP_Weapon_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ABP_Weapon.OuterSingleton;
}
template<> SHOOTINGTASK_GAS_API UClass* StaticClass<ABP_Weapon>()
{
	return ABP_Weapon::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ABP_Weapon);
ABP_Weapon::~ABP_Weapon() {}
// End Class ABP_Weapon

// Begin Registration
struct Z_CompiledInDeferFile_FID_Projects_ShootingTask_GAS_Source_ShootingTask_GAS_BP_Weapon_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ABP_Weapon, ABP_Weapon::StaticClass, TEXT("ABP_Weapon"), &Z_Registration_Info_UClass_ABP_Weapon, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ABP_Weapon), 2894503728U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Projects_ShootingTask_GAS_Source_ShootingTask_GAS_BP_Weapon_h_2992193302(TEXT("/Script/ShootingTask_GAS"),
	Z_CompiledInDeferFile_FID_Projects_ShootingTask_GAS_Source_ShootingTask_GAS_BP_Weapon_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Projects_ShootingTask_GAS_Source_ShootingTask_GAS_BP_Weapon_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
