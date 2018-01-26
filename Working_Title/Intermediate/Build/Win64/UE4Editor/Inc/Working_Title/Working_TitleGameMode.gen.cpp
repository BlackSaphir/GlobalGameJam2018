// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Working_TitleGameMode.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWorking_TitleGameMode() {}
// Cross Module References
	WORKING_TITLE_API UClass* Z_Construct_UClass_AWorking_TitleGameMode_NoRegister();
	WORKING_TITLE_API UClass* Z_Construct_UClass_AWorking_TitleGameMode();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_Working_Title();
// End Cross Module References
	void AWorking_TitleGameMode::StaticRegisterNativesAWorking_TitleGameMode()
	{
	}
	UClass* Z_Construct_UClass_AWorking_TitleGameMode_NoRegister()
	{
		return AWorking_TitleGameMode::StaticClass();
	}
	UClass* Z_Construct_UClass_AWorking_TitleGameMode()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_AGameModeBase,
				(UObject* (*)())Z_Construct_UPackage__Script_Working_Title,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
				{ "IncludePath", "Working_TitleGameMode.h" },
				{ "ModuleRelativePath", "Working_TitleGameMode.h" },
				{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
			};
#endif
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<AWorking_TitleGameMode>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&AWorking_TitleGameMode::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00880288u,
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
	IMPLEMENT_CLASS(AWorking_TitleGameMode, 690593175);
	static FCompiledInDefer Z_CompiledInDefer_UClass_AWorking_TitleGameMode(Z_Construct_UClass_AWorking_TitleGameMode, &AWorking_TitleGameMode::StaticClass, TEXT("/Script/Working_Title"), TEXT("AWorking_TitleGameMode"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AWorking_TitleGameMode);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
