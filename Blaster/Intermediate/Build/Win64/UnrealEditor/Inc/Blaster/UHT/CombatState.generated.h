// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "BlasterTypes/CombatState.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef BLASTER_CombatState_generated_h
#error "CombatState.generated.h already included, missing '#pragma once' in CombatState.h"
#endif
#define BLASTER_CombatState_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_git_UnrealEngineRepo_Blaster_Source_Blaster_BlasterTypes_CombatState_h


#define FOREACH_ENUM_ECOMBATSTATE(op) \
	op(ECombatState::ECS_Unoccupied) \
	op(ECombatState::ECS_Reloading) \
	op(ECombatState::ECS_ThrowingGrenade) 

enum class ECombatState : uint8;
template<> struct TIsUEnumClass<ECombatState> { enum { Value = true }; };
template<> BLASTER_API UEnum* StaticEnum<ECombatState>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
