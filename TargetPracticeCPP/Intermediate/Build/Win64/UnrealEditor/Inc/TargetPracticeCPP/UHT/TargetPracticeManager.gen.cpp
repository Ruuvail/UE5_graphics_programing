// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TargetPracticeCPP/TargetPracticeManager.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTargetPracticeManager() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_APlayerController_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UBoxComponent_NoRegister();
	TARGETPRACTICECPP_API UClass* Z_Construct_UClass_ATargetPracticeManager();
	TARGETPRACTICECPP_API UClass* Z_Construct_UClass_ATargetPracticeManager_NoRegister();
	TARGETPRACTICECPP_API UEnum* Z_Construct_UEnum_TargetPracticeCPP_ETPFlow();
	UMG_API UClass* Z_Construct_UClass_UUserWidget_NoRegister();
	UPackage* Z_Construct_UPackage__Script_TargetPracticeCPP();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ETPFlow;
	static UEnum* ETPFlow_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ETPFlow.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ETPFlow.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_TargetPracticeCPP_ETPFlow, Z_Construct_UPackage__Script_TargetPracticeCPP(), TEXT("ETPFlow"));
		}
		return Z_Registration_Info_UEnum_ETPFlow.OuterSingleton;
	}
	template<> TARGETPRACTICECPP_API UEnum* StaticEnum<ETPFlow>()
	{
		return ETPFlow_StaticEnum();
	}
	struct Z_Construct_UEnum_TargetPracticeCPP_ETPFlow_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_TargetPracticeCPP_ETPFlow_Statics::Enumerators[] = {
		{ "ETPFlow::MainMenu", (int64)ETPFlow::MainMenu },
		{ "ETPFlow::Playing", (int64)ETPFlow::Playing },
		{ "ETPFlow::GameOver", (int64)ETPFlow::GameOver },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_TargetPracticeCPP_ETPFlow_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * ATargetPracticeManager\n * Single actor that owns the entire Target Practice loop:\n * - UI flow (Main Menu \xe2\x86\x92 Playing \xe2\x86\x92 Game Over)\n * - Score and countdown timer\n * - Periodic target spawning inside a box volume\n *\n * Place one instance in the level and hook up widget classes + target class in Details.\n * Call StartGame/ShowMainMenu/ShowGameOver from UI or Blueprint.\n */" },
		{ "GameOver.Name", "ETPFlow::GameOver" },
		{ "MainMenu.Name", "ETPFlow::MainMenu" },
		{ "ModuleRelativePath", "TargetPracticeManager.h" },
		{ "Playing.Name", "ETPFlow::Playing" },
		{ "ToolTip", "ATargetPracticeManager\nSingle actor that owns the entire Target Practice loop:\n- UI flow (Main Menu \xe2\x86\x92 Playing \xe2\x86\x92 Game Over)\n- Score and countdown timer\n- Periodic target spawning inside a box volume\n\nPlace one instance in the level and hook up widget classes + target class in Details.\nCall StartGame/ShowMainMenu/ShowGameOver from UI or Blueprint." },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_TargetPracticeCPP_ETPFlow_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_TargetPracticeCPP,
		nullptr,
		"ETPFlow",
		"ETPFlow",
		Z_Construct_UEnum_TargetPracticeCPP_ETPFlow_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_TargetPracticeCPP_ETPFlow_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_TargetPracticeCPP_ETPFlow_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_TargetPracticeCPP_ETPFlow_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_TargetPracticeCPP_ETPFlow()
	{
		if (!Z_Registration_Info_UEnum_ETPFlow.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ETPFlow.InnerSingleton, Z_Construct_UEnum_TargetPracticeCPP_ETPFlow_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ETPFlow.InnerSingleton;
	}
	DEFINE_FUNCTION(ATargetPracticeManager::execShowGameOver)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ShowGameOver();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ATargetPracticeManager::execStartGame)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->StartGame();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ATargetPracticeManager::execShowMainMenu)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ShowMainMenu();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ATargetPracticeManager::execAddScore)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_Delta);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AddScore(Z_Param_Delta);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ATargetPracticeManager::execGetTimeRemaining)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetTimeRemaining();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ATargetPracticeManager::execGetScore)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetScore();
		P_NATIVE_END;
	}
	void ATargetPracticeManager::StaticRegisterNativesATargetPracticeManager()
	{
		UClass* Class = ATargetPracticeManager::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AddScore", &ATargetPracticeManager::execAddScore },
			{ "GetScore", &ATargetPracticeManager::execGetScore },
			{ "GetTimeRemaining", &ATargetPracticeManager::execGetTimeRemaining },
			{ "ShowGameOver", &ATargetPracticeManager::execShowGameOver },
			{ "ShowMainMenu", &ATargetPracticeManager::execShowMainMenu },
			{ "StartGame", &ATargetPracticeManager::execStartGame },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ATargetPracticeManager_AddScore_Statics
	{
		struct TargetPracticeManager_eventAddScore_Parms
		{
			int32 Delta;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_Delta;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ATargetPracticeManager_AddScore_Statics::NewProp_Delta = { "Delta", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(TargetPracticeManager_eventAddScore_Parms, Delta), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ATargetPracticeManager_AddScore_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATargetPracticeManager_AddScore_Statics::NewProp_Delta,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATargetPracticeManager_AddScore_Statics::Function_MetaDataParams[] = {
		{ "Category", "Game" },
		{ "Comment", "/** Called by targets (or hit logic) to add points */" },
		{ "ModuleRelativePath", "TargetPracticeManager.h" },
		{ "ToolTip", "Called by targets (or hit logic) to add points" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ATargetPracticeManager_AddScore_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATargetPracticeManager, nullptr, "AddScore", nullptr, nullptr, sizeof(Z_Construct_UFunction_ATargetPracticeManager_AddScore_Statics::TargetPracticeManager_eventAddScore_Parms), Z_Construct_UFunction_ATargetPracticeManager_AddScore_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ATargetPracticeManager_AddScore_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATargetPracticeManager_AddScore_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ATargetPracticeManager_AddScore_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATargetPracticeManager_AddScore()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ATargetPracticeManager_AddScore_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ATargetPracticeManager_GetScore_Statics
	{
		struct TargetPracticeManager_eventGetScore_Parms
		{
			int32 ReturnValue;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ATargetPracticeManager_GetScore_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(TargetPracticeManager_eventGetScore_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ATargetPracticeManager_GetScore_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATargetPracticeManager_GetScore_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATargetPracticeManager_GetScore_Statics::Function_MetaDataParams[] = {
		{ "Category", "Game" },
		{ "Comment", "/** Read-only accessors for UI bindings */" },
		{ "ModuleRelativePath", "TargetPracticeManager.h" },
		{ "ToolTip", "Read-only accessors for UI bindings" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ATargetPracticeManager_GetScore_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATargetPracticeManager, nullptr, "GetScore", nullptr, nullptr, sizeof(Z_Construct_UFunction_ATargetPracticeManager_GetScore_Statics::TargetPracticeManager_eventGetScore_Parms), Z_Construct_UFunction_ATargetPracticeManager_GetScore_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ATargetPracticeManager_GetScore_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATargetPracticeManager_GetScore_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ATargetPracticeManager_GetScore_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATargetPracticeManager_GetScore()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ATargetPracticeManager_GetScore_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ATargetPracticeManager_GetTimeRemaining_Statics
	{
		struct TargetPracticeManager_eventGetTimeRemaining_Parms
		{
			int32 ReturnValue;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ATargetPracticeManager_GetTimeRemaining_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(TargetPracticeManager_eventGetTimeRemaining_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ATargetPracticeManager_GetTimeRemaining_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATargetPracticeManager_GetTimeRemaining_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATargetPracticeManager_GetTimeRemaining_Statics::Function_MetaDataParams[] = {
		{ "Category", "Game" },
		{ "ModuleRelativePath", "TargetPracticeManager.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ATargetPracticeManager_GetTimeRemaining_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATargetPracticeManager, nullptr, "GetTimeRemaining", nullptr, nullptr, sizeof(Z_Construct_UFunction_ATargetPracticeManager_GetTimeRemaining_Statics::TargetPracticeManager_eventGetTimeRemaining_Parms), Z_Construct_UFunction_ATargetPracticeManager_GetTimeRemaining_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ATargetPracticeManager_GetTimeRemaining_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATargetPracticeManager_GetTimeRemaining_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ATargetPracticeManager_GetTimeRemaining_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATargetPracticeManager_GetTimeRemaining()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ATargetPracticeManager_GetTimeRemaining_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ATargetPracticeManager_ShowGameOver_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATargetPracticeManager_ShowGameOver_Statics::Function_MetaDataParams[] = {
		{ "Category", "UI" },
		{ "ModuleRelativePath", "TargetPracticeManager.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ATargetPracticeManager_ShowGameOver_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATargetPracticeManager, nullptr, "ShowGameOver", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATargetPracticeManager_ShowGameOver_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ATargetPracticeManager_ShowGameOver_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATargetPracticeManager_ShowGameOver()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ATargetPracticeManager_ShowGameOver_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ATargetPracticeManager_ShowMainMenu_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATargetPracticeManager_ShowMainMenu_Statics::Function_MetaDataParams[] = {
		{ "Category", "UI" },
		{ "Comment", "/** UI entry points */" },
		{ "ModuleRelativePath", "TargetPracticeManager.h" },
		{ "ToolTip", "UI entry points" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ATargetPracticeManager_ShowMainMenu_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATargetPracticeManager, nullptr, "ShowMainMenu", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATargetPracticeManager_ShowMainMenu_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ATargetPracticeManager_ShowMainMenu_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATargetPracticeManager_ShowMainMenu()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ATargetPracticeManager_ShowMainMenu_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ATargetPracticeManager_StartGame_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATargetPracticeManager_StartGame_Statics::Function_MetaDataParams[] = {
		{ "Category", "UI" },
		{ "ModuleRelativePath", "TargetPracticeManager.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ATargetPracticeManager_StartGame_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATargetPracticeManager, nullptr, "StartGame", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATargetPracticeManager_StartGame_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ATargetPracticeManager_StartGame_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATargetPracticeManager_StartGame()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ATargetPracticeManager_StartGame_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ATargetPracticeManager);
	UClass* Z_Construct_UClass_ATargetPracticeManager_NoRegister()
	{
		return ATargetPracticeManager::StaticClass();
	}
	struct Z_Construct_UClass_ATargetPracticeManager_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MainMenuClass_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_MainMenuClass;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GameUIClass_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_GameUIClass;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GameOverClass_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_GameOverClass;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TargetClass_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_TargetClass;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SpawnArea_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_SpawnArea;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SpawnInterval_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_SpawnInterval;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SpawnPerTick_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_SpawnPerTick;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RoundSeconds_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_RoundSeconds;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CurrentWidget_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_CurrentWidget;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PlayerControllerRef_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_PlayerControllerRef;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ATargetPracticeManager_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_TargetPracticeCPP,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ATargetPracticeManager_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ATargetPracticeManager_AddScore, "AddScore" }, // 2938433165
		{ &Z_Construct_UFunction_ATargetPracticeManager_GetScore, "GetScore" }, // 1628843873
		{ &Z_Construct_UFunction_ATargetPracticeManager_GetTimeRemaining, "GetTimeRemaining" }, // 3899025483
		{ &Z_Construct_UFunction_ATargetPracticeManager_ShowGameOver, "ShowGameOver" }, // 1272176731
		{ &Z_Construct_UFunction_ATargetPracticeManager_ShowMainMenu, "ShowMainMenu" }, // 3392254041
		{ &Z_Construct_UFunction_ATargetPracticeManager_StartGame, "StartGame" }, // 27652266
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATargetPracticeManager_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "TargetPracticeManager.h" },
		{ "ModuleRelativePath", "TargetPracticeManager.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATargetPracticeManager_Statics::NewProp_MainMenuClass_MetaData[] = {
		{ "Category", "UI" },
		{ "Comment", "/** UI classes  */" },
		{ "ModuleRelativePath", "TargetPracticeManager.h" },
		{ "ToolTip", "UI classes" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_ATargetPracticeManager_Statics::NewProp_MainMenuClass = { "MainMenuClass", nullptr, (EPropertyFlags)0x0014000000000015, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ATargetPracticeManager, MainMenuClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ATargetPracticeManager_Statics::NewProp_MainMenuClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATargetPracticeManager_Statics::NewProp_MainMenuClass_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATargetPracticeManager_Statics::NewProp_GameUIClass_MetaData[] = {
		{ "Category", "UI" },
		{ "ModuleRelativePath", "TargetPracticeManager.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_ATargetPracticeManager_Statics::NewProp_GameUIClass = { "GameUIClass", nullptr, (EPropertyFlags)0x0014000000000015, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ATargetPracticeManager, GameUIClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ATargetPracticeManager_Statics::NewProp_GameUIClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATargetPracticeManager_Statics::NewProp_GameUIClass_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATargetPracticeManager_Statics::NewProp_GameOverClass_MetaData[] = {
		{ "Category", "UI" },
		{ "ModuleRelativePath", "TargetPracticeManager.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_ATargetPracticeManager_Statics::NewProp_GameOverClass = { "GameOverClass", nullptr, (EPropertyFlags)0x0014000000000015, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ATargetPracticeManager, GameOverClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ATargetPracticeManager_Statics::NewProp_GameOverClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATargetPracticeManager_Statics::NewProp_GameOverClass_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATargetPracticeManager_Statics::NewProp_TargetClass_MetaData[] = {
		{ "Category", "Spawning" },
		{ "Comment", "/** Target to spawn (e.g., your BP_TargetDummy) */" },
		{ "ModuleRelativePath", "TargetPracticeManager.h" },
		{ "ToolTip", "Target to spawn (e.g., your BP_TargetDummy)" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_ATargetPracticeManager_Statics::NewProp_TargetClass = { "TargetClass", nullptr, (EPropertyFlags)0x0014000000000015, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ATargetPracticeManager, TargetClass), Z_Construct_UClass_UClass, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ATargetPracticeManager_Statics::NewProp_TargetClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATargetPracticeManager_Statics::NewProp_TargetClass_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATargetPracticeManager_Statics::NewProp_SpawnArea_MetaData[] = {
		{ "Category", "Spawning" },
		{ "Comment", "/** Spawn area volume (random points generated inside this box) */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "TargetPracticeManager.h" },
		{ "ToolTip", "Spawn area volume (random points generated inside this box)" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATargetPracticeManager_Statics::NewProp_SpawnArea = { "SpawnArea", nullptr, (EPropertyFlags)0x00100000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ATargetPracticeManager, SpawnArea), Z_Construct_UClass_UBoxComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ATargetPracticeManager_Statics::NewProp_SpawnArea_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATargetPracticeManager_Statics::NewProp_SpawnArea_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATargetPracticeManager_Statics::NewProp_SpawnInterval_MetaData[] = {
		{ "Category", "Spawning" },
		{ "ClampMin", "0.05" },
		{ "Comment", "/** Spawn settings */" },
		{ "ModuleRelativePath", "TargetPracticeManager.h" },
		{ "ToolTip", "Spawn settings" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ATargetPracticeManager_Statics::NewProp_SpawnInterval = { "SpawnInterval", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ATargetPracticeManager, SpawnInterval), METADATA_PARAMS(Z_Construct_UClass_ATargetPracticeManager_Statics::NewProp_SpawnInterval_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATargetPracticeManager_Statics::NewProp_SpawnInterval_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATargetPracticeManager_Statics::NewProp_SpawnPerTick_MetaData[] = {
		{ "Category", "Spawning" },
		{ "ClampMin", "1" },
		{ "ModuleRelativePath", "TargetPracticeManager.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_ATargetPracticeManager_Statics::NewProp_SpawnPerTick = { "SpawnPerTick", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ATargetPracticeManager, SpawnPerTick), METADATA_PARAMS(Z_Construct_UClass_ATargetPracticeManager_Statics::NewProp_SpawnPerTick_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATargetPracticeManager_Statics::NewProp_SpawnPerTick_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATargetPracticeManager_Statics::NewProp_RoundSeconds_MetaData[] = {
		{ "Category", "Game" },
		{ "ClampMin", "1" },
		{ "Comment", "/** Game rules */" },
		{ "ModuleRelativePath", "TargetPracticeManager.h" },
		{ "ToolTip", "Game rules" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_ATargetPracticeManager_Statics::NewProp_RoundSeconds = { "RoundSeconds", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ATargetPracticeManager, RoundSeconds), METADATA_PARAMS(Z_Construct_UClass_ATargetPracticeManager_Statics::NewProp_RoundSeconds_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATargetPracticeManager_Statics::NewProp_RoundSeconds_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATargetPracticeManager_Statics::NewProp_CurrentWidget_MetaData[] = {
		{ "Comment", "/** Runtime state */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "TargetPracticeManager.h" },
		{ "ToolTip", "Runtime state" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATargetPracticeManager_Statics::NewProp_CurrentWidget = { "CurrentWidget", nullptr, (EPropertyFlags)0x0040000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ATargetPracticeManager, CurrentWidget), Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ATargetPracticeManager_Statics::NewProp_CurrentWidget_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATargetPracticeManager_Statics::NewProp_CurrentWidget_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATargetPracticeManager_Statics::NewProp_PlayerControllerRef_MetaData[] = {
		{ "ModuleRelativePath", "TargetPracticeManager.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATargetPracticeManager_Statics::NewProp_PlayerControllerRef = { "PlayerControllerRef", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ATargetPracticeManager, PlayerControllerRef), Z_Construct_UClass_APlayerController_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ATargetPracticeManager_Statics::NewProp_PlayerControllerRef_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATargetPracticeManager_Statics::NewProp_PlayerControllerRef_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ATargetPracticeManager_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATargetPracticeManager_Statics::NewProp_MainMenuClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATargetPracticeManager_Statics::NewProp_GameUIClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATargetPracticeManager_Statics::NewProp_GameOverClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATargetPracticeManager_Statics::NewProp_TargetClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATargetPracticeManager_Statics::NewProp_SpawnArea,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATargetPracticeManager_Statics::NewProp_SpawnInterval,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATargetPracticeManager_Statics::NewProp_SpawnPerTick,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATargetPracticeManager_Statics::NewProp_RoundSeconds,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATargetPracticeManager_Statics::NewProp_CurrentWidget,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATargetPracticeManager_Statics::NewProp_PlayerControllerRef,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ATargetPracticeManager_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ATargetPracticeManager>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ATargetPracticeManager_Statics::ClassParams = {
		&ATargetPracticeManager::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ATargetPracticeManager_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ATargetPracticeManager_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ATargetPracticeManager_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ATargetPracticeManager_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ATargetPracticeManager()
	{
		if (!Z_Registration_Info_UClass_ATargetPracticeManager.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ATargetPracticeManager.OuterSingleton, Z_Construct_UClass_ATargetPracticeManager_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ATargetPracticeManager.OuterSingleton;
	}
	template<> TARGETPRACTICECPP_API UClass* StaticClass<ATargetPracticeManager>()
	{
		return ATargetPracticeManager::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ATargetPracticeManager);
	ATargetPracticeManager::~ATargetPracticeManager() {}
	struct Z_CompiledInDeferFile_FID_Users_Ruvail_Documents_GitHub_UE5_graphics_programing_TargetPracticeCPP_Source_TargetPracticeCPP_TargetPracticeManager_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Ruvail_Documents_GitHub_UE5_graphics_programing_TargetPracticeCPP_Source_TargetPracticeCPP_TargetPracticeManager_h_Statics::EnumInfo[] = {
		{ ETPFlow_StaticEnum, TEXT("ETPFlow"), &Z_Registration_Info_UEnum_ETPFlow, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3375162172U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Ruvail_Documents_GitHub_UE5_graphics_programing_TargetPracticeCPP_Source_TargetPracticeCPP_TargetPracticeManager_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ATargetPracticeManager, ATargetPracticeManager::StaticClass, TEXT("ATargetPracticeManager"), &Z_Registration_Info_UClass_ATargetPracticeManager, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ATargetPracticeManager), 12126054U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Ruvail_Documents_GitHub_UE5_graphics_programing_TargetPracticeCPP_Source_TargetPracticeCPP_TargetPracticeManager_h_3806467076(TEXT("/Script/TargetPracticeCPP"),
		Z_CompiledInDeferFile_FID_Users_Ruvail_Documents_GitHub_UE5_graphics_programing_TargetPracticeCPP_Source_TargetPracticeCPP_TargetPracticeManager_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Ruvail_Documents_GitHub_UE5_graphics_programing_TargetPracticeCPP_Source_TargetPracticeCPP_TargetPracticeManager_h_Statics::ClassInfo),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Users_Ruvail_Documents_GitHub_UE5_graphics_programing_TargetPracticeCPP_Source_TargetPracticeCPP_TargetPracticeManager_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Ruvail_Documents_GitHub_UE5_graphics_programing_TargetPracticeCPP_Source_TargetPracticeCPP_TargetPracticeManager_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
