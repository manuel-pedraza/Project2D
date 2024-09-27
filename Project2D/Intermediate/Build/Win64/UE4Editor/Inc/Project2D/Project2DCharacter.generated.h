// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef PROJECT2D_Project2DCharacter_generated_h
#error "Project2DCharacter.generated.h already included, missing '#pragma once' in Project2DCharacter.h"
#endif
#define PROJECT2D_Project2DCharacter_generated_h

#define Project2D_Source_Project2D_Project2DCharacter_h_37_SPARSE_DATA
#define Project2D_Source_Project2D_Project2DCharacter_h_37_RPC_WRAPPERS
#define Project2D_Source_Project2D_Project2DCharacter_h_37_RPC_WRAPPERS_NO_PURE_DECLS
#define Project2D_Source_Project2D_Project2DCharacter_h_37_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAProject2DCharacter(); \
	friend struct Z_Construct_UClass_AProject2DCharacter_Statics; \
public: \
	DECLARE_CLASS(AProject2DCharacter, APaperCharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Project2D"), NO_API) \
	DECLARE_SERIALIZER(AProject2DCharacter)


#define Project2D_Source_Project2D_Project2DCharacter_h_37_INCLASS \
private: \
	static void StaticRegisterNativesAProject2DCharacter(); \
	friend struct Z_Construct_UClass_AProject2DCharacter_Statics; \
public: \
	DECLARE_CLASS(AProject2DCharacter, APaperCharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Project2D"), NO_API) \
	DECLARE_SERIALIZER(AProject2DCharacter)


#define Project2D_Source_Project2D_Project2DCharacter_h_37_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AProject2DCharacter(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AProject2DCharacter) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AProject2DCharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AProject2DCharacter); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AProject2DCharacter(AProject2DCharacter&&); \
	NO_API AProject2DCharacter(const AProject2DCharacter&); \
public:


#define Project2D_Source_Project2D_Project2DCharacter_h_37_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AProject2DCharacter(AProject2DCharacter&&); \
	NO_API AProject2DCharacter(const AProject2DCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AProject2DCharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AProject2DCharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AProject2DCharacter)


#define Project2D_Source_Project2D_Project2DCharacter_h_37_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__SideViewCameraComponent() { return STRUCT_OFFSET(AProject2DCharacter, SideViewCameraComponent); } \
	FORCEINLINE static uint32 __PPO__CameraBoom() { return STRUCT_OFFSET(AProject2DCharacter, CameraBoom); } \
	FORCEINLINE static uint32 __PPO__state() { return STRUCT_OFFSET(AProject2DCharacter, state); } \
	FORCEINLINE static uint32 __PPO__IdleAnimation() { return STRUCT_OFFSET(AProject2DCharacter, IdleAnimation); } \
	FORCEINLINE static uint32 __PPO__WalkingAnimation() { return STRUCT_OFFSET(AProject2DCharacter, WalkingAnimation); } \
	FORCEINLINE static uint32 __PPO__RunningAnimation() { return STRUCT_OFFSET(AProject2DCharacter, RunningAnimation); } \
	FORCEINLINE static uint32 __PPO__JumpingAnimation() { return STRUCT_OFFSET(AProject2DCharacter, JumpingAnimation); } \
	FORCEINLINE static uint32 __PPO__FallingAnimation() { return STRUCT_OFFSET(AProject2DCharacter, FallingAnimation); } \
	FORCEINLINE static uint32 __PPO__LookingUpAnimation() { return STRUCT_OFFSET(AProject2DCharacter, LookingUpAnimation); } \
	FORCEINLINE static uint32 __PPO__CrouchAnimation() { return STRUCT_OFFSET(AProject2DCharacter, CrouchAnimation); } \
	FORCEINLINE static uint32 __PPO__DeadAnimation() { return STRUCT_OFFSET(AProject2DCharacter, DeadAnimation); } \
	FORCEINLINE static uint32 __PPO__JumpSound() { return STRUCT_OFFSET(AProject2DCharacter, JumpSound); }


#define Project2D_Source_Project2D_Project2DCharacter_h_34_PROLOG
#define Project2D_Source_Project2D_Project2DCharacter_h_37_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Project2D_Source_Project2D_Project2DCharacter_h_37_PRIVATE_PROPERTY_OFFSET \
	Project2D_Source_Project2D_Project2DCharacter_h_37_SPARSE_DATA \
	Project2D_Source_Project2D_Project2DCharacter_h_37_RPC_WRAPPERS \
	Project2D_Source_Project2D_Project2DCharacter_h_37_INCLASS \
	Project2D_Source_Project2D_Project2DCharacter_h_37_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Project2D_Source_Project2D_Project2DCharacter_h_37_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Project2D_Source_Project2D_Project2DCharacter_h_37_PRIVATE_PROPERTY_OFFSET \
	Project2D_Source_Project2D_Project2DCharacter_h_37_SPARSE_DATA \
	Project2D_Source_Project2D_Project2DCharacter_h_37_RPC_WRAPPERS_NO_PURE_DECLS \
	Project2D_Source_Project2D_Project2DCharacter_h_37_INCLASS_NO_PURE_DECLS \
	Project2D_Source_Project2D_Project2DCharacter_h_37_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PROJECT2D_API UClass* StaticClass<class AProject2DCharacter>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Project2D_Source_Project2D_Project2DCharacter_h


#define FOREACH_ENUM_CHARACTERSTATE(op) \
	op(Idle) \
	op(Walking) \
	op(Running) \
	op(Jumping) \
	op(Falling) \
	op(LookingUp) \
	op(Crouch) \
	op(Dead) 
PRAGMA_ENABLE_DEPRECATION_WARNINGS
