// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FMODStudio/Classes/FMODAmbientSound.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFMODAmbientSound() {}
// Cross Module References
	FMODSTUDIO_API UClass* Z_Construct_UClass_AFMODAmbientSound_NoRegister();
	FMODSTUDIO_API UClass* Z_Construct_UClass_AFMODAmbientSound();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_FMODStudio();
	FMODSTUDIO_API UClass* Z_Construct_UClass_UFMODAudioComponent_NoRegister();
// End Cross Module References
	void AFMODAmbientSound::StaticRegisterNativesAFMODAmbientSound()
	{
	}
	UClass* Z_Construct_UClass_AFMODAmbientSound_NoRegister()
	{
		return AFMODAmbientSound::StaticClass();
	}
	struct Z_Construct_UClass_AFMODAmbientSound_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AudioComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AudioComponent;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AFMODAmbientSound_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_FMODStudio,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFMODAmbientSound_Statics::Class_MetaDataParams[] = {
		{ "AutoExpandCategories", "Audio" },
		{ "ClassGroupNames", "Sounds" },
		{ "HideCategories", "Collision Input" },
		{ "IncludePath", "FMODAmbientSound.h" },
		{ "ModuleRelativePath", "Classes/FMODAmbientSound.h" },
		{ "ToolTip", "FMOD Ambient Sound." },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFMODAmbientSound_Statics::NewProp_AudioComponent_MetaData[] = {
		{ "Category", "Sound" },
		{ "EditInline", "true" },
		{ "ExposeFunctionCategories", "Sound" },
		{ "ModuleRelativePath", "Classes/FMODAmbientSound.h" },
		{ "ToolTip", "The Audio component for this actor" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFMODAmbientSound_Statics::NewProp_AudioComponent = { UE4CodeGen_Private::EPropertyClass::Object, "AudioComponent", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x00100000000a001d, 1, nullptr, STRUCT_OFFSET(AFMODAmbientSound, AudioComponent), Z_Construct_UClass_UFMODAudioComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AFMODAmbientSound_Statics::NewProp_AudioComponent_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFMODAmbientSound_Statics::NewProp_AudioComponent_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AFMODAmbientSound_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFMODAmbientSound_Statics::NewProp_AudioComponent,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AFMODAmbientSound_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AFMODAmbientSound>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AFMODAmbientSound_Statics::ClassParams = {
		&AFMODAmbientSound::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x009000A0u,
		nullptr, 0,
		Z_Construct_UClass_AFMODAmbientSound_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UClass_AFMODAmbientSound_Statics::PropPointers),
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_AFMODAmbientSound_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_AFMODAmbientSound_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AFMODAmbientSound()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AFMODAmbientSound_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AFMODAmbientSound, 2571722290);
	static FCompiledInDefer Z_CompiledInDefer_UClass_AFMODAmbientSound(Z_Construct_UClass_AFMODAmbientSound, &AFMODAmbientSound::StaticClass, TEXT("/Script/FMODStudio"), TEXT("AFMODAmbientSound"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AFMODAmbientSound);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
