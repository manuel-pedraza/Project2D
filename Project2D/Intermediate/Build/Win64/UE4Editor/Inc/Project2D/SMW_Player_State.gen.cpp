// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Project2D/SMW_Player_State.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSMW_Player_State() {}
// Cross Module References
	PROJECT2D_API UClass* Z_Construct_UClass_ASMW_Player_State_NoRegister();
	PROJECT2D_API UClass* Z_Construct_UClass_ASMW_Player_State();
	ENGINE_API UClass* Z_Construct_UClass_APlayerState();
	UPackage* Z_Construct_UPackage__Script_Project2D();
// End Cross Module References
	void ASMW_Player_State::StaticRegisterNativesASMW_Player_State()
	{
	}
	UClass* Z_Construct_UClass_ASMW_Player_State_NoRegister()
	{
		return ASMW_Player_State::StaticClass();
	}
	struct Z_Construct_UClass_ASMW_Player_State_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ASMW_Player_State_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APlayerState,
		(UObject* (*)())Z_Construct_UPackage__Script_Project2D,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASMW_Player_State_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "SMW_Player_State.h" },
		{ "ModuleRelativePath", "SMW_Player_State.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ASMW_Player_State_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASMW_Player_State>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ASMW_Player_State_Statics::ClassParams = {
		&ASMW_Player_State::StaticClass,
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
		0x009002A4u,
		METADATA_PARAMS(Z_Construct_UClass_ASMW_Player_State_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ASMW_Player_State_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ASMW_Player_State()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ASMW_Player_State_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ASMW_Player_State, 448988207);
	template<> PROJECT2D_API UClass* StaticClass<ASMW_Player_State>()
	{
		return ASMW_Player_State::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ASMW_Player_State(Z_Construct_UClass_ASMW_Player_State, &ASMW_Player_State::StaticClass, TEXT("/Script/Project2D"), TEXT("ASMW_Player_State"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ASMW_Player_State);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
