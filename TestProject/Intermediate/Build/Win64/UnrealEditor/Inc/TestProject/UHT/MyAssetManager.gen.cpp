// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TestProject/MyAssetManager.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMyAssetManager() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UAssetManager();
TESTPROJECT_API UClass* Z_Construct_UClass_UMyAssetManager();
TESTPROJECT_API UClass* Z_Construct_UClass_UMyAssetManager_NoRegister();
UPackage* Z_Construct_UPackage__Script_TestProject();
// End Cross Module References

// Begin Class UMyAssetManager
void UMyAssetManager::StaticRegisterNativesUMyAssetManager()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMyAssetManager);
UClass* Z_Construct_UClass_UMyAssetManager_NoRegister()
{
	return UMyAssetManager::StaticClass();
}
struct Z_Construct_UClass_UMyAssetManager_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "MyAssetManager.h" },
		{ "ModuleRelativePath", "MyAssetManager.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMyAssetManager>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UMyAssetManager_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UAssetManager,
	(UObject* (*)())Z_Construct_UPackage__Script_TestProject,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMyAssetManager_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMyAssetManager_Statics::ClassParams = {
	&UMyAssetManager::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMyAssetManager_Statics::Class_MetaDataParams), Z_Construct_UClass_UMyAssetManager_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMyAssetManager()
{
	if (!Z_Registration_Info_UClass_UMyAssetManager.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMyAssetManager.OuterSingleton, Z_Construct_UClass_UMyAssetManager_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMyAssetManager.OuterSingleton;
}
template<> TESTPROJECT_API UClass* StaticClass<UMyAssetManager>()
{
	return UMyAssetManager::StaticClass();
}
UMyAssetManager::UMyAssetManager() {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMyAssetManager);
UMyAssetManager::~UMyAssetManager() {}
// End Class UMyAssetManager

// Begin Registration
struct Z_CompiledInDeferFile_FID_Projects_TestProject_Source_TestProject_MyAssetManager_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UMyAssetManager, UMyAssetManager::StaticClass, TEXT("UMyAssetManager"), &Z_Registration_Info_UClass_UMyAssetManager, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMyAssetManager), 3461967877U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Projects_TestProject_Source_TestProject_MyAssetManager_h_3410124033(TEXT("/Script/TestProject"),
	Z_CompiledInDeferFile_FID_Projects_TestProject_Source_TestProject_MyAssetManager_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Projects_TestProject_Source_TestProject_MyAssetManager_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
