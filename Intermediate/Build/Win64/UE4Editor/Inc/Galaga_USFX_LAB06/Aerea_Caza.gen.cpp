// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Galaga_USFX_LAB06/Aerea_Caza.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAerea_Caza() {}
// Cross Module References
	GALAGA_USFX_LAB06_API UClass* Z_Construct_UClass_AAerea_Caza_NoRegister();
	GALAGA_USFX_LAB06_API UClass* Z_Construct_UClass_AAerea_Caza();
	GALAGA_USFX_LAB06_API UClass* Z_Construct_UClass_AInterfazNaves();
	UPackage* Z_Construct_UPackage__Script_Galaga_USFX_LAB06();
// End Cross Module References
	void AAerea_Caza::StaticRegisterNativesAAerea_Caza()
	{
	}
	UClass* Z_Construct_UClass_AAerea_Caza_NoRegister()
	{
		return AAerea_Caza::StaticClass();
	}
	struct Z_Construct_UClass_AAerea_Caza_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AAerea_Caza_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AInterfazNaves,
		(UObject* (*)())Z_Construct_UPackage__Script_Galaga_USFX_LAB06,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAerea_Caza_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "Aerea_Caza.h" },
		{ "ModuleRelativePath", "Aerea_Caza.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AAerea_Caza_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AAerea_Caza>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AAerea_Caza_Statics::ClassParams = {
		&AAerea_Caza::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_AAerea_Caza_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AAerea_Caza_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AAerea_Caza()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AAerea_Caza_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AAerea_Caza, 1078328776);
	template<> GALAGA_USFX_LAB06_API UClass* StaticClass<AAerea_Caza>()
	{
		return AAerea_Caza::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AAerea_Caza(Z_Construct_UClass_AAerea_Caza, &AAerea_Caza::StaticClass, TEXT("/Script/Galaga_USFX_LAB06"), TEXT("AAerea_Caza"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AAerea_Caza);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
