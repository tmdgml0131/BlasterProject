// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Blaster/Pickups/SpeedPickup.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSpeedPickup() {}
// Cross Module References
	BLASTER_API UClass* Z_Construct_UClass_APickup();
	BLASTER_API UClass* Z_Construct_UClass_ASpeedPickup();
	BLASTER_API UClass* Z_Construct_UClass_ASpeedPickup_NoRegister();
	UPackage* Z_Construct_UPackage__Script_Blaster();
// End Cross Module References
	void ASpeedPickup::StaticRegisterNativesASpeedPickup()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ASpeedPickup);
	UClass* Z_Construct_UClass_ASpeedPickup_NoRegister()
	{
		return ASpeedPickup::StaticClass();
	}
	struct Z_Construct_UClass_ASpeedPickup_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BaseSpeedBuff_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_BaseSpeedBuff;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SpeedBuffTime_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_SpeedBuffTime;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ASpeedPickup_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APickup,
		(UObject* (*)())Z_Construct_UPackage__Script_Blaster,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASpeedPickup_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "Pickups/SpeedPickup.h" },
		{ "ModuleRelativePath", "Pickups/SpeedPickup.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASpeedPickup_Statics::NewProp_BaseSpeedBuff_MetaData[] = {
		{ "Category", "SpeedPickup" },
		{ "ModuleRelativePath", "Pickups/SpeedPickup.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ASpeedPickup_Statics::NewProp_BaseSpeedBuff = { "BaseSpeedBuff", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ASpeedPickup, BaseSpeedBuff), METADATA_PARAMS(Z_Construct_UClass_ASpeedPickup_Statics::NewProp_BaseSpeedBuff_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASpeedPickup_Statics::NewProp_BaseSpeedBuff_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASpeedPickup_Statics::NewProp_SpeedBuffTime_MetaData[] = {
		{ "Category", "SpeedPickup" },
		{ "ModuleRelativePath", "Pickups/SpeedPickup.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ASpeedPickup_Statics::NewProp_SpeedBuffTime = { "SpeedBuffTime", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ASpeedPickup, SpeedBuffTime), METADATA_PARAMS(Z_Construct_UClass_ASpeedPickup_Statics::NewProp_SpeedBuffTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASpeedPickup_Statics::NewProp_SpeedBuffTime_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ASpeedPickup_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASpeedPickup_Statics::NewProp_BaseSpeedBuff,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASpeedPickup_Statics::NewProp_SpeedBuffTime,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ASpeedPickup_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASpeedPickup>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ASpeedPickup_Statics::ClassParams = {
		&ASpeedPickup::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ASpeedPickup_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ASpeedPickup_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ASpeedPickup_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ASpeedPickup_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ASpeedPickup()
	{
		if (!Z_Registration_Info_UClass_ASpeedPickup.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ASpeedPickup.OuterSingleton, Z_Construct_UClass_ASpeedPickup_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ASpeedPickup.OuterSingleton;
	}
	template<> BLASTER_API UClass* StaticClass<ASpeedPickup>()
	{
		return ASpeedPickup::StaticClass();
	}
	ASpeedPickup::ASpeedPickup() {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ASpeedPickup);
	ASpeedPickup::~ASpeedPickup() {}
	struct Z_CompiledInDeferFile_FID_git_UnrealEngineRepo_Blaster_Source_Blaster_Pickups_SpeedPickup_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_git_UnrealEngineRepo_Blaster_Source_Blaster_Pickups_SpeedPickup_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ASpeedPickup, ASpeedPickup::StaticClass, TEXT("ASpeedPickup"), &Z_Registration_Info_UClass_ASpeedPickup, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ASpeedPickup), 1632413304U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_git_UnrealEngineRepo_Blaster_Source_Blaster_Pickups_SpeedPickup_h_3058051228(TEXT("/Script/Blaster"),
		Z_CompiledInDeferFile_FID_git_UnrealEngineRepo_Blaster_Source_Blaster_Pickups_SpeedPickup_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_git_UnrealEngineRepo_Blaster_Source_Blaster_Pickups_SpeedPickup_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
