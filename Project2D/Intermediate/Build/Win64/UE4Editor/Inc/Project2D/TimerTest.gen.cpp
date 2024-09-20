// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Project2D/CPPTuto/TimerTest.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTimerTest() {}
// Cross Module References
	PROJECT2D_API UClass* Z_Construct_UClass_ATimerTest_NoRegister();
	PROJECT2D_API UClass* Z_Construct_UClass_ATimerTest();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_Project2D();
// End Cross Module References
	void ATimerTest::StaticRegisterNativesATimerTest()
	{
	}
	UClass* Z_Construct_UClass_ATimerTest_NoRegister()
	{
		return ATimerTest::StaticClass();
	}
	struct Z_Construct_UClass_ATimerTest_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ATimerTest_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Project2D,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATimerTest_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "CPPTuto/TimerTest.h" },
		{ "ModuleRelativePath", "CPPTuto/TimerTest.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ATimerTest_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ATimerTest>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ATimerTest_Statics::ClassParams = {
		&ATimerTest::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_ATimerTest_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ATimerTest_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ATimerTest()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ATimerTest_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ATimerTest, 4190343790);
	template<> PROJECT2D_API UClass* StaticClass<ATimerTest>()
	{
		return ATimerTest::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ATimerTest(Z_Construct_UClass_ATimerTest, &ATimerTest::StaticClass, TEXT("/Script/Project2D"), TEXT("ATimerTest"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ATimerTest);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
