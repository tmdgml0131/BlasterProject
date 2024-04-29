// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Blaster/Weapon/RocketMovementComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRocketMovementComponent() {}
// Cross Module References
	BLASTER_API UClass* Z_Construct_UClass_URocketMovementComponent();
	BLASTER_API UClass* Z_Construct_UClass_URocketMovementComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UProjectileMovementComponent();
	UPackage* Z_Construct_UPackage__Script_Blaster();
// End Cross Module References
	void URocketMovementComponent::StaticRegisterNativesURocketMovementComponent()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(URocketMovementComponent);
	UClass* Z_Construct_UClass_URocketMovementComponent_NoRegister()
	{
		return URocketMovementComponent::StaticClass();
	}
	struct Z_Construct_UClass_URocketMovementComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_URocketMovementComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UProjectileMovementComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_Blaster,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URocketMovementComponent_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "Weapon/RocketMovementComponent.h" },
		{ "ModuleRelativePath", "Weapon/RocketMovementComponent.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_URocketMovementComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<URocketMovementComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_URocketMovementComponent_Statics::ClassParams = {
		&URocketMovementComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_URocketMovementComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_URocketMovementComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_URocketMovementComponent()
	{
		if (!Z_Registration_Info_UClass_URocketMovementComponent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_URocketMovementComponent.OuterSingleton, Z_Construct_UClass_URocketMovementComponent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_URocketMovementComponent.OuterSingleton;
	}
	template<> BLASTER_API UClass* StaticClass<URocketMovementComponent>()
	{
		return URocketMovementComponent::StaticClass();
	}
	URocketMovementComponent::URocketMovementComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(URocketMovementComponent);
	URocketMovementComponent::~URocketMovementComponent() {}
	struct Z_CompiledInDeferFile_FID_git_UnrealEngineRepo_Blaster_Source_Blaster_Weapon_RocketMovementComponent_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_git_UnrealEngineRepo_Blaster_Source_Blaster_Weapon_RocketMovementComponent_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_URocketMovementComponent, URocketMovementComponent::StaticClass, TEXT("URocketMovementComponent"), &Z_Registration_Info_UClass_URocketMovementComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(URocketMovementComponent), 553304749U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_git_UnrealEngineRepo_Blaster_Source_Blaster_Weapon_RocketMovementComponent_h_72925307(TEXT("/Script/Blaster"),
		Z_CompiledInDeferFile_FID_git_UnrealEngineRepo_Blaster_Source_Blaster_Weapon_RocketMovementComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_git_UnrealEngineRepo_Blaster_Source_Blaster_Weapon_RocketMovementComponent_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
