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
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	TARGETPRACTICECPP_API UClass* Z_Construct_UClass_ATargetPracticeCPPGameMode();
	TARGETPRACTICECPP_API UClass* Z_Construct_UClass_ATargetPracticeCPPGameMode_NoRegister();
	UPackage* Z_Construct_UPackage__Script_TargetPracticeCPP();
// End Cross Module References
	void ATargetPracticeCPPGameMode::StaticRegisterNativesATargetPracticeCPPGameMode()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ATargetPracticeCPPGameMode);
	UClass* Z_Construct_UClass_ATargetPracticeCPPGameMode_NoRegister()
	{
		return ATargetPracticeCPPGameMode::StaticClass();
	}
	struct Z_Construct_UClass_ATargetPracticeCPPGameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ATargetPracticeCPPGameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_TargetPracticeCPP,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATargetPracticeCPPGameMode_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "TargetPracticeCPPGameMode.h" },
		{ "ModuleRelativePath", "TargetPracticeCPPGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ATargetPracticeCPPGameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ATargetPracticeCPPGameMode>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ATargetPracticeCPPGameMode_Statics::ClassParams = {
		&ATargetPracticeCPPGameMode::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
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
		{ Z_Construct_UClass_ATargetPracticeCPPGameMode, ATargetPracticeCPPGameMode::StaticClass, TEXT("ATargetPracticeCPPGameMode"), &Z_Registration_Info_UClass_ATargetPracticeCPPGameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ATargetPracticeCPPGameMode), 3916365800U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Ruvail_Documents_GitHub_UE5_graphics_programing_TargetPracticeCPP_Source_TargetPracticeCPP_TargetPracticeCPPGameMode_h_1542230473(TEXT("/Script/TargetPracticeCPP"),
		Z_CompiledInDeferFile_FID_Users_Ruvail_Documents_GitHub_UE5_graphics_programing_TargetPracticeCPP_Source_TargetPracticeCPP_TargetPracticeCPPGameMode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Ruvail_Documents_GitHub_UE5_graphics_programing_TargetPracticeCPP_Source_TargetPracticeCPP_TargetPracticeCPPGameMode_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
