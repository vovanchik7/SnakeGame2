// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SnakeGame1/SnakeBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSnakeBase() {}
// Cross Module References
	SNAKEGAME1_API UEnum* Z_Construct_UEnum_SnakeGame1_EMovementDirection();
	UPackage* Z_Construct_UPackage__Script_SnakeGame1();
	SNAKEGAME1_API UClass* Z_Construct_UClass_ASnakeBase_NoRegister();
	SNAKEGAME1_API UClass* Z_Construct_UClass_ASnakeBase();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	SNAKEGAME1_API UClass* Z_Construct_UClass_ASnakeElementBase_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
// End Cross Module References
	static UEnum* EMovementDirection_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_SnakeGame1_EMovementDirection, Z_Construct_UPackage__Script_SnakeGame1(), TEXT("EMovementDirection"));
		}
		return Singleton;
	}
	template<> SNAKEGAME1_API UEnum* StaticEnum<EMovementDirection>()
	{
		return EMovementDirection_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EMovementDirection(EMovementDirection_StaticEnum, TEXT("/Script/SnakeGame1"), TEXT("EMovementDirection"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_SnakeGame1_EMovementDirection_Hash() { return 4079672118U; }
	UEnum* Z_Construct_UEnum_SnakeGame1_EMovementDirection()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_SnakeGame1();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EMovementDirection"), 0, Get_Z_Construct_UEnum_SnakeGame1_EMovementDirection_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EMovementDirection::UP", (int64)EMovementDirection::UP },
				{ "EMovementDirection::DOWN", (int64)EMovementDirection::DOWN },
				{ "EMovementDirection::LEFT", (int64)EMovementDirection::LEFT },
				{ "EMovementDirection::RIGHT", (int64)EMovementDirection::RIGHT },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "DOWN.Name", "EMovementDirection::DOWN" },
				{ "LEFT.Name", "EMovementDirection::LEFT" },
				{ "ModuleRelativePath", "SnakeBase.h" },
				{ "RIGHT.Name", "EMovementDirection::RIGHT" },
				{ "UP.Name", "EMovementDirection::UP" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_SnakeGame1,
				nullptr,
				"EMovementDirection",
				"EMovementDirection",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				EEnumFlags::None,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::EnumClass,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	DEFINE_FUNCTION(ASnakeBase::execSetIsAbeleMove)
	{
		P_GET_UBOOL(Z_Param_IsValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetIsAbeleMove(Z_Param_IsValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASnakeBase::execSnakeElementOverlap)
	{
		P_GET_OBJECT(ASnakeElementBase,Z_Param_OverlappedElement);
		P_GET_OBJECT(AActor,Z_Param_Other);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SnakeElementOverlap(Z_Param_OverlappedElement,Z_Param_Other);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASnakeBase::execMove)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Move();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASnakeBase::execAddSnakeElement)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_ElementsNum);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AddSnakeElement(Z_Param_ElementsNum);
		P_NATIVE_END;
	}
	void ASnakeBase::StaticRegisterNativesASnakeBase()
	{
		UClass* Class = ASnakeBase::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AddSnakeElement", &ASnakeBase::execAddSnakeElement },
			{ "Move", &ASnakeBase::execMove },
			{ "SetIsAbeleMove", &ASnakeBase::execSetIsAbeleMove },
			{ "SnakeElementOverlap", &ASnakeBase::execSnakeElementOverlap },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ASnakeBase_AddSnakeElement_Statics
	{
		struct SnakeBase_eventAddSnakeElement_Parms
		{
			int32 ElementsNum;
		};
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_ElementsNum;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_ASnakeBase_AddSnakeElement_Statics::NewProp_ElementsNum = { "ElementsNum", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SnakeBase_eventAddSnakeElement_Parms, ElementsNum), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASnakeBase_AddSnakeElement_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASnakeBase_AddSnakeElement_Statics::NewProp_ElementsNum,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASnakeBase_AddSnakeElement_Statics::Function_MetaDataParams[] = {
		{ "CPP_Default_ElementsNum", "1" },
		{ "ModuleRelativePath", "SnakeBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASnakeBase_AddSnakeElement_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASnakeBase, nullptr, "AddSnakeElement", nullptr, nullptr, sizeof(SnakeBase_eventAddSnakeElement_Parms), Z_Construct_UFunction_ASnakeBase_AddSnakeElement_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASnakeBase_AddSnakeElement_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASnakeBase_AddSnakeElement_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASnakeBase_AddSnakeElement_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASnakeBase_AddSnakeElement()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASnakeBase_AddSnakeElement_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASnakeBase_Move_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASnakeBase_Move_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "SnakeBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASnakeBase_Move_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASnakeBase, nullptr, "Move", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASnakeBase_Move_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASnakeBase_Move_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASnakeBase_Move()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASnakeBase_Move_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASnakeBase_SetIsAbeleMove_Statics
	{
		struct SnakeBase_eventSetIsAbeleMove_Parms
		{
			bool IsValue;
		};
		static void NewProp_IsValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IsValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_ASnakeBase_SetIsAbeleMove_Statics::NewProp_IsValue_SetBit(void* Obj)
	{
		((SnakeBase_eventSetIsAbeleMove_Parms*)Obj)->IsValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ASnakeBase_SetIsAbeleMove_Statics::NewProp_IsValue = { "IsValue", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SnakeBase_eventSetIsAbeleMove_Parms), &Z_Construct_UFunction_ASnakeBase_SetIsAbeleMove_Statics::NewProp_IsValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASnakeBase_SetIsAbeleMove_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASnakeBase_SetIsAbeleMove_Statics::NewProp_IsValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASnakeBase_SetIsAbeleMove_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "SnakeBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASnakeBase_SetIsAbeleMove_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASnakeBase, nullptr, "SetIsAbeleMove", nullptr, nullptr, sizeof(SnakeBase_eventSetIsAbeleMove_Parms), Z_Construct_UFunction_ASnakeBase_SetIsAbeleMove_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASnakeBase_SetIsAbeleMove_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASnakeBase_SetIsAbeleMove_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASnakeBase_SetIsAbeleMove_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASnakeBase_SetIsAbeleMove()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASnakeBase_SetIsAbeleMove_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASnakeBase_SnakeElementOverlap_Statics
	{
		struct SnakeBase_eventSnakeElementOverlap_Parms
		{
			ASnakeElementBase* OverlappedElement;
			AActor* Other;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OverlappedElement;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Other;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ASnakeBase_SnakeElementOverlap_Statics::NewProp_OverlappedElement = { "OverlappedElement", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SnakeBase_eventSnakeElementOverlap_Parms, OverlappedElement), Z_Construct_UClass_ASnakeElementBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ASnakeBase_SnakeElementOverlap_Statics::NewProp_Other = { "Other", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SnakeBase_eventSnakeElementOverlap_Parms, Other), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASnakeBase_SnakeElementOverlap_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASnakeBase_SnakeElementOverlap_Statics::NewProp_OverlappedElement,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASnakeBase_SnakeElementOverlap_Statics::NewProp_Other,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASnakeBase_SnakeElementOverlap_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "SnakeBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASnakeBase_SnakeElementOverlap_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASnakeBase, nullptr, "SnakeElementOverlap", nullptr, nullptr, sizeof(SnakeBase_eventSnakeElementOverlap_Parms), Z_Construct_UFunction_ASnakeBase_SnakeElementOverlap_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASnakeBase_SnakeElementOverlap_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASnakeBase_SnakeElementOverlap_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASnakeBase_SnakeElementOverlap_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASnakeBase_SnakeElementOverlap()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASnakeBase_SnakeElementOverlap_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ASnakeBase_NoRegister()
	{
		return ASnakeBase::StaticClass();
	}
	struct Z_Construct_UClass_ASnakeBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SnakeElementClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_SnakeElementClass;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ElementSize_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ElementSize;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MovementSpeed_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MovementSpeed;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SnakeElements_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SnakeElements_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_SnakeElements;
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_LastMoveDirection_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LastMoveDirection_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_LastMoveDirection;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ASnakeBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_SnakeGame1,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ASnakeBase_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ASnakeBase_AddSnakeElement, "AddSnakeElement" }, // 443387615
		{ &Z_Construct_UFunction_ASnakeBase_Move, "Move" }, // 3834514094
		{ &Z_Construct_UFunction_ASnakeBase_SetIsAbeleMove, "SetIsAbeleMove" }, // 3974761800
		{ &Z_Construct_UFunction_ASnakeBase_SnakeElementOverlap, "SnakeElementOverlap" }, // 3657999664
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASnakeBase_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "SnakeBase.h" },
		{ "ModuleRelativePath", "SnakeBase.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASnakeBase_Statics::NewProp_SnakeElementClass_MetaData[] = {
		{ "Category", "SnakeBase" },
		{ "ModuleRelativePath", "SnakeBase.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_ASnakeBase_Statics::NewProp_SnakeElementClass = { "SnakeElementClass", nullptr, (EPropertyFlags)0x0014000000010001, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASnakeBase, SnakeElementClass), Z_Construct_UClass_ASnakeElementBase_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_ASnakeBase_Statics::NewProp_SnakeElementClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASnakeBase_Statics::NewProp_SnakeElementClass_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASnakeBase_Statics::NewProp_ElementSize_MetaData[] = {
		{ "Category", "SnakeBase" },
		{ "ModuleRelativePath", "SnakeBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ASnakeBase_Statics::NewProp_ElementSize = { "ElementSize", nullptr, (EPropertyFlags)0x0010000000010001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASnakeBase, ElementSize), METADATA_PARAMS(Z_Construct_UClass_ASnakeBase_Statics::NewProp_ElementSize_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASnakeBase_Statics::NewProp_ElementSize_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASnakeBase_Statics::NewProp_MovementSpeed_MetaData[] = {
		{ "Category", "SnakeBase" },
		{ "ModuleRelativePath", "SnakeBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ASnakeBase_Statics::NewProp_MovementSpeed = { "MovementSpeed", nullptr, (EPropertyFlags)0x0010000000010001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASnakeBase, MovementSpeed), METADATA_PARAMS(Z_Construct_UClass_ASnakeBase_Statics::NewProp_MovementSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASnakeBase_Statics::NewProp_MovementSpeed_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASnakeBase_Statics::NewProp_SnakeElements_Inner = { "SnakeElements", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_ASnakeElementBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASnakeBase_Statics::NewProp_SnakeElements_MetaData[] = {
		{ "ModuleRelativePath", "SnakeBase.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ASnakeBase_Statics::NewProp_SnakeElements = { "SnakeElements", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASnakeBase, SnakeElements), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ASnakeBase_Statics::NewProp_SnakeElements_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASnakeBase_Statics::NewProp_SnakeElements_MetaData)) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_ASnakeBase_Statics::NewProp_LastMoveDirection_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASnakeBase_Statics::NewProp_LastMoveDirection_MetaData[] = {
		{ "ModuleRelativePath", "SnakeBase.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_ASnakeBase_Statics::NewProp_LastMoveDirection = { "LastMoveDirection", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASnakeBase, LastMoveDirection), Z_Construct_UEnum_SnakeGame1_EMovementDirection, METADATA_PARAMS(Z_Construct_UClass_ASnakeBase_Statics::NewProp_LastMoveDirection_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASnakeBase_Statics::NewProp_LastMoveDirection_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ASnakeBase_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASnakeBase_Statics::NewProp_SnakeElementClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASnakeBase_Statics::NewProp_ElementSize,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASnakeBase_Statics::NewProp_MovementSpeed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASnakeBase_Statics::NewProp_SnakeElements_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASnakeBase_Statics::NewProp_SnakeElements,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASnakeBase_Statics::NewProp_LastMoveDirection_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASnakeBase_Statics::NewProp_LastMoveDirection,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ASnakeBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASnakeBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ASnakeBase_Statics::ClassParams = {
		&ASnakeBase::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ASnakeBase_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ASnakeBase_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ASnakeBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ASnakeBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ASnakeBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ASnakeBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ASnakeBase, 1956537987);
	template<> SNAKEGAME1_API UClass* StaticClass<ASnakeBase>()
	{
		return ASnakeBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ASnakeBase(Z_Construct_UClass_ASnakeBase, &ASnakeBase::StaticClass, TEXT("/Script/SnakeGame1"), TEXT("ASnakeBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ASnakeBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
