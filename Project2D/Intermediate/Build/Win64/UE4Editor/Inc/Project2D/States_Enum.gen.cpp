// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Project2D/States_Enum.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeStates_Enum() {}
// Cross Module References
	PROJECT2D_API UClass* Z_Construct_UClass_UStates_Enum_NoRegister();
	PROJECT2D_API UClass* Z_Construct_UClass_UStates_Enum();
	ENGINE_API UClass* Z_Construct_UClass_UUserDefinedEnum();
	UPackage* Z_Construct_UPackage__Script_Project2D();
// End Cross Module References
	void UStates_Enum::StaticRegisterNativesUStates_Enum()
	{
	}
	UClass* Z_Construct_UClass_UStates_Enum_NoRegister()
	{
		return UStates_Enum::StaticClass();
	}
	struct Z_Construct_UClass_UStates_Enum_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UStates_Enum_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUserDefinedEnum,
		(UObject* (*)())Z_Construct_UPackage__Script_Project2D,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStates_Enum_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "States_Enum.h" },
		{ "ModuleRelativePath", "States_Enum.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UStates_Enum_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UStates_Enum>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UStates_Enum_Statics::ClassParams = {
		&UStates_Enum::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UStates_Enum_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UStates_Enum_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UStates_Enum()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UStates_Enum_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UStates_Enum, 3157430793);
	template<> PROJECT2D_API UClass* StaticClass<UStates_Enum>()
	{
		return UStates_Enum::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UStates_Enum(Z_Construct_UClass_UStates_Enum, &UStates_Enum::StaticClass, TEXT("/Script/Project2D"), TEXT("UStates_Enum"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UStates_Enum);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
