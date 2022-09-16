// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ShooterCoreRuntime/Public/ShooterCoreRuntimeSettings.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeShooterCoreRuntimeSettings() {}
// Cross Module References
	SHOOTERCORERUNTIME_API UClass* Z_Construct_UClass_UShooterCoreRuntimeSettings_NoRegister();
	SHOOTERCORERUNTIME_API UClass* Z_Construct_UClass_UShooterCoreRuntimeSettings();
	DEVELOPERSETTINGS_API UClass* Z_Construct_UClass_UDeveloperSettings();
	UPackage* Z_Construct_UPackage__Script_ShooterCoreRuntime();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_ECollisionChannel();
// End Cross Module References
	void UShooterCoreRuntimeSettings::StaticRegisterNativesUShooterCoreRuntimeSettings()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UShooterCoreRuntimeSettings);
	UClass* Z_Construct_UClass_UShooterCoreRuntimeSettings_NoRegister()
	{
		return UShooterCoreRuntimeSettings::StaticClass();
	}
	struct Z_Construct_UClass_UShooterCoreRuntimeSettings_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AimAssistCollisionChannel_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_AimAssistCollisionChannel;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UShooterCoreRuntimeSettings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDeveloperSettings,
		(UObject* (*)())Z_Construct_UPackage__Script_ShooterCoreRuntime,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UShooterCoreRuntimeSettings_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/** Runtime settings specific to the ShooterCoreRuntime plugin */" },
		{ "IncludePath", "ShooterCoreRuntimeSettings.h" },
		{ "ModuleRelativePath", "Public/ShooterCoreRuntimeSettings.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "Runtime settings specific to the ShooterCoreRuntime plugin" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UShooterCoreRuntimeSettings_Statics::NewProp_AimAssistCollisionChannel_MetaData[] = {
		{ "Category", "Aim Assist" },
		{ "Comment", "/**\n\x09 * What trace channel should be used to find available targets for Aim Assist.\n\x09 * @see UAimAssistTargetManagerComponent::GetVisibleTargets\n\x09 */" },
		{ "ModuleRelativePath", "Public/ShooterCoreRuntimeSettings.h" },
		{ "ToolTip", "What trace channel should be used to find available targets for Aim Assist.\n@see UAimAssistTargetManagerComponent::GetVisibleTargets" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UShooterCoreRuntimeSettings_Statics::NewProp_AimAssistCollisionChannel = { "AimAssistCollisionChannel", nullptr, (EPropertyFlags)0x0040000000004001, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UShooterCoreRuntimeSettings, AimAssistCollisionChannel), Z_Construct_UEnum_Engine_ECollisionChannel, METADATA_PARAMS(Z_Construct_UClass_UShooterCoreRuntimeSettings_Statics::NewProp_AimAssistCollisionChannel_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UShooterCoreRuntimeSettings_Statics::NewProp_AimAssistCollisionChannel_MetaData)) }; // 727872708
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UShooterCoreRuntimeSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UShooterCoreRuntimeSettings_Statics::NewProp_AimAssistCollisionChannel,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UShooterCoreRuntimeSettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UShooterCoreRuntimeSettings>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UShooterCoreRuntimeSettings_Statics::ClassParams = {
		&UShooterCoreRuntimeSettings::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UShooterCoreRuntimeSettings_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UShooterCoreRuntimeSettings_Statics::PropPointers),
		0,
		0x000000A6u,
		METADATA_PARAMS(Z_Construct_UClass_UShooterCoreRuntimeSettings_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UShooterCoreRuntimeSettings_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UShooterCoreRuntimeSettings()
	{
		if (!Z_Registration_Info_UClass_UShooterCoreRuntimeSettings.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UShooterCoreRuntimeSettings.OuterSingleton, Z_Construct_UClass_UShooterCoreRuntimeSettings_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UShooterCoreRuntimeSettings.OuterSingleton;
	}
	template<> SHOOTERCORERUNTIME_API UClass* StaticClass<UShooterCoreRuntimeSettings>()
	{
		return UShooterCoreRuntimeSettings::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UShooterCoreRuntimeSettings);
	struct Z_CompiledInDeferFile_FID_Lyra_Inventory_Plugins_GameFeatures_ShooterCore_Source_ShooterCoreRuntime_Public_ShooterCoreRuntimeSettings_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Lyra_Inventory_Plugins_GameFeatures_ShooterCore_Source_ShooterCoreRuntime_Public_ShooterCoreRuntimeSettings_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UShooterCoreRuntimeSettings, UShooterCoreRuntimeSettings::StaticClass, TEXT("UShooterCoreRuntimeSettings"), &Z_Registration_Info_UClass_UShooterCoreRuntimeSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UShooterCoreRuntimeSettings), 808674870U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Lyra_Inventory_Plugins_GameFeatures_ShooterCore_Source_ShooterCoreRuntime_Public_ShooterCoreRuntimeSettings_h_387719029(TEXT("/Script/ShooterCoreRuntime"),
		Z_CompiledInDeferFile_FID_Lyra_Inventory_Plugins_GameFeatures_ShooterCore_Source_ShooterCoreRuntime_Public_ShooterCoreRuntimeSettings_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Lyra_Inventory_Plugins_GameFeatures_ShooterCore_Source_ShooterCoreRuntime_Public_ShooterCoreRuntimeSettings_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
