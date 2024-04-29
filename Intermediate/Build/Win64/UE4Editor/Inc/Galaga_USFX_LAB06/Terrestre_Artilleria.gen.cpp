// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Galaga_USFX_LAB06/Terrestre_Artilleria.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTerrestre_Artilleria() {}
// Cross Module References
	GALAGA_USFX_LAB06_API UClass* Z_Construct_UClass_ATerrestre_Artilleria_NoRegister();
	GALAGA_USFX_LAB06_API UClass* Z_Construct_UClass_ATerrestre_Artilleria();
	GALAGA_USFX_LAB06_API UClass* Z_Construct_UClass_AInterfazNaves();
	UPackage* Z_Construct_UPackage__Script_Galaga_USFX_LAB06();
// End Cross Module References
	void ATerrestre_Artilleria::StaticRegisterNativesATerrestre_Artilleria()
	{
	}
	UClass* Z_Construct_UClass_ATerrestre_Artilleria_NoRegister()
	{
		return ATerrestre_Artilleria::StaticClass();
	}
	struct Z_Construct_UClass_ATerrestre_Artilleria_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ATerrestre_Artilleria_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AInterfazNaves,
		(UObject* (*)())Z_Construct_UPackage__Script_Galaga_USFX_LAB06,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATerrestre_Artilleria_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "Terrestre_Artilleria.h" },
		{ "ModuleRelativePath", "Terrestre_Artilleria.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ATerrestre_Artilleria_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ATerrestre_Artilleria>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ATerrestre_Artilleria_Statics::ClassParams = {
		&ATerrestre_Artilleria::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_ATerrestre_Artilleria_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ATerrestre_Artilleria_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ATerrestre_Artilleria()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ATerrestre_Artilleria_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ATerrestre_Artilleria, 2822469499);
	template<> GALAGA_USFX_LAB06_API UClass* StaticClass<ATerrestre_Artilleria>()
	{
		return ATerrestre_Artilleria::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ATerrestre_Artilleria(Z_Construct_UClass_ATerrestre_Artilleria, &ATerrestre_Artilleria::StaticClass, TEXT("/Script/Galaga_USFX_LAB06"), TEXT("ATerrestre_Artilleria"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ATerrestre_Artilleria);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
