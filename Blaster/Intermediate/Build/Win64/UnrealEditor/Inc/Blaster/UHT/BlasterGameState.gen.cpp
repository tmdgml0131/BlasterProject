// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Blaster/GameState/BlasterGameState.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBlasterGameState() {}
// Cross Module References
	BLASTER_API UClass* Z_Construct_UClass_ABlasterGameState();
	BLASTER_API UClass* Z_Construct_UClass_ABlasterGameState_NoRegister();
	BLASTER_API UClass* Z_Construct_UClass_ABlasterPlayerState_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AGameState();
	UPackage* Z_Construct_UPackage__Script_Blaster();
// End Cross Module References
	void ABlasterGameState::StaticRegisterNativesABlasterGameState()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ABlasterGameState);
	UClass* Z_Construct_UClass_ABlasterGameState_NoRegister()
	{
		return ABlasterGameState::StaticClass();
	}
	struct Z_Construct_UClass_ABlasterGameState_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_TopScoringPlayers_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TopScoringPlayers_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_TopScoringPlayers;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ABlasterGameState_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameState,
		(UObject* (*)())Z_Construct_UPackage__Script_Blaster,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABlasterGameState_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "GameState/BlasterGameState.h" },
		{ "ModuleRelativePath", "GameState/BlasterGameState.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABlasterGameState_Statics::NewProp_TopScoringPlayers_Inner = { "TopScoringPlayers", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_ABlasterPlayerState_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABlasterGameState_Statics::NewProp_TopScoringPlayers_MetaData[] = {
		{ "ModuleRelativePath", "GameState/BlasterGameState.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ABlasterGameState_Statics::NewProp_TopScoringPlayers = { "TopScoringPlayers", nullptr, (EPropertyFlags)0x0010000000000020, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ABlasterGameState, TopScoringPlayers), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ABlasterGameState_Statics::NewProp_TopScoringPlayers_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABlasterGameState_Statics::NewProp_TopScoringPlayers_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ABlasterGameState_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABlasterGameState_Statics::NewProp_TopScoringPlayers_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABlasterGameState_Statics::NewProp_TopScoringPlayers,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ABlasterGameState_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABlasterGameState>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ABlasterGameState_Statics::ClassParams = {
		&ABlasterGameState::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ABlasterGameState_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ABlasterGameState_Statics::PropPointers),
		0,
		0x009002A4u,
		METADATA_PARAMS(Z_Construct_UClass_ABlasterGameState_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ABlasterGameState_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ABlasterGameState()
	{
		if (!Z_Registration_Info_UClass_ABlasterGameState.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ABlasterGameState.OuterSingleton, Z_Construct_UClass_ABlasterGameState_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ABlasterGameState.OuterSingleton;
	}
	template<> BLASTER_API UClass* StaticClass<ABlasterGameState>()
	{
		return ABlasterGameState::StaticClass();
	}

	void ABlasterGameState::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
	{
		static const FName Name_TopScoringPlayers(TEXT("TopScoringPlayers"));

		const bool bIsValid = true
			&& Name_TopScoringPlayers == ClassReps[(int32)ENetFields_Private::TopScoringPlayers].Property->GetFName();

		checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in ABlasterGameState"));
	}
	ABlasterGameState::ABlasterGameState(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ABlasterGameState);
	ABlasterGameState::~ABlasterGameState() {}
	struct Z_CompiledInDeferFile_FID_git_UnrealEngineRepo_Blaster_Source_Blaster_GameState_BlasterGameState_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_git_UnrealEngineRepo_Blaster_Source_Blaster_GameState_BlasterGameState_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ABlasterGameState, ABlasterGameState::StaticClass, TEXT("ABlasterGameState"), &Z_Registration_Info_UClass_ABlasterGameState, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ABlasterGameState), 2447793439U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_git_UnrealEngineRepo_Blaster_Source_Blaster_GameState_BlasterGameState_h_50513444(TEXT("/Script/Blaster"),
		Z_CompiledInDeferFile_FID_git_UnrealEngineRepo_Blaster_Source_Blaster_GameState_BlasterGameState_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_git_UnrealEngineRepo_Blaster_Source_Blaster_GameState_BlasterGameState_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
