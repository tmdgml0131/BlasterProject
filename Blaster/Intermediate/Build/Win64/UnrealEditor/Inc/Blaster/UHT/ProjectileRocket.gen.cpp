// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Blaster/Weapon/ProjectileRocket.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeProjectileRocket() {}
// Cross Module References
	BLASTER_API UClass* Z_Construct_UClass_AProjectile();
	BLASTER_API UClass* Z_Construct_UClass_AProjectileRocket();
	BLASTER_API UClass* Z_Construct_UClass_AProjectileRocket_NoRegister();
	BLASTER_API UClass* Z_Construct_UClass_URocketMovementComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UAudioComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USoundAttenuation_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USoundCue_NoRegister();
	UPackage* Z_Construct_UPackage__Script_Blaster();
// End Cross Module References
	void AProjectileRocket::StaticRegisterNativesAProjectileRocket()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AProjectileRocket);
	UClass* Z_Construct_UClass_AProjectileRocket_NoRegister()
	{
		return AProjectileRocket::StaticClass();
	}
	struct Z_Construct_UClass_AProjectileRocket_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ProjectileLoop_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ProjectileLoop;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ProjectileLoopComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ProjectileLoopComponent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LoopingSoundAttenuation_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_LoopingSoundAttenuation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RocketMovementComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_RocketMovementComponent;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AProjectileRocket_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AProjectile,
		(UObject* (*)())Z_Construct_UPackage__Script_Blaster,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AProjectileRocket_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "Weapon/ProjectileRocket.h" },
		{ "ModuleRelativePath", "Weapon/ProjectileRocket.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AProjectileRocket_Statics::NewProp_ProjectileLoop_MetaData[] = {
		{ "Category", "ProjectileRocket" },
		{ "ModuleRelativePath", "Weapon/ProjectileRocket.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AProjectileRocket_Statics::NewProp_ProjectileLoop = { "ProjectileLoop", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AProjectileRocket, ProjectileLoop), Z_Construct_UClass_USoundCue_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AProjectileRocket_Statics::NewProp_ProjectileLoop_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AProjectileRocket_Statics::NewProp_ProjectileLoop_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AProjectileRocket_Statics::NewProp_ProjectileLoopComponent_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Weapon/ProjectileRocket.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AProjectileRocket_Statics::NewProp_ProjectileLoopComponent = { "ProjectileLoopComponent", nullptr, (EPropertyFlags)0x0020080000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AProjectileRocket, ProjectileLoopComponent), Z_Construct_UClass_UAudioComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AProjectileRocket_Statics::NewProp_ProjectileLoopComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AProjectileRocket_Statics::NewProp_ProjectileLoopComponent_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AProjectileRocket_Statics::NewProp_LoopingSoundAttenuation_MetaData[] = {
		{ "Category", "ProjectileRocket" },
		{ "ModuleRelativePath", "Weapon/ProjectileRocket.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AProjectileRocket_Statics::NewProp_LoopingSoundAttenuation = { "LoopingSoundAttenuation", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AProjectileRocket, LoopingSoundAttenuation), Z_Construct_UClass_USoundAttenuation_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AProjectileRocket_Statics::NewProp_LoopingSoundAttenuation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AProjectileRocket_Statics::NewProp_LoopingSoundAttenuation_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AProjectileRocket_Statics::NewProp_RocketMovementComponent_MetaData[] = {
		{ "Category", "ProjectileRocket" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Weapon/ProjectileRocket.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AProjectileRocket_Statics::NewProp_RocketMovementComponent = { "RocketMovementComponent", nullptr, (EPropertyFlags)0x00200800000a0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AProjectileRocket, RocketMovementComponent), Z_Construct_UClass_URocketMovementComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AProjectileRocket_Statics::NewProp_RocketMovementComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AProjectileRocket_Statics::NewProp_RocketMovementComponent_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AProjectileRocket_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AProjectileRocket_Statics::NewProp_ProjectileLoop,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AProjectileRocket_Statics::NewProp_ProjectileLoopComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AProjectileRocket_Statics::NewProp_LoopingSoundAttenuation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AProjectileRocket_Statics::NewProp_RocketMovementComponent,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AProjectileRocket_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AProjectileRocket>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AProjectileRocket_Statics::ClassParams = {
		&AProjectileRocket::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AProjectileRocket_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AProjectileRocket_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AProjectileRocket_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AProjectileRocket_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AProjectileRocket()
	{
		if (!Z_Registration_Info_UClass_AProjectileRocket.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AProjectileRocket.OuterSingleton, Z_Construct_UClass_AProjectileRocket_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AProjectileRocket.OuterSingleton;
	}
	template<> BLASTER_API UClass* StaticClass<AProjectileRocket>()
	{
		return AProjectileRocket::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AProjectileRocket);
	AProjectileRocket::~AProjectileRocket() {}
	struct Z_CompiledInDeferFile_FID_git_UnrealEngineRepo_Blaster_Source_Blaster_Weapon_ProjectileRocket_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_git_UnrealEngineRepo_Blaster_Source_Blaster_Weapon_ProjectileRocket_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AProjectileRocket, AProjectileRocket::StaticClass, TEXT("AProjectileRocket"), &Z_Registration_Info_UClass_AProjectileRocket, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AProjectileRocket), 3738118040U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_git_UnrealEngineRepo_Blaster_Source_Blaster_Weapon_ProjectileRocket_h_2007860123(TEXT("/Script/Blaster"),
		Z_CompiledInDeferFile_FID_git_UnrealEngineRepo_Blaster_Source_Blaster_Weapon_ProjectileRocket_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_git_UnrealEngineRepo_Blaster_Source_Blaster_Weapon_ProjectileRocket_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
