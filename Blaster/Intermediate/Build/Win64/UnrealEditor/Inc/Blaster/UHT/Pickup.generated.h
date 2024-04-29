// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Pickups/Pickup.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class UPrimitiveComponent;
struct FHitResult;
#ifdef BLASTER_Pickup_generated_h
#error "Pickup.generated.h already included, missing '#pragma once' in Pickup.h"
#endif
#define BLASTER_Pickup_generated_h

#define FID_git_UnrealEngineRepo_Blaster_Source_Blaster_Pickups_Pickup_h_12_SPARSE_DATA
#define FID_git_UnrealEngineRepo_Blaster_Source_Blaster_Pickups_Pickup_h_12_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnSphereOverlap);


#define FID_git_UnrealEngineRepo_Blaster_Source_Blaster_Pickups_Pickup_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnSphereOverlap);


#define FID_git_UnrealEngineRepo_Blaster_Source_Blaster_Pickups_Pickup_h_12_ACCESSORS
#define FID_git_UnrealEngineRepo_Blaster_Source_Blaster_Pickups_Pickup_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAPickup(); \
	friend struct Z_Construct_UClass_APickup_Statics; \
public: \
	DECLARE_CLASS(APickup, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Blaster"), NO_API) \
	DECLARE_SERIALIZER(APickup)


#define FID_git_UnrealEngineRepo_Blaster_Source_Blaster_Pickups_Pickup_h_12_INCLASS \
private: \
	static void StaticRegisterNativesAPickup(); \
	friend struct Z_Construct_UClass_APickup_Statics; \
public: \
	DECLARE_CLASS(APickup, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Blaster"), NO_API) \
	DECLARE_SERIALIZER(APickup)


#define FID_git_UnrealEngineRepo_Blaster_Source_Blaster_Pickups_Pickup_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API APickup(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(APickup) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APickup); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APickup); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API APickup(APickup&&); \
	NO_API APickup(const APickup&); \
public: \
	NO_API virtual ~APickup();


#define FID_git_UnrealEngineRepo_Blaster_Source_Blaster_Pickups_Pickup_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API APickup(APickup&&); \
	NO_API APickup(const APickup&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APickup); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APickup); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(APickup) \
	NO_API virtual ~APickup();


#define FID_git_UnrealEngineRepo_Blaster_Source_Blaster_Pickups_Pickup_h_9_PROLOG
#define FID_git_UnrealEngineRepo_Blaster_Source_Blaster_Pickups_Pickup_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_git_UnrealEngineRepo_Blaster_Source_Blaster_Pickups_Pickup_h_12_SPARSE_DATA \
	FID_git_UnrealEngineRepo_Blaster_Source_Blaster_Pickups_Pickup_h_12_RPC_WRAPPERS \
	FID_git_UnrealEngineRepo_Blaster_Source_Blaster_Pickups_Pickup_h_12_ACCESSORS \
	FID_git_UnrealEngineRepo_Blaster_Source_Blaster_Pickups_Pickup_h_12_INCLASS \
	FID_git_UnrealEngineRepo_Blaster_Source_Blaster_Pickups_Pickup_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_git_UnrealEngineRepo_Blaster_Source_Blaster_Pickups_Pickup_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_git_UnrealEngineRepo_Blaster_Source_Blaster_Pickups_Pickup_h_12_SPARSE_DATA \
	FID_git_UnrealEngineRepo_Blaster_Source_Blaster_Pickups_Pickup_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_git_UnrealEngineRepo_Blaster_Source_Blaster_Pickups_Pickup_h_12_ACCESSORS \
	FID_git_UnrealEngineRepo_Blaster_Source_Blaster_Pickups_Pickup_h_12_INCLASS_NO_PURE_DECLS \
	FID_git_UnrealEngineRepo_Blaster_Source_Blaster_Pickups_Pickup_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> BLASTER_API UClass* StaticClass<class APickup>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_git_UnrealEngineRepo_Blaster_Source_Blaster_Pickups_Pickup_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
