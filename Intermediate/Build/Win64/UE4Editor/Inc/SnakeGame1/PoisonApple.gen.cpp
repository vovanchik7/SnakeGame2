// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SnakeGame1/PoisonApple.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePoisonApple() {}
// Cross Module References
	SNAKEGAME1_API UClass* Z_Construct_UClass_APoisonApple_NoRegister();
	SNAKEGAME1_API UClass* Z_Construct_UClass_APoisonApple();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_SnakeGame1();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	SNAKEGAME1_API UClass* Z_Construct_UClass_UInteractable_NoRegister();
// End Cross Module References
	void APoisonApple::StaticRegisterNativesAPoisonApple()
	{
	}
	UClass* Z_Construct_UClass_APoisonApple_NoRegister()
	{
		return APoisonApple::StaticClass();
	}
	struct Z_Construct_UClass_APoisonApple_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NewPoisonApple_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_NewPoisonApple;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_APoisonApple_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_SnakeGame1,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APoisonApple_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "PoisonApple.h" },
		{ "ModuleRelativePath", "PoisonApple.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APoisonApple_Statics::NewProp_NewPoisonApple_MetaData[] = {
		{ "Category", "PoisonApple" },
		{ "ModuleRelativePath", "PoisonApple.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_APoisonApple_Statics::NewProp_NewPoisonApple = { "NewPoisonApple", nullptr, (EPropertyFlags)0x0014000000010001, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APoisonApple, NewPoisonApple), Z_Construct_UClass_APoisonApple_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_APoisonApple_Statics::NewProp_NewPoisonApple_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APoisonApple_Statics::NewProp_NewPoisonApple_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_APoisonApple_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APoisonApple_Statics::NewProp_NewPoisonApple,
	};
		const UE4CodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_APoisonApple_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UInteractable_NoRegister, (int32)VTABLE_OFFSET(APoisonApple, IInteractable), false },
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_APoisonApple_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APoisonApple>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_APoisonApple_Statics::ClassParams = {
		&APoisonApple::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_APoisonApple_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_APoisonApple_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_APoisonApple_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_APoisonApple_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_APoisonApple()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_APoisonApple_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(APoisonApple, 2710802477);
	template<> SNAKEGAME1_API UClass* StaticClass<APoisonApple>()
	{
		return APoisonApple::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_APoisonApple(Z_Construct_UClass_APoisonApple, &APoisonApple::StaticClass, TEXT("/Script/SnakeGame1"), TEXT("APoisonApple"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(APoisonApple);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
