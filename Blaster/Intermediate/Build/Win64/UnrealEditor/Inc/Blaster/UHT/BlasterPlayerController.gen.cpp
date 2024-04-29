// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Blaster/PlayerController/BlasterPlayerController.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBlasterPlayerController() {}
// Cross Module References
	BLASTER_API UClass* Z_Construct_UClass_ABlasterGameMode_NoRegister();
	BLASTER_API UClass* Z_Construct_UClass_ABlasterHUD_NoRegister();
	BLASTER_API UClass* Z_Construct_UClass_ABlasterPlayerController();
	BLASTER_API UClass* Z_Construct_UClass_ABlasterPlayerController_NoRegister();
	BLASTER_API UClass* Z_Construct_UClass_UCharacterOverlay_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_APlayerController();
	UPackage* Z_Construct_UPackage__Script_Blaster();
// End Cross Module References
	DEFINE_FUNCTION(ABlasterPlayerController::execOnRep_MatchState)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_MatchState();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ABlasterPlayerController::execClientJoinMidGame)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_StateOfMatch);
		P_GET_PROPERTY(FFloatProperty,Z_Param_WarmUp);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Match);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Cooldown);
		P_GET_PROPERTY(FFloatProperty,Z_Param_StartingTime);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ClientJoinMidGame_Implementation(Z_Param_StateOfMatch,Z_Param_WarmUp,Z_Param_Match,Z_Param_Cooldown,Z_Param_StartingTime);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ABlasterPlayerController::execServerCheckMatchState)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ServerCheckMatchState_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ABlasterPlayerController::execClientReportServerTime)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_TimeOfClientRequest);
		P_GET_PROPERTY(FFloatProperty,Z_Param_TimeServerReceivedClientRequest);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ClientReportServerTime_Implementation(Z_Param_TimeOfClientRequest,Z_Param_TimeServerReceivedClientRequest);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ABlasterPlayerController::execServerRequestServerTime)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_TimeOfClientRequest);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ServerRequestServerTime_Implementation(Z_Param_TimeOfClientRequest);
		P_NATIVE_END;
	}
	struct BlasterPlayerController_eventClientJoinMidGame_Parms
	{
		FName StateOfMatch;
		float WarmUp;
		float Match;
		float Cooldown;
		float StartingTime;
	};
	struct BlasterPlayerController_eventClientReportServerTime_Parms
	{
		float TimeOfClientRequest;
		float TimeServerReceivedClientRequest;
	};
	struct BlasterPlayerController_eventServerRequestServerTime_Parms
	{
		float TimeOfClientRequest;
	};
	static FName NAME_ABlasterPlayerController_ClientJoinMidGame = FName(TEXT("ClientJoinMidGame"));
	void ABlasterPlayerController::ClientJoinMidGame(FName StateOfMatch, float WarmUp, float Match, float Cooldown, float StartingTime)
	{
		BlasterPlayerController_eventClientJoinMidGame_Parms Parms;
		Parms.StateOfMatch=StateOfMatch;
		Parms.WarmUp=WarmUp;
		Parms.Match=Match;
		Parms.Cooldown=Cooldown;
		Parms.StartingTime=StartingTime;
		ProcessEvent(FindFunctionChecked(NAME_ABlasterPlayerController_ClientJoinMidGame),&Parms);
	}
	static FName NAME_ABlasterPlayerController_ClientReportServerTime = FName(TEXT("ClientReportServerTime"));
	void ABlasterPlayerController::ClientReportServerTime(float TimeOfClientRequest, float TimeServerReceivedClientRequest)
	{
		BlasterPlayerController_eventClientReportServerTime_Parms Parms;
		Parms.TimeOfClientRequest=TimeOfClientRequest;
		Parms.TimeServerReceivedClientRequest=TimeServerReceivedClientRequest;
		ProcessEvent(FindFunctionChecked(NAME_ABlasterPlayerController_ClientReportServerTime),&Parms);
	}
	static FName NAME_ABlasterPlayerController_ServerCheckMatchState = FName(TEXT("ServerCheckMatchState"));
	void ABlasterPlayerController::ServerCheckMatchState()
	{
		ProcessEvent(FindFunctionChecked(NAME_ABlasterPlayerController_ServerCheckMatchState),NULL);
	}
	static FName NAME_ABlasterPlayerController_ServerRequestServerTime = FName(TEXT("ServerRequestServerTime"));
	void ABlasterPlayerController::ServerRequestServerTime(float TimeOfClientRequest)
	{
		BlasterPlayerController_eventServerRequestServerTime_Parms Parms;
		Parms.TimeOfClientRequest=TimeOfClientRequest;
		ProcessEvent(FindFunctionChecked(NAME_ABlasterPlayerController_ServerRequestServerTime),&Parms);
	}
	void ABlasterPlayerController::StaticRegisterNativesABlasterPlayerController()
	{
		UClass* Class = ABlasterPlayerController::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ClientJoinMidGame", &ABlasterPlayerController::execClientJoinMidGame },
			{ "ClientReportServerTime", &ABlasterPlayerController::execClientReportServerTime },
			{ "OnRep_MatchState", &ABlasterPlayerController::execOnRep_MatchState },
			{ "ServerCheckMatchState", &ABlasterPlayerController::execServerCheckMatchState },
			{ "ServerRequestServerTime", &ABlasterPlayerController::execServerRequestServerTime },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ABlasterPlayerController_ClientJoinMidGame_Statics
	{
		static const UECodeGen_Private::FNamePropertyParams NewProp_StateOfMatch;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_WarmUp;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Match;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Cooldown;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_StartingTime;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_ABlasterPlayerController_ClientJoinMidGame_Statics::NewProp_StateOfMatch = { "StateOfMatch", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(BlasterPlayerController_eventClientJoinMidGame_Parms, StateOfMatch), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ABlasterPlayerController_ClientJoinMidGame_Statics::NewProp_WarmUp = { "WarmUp", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(BlasterPlayerController_eventClientJoinMidGame_Parms, WarmUp), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ABlasterPlayerController_ClientJoinMidGame_Statics::NewProp_Match = { "Match", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(BlasterPlayerController_eventClientJoinMidGame_Parms, Match), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ABlasterPlayerController_ClientJoinMidGame_Statics::NewProp_Cooldown = { "Cooldown", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(BlasterPlayerController_eventClientJoinMidGame_Parms, Cooldown), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ABlasterPlayerController_ClientJoinMidGame_Statics::NewProp_StartingTime = { "StartingTime", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(BlasterPlayerController_eventClientJoinMidGame_Parms, StartingTime), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ABlasterPlayerController_ClientJoinMidGame_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABlasterPlayerController_ClientJoinMidGame_Statics::NewProp_StateOfMatch,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABlasterPlayerController_ClientJoinMidGame_Statics::NewProp_WarmUp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABlasterPlayerController_ClientJoinMidGame_Statics::NewProp_Match,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABlasterPlayerController_ClientJoinMidGame_Statics::NewProp_Cooldown,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABlasterPlayerController_ClientJoinMidGame_Statics::NewProp_StartingTime,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABlasterPlayerController_ClientJoinMidGame_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "PlayerController/BlasterPlayerController.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ABlasterPlayerController_ClientJoinMidGame_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABlasterPlayerController, nullptr, "ClientJoinMidGame", nullptr, nullptr, sizeof(BlasterPlayerController_eventClientJoinMidGame_Parms), Z_Construct_UFunction_ABlasterPlayerController_ClientJoinMidGame_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ABlasterPlayerController_ClientJoinMidGame_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x01080CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ABlasterPlayerController_ClientJoinMidGame_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ABlasterPlayerController_ClientJoinMidGame_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ABlasterPlayerController_ClientJoinMidGame()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ABlasterPlayerController_ClientJoinMidGame_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ABlasterPlayerController_ClientReportServerTime_Statics
	{
		static const UECodeGen_Private::FFloatPropertyParams NewProp_TimeOfClientRequest;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_TimeServerReceivedClientRequest;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ABlasterPlayerController_ClientReportServerTime_Statics::NewProp_TimeOfClientRequest = { "TimeOfClientRequest", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(BlasterPlayerController_eventClientReportServerTime_Parms, TimeOfClientRequest), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ABlasterPlayerController_ClientReportServerTime_Statics::NewProp_TimeServerReceivedClientRequest = { "TimeServerReceivedClientRequest", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(BlasterPlayerController_eventClientReportServerTime_Parms, TimeServerReceivedClientRequest), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ABlasterPlayerController_ClientReportServerTime_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABlasterPlayerController_ClientReportServerTime_Statics::NewProp_TimeOfClientRequest,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABlasterPlayerController_ClientReportServerTime_Statics::NewProp_TimeServerReceivedClientRequest,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABlasterPlayerController_ClientReportServerTime_Statics::Function_MetaDataParams[] = {
		{ "Comment", "// \xc5\xac\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xcc\xbe\xef\xbf\xbd\xc6\xae\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xc3\xb0\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\n" },
		{ "ModuleRelativePath", "PlayerController/BlasterPlayerController.h" },
		{ "ToolTip", "\xc5\xac\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xcc\xbe\xef\xbf\xbd\xc6\xae\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xc3\xb0\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ABlasterPlayerController_ClientReportServerTime_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABlasterPlayerController, nullptr, "ClientReportServerTime", nullptr, nullptr, sizeof(BlasterPlayerController_eventClientReportServerTime_Parms), Z_Construct_UFunction_ABlasterPlayerController_ClientReportServerTime_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ABlasterPlayerController_ClientReportServerTime_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x01080CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ABlasterPlayerController_ClientReportServerTime_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ABlasterPlayerController_ClientReportServerTime_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ABlasterPlayerController_ClientReportServerTime()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ABlasterPlayerController_ClientReportServerTime_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ABlasterPlayerController_OnRep_MatchState_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABlasterPlayerController_OnRep_MatchState_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "PlayerController/BlasterPlayerController.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ABlasterPlayerController_OnRep_MatchState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABlasterPlayerController, nullptr, "OnRep_MatchState", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ABlasterPlayerController_OnRep_MatchState_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ABlasterPlayerController_OnRep_MatchState_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ABlasterPlayerController_OnRep_MatchState()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ABlasterPlayerController_OnRep_MatchState_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ABlasterPlayerController_ServerCheckMatchState_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABlasterPlayerController_ServerCheckMatchState_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "PlayerController/BlasterPlayerController.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ABlasterPlayerController_ServerCheckMatchState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABlasterPlayerController, nullptr, "ServerCheckMatchState", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00280CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ABlasterPlayerController_ServerCheckMatchState_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ABlasterPlayerController_ServerCheckMatchState_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ABlasterPlayerController_ServerCheckMatchState()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ABlasterPlayerController_ServerCheckMatchState_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ABlasterPlayerController_ServerRequestServerTime_Statics
	{
		static const UECodeGen_Private::FFloatPropertyParams NewProp_TimeOfClientRequest;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ABlasterPlayerController_ServerRequestServerTime_Statics::NewProp_TimeOfClientRequest = { "TimeOfClientRequest", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(BlasterPlayerController_eventServerRequestServerTime_Parms, TimeOfClientRequest), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ABlasterPlayerController_ServerRequestServerTime_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABlasterPlayerController_ServerRequestServerTime_Statics::NewProp_TimeOfClientRequest,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABlasterPlayerController_ServerRequestServerTime_Statics::Function_MetaDataParams[] = {
		{ "Comment", "// \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xc3\xb0\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xd4\xbc\xef\xbf\xbd\n" },
		{ "ModuleRelativePath", "PlayerController/BlasterPlayerController.h" },
		{ "ToolTip", "\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xc3\xb0\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xd4\xbc\xef\xbf\xbd" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ABlasterPlayerController_ServerRequestServerTime_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABlasterPlayerController, nullptr, "ServerRequestServerTime", nullptr, nullptr, sizeof(BlasterPlayerController_eventServerRequestServerTime_Parms), Z_Construct_UFunction_ABlasterPlayerController_ServerRequestServerTime_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ABlasterPlayerController_ServerRequestServerTime_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00280CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ABlasterPlayerController_ServerRequestServerTime_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ABlasterPlayerController_ServerRequestServerTime_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ABlasterPlayerController_ServerRequestServerTime()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ABlasterPlayerController_ServerRequestServerTime_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ABlasterPlayerController);
	UClass* Z_Construct_UClass_ABlasterPlayerController_NoRegister()
	{
		return ABlasterPlayerController::StaticClass();
	}
	struct Z_Construct_UClass_ABlasterPlayerController_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TimeSyncFrequency_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_TimeSyncFrequency;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BlasterHUD_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_BlasterHUD;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BlasterGameMode_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_BlasterGameMode;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MatchState_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_MatchState;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CharacterOverlay_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_CharacterOverlay;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ABlasterPlayerController_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APlayerController,
		(UObject* (*)())Z_Construct_UPackage__Script_Blaster,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ABlasterPlayerController_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ABlasterPlayerController_ClientJoinMidGame, "ClientJoinMidGame" }, // 768524218
		{ &Z_Construct_UFunction_ABlasterPlayerController_ClientReportServerTime, "ClientReportServerTime" }, // 1669443672
		{ &Z_Construct_UFunction_ABlasterPlayerController_OnRep_MatchState, "OnRep_MatchState" }, // 725168368
		{ &Z_Construct_UFunction_ABlasterPlayerController_ServerCheckMatchState, "ServerCheckMatchState" }, // 2073373285
		{ &Z_Construct_UFunction_ABlasterPlayerController_ServerRequestServerTime, "ServerRequestServerTime" }, // 2930670532
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABlasterPlayerController_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Collision Rendering Transformation" },
		{ "IncludePath", "PlayerController/BlasterPlayerController.h" },
		{ "ModuleRelativePath", "PlayerController/BlasterPlayerController.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABlasterPlayerController_Statics::NewProp_TimeSyncFrequency_MetaData[] = {
		{ "Category", "Time" },
		{ "ModuleRelativePath", "PlayerController/BlasterPlayerController.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ABlasterPlayerController_Statics::NewProp_TimeSyncFrequency = { "TimeSyncFrequency", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ABlasterPlayerController, TimeSyncFrequency), METADATA_PARAMS(Z_Construct_UClass_ABlasterPlayerController_Statics::NewProp_TimeSyncFrequency_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABlasterPlayerController_Statics::NewProp_TimeSyncFrequency_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABlasterPlayerController_Statics::NewProp_BlasterHUD_MetaData[] = {
		{ "ModuleRelativePath", "PlayerController/BlasterPlayerController.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABlasterPlayerController_Statics::NewProp_BlasterHUD = { "BlasterHUD", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ABlasterPlayerController, BlasterHUD), Z_Construct_UClass_ABlasterHUD_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABlasterPlayerController_Statics::NewProp_BlasterHUD_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABlasterPlayerController_Statics::NewProp_BlasterHUD_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABlasterPlayerController_Statics::NewProp_BlasterGameMode_MetaData[] = {
		{ "ModuleRelativePath", "PlayerController/BlasterPlayerController.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABlasterPlayerController_Statics::NewProp_BlasterGameMode = { "BlasterGameMode", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ABlasterPlayerController, BlasterGameMode), Z_Construct_UClass_ABlasterGameMode_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABlasterPlayerController_Statics::NewProp_BlasterGameMode_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABlasterPlayerController_Statics::NewProp_BlasterGameMode_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABlasterPlayerController_Statics::NewProp_MatchState_MetaData[] = {
		{ "ModuleRelativePath", "PlayerController/BlasterPlayerController.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_ABlasterPlayerController_Statics::NewProp_MatchState = { "MatchState", "OnRep_MatchState", (EPropertyFlags)0x0040000100000020, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ABlasterPlayerController, MatchState), METADATA_PARAMS(Z_Construct_UClass_ABlasterPlayerController_Statics::NewProp_MatchState_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABlasterPlayerController_Statics::NewProp_MatchState_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABlasterPlayerController_Statics::NewProp_CharacterOverlay_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "PlayerController/BlasterPlayerController.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABlasterPlayerController_Statics::NewProp_CharacterOverlay = { "CharacterOverlay", nullptr, (EPropertyFlags)0x0040000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ABlasterPlayerController, CharacterOverlay), Z_Construct_UClass_UCharacterOverlay_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABlasterPlayerController_Statics::NewProp_CharacterOverlay_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABlasterPlayerController_Statics::NewProp_CharacterOverlay_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ABlasterPlayerController_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABlasterPlayerController_Statics::NewProp_TimeSyncFrequency,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABlasterPlayerController_Statics::NewProp_BlasterHUD,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABlasterPlayerController_Statics::NewProp_BlasterGameMode,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABlasterPlayerController_Statics::NewProp_MatchState,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABlasterPlayerController_Statics::NewProp_CharacterOverlay,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ABlasterPlayerController_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABlasterPlayerController>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ABlasterPlayerController_Statics::ClassParams = {
		&ABlasterPlayerController::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ABlasterPlayerController_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ABlasterPlayerController_Statics::PropPointers),
		0,
		0x009002A4u,
		METADATA_PARAMS(Z_Construct_UClass_ABlasterPlayerController_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ABlasterPlayerController_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ABlasterPlayerController()
	{
		if (!Z_Registration_Info_UClass_ABlasterPlayerController.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ABlasterPlayerController.OuterSingleton, Z_Construct_UClass_ABlasterPlayerController_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ABlasterPlayerController.OuterSingleton;
	}
	template<> BLASTER_API UClass* StaticClass<ABlasterPlayerController>()
	{
		return ABlasterPlayerController::StaticClass();
	}

	void ABlasterPlayerController::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
	{
		static const FName Name_MatchState(TEXT("MatchState"));

		const bool bIsValid = true
			&& Name_MatchState == ClassReps[(int32)ENetFields_Private::MatchState].Property->GetFName();

		checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in ABlasterPlayerController"));
	}
	ABlasterPlayerController::ABlasterPlayerController(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ABlasterPlayerController);
	ABlasterPlayerController::~ABlasterPlayerController() {}
	struct Z_CompiledInDeferFile_FID_git_UnrealEngineRepo_Blaster_Source_Blaster_PlayerController_BlasterPlayerController_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_git_UnrealEngineRepo_Blaster_Source_Blaster_PlayerController_BlasterPlayerController_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ABlasterPlayerController, ABlasterPlayerController::StaticClass, TEXT("ABlasterPlayerController"), &Z_Registration_Info_UClass_ABlasterPlayerController, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ABlasterPlayerController), 4287082975U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_git_UnrealEngineRepo_Blaster_Source_Blaster_PlayerController_BlasterPlayerController_h_539877780(TEXT("/Script/Blaster"),
		Z_CompiledInDeferFile_FID_git_UnrealEngineRepo_Blaster_Source_Blaster_PlayerController_BlasterPlayerController_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_git_UnrealEngineRepo_Blaster_Source_Blaster_PlayerController_BlasterPlayerController_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
