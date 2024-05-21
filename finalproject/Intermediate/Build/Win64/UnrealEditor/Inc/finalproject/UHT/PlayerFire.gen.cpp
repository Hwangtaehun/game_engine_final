// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "finalproject/Public/PlayerFire.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePlayerFire() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UCameraShakeBase_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UParticleSystem_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USoundBase_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	FINALPROJECT_API UClass* Z_Construct_UClass_ABullet_NoRegister();
	FINALPROJECT_API UClass* Z_Construct_UClass_UPlayerBaseComponent();
	FINALPROJECT_API UClass* Z_Construct_UClass_UPlayerFire();
	FINALPROJECT_API UClass* Z_Construct_UClass_UPlayerFire_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UUserWidget_NoRegister();
	UPackage* Z_Construct_UPackage__Script_finalproject();
// End Cross Module References
	void UPlayerFire::StaticRegisterNativesUPlayerFire()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPlayerFire);
	UClass* Z_Construct_UClass_UPlayerFire_NoRegister()
	{
		return UPlayerFire::StaticClass();
	}
	struct Z_Construct_UClass_UPlayerFire_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bulletFactory_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_bulletFactory;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_sniperUIFactory_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_sniperUIFactory;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bulletEffectFactory_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_bulletEffectFactory;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_crosshairUIFactory_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_crosshairUIFactory;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_cameraShake_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_cameraShake;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bulletSound_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_bulletSound;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_tpsCamComp_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_tpsCamComp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_gunMeshComp_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_gunMeshComp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_sniperGunComp_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_sniperGunComp;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPlayerFire_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UPlayerBaseComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_finalproject,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerFire_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlayerFire_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n *\n */" },
#endif
		{ "IncludePath", "PlayerFire.h" },
		{ "ModuleRelativePath", "Public/PlayerFire.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlayerFire_Statics::NewProp_bulletFactory_MetaData[] = {
		{ "Category", "BulletFactory" },
		{ "ModuleRelativePath", "Public/PlayerFire.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UPlayerFire_Statics::NewProp_bulletFactory = { "bulletFactory", nullptr, (EPropertyFlags)0x0014000000010001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPlayerFire, bulletFactory), Z_Construct_UClass_UClass, Z_Construct_UClass_ABullet_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerFire_Statics::NewProp_bulletFactory_MetaData), Z_Construct_UClass_UPlayerFire_Statics::NewProp_bulletFactory_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlayerFire_Statics::NewProp_sniperUIFactory_MetaData[] = {
		{ "Category", "SniperUI" },
		{ "ModuleRelativePath", "Public/PlayerFire.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UPlayerFire_Statics::NewProp_sniperUIFactory = { "sniperUIFactory", nullptr, (EPropertyFlags)0x0014000000010001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPlayerFire, sniperUIFactory), Z_Construct_UClass_UClass, Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerFire_Statics::NewProp_sniperUIFactory_MetaData), Z_Construct_UClass_UPlayerFire_Statics::NewProp_sniperUIFactory_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlayerFire_Statics::NewProp_bulletEffectFactory_MetaData[] = {
		{ "Category", "BulletEffect" },
		{ "ModuleRelativePath", "Public/PlayerFire.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPlayerFire_Statics::NewProp_bulletEffectFactory = { "bulletEffectFactory", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPlayerFire, bulletEffectFactory), Z_Construct_UClass_UParticleSystem_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerFire_Statics::NewProp_bulletEffectFactory_MetaData), Z_Construct_UClass_UPlayerFire_Statics::NewProp_bulletEffectFactory_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlayerFire_Statics::NewProp_crosshairUIFactory_MetaData[] = {
		{ "Category", "SniperUI" },
		{ "ModuleRelativePath", "Public/PlayerFire.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UPlayerFire_Statics::NewProp_crosshairUIFactory = { "crosshairUIFactory", nullptr, (EPropertyFlags)0x0014000000010001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPlayerFire, crosshairUIFactory), Z_Construct_UClass_UClass, Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerFire_Statics::NewProp_crosshairUIFactory_MetaData), Z_Construct_UClass_UPlayerFire_Statics::NewProp_crosshairUIFactory_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlayerFire_Statics::NewProp_cameraShake_MetaData[] = {
		{ "Category", "CameraMotion" },
		{ "ModuleRelativePath", "Public/PlayerFire.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UPlayerFire_Statics::NewProp_cameraShake = { "cameraShake", nullptr, (EPropertyFlags)0x0014000000010001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPlayerFire, cameraShake), Z_Construct_UClass_UClass, Z_Construct_UClass_UCameraShakeBase_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerFire_Statics::NewProp_cameraShake_MetaData), Z_Construct_UClass_UPlayerFire_Statics::NewProp_cameraShake_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlayerFire_Statics::NewProp_bulletSound_MetaData[] = {
		{ "Category", "Sound" },
		{ "ModuleRelativePath", "Public/PlayerFire.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPlayerFire_Statics::NewProp_bulletSound = { "bulletSound", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPlayerFire, bulletSound), Z_Construct_UClass_USoundBase_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerFire_Statics::NewProp_bulletSound_MetaData), Z_Construct_UClass_UPlayerFire_Statics::NewProp_bulletSound_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlayerFire_Statics::NewProp_tpsCamComp_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/PlayerFire.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPlayerFire_Statics::NewProp_tpsCamComp = { "tpsCamComp", nullptr, (EPropertyFlags)0x0010000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPlayerFire, tpsCamComp), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerFire_Statics::NewProp_tpsCamComp_MetaData), Z_Construct_UClass_UPlayerFire_Statics::NewProp_tpsCamComp_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlayerFire_Statics::NewProp_gunMeshComp_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/PlayerFire.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPlayerFire_Statics::NewProp_gunMeshComp = { "gunMeshComp", nullptr, (EPropertyFlags)0x0010000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPlayerFire, gunMeshComp), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerFire_Statics::NewProp_gunMeshComp_MetaData), Z_Construct_UClass_UPlayerFire_Statics::NewProp_gunMeshComp_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlayerFire_Statics::NewProp_sniperGunComp_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/PlayerFire.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPlayerFire_Statics::NewProp_sniperGunComp = { "sniperGunComp", nullptr, (EPropertyFlags)0x0010000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPlayerFire, sniperGunComp), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerFire_Statics::NewProp_sniperGunComp_MetaData), Z_Construct_UClass_UPlayerFire_Statics::NewProp_sniperGunComp_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPlayerFire_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayerFire_Statics::NewProp_bulletFactory,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayerFire_Statics::NewProp_sniperUIFactory,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayerFire_Statics::NewProp_bulletEffectFactory,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayerFire_Statics::NewProp_crosshairUIFactory,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayerFire_Statics::NewProp_cameraShake,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayerFire_Statics::NewProp_bulletSound,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayerFire_Statics::NewProp_tpsCamComp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayerFire_Statics::NewProp_gunMeshComp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayerFire_Statics::NewProp_sniperGunComp,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPlayerFire_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPlayerFire>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UPlayerFire_Statics::ClassParams = {
		&UPlayerFire::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UPlayerFire_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerFire_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerFire_Statics::Class_MetaDataParams), Z_Construct_UClass_UPlayerFire_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerFire_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UPlayerFire()
	{
		if (!Z_Registration_Info_UClass_UPlayerFire.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPlayerFire.OuterSingleton, Z_Construct_UClass_UPlayerFire_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UPlayerFire.OuterSingleton;
	}
	template<> FINALPROJECT_API UClass* StaticClass<UPlayerFire>()
	{
		return UPlayerFire::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPlayerFire);
	UPlayerFire::~UPlayerFire() {}
	struct Z_CompiledInDeferFile_FID_Github_game_engine_finalproject_Source_finalproject_Public_PlayerFire_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Github_game_engine_finalproject_Source_finalproject_Public_PlayerFire_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UPlayerFire, UPlayerFire::StaticClass, TEXT("UPlayerFire"), &Z_Registration_Info_UClass_UPlayerFire, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPlayerFire), 177320069U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Github_game_engine_finalproject_Source_finalproject_Public_PlayerFire_h_3332920806(TEXT("/Script/finalproject"),
		Z_CompiledInDeferFile_FID_Github_game_engine_finalproject_Source_finalproject_Public_PlayerFire_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Github_game_engine_finalproject_Source_finalproject_Public_PlayerFire_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
