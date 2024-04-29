// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "PlayerState/BlasterPlayerState.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef BLASTER_BlasterPlayerState_generated_h
#error "BlasterPlayerState.generated.h already included, missing '#pragma once' in BlasterPlayerState.h"
#endif
#define BLASTER_BlasterPlayerState_generated_h

#define FID_git_UnrealEngineRepo_Blaster_Source_Blaster_PlayerState_BlasterPlayerState_h_15_SPARSE_DATA
#define FID_git_UnrealEngineRepo_Blaster_Source_Blaster_PlayerState_BlasterPlayerState_h_15_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnRep_Defeats);


#define FID_git_UnrealEngineRepo_Blaster_Source_Blaster_PlayerState_BlasterPlayerState_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnRep_Defeats);


#define FID_git_UnrealEngineRepo_Blaster_Source_Blaster_PlayerState_BlasterPlayerState_h_15_ACCESSORS
#define FID_git_UnrealEngineRepo_Blaster_Source_Blaster_PlayerState_BlasterPlayerState_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesABlasterPlayerState(); \
	friend struct Z_Construct_UClass_ABlasterPlayerState_Statics; \
public: \
	DECLARE_CLASS(ABlasterPlayerState, APlayerState, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Blaster"), NO_API) \
	DECLARE_SERIALIZER(ABlasterPlayerState) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		Defeats=NETFIELD_REP_START, \
		NETFIELD_REP_END=Defeats	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define FID_git_UnrealEngineRepo_Blaster_Source_Blaster_PlayerState_BlasterPlayerState_h_15_INCLASS \
private: \
	static void StaticRegisterNativesABlasterPlayerState(); \
	friend struct Z_Construct_UClass_ABlasterPlayerState_Statics; \
public: \
	DECLARE_CLASS(ABlasterPlayerState, APlayerState, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Blaster"), NO_API) \
	DECLARE_SERIALIZER(ABlasterPlayerState) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		Defeats=NETFIELD_REP_START, \
		NETFIELD_REP_END=Defeats	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define FID_git_UnrealEngineRepo_Blaster_Source_Blaster_PlayerState_BlasterPlayerState_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ABlasterPlayerState(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ABlasterPlayerState) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABlasterPlayerState); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABlasterPlayerState); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ABlasterPlayerState(ABlasterPlayerState&&); \
	NO_API ABlasterPlayerState(const ABlasterPlayerState&); \
public: \
	NO_API virtual ~ABlasterPlayerState();


#define FID_git_UnrealEngineRepo_Blaster_Source_Blaster_PlayerState_BlasterPlayerState_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ABlasterPlayerState(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ABlasterPlayerState(ABlasterPlayerState&&); \
	NO_API ABlasterPlayerState(const ABlasterPlayerState&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABlasterPlayerState); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABlasterPlayerState); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ABlasterPlayerState) \
	NO_API virtual ~ABlasterPlayerState();


#define FID_git_UnrealEngineRepo_Blaster_Source_Blaster_PlayerState_BlasterPlayerState_h_12_PROLOG
#define FID_git_UnrealEngineRepo_Blaster_Source_Blaster_PlayerState_BlasterPlayerState_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_git_UnrealEngineRepo_Blaster_Source_Blaster_PlayerState_BlasterPlayerState_h_15_SPARSE_DATA \
	FID_git_UnrealEngineRepo_Blaster_Source_Blaster_PlayerState_BlasterPlayerState_h_15_RPC_WRAPPERS \
	FID_git_UnrealEngineRepo_Blaster_Source_Blaster_PlayerState_BlasterPlayerState_h_15_ACCESSORS \
	FID_git_UnrealEngineRepo_Blaster_Source_Blaster_PlayerState_BlasterPlayerState_h_15_INCLASS \
	FID_git_UnrealEngineRepo_Blaster_Source_Blaster_PlayerState_BlasterPlayerState_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_git_UnrealEngineRepo_Blaster_Source_Blaster_PlayerState_BlasterPlayerState_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_git_UnrealEngineRepo_Blaster_Source_Blaster_PlayerState_BlasterPlayerState_h_15_SPARSE_DATA \
	FID_git_UnrealEngineRepo_Blaster_Source_Blaster_PlayerState_BlasterPlayerState_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_git_UnrealEngineRepo_Blaster_Source_Blaster_PlayerState_BlasterPlayerState_h_15_ACCESSORS \
	FID_git_UnrealEngineRepo_Blaster_Source_Blaster_PlayerState_BlasterPlayerState_h_15_INCLASS_NO_PURE_DECLS \
	FID_git_UnrealEngineRepo_Blaster_Source_Blaster_PlayerState_BlasterPlayerState_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> BLASTER_API UClass* StaticClass<class ABlasterPlayerState>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_git_UnrealEngineRepo_Blaster_Source_Blaster_PlayerState_BlasterPlayerState_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
