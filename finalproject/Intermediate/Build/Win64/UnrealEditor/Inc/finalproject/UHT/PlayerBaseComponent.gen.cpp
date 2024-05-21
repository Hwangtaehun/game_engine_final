// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "finalproject/Public/PlayerBaseComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePlayerBaseComponent() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	ENGINE_API UClass* Z_Construct_UClass_UCharacterMovementComponent_NoRegister();
	FINALPROJECT_API UClass* Z_Construct_UClass_ATPSPlayer_NoRegister();
	FINALPROJECT_API UClass* Z_Construct_UClass_UPlayerBaseComponent();
	FINALPROJECT_API UClass* Z_Construct_UClass_UPlayerBaseComponent_NoRegister();
	UPackage* Z_Construct_UPackage__Script_finalproject();
// End Cross Module References
	void UPlayerBaseComponent::StaticRegisterNativesUPlayerBaseComponent()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPlayerBaseComponent);
	UClass* Z_Construct_UClass_UPlayerBaseComponent_NoRegister()
	{
		return UPlayerBaseComponent::StaticClass();
	}
	struct Z_Construct_UClass_UPlayerBaseComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_me_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_me;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_moveComp_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_moveComp;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPlayerBaseComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_finalproject,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerBaseComponent_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlayerBaseComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "PlayerBaseComponent.h" },
		{ "ModuleRelativePath", "Public/PlayerBaseComponent.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlayerBaseComponent_Statics::NewProp_me_MetaData[] = {
		{ "ModuleRelativePath", "Public/PlayerBaseComponent.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPlayerBaseComponent_Statics::NewProp_me = { "me", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPlayerBaseComponent, me), Z_Construct_UClass_ATPSPlayer_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerBaseComponent_Statics::NewProp_me_MetaData), Z_Construct_UClass_UPlayerBaseComponent_Statics::NewProp_me_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlayerBaseComponent_Statics::NewProp_moveComp_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/PlayerBaseComponent.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPlayerBaseComponent_Statics::NewProp_moveComp = { "moveComp", nullptr, (EPropertyFlags)0x0010000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPlayerBaseComponent, moveComp), Z_Construct_UClass_UCharacterMovementComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerBaseComponent_Statics::NewProp_moveComp_MetaData), Z_Construct_UClass_UPlayerBaseComponent_Statics::NewProp_moveComp_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPlayerBaseComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayerBaseComponent_Statics::NewProp_me,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayerBaseComponent_Statics::NewProp_moveComp,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPlayerBaseComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPlayerBaseComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UPlayerBaseComponent_Statics::ClassParams = {
		&UPlayerBaseComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UPlayerBaseComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerBaseComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerBaseComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UPlayerBaseComponent_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerBaseComponent_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UPlayerBaseComponent()
	{
		if (!Z_Registration_Info_UClass_UPlayerBaseComponent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPlayerBaseComponent.OuterSingleton, Z_Construct_UClass_UPlayerBaseComponent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UPlayerBaseComponent.OuterSingleton;
	}
	template<> FINALPROJECT_API UClass* StaticClass<UPlayerBaseComponent>()
	{
		return UPlayerBaseComponent::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPlayerBaseComponent);
	UPlayerBaseComponent::~UPlayerBaseComponent() {}
	struct Z_CompiledInDeferFile_FID_Github_game_engine_finalproject_Source_finalproject_Public_PlayerBaseComponent_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Github_game_engine_finalproject_Source_finalproject_Public_PlayerBaseComponent_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UPlayerBaseComponent, UPlayerBaseComponent::StaticClass, TEXT("UPlayerBaseComponent"), &Z_Registration_Info_UClass_UPlayerBaseComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPlayerBaseComponent), 3560263999U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Github_game_engine_finalproject_Source_finalproject_Public_PlayerBaseComponent_h_1683528237(TEXT("/Script/finalproject"),
		Z_CompiledInDeferFile_FID_Github_game_engine_finalproject_Source_finalproject_Public_PlayerBaseComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Github_game_engine_finalproject_Source_finalproject_Public_PlayerBaseComponent_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
