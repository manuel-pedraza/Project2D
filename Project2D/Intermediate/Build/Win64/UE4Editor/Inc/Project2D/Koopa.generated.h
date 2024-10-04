// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef PROJECT2D_Koopa_generated_h
#error "Koopa.generated.h already included, missing '#pragma once' in Koopa.h"
#endif
#define PROJECT2D_Koopa_generated_h

#define Project2D_Source_Project2D_Koopa_h_27_SPARSE_DATA
#define Project2D_Source_Project2D_Koopa_h_27_RPC_WRAPPERS
#define Project2D_Source_Project2D_Koopa_h_27_RPC_WRAPPERS_NO_PURE_DECLS
#define Project2D_Source_Project2D_Koopa_h_27_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAKoopa(); \
	friend struct Z_Construct_UClass_AKoopa_Statics; \
public: \
	DECLARE_CLASS(AKoopa, APawn, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Project2D"), NO_API) \
	DECLARE_SERIALIZER(AKoopa)


#define Project2D_Source_Project2D_Koopa_h_27_INCLASS \
private: \
	static void StaticRegisterNativesAKoopa(); \
	friend struct Z_Construct_UClass_AKoopa_Statics; \
public: \
	DECLARE_CLASS(AKoopa, APawn, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Project2D"), NO_API) \
	DECLARE_SERIALIZER(AKoopa)


#define Project2D_Source_Project2D_Koopa_h_27_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AKoopa(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AKoopa) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AKoopa); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AKoopa); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AKoopa(AKoopa&&); \
	NO_API AKoopa(const AKoopa&); \
public:


#define Project2D_Source_Project2D_Koopa_h_27_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AKoopa(AKoopa&&); \
	NO_API AKoopa(const AKoopa&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AKoopa); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AKoopa); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AKoopa)


#define Project2D_Source_Project2D_Koopa_h_27_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__Sprite() { return STRUCT_OFFSET(AKoopa, Sprite); } \
	FORCEINLINE static uint32 __PPO__Collision() { return STRUCT_OFFSET(AKoopa, Collision); } \
	FORCEINLINE static uint32 __PPO__state() { return STRUCT_OFFSET(AKoopa, state); }


#define Project2D_Source_Project2D_Koopa_h_24_PROLOG
#define Project2D_Source_Project2D_Koopa_h_27_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Project2D_Source_Project2D_Koopa_h_27_PRIVATE_PROPERTY_OFFSET \
	Project2D_Source_Project2D_Koopa_h_27_SPARSE_DATA \
	Project2D_Source_Project2D_Koopa_h_27_RPC_WRAPPERS \
	Project2D_Source_Project2D_Koopa_h_27_INCLASS \
	Project2D_Source_Project2D_Koopa_h_27_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Project2D_Source_Project2D_Koopa_h_27_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Project2D_Source_Project2D_Koopa_h_27_PRIVATE_PROPERTY_OFFSET \
	Project2D_Source_Project2D_Koopa_h_27_SPARSE_DATA \
	Project2D_Source_Project2D_Koopa_h_27_RPC_WRAPPERS_NO_PURE_DECLS \
	Project2D_Source_Project2D_Koopa_h_27_INCLASS_NO_PURE_DECLS \
	Project2D_Source_Project2D_Koopa_h_27_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PROJECT2D_API UClass* StaticClass<class AKoopa>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Project2D_Source_Project2D_Koopa_h


#define FOREACH_ENUM_KOOPATYPE(op) \
	op(KoopaType::Red) \
	op(KoopaType::Green) 

enum class KoopaType;
template<> PROJECT2D_API UEnum* StaticEnum<KoopaType>();

#define FOREACH_ENUM_KOOPASTATE(op) \
	op(KoopaState::Walking) 

enum class KoopaState;
template<> PROJECT2D_API UEnum* StaticEnum<KoopaState>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
