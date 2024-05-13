// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MultiplayerSessionSubsystem.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef MULTIPLAYERSESSIONS_MultiplayerSessionSubsystem_generated_h
#error "MultiplayerSessionSubsystem.generated.h already included, missing '#pragma once' in MultiplayerSessionSubsystem.h"
#endif
#define MULTIPLAYERSESSIONS_MultiplayerSessionSubsystem_generated_h

#define FID_git_BlasterProject_Blaster_Plugins_MultiplayerSessions_Source_MultiplayerSessions_Public_MultiplayerSessionSubsystem_h_13_DELEGATE \
MULTIPLAYERSESSIONS_API void FMultiplayerOnCreateSessionComplete_DelegateWrapper(const FMulticastScriptDelegate& MultiplayerOnCreateSessionComplete, bool bWasSuccessful);


#define FID_git_BlasterProject_Blaster_Plugins_MultiplayerSessions_Source_MultiplayerSessions_Public_MultiplayerSessionSubsystem_h_16_DELEGATE \
MULTIPLAYERSESSIONS_API void FMultiplayerOnStartSessionComplete_DelegateWrapper(const FMulticastScriptDelegate& MultiplayerOnStartSessionComplete, bool bWasSuccessful);


#define FID_git_BlasterProject_Blaster_Plugins_MultiplayerSessions_Source_MultiplayerSessions_Public_MultiplayerSessionSubsystem_h_17_DELEGATE \
MULTIPLAYERSESSIONS_API void FMultiplayerOnDestroySessionComplete_DelegateWrapper(const FMulticastScriptDelegate& MultiplayerOnDestroySessionComplete, bool bWasSuccessful);


#define FID_git_BlasterProject_Blaster_Plugins_MultiplayerSessions_Source_MultiplayerSessions_Public_MultiplayerSessionSubsystem_h_25_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMultiplayerSessionSubsystem(); \
	friend struct Z_Construct_UClass_UMultiplayerSessionSubsystem_Statics; \
public: \
	DECLARE_CLASS(UMultiplayerSessionSubsystem, UGameInstanceSubsystem, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MultiplayerSessions"), NO_API) \
	DECLARE_SERIALIZER(UMultiplayerSessionSubsystem)


#define FID_git_BlasterProject_Blaster_Plugins_MultiplayerSessions_Source_MultiplayerSessions_Public_MultiplayerSessionSubsystem_h_25_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UMultiplayerSessionSubsystem(UMultiplayerSessionSubsystem&&); \
	UMultiplayerSessionSubsystem(const UMultiplayerSessionSubsystem&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMultiplayerSessionSubsystem); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMultiplayerSessionSubsystem); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UMultiplayerSessionSubsystem) \
	NO_API virtual ~UMultiplayerSessionSubsystem();


#define FID_git_BlasterProject_Blaster_Plugins_MultiplayerSessions_Source_MultiplayerSessions_Public_MultiplayerSessionSubsystem_h_22_PROLOG
#define FID_git_BlasterProject_Blaster_Plugins_MultiplayerSessions_Source_MultiplayerSessions_Public_MultiplayerSessionSubsystem_h_25_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_git_BlasterProject_Blaster_Plugins_MultiplayerSessions_Source_MultiplayerSessions_Public_MultiplayerSessionSubsystem_h_25_INCLASS_NO_PURE_DECLS \
	FID_git_BlasterProject_Blaster_Plugins_MultiplayerSessions_Source_MultiplayerSessions_Public_MultiplayerSessionSubsystem_h_25_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MULTIPLAYERSESSIONS_API UClass* StaticClass<class UMultiplayerSessionSubsystem>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_git_BlasterProject_Blaster_Plugins_MultiplayerSessions_Source_MultiplayerSessions_Public_MultiplayerSessionSubsystem_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
