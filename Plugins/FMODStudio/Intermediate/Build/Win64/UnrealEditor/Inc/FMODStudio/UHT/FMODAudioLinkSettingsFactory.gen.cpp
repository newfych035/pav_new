// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FMODAudioLinkSettingsFactory.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeFMODAudioLinkSettingsFactory() {}

// ********** Begin Cross Module References ********************************************************
FMODSTUDIO_API UClass* Z_Construct_UClass_UFMODAudioLinkSettingsFactory();
FMODSTUDIO_API UClass* Z_Construct_UClass_UFMODAudioLinkSettingsFactory_NoRegister();
UNREALED_API UClass* Z_Construct_UClass_UFactory();
UPackage* Z_Construct_UPackage__Script_FMODStudio();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UFMODAudioLinkSettingsFactory ********************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UFMODAudioLinkSettingsFactory;
UClass* UFMODAudioLinkSettingsFactory::GetPrivateStaticClass()
{
	using TClass = UFMODAudioLinkSettingsFactory;
	if (!Z_Registration_Info_UClass_UFMODAudioLinkSettingsFactory.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("FMODAudioLinkSettingsFactory"),
			Z_Registration_Info_UClass_UFMODAudioLinkSettingsFactory.InnerSingleton,
			StaticRegisterNativesUFMODAudioLinkSettingsFactory,
			sizeof(TClass),
			alignof(TClass),
			TClass::StaticClassFlags,
			TClass::StaticClassCastFlags(),
			TClass::StaticConfigName(),
			(UClass::ClassConstructorType)InternalConstructor<TClass>,
			(UClass::ClassVTableHelperCtorCallerType)InternalVTableHelperCtorCaller<TClass>,
			UOBJECT_CPPCLASS_STATICFUNCTIONS_FORCLASS(TClass),
			&TClass::Super::StaticClass,
			&TClass::WithinClass::StaticClass
		);
	}
	return Z_Registration_Info_UClass_UFMODAudioLinkSettingsFactory.InnerSingleton;
}
UClass* Z_Construct_UClass_UFMODAudioLinkSettingsFactory_NoRegister()
{
	return UFMODAudioLinkSettingsFactory::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UFMODAudioLinkSettingsFactory_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Object" },
		{ "IncludePath", "" },
		{ "ModuleRelativePath", "" },
	};
#endif // WITH_METADATA

// ********** Begin Class UFMODAudioLinkSettingsFactory constinit property declarations ************
// ********** End Class UFMODAudioLinkSettingsFactory constinit property declarations **************
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFMODAudioLinkSettingsFactory>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UFMODAudioLinkSettingsFactory_Statics
UObject* (*const Z_Construct_UClass_UFMODAudioLinkSettingsFactory_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UFactory,
	(UObject* (*)())Z_Construct_UPackage__Script_FMODStudio,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UFMODAudioLinkSettingsFactory_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UFMODAudioLinkSettingsFactory_Statics::ClassParams = {
	&UFMODAudioLinkSettingsFactory::StaticClass,
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
	0x000800A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UFMODAudioLinkSettingsFactory_Statics::Class_MetaDataParams), Z_Construct_UClass_UFMODAudioLinkSettingsFactory_Statics::Class_MetaDataParams)
};
void UFMODAudioLinkSettingsFactory::StaticRegisterNativesUFMODAudioLinkSettingsFactory()
{
}
UClass* Z_Construct_UClass_UFMODAudioLinkSettingsFactory()
{
	if (!Z_Registration_Info_UClass_UFMODAudioLinkSettingsFactory.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UFMODAudioLinkSettingsFactory.OuterSingleton, Z_Construct_UClass_UFMODAudioLinkSettingsFactory_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UFMODAudioLinkSettingsFactory.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UFMODAudioLinkSettingsFactory);
UFMODAudioLinkSettingsFactory::~UFMODAudioLinkSettingsFactory() {}
// ********** End Class UFMODAudioLinkSettingsFactory **********************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_BuildAgent1_work_c1c3f17eb167c494_build_staging_FMODStudio_HostProject_Plugins_FMODStudio_Source_FMODAudioLinkEditor_Private_FMODAudioLinkSettingsFactory_h__Script_FMODStudio_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UFMODAudioLinkSettingsFactory, UFMODAudioLinkSettingsFactory::StaticClass, TEXT("UFMODAudioLinkSettingsFactory"), &Z_Registration_Info_UClass_UFMODAudioLinkSettingsFactory, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UFMODAudioLinkSettingsFactory), 3111906120U) },
	};
}; // Z_CompiledInDeferFile_FID_BuildAgent1_work_c1c3f17eb167c494_build_staging_FMODStudio_HostProject_Plugins_FMODStudio_Source_FMODAudioLinkEditor_Private_FMODAudioLinkSettingsFactory_h__Script_FMODStudio_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_BuildAgent1_work_c1c3f17eb167c494_build_staging_FMODStudio_HostProject_Plugins_FMODStudio_Source_FMODAudioLinkEditor_Private_FMODAudioLinkSettingsFactory_h__Script_FMODStudio_2732808146{
	TEXT("/Script/FMODStudio"),
	Z_CompiledInDeferFile_FID_BuildAgent1_work_c1c3f17eb167c494_build_staging_FMODStudio_HostProject_Plugins_FMODStudio_Source_FMODAudioLinkEditor_Private_FMODAudioLinkSettingsFactory_h__Script_FMODStudio_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_BuildAgent1_work_c1c3f17eb167c494_build_staging_FMODStudio_HostProject_Plugins_FMODStudio_Source_FMODAudioLinkEditor_Private_FMODAudioLinkSettingsFactory_h__Script_FMODStudio_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
