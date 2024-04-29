// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "PlayerController/BlasterPlayerController.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef BLASTER_BlasterPlayerController_generated_h
#error "BlasterPlayerController.generated.h already included, missing '#pragma once' in BlasterPlayerController.h"
#endif
#define BLASTER_BlasterPlayerController_generated_h

#define FID_git_UnrealEngineRepo_Blaster_Source_Blaster_PlayerController_BlasterPlayerController_h_15_SPARSE_DATA
#define FID_git_UnrealEngineRepo_Blaster_Source_Blaster_PlayerController_BlasterPlayerController_h_15_RPC_WRAPPERS \
	virtual void ClientJoinMidGame_Implementation(FName StateOfMatch, float WarmUp, float Match, float Cooldown, float StartingTime); \
	virtual void ServerCheckMatchState_Implementation(); \
	virtual void ClientReportServerTime_Implementation(float TimeOfClientRequest, float TimeServerReceivedClientRequest); \
	virtual void ServerRequestServerTime_Implementation(float TimeOfClientRequest); \
 \
	DECLARE_FUNCTION(execOnRep_MatchState); \
	DECLARE_FUNCTION(execClientJoinMidGame); \
	DECLARE_FUNCTION(execServerCheckMatchState); \
	DECLARE_FUNCTION(execClientReportServerTime); \
	DECLARE_FUNCTION(execServerRequestServerTime);


#define FID_git_UnrealEngineRepo_Blaster_Source_Blaster_PlayerController_BlasterPlayerController_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void ClientJoinMidGame_Implementation(FName StateOfMatch, float WarmUp, float Match, float Cooldown, float StartingTime); \
	virtual void ServerCheckMatchState_Implementation(); \
	virtual void ClientReportServerTime_Implementation(float TimeOfClientRequest, float TimeServerReceivedClientRequest); \
	virtual void ServerRequestServerTime_Implementation(float TimeOfClientRequest); \
 \
	DECLARE_FUNCTION(execOnRep_MatchState); \
	DECLARE_FUNCTION(execClientJoinMidGame); \
	DECLARE_FUNCTION(execServerCheckMatchState); \
	DECLARE_FUNCTION(execClientReportServerTime); \
	DECLARE_FUNCTION(execServerRequestServerTime);


#define FID_git_UnrealEngineRepo_Blaster_Source_Blaster_PlayerController_BlasterPlayerController_h_15_ACCESSORS
#define FID_git_UnrealEngineRepo_Blaster_Source_Blaster_PlayerController_BlasterPlayerController_h_15_CALLBACK_WRAPPERS
#define FID_git_UnrealEngineRepo_Blaster_Source_Blaster_PlayerController_BlasterPlayerController_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesABlasterPlayerController(); \
	friend struct Z_Construct_UClass_ABlasterPlayerController_Statics; \
public: \
	DECLARE_CLASS(ABlasterPlayerController, APlayerController, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Blaster"), NO_API) \
	DECLARE_SERIALIZER(ABlasterPlayerController) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		MatchState=NETFIELD_REP_START, \
		NETFIELD_REP_END=MatchState	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define FID_git_UnrealEngineRepo_Blaster_Source_Blaster_PlayerController_BlasterPlayerController_h_15_INCLASS \
private: \
	static void StaticRegisterNativesABlasterPlayerController(); \
	friend struct Z_Construct_UClass_ABlasterPlayerController_Statics; \
public: \
	DECLARE_CLASS(ABlasterPlayerController, APlayerController, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Blaster"), NO_API) \
	DECLARE_SERIALIZER(ABlasterPlayerController) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		MatchState=NETFIELD_REP_START, \
		NETFIELD_REP_END=MatchState	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define FID_git_UnrealEngineRepo_Blaster_Source_Blaster_PlayerController_BlasterPlayerController_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ABlasterPlayerController(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ABlasterPlayerController) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABlasterPlayerController); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABlasterPlayerController); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ABlasterPlayerController(ABlasterPlayerController&&); \
	NO_API ABlasterPlayerController(const ABlasterPlayerController&); \
public: \
	NO_API virtual ~ABlasterPlayerController();


#define FID_git_UnrealEngineRepo_Blaster_Source_Blaster_PlayerController_BlasterPlayerController_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ABlasterPlayerController(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ABlasterPlayerController(ABlasterPlayerController&&); \
	NO_API ABlasterPlayerController(const ABlasterPlayerController&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABlasterPlayerController); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABlasterPlayerController); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ABlasterPlayerController) \
	NO_API virtual ~ABlasterPlayerController();


#define FID_git_UnrealEngineRepo_Blaster_Source_Blaster_PlayerController_BlasterPlayerController_h_12_PROLOG
#define FID_git_UnrealEngineRepo_Blaster_Source_Blaster_PlayerController_BlasterPlayerController_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_git_UnrealEngineRepo_Blaster_Source_Blaster_PlayerController_BlasterPlayerController_h_15_SPARSE_DATA \
	FID_git_UnrealEngineRepo_Blaster_Source_Blaster_PlayerController_BlasterPlayerController_h_15_RPC_WRAPPERS \
	FID_git_UnrealEngineRepo_Blaster_Source_Blaster_PlayerController_BlasterPlayerController_h_15_ACCESSORS \
	FID_git_UnrealEngineRepo_Blaster_Source_Blaster_PlayerController_BlasterPlayerController_h_15_CALLBACK_WRAPPERS \
	FID_git_UnrealEngineRepo_Blaster_Source_Blaster_PlayerController_BlasterPlayerController_h_15_INCLASS \
	FID_git_UnrealEngineRepo_Blaster_Source_Blaster_PlayerController_BlasterPlayerController_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_git_UnrealEngineRepo_Blaster_Source_Blaster_PlayerController_BlasterPlayerController_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_git_UnrealEngineRepo_Blaster_Source_Blaster_PlayerController_BlasterPlayerController_h_15_SPARSE_DATA \
	FID_git_UnrealEngineRepo_Blaster_Source_Blaster_PlayerController_BlasterPlayerController_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_git_UnrealEngineRepo_Blaster_Source_Blaster_PlayerController_BlasterPlayerController_h_15_ACCESSORS \
	FID_git_UnrealEngineRepo_Blaster_Source_Blaster_PlayerController_BlasterPlayerController_h_15_CALLBACK_WRAPPERS \
	FID_git_UnrealEngineRepo_Blaster_Source_Blaster_PlayerController_BlasterPlayerController_h_15_INCLASS_NO_PURE_DECLS \
	FID_git_UnrealEngineRepo_Blaster_Source_Blaster_PlayerController_BlasterPlayerController_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> BLASTER_API UClass* StaticClass<class ABlasterPlayerController>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_git_UnrealEngineRepo_Blaster_Source_Blaster_PlayerController_BlasterPlayerController_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
