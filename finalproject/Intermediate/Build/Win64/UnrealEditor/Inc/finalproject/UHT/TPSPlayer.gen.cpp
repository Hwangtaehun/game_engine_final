// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "finalproject/Public/TPSPlayer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTPSPlayer() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_ACharacter();
	ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USpringArmComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	FINALPROJECT_API UClass* Z_Construct_UClass_ATPSPlayer();
	FINALPROJECT_API UClass* Z_Construct_UClass_ATPSPlayer_NoRegister();
	FINALPROJECT_API UClass* Z_Construct_UClass_UPlayerBaseComponent_NoRegister();
	UPackage* Z_Construct_UPackage__Script_finalproject();
// End Cross Module References
	DEFINE_FUNCTION(ATPSPlayer::execOnGameOver)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnGameOver_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ATPSPlayer::execOnHitEvent)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnHitEvent();
		P_NATIVE_END;
	}
	struct TPSPlayer_eventOnUsingGrenade_Parms
	{
		bool isGrenade;
	};
	static FName NAME_ATPSPlayer_OnGameOver = FName(TEXT("OnGameOver"));
	void ATPSPlayer::OnGameOver()
	{
		ProcessEvent(FindFunctionChecked(NAME_ATPSPlayer_OnGameOver),NULL);
	}
	static FName NAME_ATPSPlayer_OnUsingGrenade = FName(TEXT("OnUsingGrenade"));
	void ATPSPlayer::OnUsingGrenade(bool isGrenade)
	{
		TPSPlayer_eventOnUsingGrenade_Parms Parms;
		Parms.isGrenade=isGrenade ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_ATPSPlayer_OnUsingGrenade),&Parms);
	}
	void ATPSPlayer::StaticRegisterNativesATPSPlayer()
	{
		UClass* Class = ATPSPlayer::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnGameOver", &ATPSPlayer::execOnGameOver },
			{ "OnHitEvent", &ATPSPlayer::execOnHitEvent },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ATPSPlayer_OnGameOver_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATPSPlayer_OnGameOver_Statics::Function_MetaDataParams[] = {
		{ "Category", "Health" },
		{ "ModuleRelativePath", "Public/TPSPlayer.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ATPSPlayer_OnGameOver_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATPSPlayer, nullptr, "OnGameOver", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ATPSPlayer_OnGameOver_Statics::Function_MetaDataParams), Z_Construct_UFunction_ATPSPlayer_OnGameOver_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_ATPSPlayer_OnGameOver()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ATPSPlayer_OnGameOver_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ATPSPlayer_OnHitEvent_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATPSPlayer_OnHitEvent_Statics::Function_MetaDataParams[] = {
		{ "Category", "Health" },
		{ "ModuleRelativePath", "Public/TPSPlayer.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ATPSPlayer_OnHitEvent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATPSPlayer, nullptr, "OnHitEvent", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ATPSPlayer_OnHitEvent_Statics::Function_MetaDataParams), Z_Construct_UFunction_ATPSPlayer_OnHitEvent_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_ATPSPlayer_OnHitEvent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ATPSPlayer_OnHitEvent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ATPSPlayer_OnUsingGrenade_Statics
	{
		static void NewProp_isGrenade_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_isGrenade;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_ATPSPlayer_OnUsingGrenade_Statics::NewProp_isGrenade_SetBit(void* Obj)
	{
		((TPSPlayer_eventOnUsingGrenade_Parms*)Obj)->isGrenade = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ATPSPlayer_OnUsingGrenade_Statics::NewProp_isGrenade = { "isGrenade", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(TPSPlayer_eventOnUsingGrenade_Parms), &Z_Construct_UFunction_ATPSPlayer_OnUsingGrenade_Statics::NewProp_isGrenade_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ATPSPlayer_OnUsingGrenade_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATPSPlayer_OnUsingGrenade_Statics::NewProp_isGrenade,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATPSPlayer_OnUsingGrenade_Statics::Function_MetaDataParams[] = {
		{ "Category", "Health" },
		{ "ModuleRelativePath", "Public/TPSPlayer.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ATPSPlayer_OnUsingGrenade_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATPSPlayer, nullptr, "OnUsingGrenade", nullptr, nullptr, Z_Construct_UFunction_ATPSPlayer_OnUsingGrenade_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ATPSPlayer_OnUsingGrenade_Statics::PropPointers), sizeof(TPSPlayer_eventOnUsingGrenade_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ATPSPlayer_OnUsingGrenade_Statics::Function_MetaDataParams), Z_Construct_UFunction_ATPSPlayer_OnUsingGrenade_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ATPSPlayer_OnUsingGrenade_Statics::PropPointers) < 2048);
	static_assert(sizeof(TPSPlayer_eventOnUsingGrenade_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_ATPSPlayer_OnUsingGrenade()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ATPSPlayer_OnUsingGrenade_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ATPSPlayer);
	UClass* Z_Construct_UClass_ATPSPlayer_NoRegister()
	{
		return ATPSPlayer::StaticClass();
	}
	struct Z_Construct_UClass_ATPSPlayer_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_springArmComp_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_springArmComp;
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
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_playerMove_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_playerMove;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_playerFire_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_playerFire;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_hp_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_hp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_initialHp_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_initialHp;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ATPSPlayer_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_finalproject,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ATPSPlayer_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_ATPSPlayer_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ATPSPlayer_OnGameOver, "OnGameOver" }, // 452972751
		{ &Z_Construct_UFunction_ATPSPlayer_OnHitEvent, "OnHitEvent" }, // 3360301295
		{ &Z_Construct_UFunction_ATPSPlayer_OnUsingGrenade, "OnUsingGrenade" }, // 3240681327
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ATPSPlayer_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATPSPlayer_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "TPSPlayer.h" },
		{ "ModuleRelativePath", "Public/TPSPlayer.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATPSPlayer_Statics::NewProp_springArmComp_MetaData[] = {
		{ "Category", "Camera" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/TPSPlayer.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATPSPlayer_Statics::NewProp_springArmComp = { "springArmComp", nullptr, (EPropertyFlags)0x00100000000a0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATPSPlayer, springArmComp), Z_Construct_UClass_USpringArmComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ATPSPlayer_Statics::NewProp_springArmComp_MetaData), Z_Construct_UClass_ATPSPlayer_Statics::NewProp_springArmComp_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATPSPlayer_Statics::NewProp_tpsCamComp_MetaData[] = {
		{ "Category", "Camera" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/TPSPlayer.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATPSPlayer_Statics::NewProp_tpsCamComp = { "tpsCamComp", nullptr, (EPropertyFlags)0x00100000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATPSPlayer, tpsCamComp), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ATPSPlayer_Statics::NewProp_tpsCamComp_MetaData), Z_Construct_UClass_ATPSPlayer_Statics::NewProp_tpsCamComp_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATPSPlayer_Statics::NewProp_gunMeshComp_MetaData[] = {
		{ "Category", "GunMesh" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/TPSPlayer.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATPSPlayer_Statics::NewProp_gunMeshComp = { "gunMeshComp", nullptr, (EPropertyFlags)0x00100000000a0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATPSPlayer, gunMeshComp), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ATPSPlayer_Statics::NewProp_gunMeshComp_MetaData), Z_Construct_UClass_ATPSPlayer_Statics::NewProp_gunMeshComp_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATPSPlayer_Statics::NewProp_sniperGunComp_MetaData[] = {
		{ "Category", "GunMesh" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/TPSPlayer.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATPSPlayer_Statics::NewProp_sniperGunComp = { "sniperGunComp", nullptr, (EPropertyFlags)0x00100000000a0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATPSPlayer, sniperGunComp), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ATPSPlayer_Statics::NewProp_sniperGunComp_MetaData), Z_Construct_UClass_ATPSPlayer_Statics::NewProp_sniperGunComp_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATPSPlayer_Statics::NewProp_playerMove_MetaData[] = {
		{ "Category", "Component" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/TPSPlayer.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATPSPlayer_Statics::NewProp_playerMove = { "playerMove", nullptr, (EPropertyFlags)0x00100000000a0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATPSPlayer, playerMove), Z_Construct_UClass_UPlayerBaseComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ATPSPlayer_Statics::NewProp_playerMove_MetaData), Z_Construct_UClass_ATPSPlayer_Statics::NewProp_playerMove_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATPSPlayer_Statics::NewProp_playerFire_MetaData[] = {
		{ "Category", "Component" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/TPSPlayer.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATPSPlayer_Statics::NewProp_playerFire = { "playerFire", nullptr, (EPropertyFlags)0x00100000000a0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATPSPlayer, playerFire), Z_Construct_UClass_UPlayerBaseComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ATPSPlayer_Statics::NewProp_playerFire_MetaData), Z_Construct_UClass_ATPSPlayer_Statics::NewProp_playerFire_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATPSPlayer_Statics::NewProp_hp_MetaData[] = {
		{ "Category", "Health" },
		{ "ModuleRelativePath", "Public/TPSPlayer.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_ATPSPlayer_Statics::NewProp_hp = { "hp", nullptr, (EPropertyFlags)0x0010000000010005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATPSPlayer, hp), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ATPSPlayer_Statics::NewProp_hp_MetaData), Z_Construct_UClass_ATPSPlayer_Statics::NewProp_hp_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATPSPlayer_Statics::NewProp_initialHp_MetaData[] = {
		{ "Category", "Health" },
		{ "ModuleRelativePath", "Public/TPSPlayer.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_ATPSPlayer_Statics::NewProp_initialHp = { "initialHp", nullptr, (EPropertyFlags)0x0010000000010005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATPSPlayer, initialHp), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ATPSPlayer_Statics::NewProp_initialHp_MetaData), Z_Construct_UClass_ATPSPlayer_Statics::NewProp_initialHp_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ATPSPlayer_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATPSPlayer_Statics::NewProp_springArmComp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATPSPlayer_Statics::NewProp_tpsCamComp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATPSPlayer_Statics::NewProp_gunMeshComp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATPSPlayer_Statics::NewProp_sniperGunComp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATPSPlayer_Statics::NewProp_playerMove,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATPSPlayer_Statics::NewProp_playerFire,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATPSPlayer_Statics::NewProp_hp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATPSPlayer_Statics::NewProp_initialHp,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ATPSPlayer_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ATPSPlayer>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ATPSPlayer_Statics::ClassParams = {
		&ATPSPlayer::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ATPSPlayer_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ATPSPlayer_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ATPSPlayer_Statics::Class_MetaDataParams), Z_Construct_UClass_ATPSPlayer_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ATPSPlayer_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_ATPSPlayer()
	{
		if (!Z_Registration_Info_UClass_ATPSPlayer.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ATPSPlayer.OuterSingleton, Z_Construct_UClass_ATPSPlayer_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ATPSPlayer.OuterSingleton;
	}
	template<> FINALPROJECT_API UClass* StaticClass<ATPSPlayer>()
	{
		return ATPSPlayer::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ATPSPlayer);
	ATPSPlayer::~ATPSPlayer() {}
	struct Z_CompiledInDeferFile_FID_Github_game_engine_finalproject_Source_finalproject_Public_TPSPlayer_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Github_game_engine_finalproject_Source_finalproject_Public_TPSPlayer_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ATPSPlayer, ATPSPlayer::StaticClass, TEXT("ATPSPlayer"), &Z_Registration_Info_UClass_ATPSPlayer, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ATPSPlayer), 680637551U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Github_game_engine_finalproject_Source_finalproject_Public_TPSPlayer_h_3098499904(TEXT("/Script/finalproject"),
		Z_CompiledInDeferFile_FID_Github_game_engine_finalproject_Source_finalproject_Public_TPSPlayer_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Github_game_engine_finalproject_Source_finalproject_Public_TPSPlayer_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
