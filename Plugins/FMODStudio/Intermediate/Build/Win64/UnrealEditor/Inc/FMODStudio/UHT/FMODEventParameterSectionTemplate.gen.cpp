// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Sequencer/FMODEventParameterSectionTemplate.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeFMODEventParameterSectionTemplate() {}

// ********** Begin Cross Module References ********************************************************
FMODSTUDIO_API UScriptStruct* Z_Construct_UScriptStruct_FFMODEventParameterSectionTemplate();
MOVIESCENETRACKS_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneParameterSectionTemplate();
UPackage* Z_Construct_UPackage__Script_FMODStudio();
// ********** End Cross Module References **********************************************************

// ********** Begin ScriptStruct FFMODEventParameterSectionTemplate ********************************
struct Z_Construct_UScriptStruct_FFMODEventParameterSectionTemplate_Statics
{
	static inline consteval int32 GetStructSize() { return sizeof(FFMODEventParameterSectionTemplate); }
	static inline consteval int16 GetStructAlignment() { return alignof(FFMODEventParameterSectionTemplate); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/Sequencer/FMODEventParameterSectionTemplate.h" },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FFMODEventParameterSectionTemplate constinit property declarations 
// ********** End ScriptStruct FFMODEventParameterSectionTemplate constinit property declarations **
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FFMODEventParameterSectionTemplate>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct Z_Construct_UScriptStruct_FFMODEventParameterSectionTemplate_Statics
static_assert(std::is_polymorphic<FFMODEventParameterSectionTemplate>() == std::is_polymorphic<FMovieSceneParameterSectionTemplate>(), "USTRUCT FFMODEventParameterSectionTemplate cannot be polymorphic unless super FMovieSceneParameterSectionTemplate is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FFMODEventParameterSectionTemplate;
class UScriptStruct* FFMODEventParameterSectionTemplate::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FFMODEventParameterSectionTemplate.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FFMODEventParameterSectionTemplate.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FFMODEventParameterSectionTemplate, (UObject*)Z_Construct_UPackage__Script_FMODStudio(), TEXT("FMODEventParameterSectionTemplate"));
	}
	return Z_Registration_Info_UScriptStruct_FFMODEventParameterSectionTemplate.OuterSingleton;
	}
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FFMODEventParameterSectionTemplate_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_FMODStudio,
	Z_Construct_UScriptStruct_FMovieSceneParameterSectionTemplate,
	&NewStructOps,
	"FMODEventParameterSectionTemplate",
	nullptr,
	0,
	sizeof(FFMODEventParameterSectionTemplate),
	alignof(FFMODEventParameterSectionTemplate),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000005),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFMODEventParameterSectionTemplate_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FFMODEventParameterSectionTemplate_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FFMODEventParameterSectionTemplate()
{
	if (!Z_Registration_Info_UScriptStruct_FFMODEventParameterSectionTemplate.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FFMODEventParameterSectionTemplate.InnerSingleton, Z_Construct_UScriptStruct_FFMODEventParameterSectionTemplate_Statics::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FFMODEventParameterSectionTemplate.InnerSingleton);
}
// ********** End ScriptStruct FFMODEventParameterSectionTemplate **********************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_BuildAgent1_work_c1c3f17eb167c494_build_staging_FMODStudio_HostProject_Plugins_FMODStudio_Source_FMODStudio_Private_Sequencer_FMODEventParameterSectionTemplate_h__Script_FMODStudio_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FFMODEventParameterSectionTemplate::StaticStruct, Z_Construct_UScriptStruct_FFMODEventParameterSectionTemplate_Statics::NewStructOps, TEXT("FMODEventParameterSectionTemplate"),&Z_Registration_Info_UScriptStruct_FFMODEventParameterSectionTemplate, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FFMODEventParameterSectionTemplate), 662316324U) },
	};
}; // Z_CompiledInDeferFile_FID_BuildAgent1_work_c1c3f17eb167c494_build_staging_FMODStudio_HostProject_Plugins_FMODStudio_Source_FMODStudio_Private_Sequencer_FMODEventParameterSectionTemplate_h__Script_FMODStudio_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_BuildAgent1_work_c1c3f17eb167c494_build_staging_FMODStudio_HostProject_Plugins_FMODStudio_Source_FMODStudio_Private_Sequencer_FMODEventParameterSectionTemplate_h__Script_FMODStudio_4131285740{
	TEXT("/Script/FMODStudio"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_BuildAgent1_work_c1c3f17eb167c494_build_staging_FMODStudio_HostProject_Plugins_FMODStudio_Source_FMODStudio_Private_Sequencer_FMODEventParameterSectionTemplate_h__Script_FMODStudio_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_BuildAgent1_work_c1c3f17eb167c494_build_staging_FMODStudio_HostProject_Plugins_FMODStudio_Source_FMODStudio_Private_Sequencer_FMODEventParameterSectionTemplate_h__Script_FMODStudio_Statics::ScriptStructInfo),
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
