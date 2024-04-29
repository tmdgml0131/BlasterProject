// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Weapon/ProjectileGrenade.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FHitResult;
#ifdef BLASTER_ProjectileGrenade_generated_h
#error "ProjectileGrenade.generated.h already included, missing '#pragma once' in ProjectileGrenade.h"
#endif
#define BLASTER_ProjectileGrenade_generated_h

#define FID_git_UnrealEngineRepo_Blaster_Source_Blaster_Weapon_ProjectileGrenade_h_15_SPARSE_DATA
#define FID_git_UnrealEngineRepo_Blaster_Source_Blaster_Weapon_ProjectileGrenade_h_15_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnBounce);


#define FID_git_UnrealEngineRepo_Blaster_Source_Blaster_Weapon_ProjectileGrenade_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnBounce);


#define FID_git_UnrealEngineRepo_Blaster_Source_Blaster_Weapon_ProjectileGrenade_h_15_ACCESSORS
#define FID_git_UnrealEngineRepo_Blaster_Source_Blaster_Weapon_ProjectileGrenade_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAProjectileGrenade(); \
	friend struct Z_Construct_UClass_AProjectileGrenade_Statics; \
public: \
	DECLARE_CLASS(AProjectileGrenade, AProjectile, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Blaster"), NO_API) \
	DECLARE_SERIALIZER(AProjectileGrenade)


#define FID_git_UnrealEngineRepo_Blaster_Source_Blaster_Weapon_ProjectileGrenade_h_15_INCLASS \
private: \
	static void StaticRegisterNativesAProjectileGrenade(); \
	friend struct Z_Construct_UClass_AProjectileGrenade_Statics; \
public: \
	DECLARE_CLASS(AProjectileGrenade, AProjectile, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Blaster"), NO_API) \
	DECLARE_SERIALIZER(AProjectileGrenade)


#define FID_git_UnrealEngineRepo_Blaster_Source_Blaster_Weapon_ProjectileGrenade_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AProjectileGrenade(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AProjectileGrenade) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AProjectileGrenade); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AProjectileGrenade); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AProjectileGrenade(AProjectileGrenade&&); \
	NO_API AProjectileGrenade(const AProjectileGrenade&); \
public: \
	NO_API virtual ~AProjectileGrenade();


#define FID_git_UnrealEngineRepo_Blaster_Source_Blaster_Weapon_ProjectileGrenade_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AProjectileGrenade(AProjectileGrenade&&); \
	NO_API AProjectileGrenade(const AProjectileGrenade&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AProjectileGrenade); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AProjectileGrenade); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AProjectileGrenade) \
	NO_API virtual ~AProjectileGrenade();


#define FID_git_UnrealEngineRepo_Blaster_Source_Blaster_Weapon_ProjectileGrenade_h_12_PROLOG
#define FID_git_UnrealEngineRepo_Blaster_Source_Blaster_Weapon_ProjectileGrenade_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_git_UnrealEngineRepo_Blaster_Source_Blaster_Weapon_ProjectileGrenade_h_15_SPARSE_DATA \
	FID_git_UnrealEngineRepo_Blaster_Source_Blaster_Weapon_ProjectileGrenade_h_15_RPC_WRAPPERS \
	FID_git_UnrealEngineRepo_Blaster_Source_Blaster_Weapon_ProjectileGrenade_h_15_ACCESSORS \
	FID_git_UnrealEngineRepo_Blaster_Source_Blaster_Weapon_ProjectileGrenade_h_15_INCLASS \
	FID_git_UnrealEngineRepo_Blaster_Source_Blaster_Weapon_ProjectileGrenade_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_git_UnrealEngineRepo_Blaster_Source_Blaster_Weapon_ProjectileGrenade_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_git_UnrealEngineRepo_Blaster_Source_Blaster_Weapon_ProjectileGrenade_h_15_SPARSE_DATA \
	FID_git_UnrealEngineRepo_Blaster_Source_Blaster_Weapon_ProjectileGrenade_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_git_UnrealEngineRepo_Blaster_Source_Blaster_Weapon_ProjectileGrenade_h_15_ACCESSORS \
	FID_git_UnrealEngineRepo_Blaster_Source_Blaster_Weapon_ProjectileGrenade_h_15_INCLASS_NO_PURE_DECLS \
	FID_git_UnrealEngineRepo_Blaster_Source_Blaster_Weapon_ProjectileGrenade_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> BLASTER_API UClass* StaticClass<class AProjectileGrenade>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_git_UnrealEngineRepo_Blaster_Source_Blaster_Weapon_ProjectileGrenade_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
