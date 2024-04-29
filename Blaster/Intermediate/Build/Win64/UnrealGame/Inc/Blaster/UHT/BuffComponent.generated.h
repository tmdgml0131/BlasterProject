// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "BlasterComponents/BuffComponent.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef BLASTER_BuffComponent_generated_h
#error "BuffComponent.generated.h already included, missing '#pragma once' in BuffComponent.h"
#endif
#define BLASTER_BuffComponent_generated_h

#define FID_git_UnrealEngineRepo_Blaster_Source_Blaster_BlasterComponents_BuffComponent_h_13_SPARSE_DATA
#define FID_git_UnrealEngineRepo_Blaster_Source_Blaster_BlasterComponents_BuffComponent_h_13_RPC_WRAPPERS \
	virtual void MulticastSpeedBuff_Implementation(float WalkSpeed, float RunSpeed); \
 \
	DECLARE_FUNCTION(execMulticastSpeedBuff);


#define FID_git_UnrealEngineRepo_Blaster_Source_Blaster_BlasterComponents_BuffComponent_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void MulticastSpeedBuff_Implementation(float WalkSpeed, float RunSpeed); \
 \
	DECLARE_FUNCTION(execMulticastSpeedBuff);


#define FID_git_UnrealEngineRepo_Blaster_Source_Blaster_BlasterComponents_BuffComponent_h_13_ACCESSORS
#define FID_git_UnrealEngineRepo_Blaster_Source_Blaster_BlasterComponents_BuffComponent_h_13_CALLBACK_WRAPPERS
#define FID_git_UnrealEngineRepo_Blaster_Source_Blaster_BlasterComponents_BuffComponent_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUBuffComponent(); \
	friend struct Z_Construct_UClass_UBuffComponent_Statics; \
public: \
	DECLARE_CLASS(UBuffComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Blaster"), NO_API) \
	DECLARE_SERIALIZER(UBuffComponent)


#define FID_git_UnrealEngineRepo_Blaster_Source_Blaster_BlasterComponents_BuffComponent_h_13_INCLASS \
private: \
	static void StaticRegisterNativesUBuffComponent(); \
	friend struct Z_Construct_UClass_UBuffComponent_Statics; \
public: \
	DECLARE_CLASS(UBuffComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Blaster"), NO_API) \
	DECLARE_SERIALIZER(UBuffComponent)


#define FID_git_UnrealEngineRepo_Blaster_Source_Blaster_BlasterComponents_BuffComponent_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UBuffComponent(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UBuffComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UBuffComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UBuffComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UBuffComponent(UBuffComponent&&); \
	NO_API UBuffComponent(const UBuffComponent&); \
public: \
	NO_API virtual ~UBuffComponent();


#define FID_git_UnrealEngineRepo_Blaster_Source_Blaster_BlasterComponents_BuffComponent_h_13_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UBuffComponent(UBuffComponent&&); \
	NO_API UBuffComponent(const UBuffComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UBuffComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UBuffComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UBuffComponent) \
	NO_API virtual ~UBuffComponent();


#define FID_git_UnrealEngineRepo_Blaster_Source_Blaster_BlasterComponents_BuffComponent_h_10_PROLOG
#define FID_git_UnrealEngineRepo_Blaster_Source_Blaster_BlasterComponents_BuffComponent_h_13_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_git_UnrealEngineRepo_Blaster_Source_Blaster_BlasterComponents_BuffComponent_h_13_SPARSE_DATA \
	FID_git_UnrealEngineRepo_Blaster_Source_Blaster_BlasterComponents_BuffComponent_h_13_RPC_WRAPPERS \
	FID_git_UnrealEngineRepo_Blaster_Source_Blaster_BlasterComponents_BuffComponent_h_13_ACCESSORS \
	FID_git_UnrealEngineRepo_Blaster_Source_Blaster_BlasterComponents_BuffComponent_h_13_CALLBACK_WRAPPERS \
	FID_git_UnrealEngineRepo_Blaster_Source_Blaster_BlasterComponents_BuffComponent_h_13_INCLASS \
	FID_git_UnrealEngineRepo_Blaster_Source_Blaster_BlasterComponents_BuffComponent_h_13_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_git_UnrealEngineRepo_Blaster_Source_Blaster_BlasterComponents_BuffComponent_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_git_UnrealEngineRepo_Blaster_Source_Blaster_BlasterComponents_BuffComponent_h_13_SPARSE_DATA \
	FID_git_UnrealEngineRepo_Blaster_Source_Blaster_BlasterComponents_BuffComponent_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_git_UnrealEngineRepo_Blaster_Source_Blaster_BlasterComponents_BuffComponent_h_13_ACCESSORS \
	FID_git_UnrealEngineRepo_Blaster_Source_Blaster_BlasterComponents_BuffComponent_h_13_CALLBACK_WRAPPERS \
	FID_git_UnrealEngineRepo_Blaster_Source_Blaster_BlasterComponents_BuffComponent_h_13_INCLASS_NO_PURE_DECLS \
	FID_git_UnrealEngineRepo_Blaster_Source_Blaster_BlasterComponents_BuffComponent_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> BLASTER_API UClass* StaticClass<class UBuffComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_git_UnrealEngineRepo_Blaster_Source_Blaster_BlasterComponents_BuffComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
