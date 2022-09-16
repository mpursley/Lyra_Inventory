// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ShooterCoreRuntime/Public/Input/AimAssistTargetComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAimAssistTargetComponent() {}
// Cross Module References
	SHOOTERCORERUNTIME_API UClass* Z_Construct_UClass_UAimAssistTargetComponent_NoRegister();
	SHOOTERCORERUNTIME_API UClass* Z_Construct_UClass_UAimAssistTargetComponent();
	ENGINE_API UClass* Z_Construct_UClass_UCapsuleComponent();
	UPackage* Z_Construct_UPackage__Script_ShooterCoreRuntime();
	SHOOTERCORERUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FAimAssistTargetOptions();
	SHOOTERCORERUNTIME_API UClass* Z_Construct_UClass_UAimAssistTaget_NoRegister();
// End Cross Module References
	void UAimAssistTargetComponent::StaticRegisterNativesUAimAssistTargetComponent()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAimAssistTargetComponent);
	UClass* Z_Construct_UClass_UAimAssistTargetComponent_NoRegister()
	{
		return UAimAssistTargetComponent::StaticClass();
	}
	struct Z_Construct_UClass_UAimAssistTargetComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TargetData_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_TargetData;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAimAssistTargetComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UCapsuleComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_ShooterCoreRuntime,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAimAssistTargetComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * This component can be added to any actor to have it register with the Aim Assist Target Manager.\n */" },
		{ "HideCategories", "Object LOD Lighting TextureStreaming Object LOD Lighting TextureStreaming Activation Components|Activation Trigger VirtualTexture" },
		{ "IncludePath", "Input/AimAssistTargetComponent.h" },
		{ "ModuleRelativePath", "Public/Input/AimAssistTargetComponent.h" },
		{ "ToolTip", "This component can be added to any actor to have it register with the Aim Assist Target Manager." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAimAssistTargetComponent_Statics::NewProp_TargetData_MetaData[] = {
		{ "Category", "AimAssistTargetComponent" },
		{ "ModuleRelativePath", "Public/Input/AimAssistTargetComponent.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAimAssistTargetComponent_Statics::NewProp_TargetData = { "TargetData", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAimAssistTargetComponent, TargetData), Z_Construct_UScriptStruct_FAimAssistTargetOptions, METADATA_PARAMS(Z_Construct_UClass_UAimAssistTargetComponent_Statics::NewProp_TargetData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAimAssistTargetComponent_Statics::NewProp_TargetData_MetaData)) }; // 1103370564
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAimAssistTargetComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAimAssistTargetComponent_Statics::NewProp_TargetData,
	};
		const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UAimAssistTargetComponent_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UAimAssistTaget_NoRegister, (int32)VTABLE_OFFSET(UAimAssistTargetComponent, IAimAssistTaget), false },  // 1597416510
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAimAssistTargetComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAimAssistTargetComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAimAssistTargetComponent_Statics::ClassParams = {
		&UAimAssistTargetComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UAimAssistTargetComponent_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UAimAssistTargetComponent_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x00B010A4u,
		METADATA_PARAMS(Z_Construct_UClass_UAimAssistTargetComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAimAssistTargetComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAimAssistTargetComponent()
	{
		if (!Z_Registration_Info_UClass_UAimAssistTargetComponent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAimAssistTargetComponent.OuterSingleton, Z_Construct_UClass_UAimAssistTargetComponent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAimAssistTargetComponent.OuterSingleton;
	}
	template<> SHOOTERCORERUNTIME_API UClass* StaticClass<UAimAssistTargetComponent>()
	{
		return UAimAssistTargetComponent::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAimAssistTargetComponent);
	struct Z_CompiledInDeferFile_FID_Lyra_Inventory_Plugins_GameFeatures_ShooterCore_Source_ShooterCoreRuntime_Public_Input_AimAssistTargetComponent_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Lyra_Inventory_Plugins_GameFeatures_ShooterCore_Source_ShooterCoreRuntime_Public_Input_AimAssistTargetComponent_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UAimAssistTargetComponent, UAimAssistTargetComponent::StaticClass, TEXT("UAimAssistTargetComponent"), &Z_Registration_Info_UClass_UAimAssistTargetComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAimAssistTargetComponent), 1038696886U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Lyra_Inventory_Plugins_GameFeatures_ShooterCore_Source_ShooterCoreRuntime_Public_Input_AimAssistTargetComponent_h_3328763557(TEXT("/Script/ShooterCoreRuntime"),
		Z_CompiledInDeferFile_FID_Lyra_Inventory_Plugins_GameFeatures_ShooterCore_Source_ShooterCoreRuntime_Public_Input_AimAssistTargetComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Lyra_Inventory_Plugins_GameFeatures_ShooterCore_Source_ShooterCoreRuntime_Public_Input_AimAssistTargetComponent_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
