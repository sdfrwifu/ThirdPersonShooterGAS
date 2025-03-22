// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TestProject/GASCharacter.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGASCharacter() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_ACharacter();
GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UAbilitySystemComponent_NoRegister();
TESTPROJECT_API UClass* Z_Construct_UClass_AGASCharacter();
TESTPROJECT_API UClass* Z_Construct_UClass_AGASCharacter_NoRegister();
UPackage* Z_Construct_UPackage__Script_TestProject();
// End Cross Module References

// Begin Class AGASCharacter
void AGASCharacter::StaticRegisterNativesAGASCharacter()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AGASCharacter);
UClass* Z_Construct_UClass_AGASCharacter_NoRegister()
{
	return AGASCharacter::StaticClass();
}
struct Z_Construct_UClass_AGASCharacter_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "GASCharacter.h" },
		{ "ModuleRelativePath", "GASCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AbilitySystemComponent_MetaData[] = {
		{ "Category", "Abilities" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "GASCharacter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_AbilitySystemComponent;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AGASCharacter>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AGASCharacter_Statics::NewProp_AbilitySystemComponent = { "AbilitySystemComponent", nullptr, (EPropertyFlags)0x00200800000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGASCharacter, AbilitySystemComponent), Z_Construct_UClass_UAbilitySystemComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AbilitySystemComponent_MetaData), NewProp_AbilitySystemComponent_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AGASCharacter_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGASCharacter_Statics::NewProp_AbilitySystemComponent,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AGASCharacter_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AGASCharacter_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_ACharacter,
	(UObject* (*)())Z_Construct_UPackage__Script_TestProject,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AGASCharacter_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AGASCharacter_Statics::ClassParams = {
	&AGASCharacter::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_AGASCharacter_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_AGASCharacter_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AGASCharacter_Statics::Class_MetaDataParams), Z_Construct_UClass_AGASCharacter_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AGASCharacter()
{
	if (!Z_Registration_Info_UClass_AGASCharacter.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AGASCharacter.OuterSingleton, Z_Construct_UClass_AGASCharacter_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AGASCharacter.OuterSingleton;
}
template<> TESTPROJECT_API UClass* StaticClass<AGASCharacter>()
{
	return AGASCharacter::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AGASCharacter);
AGASCharacter::~AGASCharacter() {}
// End Class AGASCharacter

// Begin Registration
struct Z_CompiledInDeferFile_FID_Projects_TestProject_Source_TestProject_GASCharacter_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AGASCharacter, AGASCharacter::StaticClass, TEXT("AGASCharacter"), &Z_Registration_Info_UClass_AGASCharacter, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AGASCharacter), 1929812230U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Projects_TestProject_Source_TestProject_GASCharacter_h_2237234262(TEXT("/Script/TestProject"),
	Z_CompiledInDeferFile_FID_Projects_TestProject_Source_TestProject_GASCharacter_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Projects_TestProject_Source_TestProject_GASCharacter_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
