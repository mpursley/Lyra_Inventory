// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TopDownArenaRuntime/Public/LyraCameraMode_TopDownArenaCamera.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLyraCameraMode_TopDownArenaCamera() {}
// Cross Module References
	TOPDOWNARENARUNTIME_API UClass* Z_Construct_UClass_ULyraCameraMode_TopDownArenaCamera_NoRegister();
	TOPDOWNARENARUNTIME_API UClass* Z_Construct_UClass_ULyraCameraMode_TopDownArenaCamera();
	LYRAGAME_API UClass* Z_Construct_UClass_ULyraCameraMode();
	UPackage* Z_Construct_UPackage__Script_TopDownArenaRuntime();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FRuntimeFloatCurve();
// End Cross Module References
	void ULyraCameraMode_TopDownArenaCamera::StaticRegisterNativesULyraCameraMode_TopDownArenaCamera()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ULyraCameraMode_TopDownArenaCamera);
	UClass* Z_Construct_UClass_ULyraCameraMode_TopDownArenaCamera_NoRegister()
	{
		return ULyraCameraMode_TopDownArenaCamera::StaticClass();
	}
	struct Z_Construct_UClass_ULyraCameraMode_TopDownArenaCamera_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ArenaWidth_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ArenaWidth;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ArenaHeight_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ArenaHeight;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DefaultPivotRotation_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_DefaultPivotRotation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BoundsSizeToDistance_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_BoundsSizeToDistance;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ULyraCameraMode_TopDownArenaCamera_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ULyraCameraMode,
		(UObject* (*)())Z_Construct_UPackage__Script_TopDownArenaRuntime,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULyraCameraMode_TopDownArenaCamera_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * ULyraCameraMode_TopDownArenaCamera\n *\n *\x09""A basic third person camera mode that looks down at a fixed arena.\n */" },
		{ "IncludePath", "LyraCameraMode_TopDownArenaCamera.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/LyraCameraMode_TopDownArenaCamera.h" },
		{ "ToolTip", "ULyraCameraMode_TopDownArenaCamera\n\n    A basic third person camera mode that looks down at a fixed arena." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULyraCameraMode_TopDownArenaCamera_Statics::NewProp_ArenaWidth_MetaData[] = {
		{ "Category", "Third Person" },
		{ "ModuleRelativePath", "Public/LyraCameraMode_TopDownArenaCamera.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ULyraCameraMode_TopDownArenaCamera_Statics::NewProp_ArenaWidth = { "ArenaWidth", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULyraCameraMode_TopDownArenaCamera, ArenaWidth), METADATA_PARAMS(Z_Construct_UClass_ULyraCameraMode_TopDownArenaCamera_Statics::NewProp_ArenaWidth_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULyraCameraMode_TopDownArenaCamera_Statics::NewProp_ArenaWidth_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULyraCameraMode_TopDownArenaCamera_Statics::NewProp_ArenaHeight_MetaData[] = {
		{ "Category", "Third Person" },
		{ "ModuleRelativePath", "Public/LyraCameraMode_TopDownArenaCamera.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ULyraCameraMode_TopDownArenaCamera_Statics::NewProp_ArenaHeight = { "ArenaHeight", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULyraCameraMode_TopDownArenaCamera, ArenaHeight), METADATA_PARAMS(Z_Construct_UClass_ULyraCameraMode_TopDownArenaCamera_Statics::NewProp_ArenaHeight_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULyraCameraMode_TopDownArenaCamera_Statics::NewProp_ArenaHeight_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULyraCameraMode_TopDownArenaCamera_Statics::NewProp_DefaultPivotRotation_MetaData[] = {
		{ "Category", "Third Person" },
		{ "ModuleRelativePath", "Public/LyraCameraMode_TopDownArenaCamera.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ULyraCameraMode_TopDownArenaCamera_Statics::NewProp_DefaultPivotRotation = { "DefaultPivotRotation", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULyraCameraMode_TopDownArenaCamera, DefaultPivotRotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(Z_Construct_UClass_ULyraCameraMode_TopDownArenaCamera_Statics::NewProp_DefaultPivotRotation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULyraCameraMode_TopDownArenaCamera_Statics::NewProp_DefaultPivotRotation_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULyraCameraMode_TopDownArenaCamera_Statics::NewProp_BoundsSizeToDistance_MetaData[] = {
		{ "Category", "Third Person" },
		{ "ModuleRelativePath", "Public/LyraCameraMode_TopDownArenaCamera.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ULyraCameraMode_TopDownArenaCamera_Statics::NewProp_BoundsSizeToDistance = { "BoundsSizeToDistance", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULyraCameraMode_TopDownArenaCamera, BoundsSizeToDistance), Z_Construct_UScriptStruct_FRuntimeFloatCurve, METADATA_PARAMS(Z_Construct_UClass_ULyraCameraMode_TopDownArenaCamera_Statics::NewProp_BoundsSizeToDistance_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULyraCameraMode_TopDownArenaCamera_Statics::NewProp_BoundsSizeToDistance_MetaData)) }; // 1196190759
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ULyraCameraMode_TopDownArenaCamera_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULyraCameraMode_TopDownArenaCamera_Statics::NewProp_ArenaWidth,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULyraCameraMode_TopDownArenaCamera_Statics::NewProp_ArenaHeight,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULyraCameraMode_TopDownArenaCamera_Statics::NewProp_DefaultPivotRotation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULyraCameraMode_TopDownArenaCamera_Statics::NewProp_BoundsSizeToDistance,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ULyraCameraMode_TopDownArenaCamera_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULyraCameraMode_TopDownArenaCamera>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ULyraCameraMode_TopDownArenaCamera_Statics::ClassParams = {
		&ULyraCameraMode_TopDownArenaCamera::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ULyraCameraMode_TopDownArenaCamera_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ULyraCameraMode_TopDownArenaCamera_Statics::PropPointers),
		0,
		0x000000A1u,
		METADATA_PARAMS(Z_Construct_UClass_ULyraCameraMode_TopDownArenaCamera_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ULyraCameraMode_TopDownArenaCamera_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ULyraCameraMode_TopDownArenaCamera()
	{
		if (!Z_Registration_Info_UClass_ULyraCameraMode_TopDownArenaCamera.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ULyraCameraMode_TopDownArenaCamera.OuterSingleton, Z_Construct_UClass_ULyraCameraMode_TopDownArenaCamera_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ULyraCameraMode_TopDownArenaCamera.OuterSingleton;
	}
	template<> TOPDOWNARENARUNTIME_API UClass* StaticClass<ULyraCameraMode_TopDownArenaCamera>()
	{
		return ULyraCameraMode_TopDownArenaCamera::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ULyraCameraMode_TopDownArenaCamera);
	struct Z_CompiledInDeferFile_FID_Lyra_Inventory_Plugins_GameFeatures_TopDownArena_Source_TopDownArenaRuntime_Public_LyraCameraMode_TopDownArenaCamera_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Lyra_Inventory_Plugins_GameFeatures_TopDownArena_Source_TopDownArenaRuntime_Public_LyraCameraMode_TopDownArenaCamera_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ULyraCameraMode_TopDownArenaCamera, ULyraCameraMode_TopDownArenaCamera::StaticClass, TEXT("ULyraCameraMode_TopDownArenaCamera"), &Z_Registration_Info_UClass_ULyraCameraMode_TopDownArenaCamera, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ULyraCameraMode_TopDownArenaCamera), 398550648U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Lyra_Inventory_Plugins_GameFeatures_TopDownArena_Source_TopDownArenaRuntime_Public_LyraCameraMode_TopDownArenaCamera_h_2981147430(TEXT("/Script/TopDownArenaRuntime"),
		Z_CompiledInDeferFile_FID_Lyra_Inventory_Plugins_GameFeatures_TopDownArena_Source_TopDownArenaRuntime_Public_LyraCameraMode_TopDownArenaCamera_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Lyra_Inventory_Plugins_GameFeatures_TopDownArena_Source_TopDownArenaRuntime_Public_LyraCameraMode_TopDownArenaCamera_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
