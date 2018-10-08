// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FateFindWally/FateFindWallyGameMode.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFateFindWallyGameMode() {}
// Cross Module References
	FATEFINDWALLY_API UClass* Z_Construct_UClass_AFateFindWallyGameMode_NoRegister();
	FATEFINDWALLY_API UClass* Z_Construct_UClass_AFateFindWallyGameMode();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_FateFindWally();
// End Cross Module References
	void AFateFindWallyGameMode::StaticRegisterNativesAFateFindWallyGameMode()
	{
	}
	UClass* Z_Construct_UClass_AFateFindWallyGameMode_NoRegister()
	{
		return AFateFindWallyGameMode::StaticClass();
	}
	struct Z_Construct_UClass_AFateFindWallyGameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AFateFindWallyGameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_FateFindWally,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFateFindWallyGameMode_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "FateFindWallyGameMode.h" },
		{ "ModuleRelativePath", "FateFindWallyGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AFateFindWallyGameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AFateFindWallyGameMode>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AFateFindWallyGameMode_Statics::ClassParams = {
		&AFateFindWallyGameMode::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x008802A8u,
		nullptr, 0,
		nullptr, 0,
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_AFateFindWallyGameMode_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_AFateFindWallyGameMode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AFateFindWallyGameMode()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AFateFindWallyGameMode_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AFateFindWallyGameMode, 982444331);
	static FCompiledInDefer Z_CompiledInDefer_UClass_AFateFindWallyGameMode(Z_Construct_UClass_AFateFindWallyGameMode, &AFateFindWallyGameMode::StaticClass, TEXT("/Script/FateFindWally"), TEXT("AFateFindWallyGameMode"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AFateFindWallyGameMode);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
