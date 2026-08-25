// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FMODAmbientSoundActorFactory.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeFMODAmbientSoundActorFactory() {}

// ********** Begin Cross Module References ********************************************************
FMODSTUDIOEDITOR_API UClass* Z_Construct_UClass_UFMODAmbientSoundActorFactory();
FMODSTUDIOEDITOR_API UClass* Z_Construct_UClass_UFMODAmbientSoundActorFactory_NoRegister();
UNREALED_API UClass* Z_Construct_UClass_UActorFactory();
UPackage* Z_Construct_UPackage__Script_FMODStudioEditor();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UFMODAmbientSoundActorFactory ********************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UFMODAmbientSoundActorFactory;
UClass* UFMODAmbientSoundActorFactory::GetPrivateStaticClass()
{
	using TClass = UFMODAmbientSoundActorFactory;
	if (!Z_Registration_Info_UClass_UFMODAmbientSoundActorFactory.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("FMODAmbientSoundActorFactory"),
			Z_Registration_Info_UClass_UFMODAmbientSoundActorFactory.InnerSingleton,
			StaticRegisterNativesUFMODAmbientSoundActorFactory,
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
	return Z_Registration_Info_UClass_UFMODAmbientSoundActorFactory.InnerSingleton;
}
UClass* Z_Construct_UClass_UFMODAmbientSoundActorFactory_NoRegister()
{
	return UFMODAmbientSoundActorFactory::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UFMODAmbientSoundActorFactory_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/** FMOD Ambient Sound Actor Factory.\n*/" },
		{ "HideCategories", "Object Object" },
		{ "IncludePath", "FMODAmbientSoundActorFactory.h" },
		{ "ModuleRelativePath", "Classes/FMODAmbientSoundActorFactory.h" },
		{ "ToolTip", "FMOD Ambient Sound Actor Factory." },
	};
#endif // WITH_METADATA

// ********** Begin Class UFMODAmbientSoundActorFactory constinit property declarations ************
// ********** End Class UFMODAmbientSoundActorFactory constinit property declarations **************
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFMODAmbientSoundActorFactory>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UFMODAmbientSoundActorFactory_Statics
UObject* (*const Z_Construct_UClass_UFMODAmbientSoundActorFactory_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UActorFactory,
	(UObject* (*)())Z_Construct_UPackage__Script_FMODStudioEditor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UFMODAmbientSoundActorFactory_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UFMODAmbientSoundActorFactory_Statics::ClassParams = {
	&UFMODAmbientSoundActorFactory::StaticClass,
	"Editor",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x000830ACu,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UFMODAmbientSoundActorFactory_Statics::Class_MetaDataParams), Z_Construct_UClass_UFMODAmbientSoundActorFactory_Statics::Class_MetaDataParams)
};
void UFMODAmbientSoundActorFactory::StaticRegisterNativesUFMODAmbientSoundActorFactory()
{
}
UClass* Z_Construct_UClass_UFMODAmbientSoundActorFactory()
{
	if (!Z_Registration_Info_UClass_UFMODAmbientSoundActorFactory.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UFMODAmbientSoundActorFactory.OuterSingleton, Z_Construct_UClass_UFMODAmbientSoundActorFactory_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UFMODAmbientSoundActorFactory.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UFMODAmbientSoundActorFactory);
UFMODAmbientSoundActorFactory::~UFMODAmbientSoundActorFactory() {}
// ********** End Class UFMODAmbientSoundActorFactory **********************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_BuildAgent1_work_c1c3f17eb167c494_build_staging_FMODStudio_HostProject_Plugins_FMODStudio_Source_FMODStudioEditor_Classes_FMODAmbientSoundActorFactory_h__Script_FMODStudioEditor_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UFMODAmbientSoundActorFactory, UFMODAmbientSoundActorFactory::StaticClass, TEXT("UFMODAmbientSoundActorFactory"), &Z_Registration_Info_UClass_UFMODAmbientSoundActorFactory, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UFMODAmbientSoundActorFactory), 347158878U) },
	};
}; // Z_CompiledInDeferFile_FID_BuildAgent1_work_c1c3f17eb167c494_build_staging_FMODStudio_HostProject_Plugins_FMODStudio_Source_FMODStudioEditor_Classes_FMODAmbientSoundActorFactory_h__Script_FMODStudioEditor_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_BuildAgent1_work_c1c3f17eb167c494_build_staging_FMODStudio_HostProject_Plugins_FMODStudio_Source_FMODStudioEditor_Classes_FMODAmbientSoundActorFactory_h__Script_FMODStudioEditor_1259298035{
	TEXT("/Script/FMODStudioEditor"),
	Z_CompiledInDeferFile_FID_BuildAgent1_work_c1c3f17eb167c494_build_staging_FMODStudio_HostProject_Plugins_FMODStudio_Source_FMODStudioEditor_Classes_FMODAmbientSoundActorFactory_h__Script_FMODStudioEditor_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_BuildAgent1_work_c1c3f17eb167c494_build_staging_FMODStudio_HostProject_Plugins_FMODStudio_Source_FMODStudioEditor_Classes_FMODAmbientSoundActorFactory_h__Script_FMODStudioEditor_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
