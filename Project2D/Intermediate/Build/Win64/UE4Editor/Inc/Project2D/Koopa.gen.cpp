// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Project2D/Koopa.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeKoopa() {}
// Cross Module References
	PROJECT2D_API UEnum* Z_Construct_UEnum_Project2D_KoopaType();
	UPackage* Z_Construct_UPackage__Script_Project2D();
	PROJECT2D_API UEnum* Z_Construct_UEnum_Project2D_KoopaState();
	PROJECT2D_API UClass* Z_Construct_UClass_AKoopa_NoRegister();
	PROJECT2D_API UClass* Z_Construct_UClass_AKoopa();
	ENGINE_API UClass* Z_Construct_UClass_APawn();
	PAPER2D_API UClass* Z_Construct_UClass_UPaperFlipbook_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UBoxComponent_NoRegister();
	PAPER2D_API UClass* Z_Construct_UClass_UPaperFlipbookComponent_NoRegister();
// End Cross Module References
	static UEnum* KoopaType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Project2D_KoopaType, Z_Construct_UPackage__Script_Project2D(), TEXT("KoopaType"));
		}
		return Singleton;
	}
	template<> PROJECT2D_API UEnum* StaticEnum<KoopaType>()
	{
		return KoopaType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_KoopaType(KoopaType_StaticEnum, TEXT("/Script/Project2D"), TEXT("KoopaType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Project2D_KoopaType_Hash() { return 2488767372U; }
	UEnum* Z_Construct_UEnum_Project2D_KoopaType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Project2D();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("KoopaType"), 0, Get_Z_Construct_UEnum_Project2D_KoopaType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "KoopaType::Red", (int64)KoopaType::Red },
				{ "KoopaType::Green", (int64)KoopaType::Green },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "Green.DisplayName", "Green" },
				{ "Green.Name", "KoopaType::Green" },
				{ "ModuleRelativePath", "Koopa.h" },
				{ "Red.DisplayName", "Red" },
				{ "Red.Name", "KoopaType::Red" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Project2D,
				nullptr,
				"KoopaType",
				"KoopaType",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::EnumClass,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	static UEnum* KoopaState_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Project2D_KoopaState, Z_Construct_UPackage__Script_Project2D(), TEXT("KoopaState"));
		}
		return Singleton;
	}
	template<> PROJECT2D_API UEnum* StaticEnum<KoopaState>()
	{
		return KoopaState_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_KoopaState(KoopaState_StaticEnum, TEXT("/Script/Project2D"), TEXT("KoopaState"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Project2D_KoopaState_Hash() { return 2412002974U; }
	UEnum* Z_Construct_UEnum_Project2D_KoopaState()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Project2D();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("KoopaState"), 0, Get_Z_Construct_UEnum_Project2D_KoopaState_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "KoopaState::Walking", (int64)KoopaState::Walking },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "ModuleRelativePath", "Koopa.h" },
				{ "Walking.DisplayName", "Walking" },
				{ "Walking.Name", "KoopaState::Walking" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Project2D,
				nullptr,
				"KoopaState",
				"KoopaState",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::EnumClass,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	void AKoopa::StaticRegisterNativesAKoopa()
	{
	}
	UClass* Z_Construct_UClass_AKoopa_NoRegister()
	{
		return AKoopa::StaticClass();
	}
	struct Z_Construct_UClass_AKoopa_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_isGoingRight_MetaData[];
#endif
		static void NewProp_isGoingRight_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_isGoingRight;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WalkingAnimation_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WalkingAnimation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_state_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_state;
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_state_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Collision_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Collision;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Sprite_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Sprite;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AKoopa_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APawn,
		(UObject* (*)())Z_Construct_UPackage__Script_Project2D,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AKoopa_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "Koopa.h" },
		{ "ModuleRelativePath", "Koopa.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AKoopa_Statics::NewProp_isGoingRight_MetaData[] = {
		{ "Category", "Direction" },
		{ "ModuleRelativePath", "Koopa.h" },
	};
#endif
	void Z_Construct_UClass_AKoopa_Statics::NewProp_isGoingRight_SetBit(void* Obj)
	{
		((AKoopa*)Obj)->isGoingRight = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AKoopa_Statics::NewProp_isGoingRight = { "isGoingRight", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AKoopa), &Z_Construct_UClass_AKoopa_Statics::NewProp_isGoingRight_SetBit, METADATA_PARAMS(Z_Construct_UClass_AKoopa_Statics::NewProp_isGoingRight_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AKoopa_Statics::NewProp_isGoingRight_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AKoopa_Statics::NewProp_WalkingAnimation_MetaData[] = {
		{ "Category", "Animations" },
		{ "Comment", "// The animation to play while idle (standing still)\n" },
		{ "ModuleRelativePath", "Koopa.h" },
		{ "ToolTip", "The animation to play while idle (standing still)" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AKoopa_Statics::NewProp_WalkingAnimation = { "WalkingAnimation", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AKoopa, WalkingAnimation), Z_Construct_UClass_UPaperFlipbook_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AKoopa_Statics::NewProp_WalkingAnimation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AKoopa_Statics::NewProp_WalkingAnimation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AKoopa_Statics::NewProp_state_MetaData[] = {
		{ "Category", "State" },
		{ "ModuleRelativePath", "Koopa.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_AKoopa_Statics::NewProp_state = { "state", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AKoopa, state), Z_Construct_UEnum_Project2D_KoopaState, METADATA_PARAMS(Z_Construct_UClass_AKoopa_Statics::NewProp_state_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AKoopa_Statics::NewProp_state_MetaData)) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_AKoopa_Statics::NewProp_state_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AKoopa_Statics::NewProp_Collision_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Character" },
		{ "Comment", "/** The main skeletal mesh associated with this Character (optional sub-object). */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Koopa.h" },
		{ "ToolTip", "The main skeletal mesh associated with this Character (optional sub-object)." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AKoopa_Statics::NewProp_Collision = { "Collision", nullptr, (EPropertyFlags)0x00400000000a001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AKoopa, Collision), Z_Construct_UClass_UBoxComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AKoopa_Statics::NewProp_Collision_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AKoopa_Statics::NewProp_Collision_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AKoopa_Statics::NewProp_Sprite_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Character" },
		{ "Comment", "/** The main skeletal mesh associated with this Character (optional sub-object). */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Koopa.h" },
		{ "ToolTip", "The main skeletal mesh associated with this Character (optional sub-object)." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AKoopa_Statics::NewProp_Sprite = { "Sprite", nullptr, (EPropertyFlags)0x00400000000a001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AKoopa, Sprite), Z_Construct_UClass_UPaperFlipbookComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AKoopa_Statics::NewProp_Sprite_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AKoopa_Statics::NewProp_Sprite_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AKoopa_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AKoopa_Statics::NewProp_isGoingRight,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AKoopa_Statics::NewProp_WalkingAnimation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AKoopa_Statics::NewProp_state,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AKoopa_Statics::NewProp_state_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AKoopa_Statics::NewProp_Collision,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AKoopa_Statics::NewProp_Sprite,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AKoopa_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AKoopa>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AKoopa_Statics::ClassParams = {
		&AKoopa::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AKoopa_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AKoopa_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AKoopa_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AKoopa_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AKoopa()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AKoopa_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AKoopa, 2625418621);
	template<> PROJECT2D_API UClass* StaticClass<AKoopa>()
	{
		return AKoopa::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AKoopa(Z_Construct_UClass_AKoopa, &AKoopa::StaticClass, TEXT("/Script/Project2D"), TEXT("AKoopa"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AKoopa);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
