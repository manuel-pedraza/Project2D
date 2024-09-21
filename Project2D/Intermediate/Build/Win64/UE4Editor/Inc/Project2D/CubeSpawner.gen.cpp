// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Project2D/CPPTuto/CubeSpawner.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCubeSpawner() {}
// Cross Module References
	PROJECT2D_API UClass* Z_Construct_UClass_ACubeSpawner_NoRegister();
	PROJECT2D_API UClass* Z_Construct_UClass_ACubeSpawner();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_Project2D();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	PROJECT2D_API UClass* Z_Construct_UClass_APrintMessage_NoRegister();
// End Cross Module References
	void ACubeSpawner::StaticRegisterNativesACubeSpawner()
	{
	}
	UClass* Z_Construct_UClass_ACubeSpawner_NoRegister()
	{
		return ACubeSpawner::StaticClass();
	}
	struct Z_Construct_UClass_ACubeSpawner_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UCubic_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_UCubic;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ACubeSpawner_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Project2D,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACubeSpawner_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "CPPTuto/CubeSpawner.h" },
		{ "ModuleRelativePath", "CPPTuto/CubeSpawner.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACubeSpawner_Statics::NewProp_UCubic_MetaData[] = {
		{ "Category", "CubicBlueprint" },
		{ "Metaclass", "Cubic" },
		{ "ModuleRelativePath", "CPPTuto/CubeSpawner.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_ACubeSpawner_Statics::NewProp_UCubic = { "UCubic", nullptr, (EPropertyFlags)0x0014000000000001, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACubeSpawner, UCubic), Z_Construct_UClass_APrintMessage_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_ACubeSpawner_Statics::NewProp_UCubic_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACubeSpawner_Statics::NewProp_UCubic_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ACubeSpawner_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACubeSpawner_Statics::NewProp_UCubic,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ACubeSpawner_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ACubeSpawner>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ACubeSpawner_Statics::ClassParams = {
		&ACubeSpawner::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ACubeSpawner_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ACubeSpawner_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ACubeSpawner_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ACubeSpawner_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ACubeSpawner()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ACubeSpawner_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ACubeSpawner, 3413096941);
	template<> PROJECT2D_API UClass* StaticClass<ACubeSpawner>()
	{
		return ACubeSpawner::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ACubeSpawner(Z_Construct_UClass_ACubeSpawner, &ACubeSpawner::StaticClass, TEXT("/Script/Project2D"), TEXT("ACubeSpawner"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ACubeSpawner);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
