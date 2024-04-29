// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "BlasterComponents/CombatComponent.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FVector_NetQuantize;
#ifdef BLASTER_CombatComponent_generated_h
#error "CombatComponent.generated.h already included, missing '#pragma once' in CombatComponent.h"
#endif
#define BLASTER_CombatComponent_generated_h

#define FID_git_UnrealEngineRepo_Blaster_Source_Blaster_BlasterComponents_CombatComponent_h_16_SPARSE_DATA
#define FID_git_UnrealEngineRepo_Blaster_Source_Blaster_BlasterComponents_CombatComponent_h_16_RPC_WRAPPERS \
	virtual void ServerThrowGrenade_Implementation(); \
	virtual void ServerReload_Implementation(); \
	virtual void MulticastFire_Implementation(FVector_NetQuantize const& TraceHitTarget); \
	virtual void ServerFire_Implementation(FVector_NetQuantize const& TraceHitTarget); \
	virtual void ServerSetAiming_Implementation(bool bIsAiming); \
	virtual void ServerLaunchGrenade_Implementation(FVector_NetQuantize const& Target); \
 \
	DECLARE_FUNCTION(execOnRep_Grenades); \
	DECLARE_FUNCTION(execOnRep_CombatState); \
	DECLARE_FUNCTION(execOnRep_CarriedAmmo); \
	DECLARE_FUNCTION(execServerThrowGrenade); \
	DECLARE_FUNCTION(execOnRep_EquippedWeapon); \
	DECLARE_FUNCTION(execServerReload); \
	DECLARE_FUNCTION(execMulticastFire); \
	DECLARE_FUNCTION(execServerFire); \
	DECLARE_FUNCTION(execServerSetAiming); \
	DECLARE_FUNCTION(execServerLaunchGrenade); \
	DECLARE_FUNCTION(execLaunchGrenade); \
	DECLARE_FUNCTION(execThrowGrenadeFinished); \
	DECLARE_FUNCTION(execShotgunShellReload); \
	DECLARE_FUNCTION(execFinishReloading);


#define FID_git_UnrealEngineRepo_Blaster_Source_Blaster_BlasterComponents_CombatComponent_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void ServerThrowGrenade_Implementation(); \
	virtual void ServerReload_Implementation(); \
	virtual void MulticastFire_Implementation(FVector_NetQuantize const& TraceHitTarget); \
	virtual void ServerFire_Implementation(FVector_NetQuantize const& TraceHitTarget); \
	virtual void ServerSetAiming_Implementation(bool bIsAiming); \
	virtual void ServerLaunchGrenade_Implementation(FVector_NetQuantize const& Target); \
 \
	DECLARE_FUNCTION(execOnRep_Grenades); \
	DECLARE_FUNCTION(execOnRep_CombatState); \
	DECLARE_FUNCTION(execOnRep_CarriedAmmo); \
	DECLARE_FUNCTION(execServerThrowGrenade); \
	DECLARE_FUNCTION(execOnRep_EquippedWeapon); \
	DECLARE_FUNCTION(execServerReload); \
	DECLARE_FUNCTION(execMulticastFire); \
	DECLARE_FUNCTION(execServerFire); \
	DECLARE_FUNCTION(execServerSetAiming); \
	DECLARE_FUNCTION(execServerLaunchGrenade); \
	DECLARE_FUNCTION(execLaunchGrenade); \
	DECLARE_FUNCTION(execThrowGrenadeFinished); \
	DECLARE_FUNCTION(execShotgunShellReload); \
	DECLARE_FUNCTION(execFinishReloading);


#define FID_git_UnrealEngineRepo_Blaster_Source_Blaster_BlasterComponents_CombatComponent_h_16_ACCESSORS
#define FID_git_UnrealEngineRepo_Blaster_Source_Blaster_BlasterComponents_CombatComponent_h_16_CALLBACK_WRAPPERS
#define FID_git_UnrealEngineRepo_Blaster_Source_Blaster_BlasterComponents_CombatComponent_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUCombatComponent(); \
	friend struct Z_Construct_UClass_UCombatComponent_Statics; \
public: \
	DECLARE_CLASS(UCombatComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Blaster"), NO_API) \
	DECLARE_SERIALIZER(UCombatComponent) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		EquippedWeapon=NETFIELD_REP_START, \
		bAiming, \
		CarriedAmmo, \
		CombatState, \
		Grenades, \
		NETFIELD_REP_END=Grenades	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define FID_git_UnrealEngineRepo_Blaster_Source_Blaster_BlasterComponents_CombatComponent_h_16_INCLASS \
private: \
	static void StaticRegisterNativesUCombatComponent(); \
	friend struct Z_Construct_UClass_UCombatComponent_Statics; \
public: \
	DECLARE_CLASS(UCombatComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Blaster"), NO_API) \
	DECLARE_SERIALIZER(UCombatComponent) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		EquippedWeapon=NETFIELD_REP_START, \
		bAiming, \
		CarriedAmmo, \
		CombatState, \
		Grenades, \
		NETFIELD_REP_END=Grenades	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define FID_git_UnrealEngineRepo_Blaster_Source_Blaster_BlasterComponents_CombatComponent_h_16_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UCombatComponent(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCombatComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCombatComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCombatComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UCombatComponent(UCombatComponent&&); \
	NO_API UCombatComponent(const UCombatComponent&); \
public: \
	NO_API virtual ~UCombatComponent();


#define FID_git_UnrealEngineRepo_Blaster_Source_Blaster_BlasterComponents_CombatComponent_h_16_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UCombatComponent(UCombatComponent&&); \
	NO_API UCombatComponent(const UCombatComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCombatComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCombatComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UCombatComponent) \
	NO_API virtual ~UCombatComponent();


#define FID_git_UnrealEngineRepo_Blaster_Source_Blaster_BlasterComponents_CombatComponent_h_13_PROLOG
#define FID_git_UnrealEngineRepo_Blaster_Source_Blaster_BlasterComponents_CombatComponent_h_16_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_git_UnrealEngineRepo_Blaster_Source_Blaster_BlasterComponents_CombatComponent_h_16_SPARSE_DATA \
	FID_git_UnrealEngineRepo_Blaster_Source_Blaster_BlasterComponents_CombatComponent_h_16_RPC_WRAPPERS \
	FID_git_UnrealEngineRepo_Blaster_Source_Blaster_BlasterComponents_CombatComponent_h_16_ACCESSORS \
	FID_git_UnrealEngineRepo_Blaster_Source_Blaster_BlasterComponents_CombatComponent_h_16_CALLBACK_WRAPPERS \
	FID_git_UnrealEngineRepo_Blaster_Source_Blaster_BlasterComponents_CombatComponent_h_16_INCLASS \
	FID_git_UnrealEngineRepo_Blaster_Source_Blaster_BlasterComponents_CombatComponent_h_16_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_git_UnrealEngineRepo_Blaster_Source_Blaster_BlasterComponents_CombatComponent_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_git_UnrealEngineRepo_Blaster_Source_Blaster_BlasterComponents_CombatComponent_h_16_SPARSE_DATA \
	FID_git_UnrealEngineRepo_Blaster_Source_Blaster_BlasterComponents_CombatComponent_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_git_UnrealEngineRepo_Blaster_Source_Blaster_BlasterComponents_CombatComponent_h_16_ACCESSORS \
	FID_git_UnrealEngineRepo_Blaster_Source_Blaster_BlasterComponents_CombatComponent_h_16_CALLBACK_WRAPPERS \
	FID_git_UnrealEngineRepo_Blaster_Source_Blaster_BlasterComponents_CombatComponent_h_16_INCLASS_NO_PURE_DECLS \
	FID_git_UnrealEngineRepo_Blaster_Source_Blaster_BlasterComponents_CombatComponent_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> BLASTER_API UClass* StaticClass<class UCombatComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_git_UnrealEngineRepo_Blaster_Source_Blaster_BlasterComponents_CombatComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
