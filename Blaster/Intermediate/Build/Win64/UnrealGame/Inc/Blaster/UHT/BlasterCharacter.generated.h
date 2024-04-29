// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Character/BlasterCharacter.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class AController;
class AWeapon;
class UDamageType;
#ifdef BLASTER_BlasterCharacter_generated_h
#error "BlasterCharacter.generated.h already included, missing '#pragma once' in BlasterCharacter.h"
#endif
#define BLASTER_BlasterCharacter_generated_h

#define FID_git_UnrealEngineRepo_Blaster_Source_Blaster_Character_BlasterCharacter_h_17_SPARSE_DATA
#define FID_git_UnrealEngineRepo_Blaster_Source_Blaster_Character_BlasterCharacter_h_17_RPC_WRAPPERS \
	virtual void ServerRunButtonReleased_Implementation(); \
	virtual void ServerRunButtonPressed_Implementation(); \
	virtual void ServerEquipButtonPressed_Implementation(); \
	virtual void MulticastElim_Implementation(); \
 \
	DECLARE_FUNCTION(execUpdateDissolveMaterial); \
	DECLARE_FUNCTION(execOnRep_Health); \
	DECLARE_FUNCTION(execServerRunButtonReleased); \
	DECLARE_FUNCTION(execServerRunButtonPressed); \
	DECLARE_FUNCTION(execServerEquipButtonPressed); \
	DECLARE_FUNCTION(execOnRep_OverlappingWeapon); \
	DECLARE_FUNCTION(execReceiveDamage); \
	DECLARE_FUNCTION(execMulticastElim);


#define FID_git_UnrealEngineRepo_Blaster_Source_Blaster_Character_BlasterCharacter_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void ServerRunButtonReleased_Implementation(); \
	virtual void ServerRunButtonPressed_Implementation(); \
	virtual void ServerEquipButtonPressed_Implementation(); \
	virtual void MulticastElim_Implementation(); \
 \
	DECLARE_FUNCTION(execUpdateDissolveMaterial); \
	DECLARE_FUNCTION(execOnRep_Health); \
	DECLARE_FUNCTION(execServerRunButtonReleased); \
	DECLARE_FUNCTION(execServerRunButtonPressed); \
	DECLARE_FUNCTION(execServerEquipButtonPressed); \
	DECLARE_FUNCTION(execOnRep_OverlappingWeapon); \
	DECLARE_FUNCTION(execReceiveDamage); \
	DECLARE_FUNCTION(execMulticastElim);


#define FID_git_UnrealEngineRepo_Blaster_Source_Blaster_Character_BlasterCharacter_h_17_ACCESSORS
#define FID_git_UnrealEngineRepo_Blaster_Source_Blaster_Character_BlasterCharacter_h_17_CALLBACK_WRAPPERS
#define FID_git_UnrealEngineRepo_Blaster_Source_Blaster_Character_BlasterCharacter_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesABlasterCharacter(); \
	friend struct Z_Construct_UClass_ABlasterCharacter_Statics; \
public: \
	DECLARE_CLASS(ABlasterCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Blaster"), NO_API) \
	DECLARE_SERIALIZER(ABlasterCharacter) \
	virtual UObject* _getUObject() const override { return const_cast<ABlasterCharacter*>(this); } \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		bDisableGameplay=NETFIELD_REP_START, \
		OverlappingWeapon, \
		Health, \
		WalkSpeed, \
		RunSpeed, \
		NETFIELD_REP_END=RunSpeed	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define FID_git_UnrealEngineRepo_Blaster_Source_Blaster_Character_BlasterCharacter_h_17_INCLASS \
private: \
	static void StaticRegisterNativesABlasterCharacter(); \
	friend struct Z_Construct_UClass_ABlasterCharacter_Statics; \
public: \
	DECLARE_CLASS(ABlasterCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Blaster"), NO_API) \
	DECLARE_SERIALIZER(ABlasterCharacter) \
	virtual UObject* _getUObject() const override { return const_cast<ABlasterCharacter*>(this); } \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		bDisableGameplay=NETFIELD_REP_START, \
		OverlappingWeapon, \
		Health, \
		WalkSpeed, \
		RunSpeed, \
		NETFIELD_REP_END=RunSpeed	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define FID_git_UnrealEngineRepo_Blaster_Source_Blaster_Character_BlasterCharacter_h_17_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ABlasterCharacter(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ABlasterCharacter) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABlasterCharacter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABlasterCharacter); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ABlasterCharacter(ABlasterCharacter&&); \
	NO_API ABlasterCharacter(const ABlasterCharacter&); \
public: \
	NO_API virtual ~ABlasterCharacter();


#define FID_git_UnrealEngineRepo_Blaster_Source_Blaster_Character_BlasterCharacter_h_17_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ABlasterCharacter(ABlasterCharacter&&); \
	NO_API ABlasterCharacter(const ABlasterCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABlasterCharacter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABlasterCharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ABlasterCharacter) \
	NO_API virtual ~ABlasterCharacter();


#define FID_git_UnrealEngineRepo_Blaster_Source_Blaster_Character_BlasterCharacter_h_14_PROLOG
#define FID_git_UnrealEngineRepo_Blaster_Source_Blaster_Character_BlasterCharacter_h_17_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_git_UnrealEngineRepo_Blaster_Source_Blaster_Character_BlasterCharacter_h_17_SPARSE_DATA \
	FID_git_UnrealEngineRepo_Blaster_Source_Blaster_Character_BlasterCharacter_h_17_RPC_WRAPPERS \
	FID_git_UnrealEngineRepo_Blaster_Source_Blaster_Character_BlasterCharacter_h_17_ACCESSORS \
	FID_git_UnrealEngineRepo_Blaster_Source_Blaster_Character_BlasterCharacter_h_17_CALLBACK_WRAPPERS \
	FID_git_UnrealEngineRepo_Blaster_Source_Blaster_Character_BlasterCharacter_h_17_INCLASS \
	FID_git_UnrealEngineRepo_Blaster_Source_Blaster_Character_BlasterCharacter_h_17_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_git_UnrealEngineRepo_Blaster_Source_Blaster_Character_BlasterCharacter_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_git_UnrealEngineRepo_Blaster_Source_Blaster_Character_BlasterCharacter_h_17_SPARSE_DATA \
	FID_git_UnrealEngineRepo_Blaster_Source_Blaster_Character_BlasterCharacter_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_git_UnrealEngineRepo_Blaster_Source_Blaster_Character_BlasterCharacter_h_17_ACCESSORS \
	FID_git_UnrealEngineRepo_Blaster_Source_Blaster_Character_BlasterCharacter_h_17_CALLBACK_WRAPPERS \
	FID_git_UnrealEngineRepo_Blaster_Source_Blaster_Character_BlasterCharacter_h_17_INCLASS_NO_PURE_DECLS \
	FID_git_UnrealEngineRepo_Blaster_Source_Blaster_Character_BlasterCharacter_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> BLASTER_API UClass* StaticClass<class ABlasterCharacter>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_git_UnrealEngineRepo_Blaster_Source_Blaster_Character_BlasterCharacter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
