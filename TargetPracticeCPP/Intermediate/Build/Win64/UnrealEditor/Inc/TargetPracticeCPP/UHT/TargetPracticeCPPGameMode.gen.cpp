// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TargetPracticeCPP/TargetPracticeCPPGameMode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTargetPracticeCPPGameMode() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	TARGETPRACTICECPP_API UClass* Z_Construct_UClass_ATargetPracticeCPPGameMode();
	TARGETPRACTICECPP_API UClass* Z_Construct_UClass_ATargetPracticeCPPGameMode_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UUserWidget_NoRegister();
	UPackage* Z_Construct_UPackage__Script_TargetPracticeCPP();
// End Cross Module References
	DEFINE_FUNCTION(ATargetPracticeCPPGameMode::execShowGameOver)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ShowGameOver();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ATargetPracticeCPPGameMode::execStartGame)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->StartGame();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ATargetPracticeCPPGameMode::execShowMainMenu)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ShowMainMenu();
		P_NATIVE_END;
	}
	void ATargetPracticeCPPGameMode::StaticRegisterNativesATargetPracticeCPPGameMode()
	{
		UClass* Class = ATargetPracticeCPPGameMode::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ShowGameOver", &ATargetPracticeCPPGameMode::execShowGameOver },
			{ "ShowMainMenu", &ATargetPracticeCPPGameMode::execShowMainMenu },
			{ "StartGame", &ATargetPracticeCPPGameMode::execStartGame },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ATargetPracticeCPPGameMode_ShowGameOver_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATargetPracticeCPPGameMode_ShowGameOver_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "TargetPracticeCPPGameMode.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ATargetPracticeCPPGameMode_ShowGameOver_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATargetPracticeCPPGameMode, nullptr, "ShowGameOver", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATargetPracticeCPPGameMode_ShowGameOver_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ATargetPracticeCPPGameMode_ShowGameOver_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATargetPracticeCPPGameMode_ShowGameOver()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ATargetPracticeCPPGameMode_ShowGameOver_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ATargetPracticeCPPGameMode_ShowMainMenu_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATargetPracticeCPPGameMode_ShowMainMenu_Statics::Function_MetaDataParams[] = {
		{ "Comment", "// UI pass\n" },
		{ "ModuleRelativePath", "TargetPracticeCPPGameMode.h" },
		{ "ToolTip", "UI pass" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ATargetPracticeCPPGameMode_ShowMainMenu_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATargetPracticeCPPGameMode, nullptr, "ShowMainMenu", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATargetPracticeCPPGameMode_ShowMainMenu_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ATargetPracticeCPPGameMode_ShowMainMenu_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATargetPracticeCPPGameMode_ShowMainMenu()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ATargetPracticeCPPGameMode_ShowMainMenu_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ATargetPracticeCPPGameMode_StartGame_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATargetPracticeCPPGameMode_StartGame_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "TargetPracticeCPPGameMode.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ATargetPracticeCPPGameMode_StartGame_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATargetPracticeCPPGameMode, nullptr, "StartGame", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATargetPracticeCPPGameMode_StartGame_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ATargetPracticeCPPGameMode_StartGame_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATargetPracticeCPPGameMode_StartGame()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ATargetPracticeCPPGameMode_StartGame_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ATargetPracticeCPPGameMode);
	UClass* Z_Construct_UClass_ATargetPracticeCPPGameMode_NoRegister()
	{
		return ATargetPracticeCPPGameMode::StaticClass();
	}
	struct Z_Construct_UClass_ATargetPracticeCPPGameMode_Statics
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
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GameOverUIClass_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_GameOverUIClass;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CurrentWidget_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_CurrentWidget;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ATargetPracticeCPPGameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_TargetPracticeCPP,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ATargetPracticeCPPGameMode_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ATargetPracticeCPPGameMode_ShowGameOver, "ShowGameOver" }, // 3284003288
		{ &Z_Construct_UFunction_ATargetPracticeCPPGameMode_ShowMainMenu, "ShowMainMenu" }, // 3733560839
		{ &Z_Construct_UFunction_ATargetPracticeCPPGameMode_StartGame, "StartGame" }, // 587226711
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATargetPracticeCPPGameMode_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "TargetPracticeCPPGameMode.h" },
		{ "ModuleRelativePath", "TargetPracticeCPPGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATargetPracticeCPPGameMode_Statics::NewProp_MainMenuClass_MetaData[] = {
		{ "Category", "UI" },
		{ "ModuleRelativePath", "TargetPracticeCPPGameMode.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_ATargetPracticeCPPGameMode_Statics::NewProp_MainMenuClass = { "MainMenuClass", nullptr, (EPropertyFlags)0x0024080000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ATargetPracticeCPPGameMode, MainMenuClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ATargetPracticeCPPGameMode_Statics::NewProp_MainMenuClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATargetPracticeCPPGameMode_Statics::NewProp_MainMenuClass_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATargetPracticeCPPGameMode_Statics::NewProp_GameUIClass_MetaData[] = {
		{ "Category", "UI" },
		{ "ModuleRelativePath", "TargetPracticeCPPGameMode.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_ATargetPracticeCPPGameMode_Statics::NewProp_GameUIClass = { "GameUIClass", nullptr, (EPropertyFlags)0x0024080000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ATargetPracticeCPPGameMode, GameUIClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ATargetPracticeCPPGameMode_Statics::NewProp_GameUIClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATargetPracticeCPPGameMode_Statics::NewProp_GameUIClass_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATargetPracticeCPPGameMode_Statics::NewProp_GameOverUIClass_MetaData[] = {
		{ "Category", "UI" },
		{ "ModuleRelativePath", "TargetPracticeCPPGameMode.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_ATargetPracticeCPPGameMode_Statics::NewProp_GameOverUIClass = { "GameOverUIClass", nullptr, (EPropertyFlags)0x0024080000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ATargetPracticeCPPGameMode, GameOverUIClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ATargetPracticeCPPGameMode_Statics::NewProp_GameOverUIClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATargetPracticeCPPGameMode_Statics::NewProp_GameOverUIClass_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATargetPracticeCPPGameMode_Statics::NewProp_CurrentWidget_MetaData[] = {
		{ "Comment", "//screen\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "TargetPracticeCPPGameMode.h" },
		{ "ToolTip", "screen" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATargetPracticeCPPGameMode_Statics::NewProp_CurrentWidget = { "CurrentWidget", nullptr, (EPropertyFlags)0x0040000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ATargetPracticeCPPGameMode, CurrentWidget), Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ATargetPracticeCPPGameMode_Statics::NewProp_CurrentWidget_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATargetPracticeCPPGameMode_Statics::NewProp_CurrentWidget_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ATargetPracticeCPPGameMode_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATargetPracticeCPPGameMode_Statics::NewProp_MainMenuClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATargetPracticeCPPGameMode_Statics::NewProp_GameUIClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATargetPracticeCPPGameMode_Statics::NewProp_GameOverUIClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATargetPracticeCPPGameMode_Statics::NewProp_CurrentWidget,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ATargetPracticeCPPGameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ATargetPracticeCPPGameMode>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ATargetPracticeCPPGameMode_Statics::ClassParams = {
		&ATargetPracticeCPPGameMode::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ATargetPracticeCPPGameMode_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ATargetPracticeCPPGameMode_Statics::PropPointers),
		0,
		0x008802ACu,
		METADATA_PARAMS(Z_Construct_UClass_ATargetPracticeCPPGameMode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ATargetPracticeCPPGameMode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ATargetPracticeCPPGameMode()
	{
		if (!Z_Registration_Info_UClass_ATargetPracticeCPPGameMode.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ATargetPracticeCPPGameMode.OuterSingleton, Z_Construct_UClass_ATargetPracticeCPPGameMode_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ATargetPracticeCPPGameMode.OuterSingleton;
	}
	template<> TARGETPRACTICECPP_API UClass* StaticClass<ATargetPracticeCPPGameMode>()
	{
		return ATargetPracticeCPPGameMode::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ATargetPracticeCPPGameMode);
	ATargetPracticeCPPGameMode::~ATargetPracticeCPPGameMode() {}
	struct Z_CompiledInDeferFile_FID_Users_Ruvail_Documents_GitHub_UE5_graphics_programing_TargetPracticeCPP_Source_TargetPracticeCPP_TargetPracticeCPPGameMode_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Ruvail_Documents_GitHub_UE5_graphics_programing_TargetPracticeCPP_Source_TargetPracticeCPP_TargetPracticeCPPGameMode_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ATargetPracticeCPPGameMode, ATargetPracticeCPPGameMode::StaticClass, TEXT("ATargetPracticeCPPGameMode"), &Z_Registration_Info_UClass_ATargetPracticeCPPGameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ATargetPracticeCPPGameMode), 3072379223U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Ruvail_Documents_GitHub_UE5_graphics_programing_TargetPracticeCPP_Source_TargetPracticeCPP_TargetPracticeCPPGameMode_h_729820238(TEXT("/Script/TargetPracticeCPP"),
		Z_CompiledInDeferFile_FID_Users_Ruvail_Documents_GitHub_UE5_graphics_programing_TargetPracticeCPP_Source_TargetPracticeCPP_TargetPracticeCPPGameMode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Ruvail_Documents_GitHub_UE5_graphics_programing_TargetPracticeCPP_Source_TargetPracticeCPP_TargetPracticeCPPGameMode_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
