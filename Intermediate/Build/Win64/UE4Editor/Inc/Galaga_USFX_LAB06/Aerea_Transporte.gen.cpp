// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Galaga_USFX_LAB06/Aerea_Transporte.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAerea_Transporte() {}
// Cross Module References
	GALAGA_USFX_LAB06_API UClass* Z_Construct_UClass_AAerea_Transporte_NoRegister();
	GALAGA_USFX_LAB06_API UClass* Z_Construct_UClass_AAerea_Transporte();
	GALAGA_USFX_LAB06_API UClass* Z_Construct_UClass_AInterfazNaves();
	UPackage* Z_Construct_UPackage__Script_Galaga_USFX_LAB06();
// End Cross Module References
	void AAerea_Transporte::StaticRegisterNativesAAerea_Transporte()
	{
	}
	UClass* Z_Construct_UClass_AAerea_Transporte_NoRegister()
	{
		return AAerea_Transporte::StaticClass();
	}
	struct Z_Construct_UClass_AAerea_Transporte_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AAerea_Transporte_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AInterfazNaves,
		(UObject* (*)())Z_Construct_UPackage__Script_Galaga_USFX_LAB06,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAerea_Transporte_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "Aerea_Transporte.h" },
		{ "ModuleRelativePath", "Aerea_Transporte.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AAerea_Transporte_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AAerea_Transporte>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AAerea_Transporte_Statics::ClassParams = {
		&AAerea_Transporte::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_AAerea_Transporte_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AAerea_Transporte_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AAerea_Transporte()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AAerea_Transporte_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AAerea_Transporte, 723488864);
	template<> GALAGA_USFX_LAB06_API UClass* StaticClass<AAerea_Transporte>()
	{
		return AAerea_Transporte::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AAerea_Transporte(Z_Construct_UClass_AAerea_Transporte, &AAerea_Transporte::StaticClass, TEXT("/Script/Galaga_USFX_LAB06"), TEXT("AAerea_Transporte"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AAerea_Transporte);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
