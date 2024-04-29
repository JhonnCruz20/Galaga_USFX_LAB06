// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Galaga_USFX_LAB06/Terrestre_Transporte.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTerrestre_Transporte() {}
// Cross Module References
	GALAGA_USFX_LAB06_API UClass* Z_Construct_UClass_ATerrestre_Transporte_NoRegister();
	GALAGA_USFX_LAB06_API UClass* Z_Construct_UClass_ATerrestre_Transporte();
	GALAGA_USFX_LAB06_API UClass* Z_Construct_UClass_AInterfazNaves();
	UPackage* Z_Construct_UPackage__Script_Galaga_USFX_LAB06();
// End Cross Module References
	void ATerrestre_Transporte::StaticRegisterNativesATerrestre_Transporte()
	{
	}
	UClass* Z_Construct_UClass_ATerrestre_Transporte_NoRegister()
	{
		return ATerrestre_Transporte::StaticClass();
	}
	struct Z_Construct_UClass_ATerrestre_Transporte_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ATerrestre_Transporte_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AInterfazNaves,
		(UObject* (*)())Z_Construct_UPackage__Script_Galaga_USFX_LAB06,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATerrestre_Transporte_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "Terrestre_Transporte.h" },
		{ "ModuleRelativePath", "Terrestre_Transporte.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ATerrestre_Transporte_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ATerrestre_Transporte>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ATerrestre_Transporte_Statics::ClassParams = {
		&ATerrestre_Transporte::StaticClass,
		"Engine",
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
		METADATA_PARAMS(Z_Construct_UClass_ATerrestre_Transporte_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ATerrestre_Transporte_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ATerrestre_Transporte()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ATerrestre_Transporte_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ATerrestre_Transporte, 2403697121);
	template<> GALAGA_USFX_LAB06_API UClass* StaticClass<ATerrestre_Transporte>()
	{
		return ATerrestre_Transporte::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ATerrestre_Transporte(Z_Construct_UClass_ATerrestre_Transporte, &ATerrestre_Transporte::StaticClass, TEXT("/Script/Galaga_USFX_LAB06"), TEXT("ATerrestre_Transporte"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ATerrestre_Transporte);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
