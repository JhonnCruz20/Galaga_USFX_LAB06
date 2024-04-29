// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Galaga_USFX_LAB06/Acuatica_Caza.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAcuatica_Caza() {}
// Cross Module References
	GALAGA_USFX_LAB06_API UClass* Z_Construct_UClass_AAcuatica_Caza_NoRegister();
	GALAGA_USFX_LAB06_API UClass* Z_Construct_UClass_AAcuatica_Caza();
	GALAGA_USFX_LAB06_API UClass* Z_Construct_UClass_AInterfazNaves();
	UPackage* Z_Construct_UPackage__Script_Galaga_USFX_LAB06();
// End Cross Module References
	void AAcuatica_Caza::StaticRegisterNativesAAcuatica_Caza()
	{
	}
	UClass* Z_Construct_UClass_AAcuatica_Caza_NoRegister()
	{
		return AAcuatica_Caza::StaticClass();
	}
	struct Z_Construct_UClass_AAcuatica_Caza_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AAcuatica_Caza_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AInterfazNaves,
		(UObject* (*)())Z_Construct_UPackage__Script_Galaga_USFX_LAB06,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAcuatica_Caza_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "Acuatica_Caza.h" },
		{ "ModuleRelativePath", "Acuatica_Caza.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AAcuatica_Caza_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AAcuatica_Caza>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AAcuatica_Caza_Statics::ClassParams = {
		&AAcuatica_Caza::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_AAcuatica_Caza_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AAcuatica_Caza_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AAcuatica_Caza()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AAcuatica_Caza_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AAcuatica_Caza, 609380227);
	template<> GALAGA_USFX_LAB06_API UClass* StaticClass<AAcuatica_Caza>()
	{
		return AAcuatica_Caza::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AAcuatica_Caza(Z_Construct_UClass_AAcuatica_Caza, &AAcuatica_Caza::StaticClass, TEXT("/Script/Galaga_USFX_LAB06"), TEXT("AAcuatica_Caza"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AAcuatica_Caza);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
