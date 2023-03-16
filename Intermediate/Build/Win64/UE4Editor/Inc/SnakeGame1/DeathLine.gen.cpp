// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SnakeGame1/DeathLine.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDeathLine() {}
// Cross Module References
	SNAKEGAME1_API UClass* Z_Construct_UClass_ADeathLine_NoRegister();
	SNAKEGAME1_API UClass* Z_Construct_UClass_ADeathLine();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_SnakeGame1();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
// End Cross Module References
	void ADeathLine::StaticRegisterNativesADeathLine()
	{
	}
	UClass* Z_Construct_UClass_ADeathLine_NoRegister()
	{
		return ADeathLine::StaticClass();
	}
	struct Z_Construct_UClass_ADeathLine_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Newline_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_Newline;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ADeathLine_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_SnakeGame1,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADeathLine_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "DeathLine.h" },
		{ "ModuleRelativePath", "DeathLine.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADeathLine_Statics::NewProp_Newline_MetaData[] = {
		{ "Category", "DeathLine" },
		{ "ModuleRelativePath", "DeathLine.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_ADeathLine_Statics::NewProp_Newline = { "Newline", nullptr, (EPropertyFlags)0x0014000000010001, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ADeathLine, Newline), Z_Construct_UClass_ADeathLine_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_ADeathLine_Statics::NewProp_Newline_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ADeathLine_Statics::NewProp_Newline_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ADeathLine_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADeathLine_Statics::NewProp_Newline,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ADeathLine_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ADeathLine>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ADeathLine_Statics::ClassParams = {
		&ADeathLine::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ADeathLine_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ADeathLine_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ADeathLine_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ADeathLine_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ADeathLine()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ADeathLine_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ADeathLine, 2274266988);
	template<> SNAKEGAME1_API UClass* StaticClass<ADeathLine>()
	{
		return ADeathLine::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ADeathLine(Z_Construct_UClass_ADeathLine, &ADeathLine::StaticClass, TEXT("/Script/SnakeGame1"), TEXT("ADeathLine"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ADeathLine);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
