// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef SNAKEGAME1_Interactable_generated_h
#error "Interactable.generated.h already included, missing '#pragma once' in Interactable.h"
#endif
#define SNAKEGAME1_Interactable_generated_h

#define SnakeGame2_Source_SnakeGame1_Interactable_h_13_SPARSE_DATA
#define SnakeGame2_Source_SnakeGame1_Interactable_h_13_RPC_WRAPPERS
#define SnakeGame2_Source_SnakeGame1_Interactable_h_13_RPC_WRAPPERS_NO_PURE_DECLS
#define SnakeGame2_Source_SnakeGame1_Interactable_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	SNAKEGAME1_API UInteractable(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UInteractable) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(SNAKEGAME1_API, UInteractable); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInteractable); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	SNAKEGAME1_API UInteractable(UInteractable&&); \
	SNAKEGAME1_API UInteractable(const UInteractable&); \
public:


#define SnakeGame2_Source_SnakeGame1_Interactable_h_13_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	SNAKEGAME1_API UInteractable(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	SNAKEGAME1_API UInteractable(UInteractable&&); \
	SNAKEGAME1_API UInteractable(const UInteractable&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(SNAKEGAME1_API, UInteractable); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInteractable); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UInteractable)


#define SnakeGame2_Source_SnakeGame1_Interactable_h_13_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUInteractable(); \
	friend struct Z_Construct_UClass_UInteractable_Statics; \
public: \
	DECLARE_CLASS(UInteractable, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/SnakeGame1"), SNAKEGAME1_API) \
	DECLARE_SERIALIZER(UInteractable)


#define SnakeGame2_Source_SnakeGame1_Interactable_h_13_GENERATED_BODY_LEGACY \
		PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	SnakeGame2_Source_SnakeGame1_Interactable_h_13_GENERATED_UINTERFACE_BODY() \
	SnakeGame2_Source_SnakeGame1_Interactable_h_13_STANDARD_CONSTRUCTORS \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define SnakeGame2_Source_SnakeGame1_Interactable_h_13_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	SnakeGame2_Source_SnakeGame1_Interactable_h_13_GENERATED_UINTERFACE_BODY() \
	SnakeGame2_Source_SnakeGame1_Interactable_h_13_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define SnakeGame2_Source_SnakeGame1_Interactable_h_13_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IInteractable() {} \
public: \
	typedef UInteractable UClassType; \
	typedef IInteractable ThisClass; \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define SnakeGame2_Source_SnakeGame1_Interactable_h_13_INCLASS_IINTERFACE \
protected: \
	virtual ~IInteractable() {} \
public: \
	typedef UInteractable UClassType; \
	typedef IInteractable ThisClass; \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define SnakeGame2_Source_SnakeGame1_Interactable_h_10_PROLOG
#define SnakeGame2_Source_SnakeGame1_Interactable_h_21_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	SnakeGame2_Source_SnakeGame1_Interactable_h_13_SPARSE_DATA \
	SnakeGame2_Source_SnakeGame1_Interactable_h_13_RPC_WRAPPERS \
	SnakeGame2_Source_SnakeGame1_Interactable_h_13_INCLASS_IINTERFACE \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define SnakeGame2_Source_SnakeGame1_Interactable_h_21_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	SnakeGame2_Source_SnakeGame1_Interactable_h_13_SPARSE_DATA \
	SnakeGame2_Source_SnakeGame1_Interactable_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	SnakeGame2_Source_SnakeGame1_Interactable_h_13_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SNAKEGAME1_API UClass* StaticClass<class UInteractable>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID SnakeGame2_Source_SnakeGame1_Interactable_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
