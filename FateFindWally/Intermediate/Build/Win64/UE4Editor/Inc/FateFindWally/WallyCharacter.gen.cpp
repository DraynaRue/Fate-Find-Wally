// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FateFindWally/WallyCharacter.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWallyCharacter() {}
// Cross Module References
	FATEFINDWALLY_API UClass* Z_Construct_UClass_AWallyCharacter_NoRegister();
	FATEFINDWALLY_API UClass* Z_Construct_UClass_AWallyCharacter();
	ENGINE_API UClass* Z_Construct_UClass_ACharacter();
	UPackage* Z_Construct_UPackage__Script_FateFindWally();
	ENGINE_API UClass* Z_Construct_UClass_UBoxComponent_NoRegister();
// End Cross Module References
	void AWallyCharacter::StaticRegisterNativesAWallyCharacter()
	{
	}
	UClass* Z_Construct_UClass_AWallyCharacter_NoRegister()
	{
		return AWallyCharacter::StaticClass();
	}
	struct Z_Construct_UClass_AWallyCharacter_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SpawnLocations_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_SpawnLocations;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SpawnLocations_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AWallyCharacter_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_FateFindWally,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWallyCharacter_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "WallyCharacter.h" },
		{ "ModuleRelativePath", "WallyCharacter.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWallyCharacter_Statics::NewProp_SpawnLocations_MetaData[] = {
		{ "Category", "Gameplay" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "WallyCharacter.h" },
		{ "ToolTip", "Spawn locations" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AWallyCharacter_Statics::NewProp_SpawnLocations = { UE4CodeGen_Private::EPropertyClass::Array, "SpawnLocations", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x001000800000000d, 1, nullptr, STRUCT_OFFSET(AWallyCharacter, SpawnLocations), METADATA_PARAMS(Z_Construct_UClass_AWallyCharacter_Statics::NewProp_SpawnLocations_MetaData, ARRAY_COUNT(Z_Construct_UClass_AWallyCharacter_Statics::NewProp_SpawnLocations_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AWallyCharacter_Statics::NewProp_SpawnLocations_Inner = { UE4CodeGen_Private::EPropertyClass::Object, "SpawnLocations", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000080008, 1, nullptr, 0, Z_Construct_UClass_UBoxComponent_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AWallyCharacter_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWallyCharacter_Statics::NewProp_SpawnLocations,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWallyCharacter_Statics::NewProp_SpawnLocations_Inner,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AWallyCharacter_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AWallyCharacter>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AWallyCharacter_Statics::ClassParams = {
		&AWallyCharacter::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x009000A0u,
		nullptr, 0,
		Z_Construct_UClass_AWallyCharacter_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UClass_AWallyCharacter_Statics::PropPointers),
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_AWallyCharacter_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_AWallyCharacter_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AWallyCharacter()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AWallyCharacter_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AWallyCharacter, 2529564240);
	static FCompiledInDefer Z_CompiledInDefer_UClass_AWallyCharacter(Z_Construct_UClass_AWallyCharacter, &AWallyCharacter::StaticClass, TEXT("/Script/FateFindWally"), TEXT("AWallyCharacter"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AWallyCharacter);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
