// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GatewayToGenesis/GenesisGameMode.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGenesisGameMode() {}
// Cross Module References
	GATEWAYTOGENESIS_API UClass* Z_Construct_UClass_AGenesisGameMode_NoRegister();
	GATEWAYTOGENESIS_API UClass* Z_Construct_UClass_AGenesisGameMode();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_GatewayToGenesis();
// End Cross Module References
	void AGenesisGameMode::StaticRegisterNativesAGenesisGameMode()
	{
	}
	UClass* Z_Construct_UClass_AGenesisGameMode_NoRegister()
	{
		return AGenesisGameMode::StaticClass();
	}
	struct Z_Construct_UClass_AGenesisGameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AGenesisGameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_GatewayToGenesis,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGenesisGameMode_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "GenesisGameMode.h" },
		{ "ModuleRelativePath", "GenesisGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AGenesisGameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AGenesisGameMode>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AGenesisGameMode_Statics::ClassParams = {
		&AGenesisGameMode::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_AGenesisGameMode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AGenesisGameMode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AGenesisGameMode()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AGenesisGameMode_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AGenesisGameMode, 3789707221);
	template<> GATEWAYTOGENESIS_API UClass* StaticClass<AGenesisGameMode>()
	{
		return AGenesisGameMode::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AGenesisGameMode(Z_Construct_UClass_AGenesisGameMode, &AGenesisGameMode::StaticClass, TEXT("/Script/GatewayToGenesis"), TEXT("AGenesisGameMode"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AGenesisGameMode);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
