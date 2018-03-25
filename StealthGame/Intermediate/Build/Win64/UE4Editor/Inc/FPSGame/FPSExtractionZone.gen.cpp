// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Public/FPSExtractionZone.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFPSExtractionZone() {}
// Cross Module References
	FPSGAME_API UClass* Z_Construct_UClass_AFPSExtractionZone_NoRegister();
	FPSGAME_API UClass* Z_Construct_UClass_AFPSExtractionZone();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_FPSGame();
// End Cross Module References
	void AFPSExtractionZone::StaticRegisterNativesAFPSExtractionZone()
	{
	}
	UClass* Z_Construct_UClass_AFPSExtractionZone_NoRegister()
	{
		return AFPSExtractionZone::StaticClass();
	}
	UClass* Z_Construct_UClass_AFPSExtractionZone()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_AActor,
				(UObject* (*)())Z_Construct_UPackage__Script_FPSGame,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "IncludePath", "FPSExtractionZone.h" },
				{ "ModuleRelativePath", "Public/FPSExtractionZone.h" },
			};
#endif
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<AFPSExtractionZone>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&AFPSExtractionZone::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00900080u,
				nullptr, 0,
				nullptr, 0,
				nullptr,
				&StaticCppClassTypeInfo,
				nullptr, 0,
				METADATA_PARAMS(Class_MetaDataParams, ARRAY_COUNT(Class_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUClass(OuterClass, ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AFPSExtractionZone, 1520801750);
	static FCompiledInDefer Z_CompiledInDefer_UClass_AFPSExtractionZone(Z_Construct_UClass_AFPSExtractionZone, &AFPSExtractionZone::StaticClass, TEXT("/Script/FPSGame"), TEXT("AFPSExtractionZone"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AFPSExtractionZone);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
