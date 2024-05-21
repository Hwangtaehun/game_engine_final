// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "finalproject/Public/finalprojectGameModeBase.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodefinalprojectGameModeBase() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	FINALPROJECT_API UClass* Z_Construct_UClass_AfinalprojectGameModeBase();
	FINALPROJECT_API UClass* Z_Construct_UClass_AfinalprojectGameModeBase_NoRegister();
	UPackage* Z_Construct_UPackage__Script_finalproject();
// End Cross Module References
	void AfinalprojectGameModeBase::StaticRegisterNativesAfinalprojectGameModeBase()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AfinalprojectGameModeBase);
	UClass* Z_Construct_UClass_AfinalprojectGameModeBase_NoRegister()
	{
		return AfinalprojectGameModeBase::StaticClass();
	}
	struct Z_Construct_UClass_AfinalprojectGameModeBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AfinalprojectGameModeBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_finalproject,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AfinalprojectGameModeBase_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AfinalprojectGameModeBase_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "finalprojectGameModeBase.h" },
		{ "ModuleRelativePath", "Public/finalprojectGameModeBase.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AfinalprojectGameModeBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AfinalprojectGameModeBase>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AfinalprojectGameModeBase_Statics::ClassParams = {
		&AfinalprojectGameModeBase::StaticClass,
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
		0x009002ACu,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AfinalprojectGameModeBase_Statics::Class_MetaDataParams), Z_Construct_UClass_AfinalprojectGameModeBase_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_AfinalprojectGameModeBase()
	{
		if (!Z_Registration_Info_UClass_AfinalprojectGameModeBase.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AfinalprojectGameModeBase.OuterSingleton, Z_Construct_UClass_AfinalprojectGameModeBase_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AfinalprojectGameModeBase.OuterSingleton;
	}
	template<> FINALPROJECT_API UClass* StaticClass<AfinalprojectGameModeBase>()
	{
		return AfinalprojectGameModeBase::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AfinalprojectGameModeBase);
	struct Z_CompiledInDeferFile_FID_Github_game_engine_finalproject_Source_finalproject_Public_finalprojectGameModeBase_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Github_game_engine_finalproject_Source_finalproject_Public_finalprojectGameModeBase_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AfinalprojectGameModeBase, AfinalprojectGameModeBase::StaticClass, TEXT("AfinalprojectGameModeBase"), &Z_Registration_Info_UClass_AfinalprojectGameModeBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AfinalprojectGameModeBase), 377684404U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Github_game_engine_finalproject_Source_finalproject_Public_finalprojectGameModeBase_h_567853420(TEXT("/Script/finalproject"),
		Z_CompiledInDeferFile_FID_Github_game_engine_finalproject_Source_finalproject_Public_finalprojectGameModeBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Github_game_engine_finalproject_Source_finalproject_Public_finalprojectGameModeBase_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
