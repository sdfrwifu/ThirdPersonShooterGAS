// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "GASCharacter.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef TESTPROJECT_GASCharacter_generated_h
#error "GASCharacter.generated.h already included, missing '#pragma once' in GASCharacter.h"
#endif
#define TESTPROJECT_GASCharacter_generated_h

#define FID_Projects_TestProject_Source_TestProject_GASCharacter_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAGASCharacter(); \
	friend struct Z_Construct_UClass_AGASCharacter_Statics; \
public: \
	DECLARE_CLASS(AGASCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/TestProject"), NO_API) \
	DECLARE_SERIALIZER(AGASCharacter)


#define FID_Projects_TestProject_Source_TestProject_GASCharacter_h_13_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	AGASCharacter(AGASCharacter&&); \
	AGASCharacter(const AGASCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AGASCharacter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AGASCharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AGASCharacter) \
	NO_API virtual ~AGASCharacter();


#define FID_Projects_TestProject_Source_TestProject_GASCharacter_h_10_PROLOG
#define FID_Projects_TestProject_Source_TestProject_GASCharacter_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Projects_TestProject_Source_TestProject_GASCharacter_h_13_INCLASS_NO_PURE_DECLS \
	FID_Projects_TestProject_Source_TestProject_GASCharacter_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> TESTPROJECT_API UClass* StaticClass<class AGASCharacter>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Projects_TestProject_Source_TestProject_GASCharacter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
