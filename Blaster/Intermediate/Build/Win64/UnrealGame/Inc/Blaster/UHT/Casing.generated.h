// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Weapon/Casing.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class UPrimitiveComponent;
struct FHitResult;
#ifdef BLASTER_Casing_generated_h
#error "Casing.generated.h already included, missing '#pragma once' in Casing.h"
#endif
#define BLASTER_Casing_generated_h

#define FID_git_UnrealEngineRepo_Blaster_Source_Blaster_Weapon_Casing_h_13_SPARSE_DATA
#define FID_git_UnrealEngineRepo_Blaster_Source_Blaster_Weapon_Casing_h_13_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnHit);


#define FID_git_UnrealEngineRepo_Blaster_Source_Blaster_Weapon_Casing_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnHit);


#define FID_git_UnrealEngineRepo_Blaster_Source_Blaster_Weapon_Casing_h_13_ACCESSORS
#define FID_git_UnrealEngineRepo_Blaster_Source_Blaster_Weapon_Casing_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesACasing(); \
	friend struct Z_Construct_UClass_ACasing_Statics; \
public: \
	DECLARE_CLASS(ACasing, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Blaster"), NO_API) \
	DECLARE_SERIALIZER(ACasing)


#define FID_git_UnrealEngineRepo_Blaster_Source_Blaster_Weapon_Casing_h_13_INCLASS \
private: \
	static void StaticRegisterNativesACasing(); \
	friend struct Z_Construct_UClass_ACasing_Statics; \
public: \
	DECLARE_CLASS(ACasing, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Blaster"), NO_API) \
	DECLARE_SERIALIZER(ACasing)


#define FID_git_UnrealEngineRepo_Blaster_Source_Blaster_Weapon_Casing_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ACasing(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ACasing) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ACasing); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ACasing); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ACasing(ACasing&&); \
	NO_API ACasing(const ACasing&); \
public: \
	NO_API virtual ~ACasing();


#define FID_git_UnrealEngineRepo_Blaster_Source_Blaster_Weapon_Casing_h_13_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ACasing(ACasing&&); \
	NO_API ACasing(const ACasing&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ACasing); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ACasing); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ACasing) \
	NO_API virtual ~ACasing();


#define FID_git_UnrealEngineRepo_Blaster_Source_Blaster_Weapon_Casing_h_10_PROLOG
#define FID_git_UnrealEngineRepo_Blaster_Source_Blaster_Weapon_Casing_h_13_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_git_UnrealEngineRepo_Blaster_Source_Blaster_Weapon_Casing_h_13_SPARSE_DATA \
	FID_git_UnrealEngineRepo_Blaster_Source_Blaster_Weapon_Casing_h_13_RPC_WRAPPERS \
	FID_git_UnrealEngineRepo_Blaster_Source_Blaster_Weapon_Casing_h_13_ACCESSORS \
	FID_git_UnrealEngineRepo_Blaster_Source_Blaster_Weapon_Casing_h_13_INCLASS \
	FID_git_UnrealEngineRepo_Blaster_Source_Blaster_Weapon_Casing_h_13_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_git_UnrealEngineRepo_Blaster_Source_Blaster_Weapon_Casing_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_git_UnrealEngineRepo_Blaster_Source_Blaster_Weapon_Casing_h_13_SPARSE_DATA \
	FID_git_UnrealEngineRepo_Blaster_Source_Blaster_Weapon_Casing_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_git_UnrealEngineRepo_Blaster_Source_Blaster_Weapon_Casing_h_13_ACCESSORS \
	FID_git_UnrealEngineRepo_Blaster_Source_Blaster_Weapon_Casing_h_13_INCLASS_NO_PURE_DECLS \
	FID_git_UnrealEngineRepo_Blaster_Source_Blaster_Weapon_Casing_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> BLASTER_API UClass* StaticClass<class ACasing>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_git_UnrealEngineRepo_Blaster_Source_Blaster_Weapon_Casing_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
