// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ShooterCoreRuntime/Public/Input/InputTriggerCombo.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInputTriggerCombo() {}
// Cross Module References
	SHOOTERCORERUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FComboTriggerStep();
	UPackage* Z_Construct_UPackage__Script_ShooterCoreRuntime();
	ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputAction_NoRegister();
	SHOOTERCORERUNTIME_API UClass* Z_Construct_UClass_UInputTriggerComboAction_NoRegister();
	SHOOTERCORERUNTIME_API UClass* Z_Construct_UClass_UInputTriggerComboAction();
	ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputTrigger();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ComboTriggerStep;
class UScriptStruct* FComboTriggerStep::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ComboTriggerStep.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ComboTriggerStep.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FComboTriggerStep, Z_Construct_UPackage__Script_ShooterCoreRuntime(), TEXT("ComboTriggerStep"));
	}
	return Z_Registration_Info_UScriptStruct_ComboTriggerStep.OuterSingleton;
}
template<> SHOOTERCORERUNTIME_API UScriptStruct* StaticStruct<FComboTriggerStep>()
{
	return FComboTriggerStep::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FComboTriggerStep_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DependentAction_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_DependentAction;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ActivationThreshold_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ActivationThreshold;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FComboTriggerStep_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Represents one part of a larger input combo. UIsed \n */" },
		{ "ModuleRelativePath", "Public/Input/InputTriggerCombo.h" },
		{ "ToolTip", "Represents one part of a larger input combo. UIsed" },
	};
#endif
	void* Z_Construct_UScriptStruct_FComboTriggerStep_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FComboTriggerStep>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FComboTriggerStep_Statics::NewProp_DependentAction_MetaData[] = {
		{ "Category", "ComboTriggerStep" },
		{ "Comment", "/** The Input Action that this step */" },
		{ "ModuleRelativePath", "Public/Input/InputTriggerCombo.h" },
		{ "NativeConst", "" },
		{ "ToolTip", "The Input Action that this step" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FComboTriggerStep_Statics::NewProp_DependentAction = { "DependentAction", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FComboTriggerStep, DependentAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FComboTriggerStep_Statics::NewProp_DependentAction_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FComboTriggerStep_Statics::NewProp_DependentAction_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FComboTriggerStep_Statics::NewProp_ActivationThreshold_MetaData[] = {
		{ "Category", "ComboTriggerStep" },
		{ "ClampMin", "0" },
		{ "Comment", "/** The amount of time that is acceptable between this combo step and the next. */" },
		{ "ModuleRelativePath", "Public/Input/InputTriggerCombo.h" },
		{ "ToolTip", "The amount of time that is acceptable between this combo step and the next." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FComboTriggerStep_Statics::NewProp_ActivationThreshold = { "ActivationThreshold", nullptr, (EPropertyFlags)0x0010000000004005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FComboTriggerStep, ActivationThreshold), METADATA_PARAMS(Z_Construct_UScriptStruct_FComboTriggerStep_Statics::NewProp_ActivationThreshold_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FComboTriggerStep_Statics::NewProp_ActivationThreshold_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FComboTriggerStep_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FComboTriggerStep_Statics::NewProp_DependentAction,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FComboTriggerStep_Statics::NewProp_ActivationThreshold,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FComboTriggerStep_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ShooterCoreRuntime,
		nullptr,
		&NewStructOps,
		"ComboTriggerStep",
		sizeof(FComboTriggerStep),
		alignof(FComboTriggerStep),
		Z_Construct_UScriptStruct_FComboTriggerStep_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FComboTriggerStep_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FComboTriggerStep_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FComboTriggerStep_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FComboTriggerStep()
	{
		if (!Z_Registration_Info_UScriptStruct_ComboTriggerStep.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ComboTriggerStep.InnerSingleton, Z_Construct_UScriptStruct_FComboTriggerStep_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_ComboTriggerStep.InnerSingleton;
	}
	void UInputTriggerComboAction::StaticRegisterNativesUInputTriggerComboAction()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UInputTriggerComboAction);
	UClass* Z_Construct_UClass_UInputTriggerComboAction_NoRegister()
	{
		return UInputTriggerComboAction::StaticClass();
	}
	struct Z_Construct_UClass_UInputTriggerComboAction_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ComboStep_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ComboStep;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ActivationCooldown_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ActivationCooldown;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UInputTriggerComboAction_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInputTrigger,
		(UObject* (*)())Z_Construct_UPackage__Script_ShooterCoreRuntime,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInputTriggerComboAction_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * UInputTriggerComboAction\n *\n * This will be triggered when all dependent actions have been triggered in order.\n*/" },
		{ "DisplayName", "Combo Action" },
		{ "IncludePath", "Input/InputTriggerCombo.h" },
		{ "IsBlueprintBase", "false" },
		{ "ModuleRelativePath", "Public/Input/InputTriggerCombo.h" },
		{ "NotInputConfigurable", "true" },
		{ "ToolTip", "UInputTriggerComboAction\n\nThis will be triggered when all dependent actions have been triggered in order." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInputTriggerComboAction_Statics::NewProp_ComboStep_MetaData[] = {
		{ "Category", "Trigger Settings" },
		{ "Comment", "/** The step that must be completed before this input trigger can happen */" },
		{ "ModuleRelativePath", "Public/Input/InputTriggerCombo.h" },
		{ "ToolTip", "The step that must be completed before this input trigger can happen" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UInputTriggerComboAction_Statics::NewProp_ComboStep = { "ComboStep", nullptr, (EPropertyFlags)0x0010000000000805, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UInputTriggerComboAction, ComboStep), Z_Construct_UScriptStruct_FComboTriggerStep, METADATA_PARAMS(Z_Construct_UClass_UInputTriggerComboAction_Statics::NewProp_ComboStep_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UInputTriggerComboAction_Statics::NewProp_ComboStep_MetaData)) }; // 1826699511
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInputTriggerComboAction_Statics::NewProp_ActivationCooldown_MetaData[] = {
		{ "Category", "InputTriggerComboAction" },
		{ "ClampMin", "0" },
		{ "Comment", "/** This is the amount of time that must pass before this can be triggered again. */" },
		{ "ModuleRelativePath", "Public/Input/InputTriggerCombo.h" },
		{ "ToolTip", "This is the amount of time that must pass before this can be triggered again." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UInputTriggerComboAction_Statics::NewProp_ActivationCooldown = { "ActivationCooldown", nullptr, (EPropertyFlags)0x0010000000004005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UInputTriggerComboAction, ActivationCooldown), METADATA_PARAMS(Z_Construct_UClass_UInputTriggerComboAction_Statics::NewProp_ActivationCooldown_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UInputTriggerComboAction_Statics::NewProp_ActivationCooldown_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UInputTriggerComboAction_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInputTriggerComboAction_Statics::NewProp_ComboStep,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInputTriggerComboAction_Statics::NewProp_ActivationCooldown,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UInputTriggerComboAction_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UInputTriggerComboAction>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UInputTriggerComboAction_Statics::ClassParams = {
		&UInputTriggerComboAction::StaticClass,
		"Input",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UInputTriggerComboAction_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UInputTriggerComboAction_Statics::PropPointers),
		0,
		0x400830A6u,
		METADATA_PARAMS(Z_Construct_UClass_UInputTriggerComboAction_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UInputTriggerComboAction_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UInputTriggerComboAction()
	{
		if (!Z_Registration_Info_UClass_UInputTriggerComboAction.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UInputTriggerComboAction.OuterSingleton, Z_Construct_UClass_UInputTriggerComboAction_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UInputTriggerComboAction.OuterSingleton;
	}
	template<> SHOOTERCORERUNTIME_API UClass* StaticClass<UInputTriggerComboAction>()
	{
		return UInputTriggerComboAction::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UInputTriggerComboAction);
	struct Z_CompiledInDeferFile_FID_Lyra_Inventory_Plugins_GameFeatures_ShooterCore_Source_ShooterCoreRuntime_Public_Input_InputTriggerCombo_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Lyra_Inventory_Plugins_GameFeatures_ShooterCore_Source_ShooterCoreRuntime_Public_Input_InputTriggerCombo_h_Statics::ScriptStructInfo[] = {
		{ FComboTriggerStep::StaticStruct, Z_Construct_UScriptStruct_FComboTriggerStep_Statics::NewStructOps, TEXT("ComboTriggerStep"), &Z_Registration_Info_UScriptStruct_ComboTriggerStep, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FComboTriggerStep), 1826699511U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Lyra_Inventory_Plugins_GameFeatures_ShooterCore_Source_ShooterCoreRuntime_Public_Input_InputTriggerCombo_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UInputTriggerComboAction, UInputTriggerComboAction::StaticClass, TEXT("UInputTriggerComboAction"), &Z_Registration_Info_UClass_UInputTriggerComboAction, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UInputTriggerComboAction), 2944958673U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Lyra_Inventory_Plugins_GameFeatures_ShooterCore_Source_ShooterCoreRuntime_Public_Input_InputTriggerCombo_h_555153058(TEXT("/Script/ShooterCoreRuntime"),
		Z_CompiledInDeferFile_FID_Lyra_Inventory_Plugins_GameFeatures_ShooterCore_Source_ShooterCoreRuntime_Public_Input_InputTriggerCombo_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Lyra_Inventory_Plugins_GameFeatures_ShooterCore_Source_ShooterCoreRuntime_Public_Input_InputTriggerCombo_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Lyra_Inventory_Plugins_GameFeatures_ShooterCore_Source_ShooterCoreRuntime_Public_Input_InputTriggerCombo_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Lyra_Inventory_Plugins_GameFeatures_ShooterCore_Source_ShooterCoreRuntime_Public_Input_InputTriggerCombo_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
