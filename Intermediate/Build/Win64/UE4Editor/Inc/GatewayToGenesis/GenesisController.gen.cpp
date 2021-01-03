// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GatewayToGenesis/GenesisController.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGenesisController() {}
// Cross Module References
	GATEWAYTOGENESIS_API UClass* Z_Construct_UClass_AGenesisController_NoRegister();
	GATEWAYTOGENESIS_API UClass* Z_Construct_UClass_AGenesisController();
	ENGINE_API UClass* Z_Construct_UClass_APlayerController();
	UPackage* Z_Construct_UPackage__Script_GatewayToGenesis();
// End Cross Module References
	void AGenesisController::StaticRegisterNativesAGenesisController()
	{
	}
	UClass* Z_Construct_UClass_AGenesisController_NoRegister()
	{
		return AGenesisController::StaticClass();
	}
	struct Z_Construct_UClass_AGenesisController_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AGenesisController_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APlayerController,
		(UObject* (*)())Z_Construct_UPackage__Script_GatewayToGenesis,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGenesisController_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "GenesisController.h" },
		{ "ModuleRelativePath", "GenesisController.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AGenesisController_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AGenesisController>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AGenesisController_Statics::ClassParams = {
		&AGenesisController::StaticClass,
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
		0x009002A4u,
		METADATA_PARAMS(Z_Construct_UClass_AGenesisController_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AGenesisController_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AGenesisController()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AGenesisController_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AGenesisController, 3728299780);
	template<> GATEWAYTOGENESIS_API UClass* StaticClass<AGenesisController>()
	{
		return AGenesisController::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AGenesisController(Z_Construct_UClass_AGenesisController, &AGenesisController::StaticClass, TEXT("/Script/GatewayToGenesis"), TEXT("AGenesisController"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AGenesisController);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
