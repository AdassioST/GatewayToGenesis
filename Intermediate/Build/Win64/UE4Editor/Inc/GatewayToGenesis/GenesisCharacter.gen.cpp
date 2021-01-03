// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GatewayToGenesis/GenesisCharacter.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGenesisCharacter() {}
// Cross Module References
	GATEWAYTOGENESIS_API UClass* Z_Construct_UClass_AGenesisCharacter_NoRegister();
	GATEWAYTOGENESIS_API UClass* Z_Construct_UClass_AGenesisCharacter();
	ENGINE_API UClass* Z_Construct_UClass_APawn();
	UPackage* Z_Construct_UPackage__Script_GatewayToGenesis();
// End Cross Module References
	void AGenesisCharacter::StaticRegisterNativesAGenesisCharacter()
	{
	}
	UClass* Z_Construct_UClass_AGenesisCharacter_NoRegister()
	{
		return AGenesisCharacter::StaticClass();
	}
	struct Z_Construct_UClass_AGenesisCharacter_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AGenesisCharacter_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APawn,
		(UObject* (*)())Z_Construct_UPackage__Script_GatewayToGenesis,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGenesisCharacter_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "GenesisCharacter.h" },
		{ "ModuleRelativePath", "GenesisCharacter.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AGenesisCharacter_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AGenesisCharacter>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AGenesisCharacter_Statics::ClassParams = {
		&AGenesisCharacter::StaticClass,
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
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AGenesisCharacter_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AGenesisCharacter_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AGenesisCharacter()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AGenesisCharacter_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AGenesisCharacter, 789317382);
	template<> GATEWAYTOGENESIS_API UClass* StaticClass<AGenesisCharacter>()
	{
		return AGenesisCharacter::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AGenesisCharacter(Z_Construct_UClass_AGenesisCharacter, &AGenesisCharacter::StaticClass, TEXT("/Script/GatewayToGenesis"), TEXT("AGenesisCharacter"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AGenesisCharacter);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
