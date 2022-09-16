// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ShooterCoreRuntime/Public/Input/AimAssistTargetManagerComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAimAssistTargetManagerComponent() {}
// Cross Module References
	SHOOTERCORERUNTIME_API UClass* Z_Construct_UClass_UAimAssistTargetManagerComponent_NoRegister();
	SHOOTERCORERUNTIME_API UClass* Z_Construct_UClass_UAimAssistTargetManagerComponent();
	MODULARGAMEPLAY_API UClass* Z_Construct_UClass_UGameStateComponent();
	UPackage* Z_Construct_UPackage__Script_ShooterCoreRuntime();
// End Cross Module References
	void UAimAssistTargetManagerComponent::StaticRegisterNativesUAimAssistTargetManagerComponent()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAimAssistTargetManagerComponent);
	UClass* Z_Construct_UClass_UAimAssistTargetManagerComponent_NoRegister()
	{
		return UAimAssistTargetManagerComponent::StaticClass();
	}
	struct Z_Construct_UClass_UAimAssistTargetManagerComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAimAssistTargetManagerComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UGameStateComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_ShooterCoreRuntime,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAimAssistTargetManagerComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * The Aim Assist Target Manager Component is used to gather all aim assist targets that are within\n * a given player's view. Targets must implement the IAimAssistTargetInterface and be on the\n * collision channel that is set in the ShooterCoreRuntimeSettings. \n */" },
		{ "HideCategories", "Trigger PhysicsVolume" },
		{ "IncludePath", "Input/AimAssistTargetManagerComponent.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Input/AimAssistTargetManagerComponent.h" },
		{ "ToolTip", "The Aim Assist Target Manager Component is used to gather all aim assist targets that are within\na given player's view. Targets must implement the IAimAssistTargetInterface and be on the\ncollision channel that is set in the ShooterCoreRuntimeSettings." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAimAssistTargetManagerComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAimAssistTargetManagerComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAimAssistTargetManagerComponent_Statics::ClassParams = {
		&UAimAssistTargetManagerComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UAimAssistTargetManagerComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAimAssistTargetManagerComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAimAssistTargetManagerComponent()
	{
		if (!Z_Registration_Info_UClass_UAimAssistTargetManagerComponent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAimAssistTargetManagerComponent.OuterSingleton, Z_Construct_UClass_UAimAssistTargetManagerComponent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAimAssistTargetManagerComponent.OuterSingleton;
	}
	template<> SHOOTERCORERUNTIME_API UClass* StaticClass<UAimAssistTargetManagerComponent>()
	{
		return UAimAssistTargetManagerComponent::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAimAssistTargetManagerComponent);
	struct Z_CompiledInDeferFile_FID_Lyra_Inventory_Plugins_GameFeatures_ShooterCore_Source_ShooterCoreRuntime_Public_Input_AimAssistTargetManagerComponent_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Lyra_Inventory_Plugins_GameFeatures_ShooterCore_Source_ShooterCoreRuntime_Public_Input_AimAssistTargetManagerComponent_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UAimAssistTargetManagerComponent, UAimAssistTargetManagerComponent::StaticClass, TEXT("UAimAssistTargetManagerComponent"), &Z_Registration_Info_UClass_UAimAssistTargetManagerComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAimAssistTargetManagerComponent), 3107383464U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Lyra_Inventory_Plugins_GameFeatures_ShooterCore_Source_ShooterCoreRuntime_Public_Input_AimAssistTargetManagerComponent_h_3662109214(TEXT("/Script/ShooterCoreRuntime"),
		Z_CompiledInDeferFile_FID_Lyra_Inventory_Plugins_GameFeatures_ShooterCore_Source_ShooterCoreRuntime_Public_Input_AimAssistTargetManagerComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Lyra_Inventory_Plugins_GameFeatures_ShooterCore_Source_ShooterCoreRuntime_Public_Input_AimAssistTargetManagerComponent_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
