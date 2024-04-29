// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "BlasterTypes/TurningInPlace.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef BLASTER_TurningInPlace_generated_h
#error "TurningInPlace.generated.h already included, missing '#pragma once' in TurningInPlace.h"
#endif
#define BLASTER_TurningInPlace_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_git_UnrealEngineRepo_Blaster_Source_Blaster_BlasterTypes_TurningInPlace_h


#define FOREACH_ENUM_ETURNINGINPLACE(op) \
	op(ETurningInPlace::ETIP_Left) \
	op(ETurningInPlace::ETIP_Right) \
	op(ETurningInPlace::ETIP_NotTurning) 

enum class ETurningInPlace : uint8;
template<> struct TIsUEnumClass<ETurningInPlace> { enum { Value = true }; };
template<> BLASTER_API UEnum* StaticEnum<ETurningInPlace>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
