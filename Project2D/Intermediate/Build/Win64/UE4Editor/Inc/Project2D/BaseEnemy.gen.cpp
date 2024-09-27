// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Project2D/BaseEnemy.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBaseEnemy() {}
// Cross Module References
	PROJECT2D_API UClass* Z_Construct_UClass_ABaseEnemy_NoRegister();
	PROJECT2D_API UClass* Z_Construct_UClass_ABaseEnemy();
	ENGINE_API UClass* Z_Construct_UClass_APawn();
	UPackage* Z_Construct_UPackage__Script_Project2D();
// End Cross Module References
	void ABaseEnemy::StaticRegisterNativesABaseEnemy()
	{
	}
	UClass* Z_Construct_UClass_ABaseEnemy_NoRegister()
	{
		return ABaseEnemy::StaticClass();
	}
	struct Z_Construct_UClass_ABaseEnemy_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ABaseEnemy_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APawn,
		(UObject* (*)())Z_Construct_UPackage__Script_Project2D,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABaseEnemy_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "BaseEnemy.h" },
		{ "ModuleRelativePath", "BaseEnemy.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ABaseEnemy_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABaseEnemy>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ABaseEnemy_Statics::ClassParams = {
		&ABaseEnemy::StaticClass,
		"Game",
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
		METADATA_PARAMS(Z_Construct_UClass_ABaseEnemy_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ABaseEnemy_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ABaseEnemy()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ABaseEnemy_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ABaseEnemy, 182206697);
	template<> PROJECT2D_API UClass* StaticClass<ABaseEnemy>()
	{
		return ABaseEnemy::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ABaseEnemy(Z_Construct_UClass_ABaseEnemy, &ABaseEnemy::StaticClass, TEXT("/Script/Project2D"), TEXT("ABaseEnemy"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ABaseEnemy);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
