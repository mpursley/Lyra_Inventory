// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TopDownArenaRuntime/Private/TopDownArenaAttributeSet.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTopDownArenaAttributeSet() {}
// Cross Module References
	TOPDOWNARENARUNTIME_API UClass* Z_Construct_UClass_UTopDownArenaAttributeSet_NoRegister();
	TOPDOWNARENARUNTIME_API UClass* Z_Construct_UClass_UTopDownArenaAttributeSet();
	LYRAGAME_API UClass* Z_Construct_UClass_ULyraAttributeSet();
	UPackage* Z_Construct_UPackage__Script_TopDownArenaRuntime();
	GAMEPLAYABILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayAttributeData();
// End Cross Module References
	DEFINE_FUNCTION(UTopDownArenaAttributeSet::execOnRep_MovementSpeed)
	{
		P_GET_STRUCT_REF(FGameplayAttributeData,Z_Param_Out_OldValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_MovementSpeed(Z_Param_Out_OldValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTopDownArenaAttributeSet::execOnRep_BombRange)
	{
		P_GET_STRUCT_REF(FGameplayAttributeData,Z_Param_Out_OldValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_BombRange(Z_Param_Out_OldValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTopDownArenaAttributeSet::execOnRep_BombCapacity)
	{
		P_GET_STRUCT_REF(FGameplayAttributeData,Z_Param_Out_OldValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_BombCapacity(Z_Param_Out_OldValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTopDownArenaAttributeSet::execOnRep_BombsRemaining)
	{
		P_GET_STRUCT_REF(FGameplayAttributeData,Z_Param_Out_OldValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_BombsRemaining(Z_Param_Out_OldValue);
		P_NATIVE_END;
	}
	void UTopDownArenaAttributeSet::StaticRegisterNativesUTopDownArenaAttributeSet()
	{
		UClass* Class = UTopDownArenaAttributeSet::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnRep_BombCapacity", &UTopDownArenaAttributeSet::execOnRep_BombCapacity },
			{ "OnRep_BombRange", &UTopDownArenaAttributeSet::execOnRep_BombRange },
			{ "OnRep_BombsRemaining", &UTopDownArenaAttributeSet::execOnRep_BombsRemaining },
			{ "OnRep_MovementSpeed", &UTopDownArenaAttributeSet::execOnRep_MovementSpeed },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UTopDownArenaAttributeSet_OnRep_BombCapacity_Statics
	{
		struct TopDownArenaAttributeSet_eventOnRep_BombCapacity_Parms
		{
			FGameplayAttributeData OldValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OldValue_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_OldValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTopDownArenaAttributeSet_OnRep_BombCapacity_Statics::NewProp_OldValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTopDownArenaAttributeSet_OnRep_BombCapacity_Statics::NewProp_OldValue = { "OldValue", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TopDownArenaAttributeSet_eventOnRep_BombCapacity_Parms, OldValue), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(Z_Construct_UFunction_UTopDownArenaAttributeSet_OnRep_BombCapacity_Statics::NewProp_OldValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UTopDownArenaAttributeSet_OnRep_BombCapacity_Statics::NewProp_OldValue_MetaData)) }; // 1975042971
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTopDownArenaAttributeSet_OnRep_BombCapacity_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTopDownArenaAttributeSet_OnRep_BombCapacity_Statics::NewProp_OldValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTopDownArenaAttributeSet_OnRep_BombCapacity_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/TopDownArenaAttributeSet.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTopDownArenaAttributeSet_OnRep_BombCapacity_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTopDownArenaAttributeSet, nullptr, "OnRep_BombCapacity", nullptr, nullptr, sizeof(Z_Construct_UFunction_UTopDownArenaAttributeSet_OnRep_BombCapacity_Statics::TopDownArenaAttributeSet_eventOnRep_BombCapacity_Parms), Z_Construct_UFunction_UTopDownArenaAttributeSet_OnRep_BombCapacity_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTopDownArenaAttributeSet_OnRep_BombCapacity_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00480401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTopDownArenaAttributeSet_OnRep_BombCapacity_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTopDownArenaAttributeSet_OnRep_BombCapacity_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTopDownArenaAttributeSet_OnRep_BombCapacity()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTopDownArenaAttributeSet_OnRep_BombCapacity_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTopDownArenaAttributeSet_OnRep_BombRange_Statics
	{
		struct TopDownArenaAttributeSet_eventOnRep_BombRange_Parms
		{
			FGameplayAttributeData OldValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OldValue_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_OldValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTopDownArenaAttributeSet_OnRep_BombRange_Statics::NewProp_OldValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTopDownArenaAttributeSet_OnRep_BombRange_Statics::NewProp_OldValue = { "OldValue", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TopDownArenaAttributeSet_eventOnRep_BombRange_Parms, OldValue), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(Z_Construct_UFunction_UTopDownArenaAttributeSet_OnRep_BombRange_Statics::NewProp_OldValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UTopDownArenaAttributeSet_OnRep_BombRange_Statics::NewProp_OldValue_MetaData)) }; // 1975042971
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTopDownArenaAttributeSet_OnRep_BombRange_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTopDownArenaAttributeSet_OnRep_BombRange_Statics::NewProp_OldValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTopDownArenaAttributeSet_OnRep_BombRange_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/TopDownArenaAttributeSet.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTopDownArenaAttributeSet_OnRep_BombRange_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTopDownArenaAttributeSet, nullptr, "OnRep_BombRange", nullptr, nullptr, sizeof(Z_Construct_UFunction_UTopDownArenaAttributeSet_OnRep_BombRange_Statics::TopDownArenaAttributeSet_eventOnRep_BombRange_Parms), Z_Construct_UFunction_UTopDownArenaAttributeSet_OnRep_BombRange_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTopDownArenaAttributeSet_OnRep_BombRange_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00480401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTopDownArenaAttributeSet_OnRep_BombRange_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTopDownArenaAttributeSet_OnRep_BombRange_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTopDownArenaAttributeSet_OnRep_BombRange()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTopDownArenaAttributeSet_OnRep_BombRange_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTopDownArenaAttributeSet_OnRep_BombsRemaining_Statics
	{
		struct TopDownArenaAttributeSet_eventOnRep_BombsRemaining_Parms
		{
			FGameplayAttributeData OldValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OldValue_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_OldValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTopDownArenaAttributeSet_OnRep_BombsRemaining_Statics::NewProp_OldValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTopDownArenaAttributeSet_OnRep_BombsRemaining_Statics::NewProp_OldValue = { "OldValue", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TopDownArenaAttributeSet_eventOnRep_BombsRemaining_Parms, OldValue), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(Z_Construct_UFunction_UTopDownArenaAttributeSet_OnRep_BombsRemaining_Statics::NewProp_OldValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UTopDownArenaAttributeSet_OnRep_BombsRemaining_Statics::NewProp_OldValue_MetaData)) }; // 1975042971
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTopDownArenaAttributeSet_OnRep_BombsRemaining_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTopDownArenaAttributeSet_OnRep_BombsRemaining_Statics::NewProp_OldValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTopDownArenaAttributeSet_OnRep_BombsRemaining_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/TopDownArenaAttributeSet.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTopDownArenaAttributeSet_OnRep_BombsRemaining_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTopDownArenaAttributeSet, nullptr, "OnRep_BombsRemaining", nullptr, nullptr, sizeof(Z_Construct_UFunction_UTopDownArenaAttributeSet_OnRep_BombsRemaining_Statics::TopDownArenaAttributeSet_eventOnRep_BombsRemaining_Parms), Z_Construct_UFunction_UTopDownArenaAttributeSet_OnRep_BombsRemaining_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTopDownArenaAttributeSet_OnRep_BombsRemaining_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00480401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTopDownArenaAttributeSet_OnRep_BombsRemaining_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTopDownArenaAttributeSet_OnRep_BombsRemaining_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTopDownArenaAttributeSet_OnRep_BombsRemaining()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTopDownArenaAttributeSet_OnRep_BombsRemaining_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTopDownArenaAttributeSet_OnRep_MovementSpeed_Statics
	{
		struct TopDownArenaAttributeSet_eventOnRep_MovementSpeed_Parms
		{
			FGameplayAttributeData OldValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OldValue_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_OldValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTopDownArenaAttributeSet_OnRep_MovementSpeed_Statics::NewProp_OldValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTopDownArenaAttributeSet_OnRep_MovementSpeed_Statics::NewProp_OldValue = { "OldValue", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TopDownArenaAttributeSet_eventOnRep_MovementSpeed_Parms, OldValue), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(Z_Construct_UFunction_UTopDownArenaAttributeSet_OnRep_MovementSpeed_Statics::NewProp_OldValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UTopDownArenaAttributeSet_OnRep_MovementSpeed_Statics::NewProp_OldValue_MetaData)) }; // 1975042971
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTopDownArenaAttributeSet_OnRep_MovementSpeed_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTopDownArenaAttributeSet_OnRep_MovementSpeed_Statics::NewProp_OldValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTopDownArenaAttributeSet_OnRep_MovementSpeed_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/TopDownArenaAttributeSet.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTopDownArenaAttributeSet_OnRep_MovementSpeed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTopDownArenaAttributeSet, nullptr, "OnRep_MovementSpeed", nullptr, nullptr, sizeof(Z_Construct_UFunction_UTopDownArenaAttributeSet_OnRep_MovementSpeed_Statics::TopDownArenaAttributeSet_eventOnRep_MovementSpeed_Parms), Z_Construct_UFunction_UTopDownArenaAttributeSet_OnRep_MovementSpeed_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTopDownArenaAttributeSet_OnRep_MovementSpeed_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00480401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTopDownArenaAttributeSet_OnRep_MovementSpeed_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTopDownArenaAttributeSet_OnRep_MovementSpeed_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTopDownArenaAttributeSet_OnRep_MovementSpeed()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTopDownArenaAttributeSet_OnRep_MovementSpeed_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UTopDownArenaAttributeSet);
	UClass* Z_Construct_UClass_UTopDownArenaAttributeSet_NoRegister()
	{
		return UTopDownArenaAttributeSet::StaticClass();
	}
	struct Z_Construct_UClass_UTopDownArenaAttributeSet_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BombsRemaining_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_BombsRemaining;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BombCapacity_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_BombCapacity;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BombRange_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_BombRange;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MovementSpeed_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_MovementSpeed;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UTopDownArenaAttributeSet_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ULyraAttributeSet,
		(UObject* (*)())Z_Construct_UPackage__Script_TopDownArenaRuntime,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UTopDownArenaAttributeSet_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UTopDownArenaAttributeSet_OnRep_BombCapacity, "OnRep_BombCapacity" }, // 3688273379
		{ &Z_Construct_UFunction_UTopDownArenaAttributeSet_OnRep_BombRange, "OnRep_BombRange" }, // 659968919
		{ &Z_Construct_UFunction_UTopDownArenaAttributeSet_OnRep_BombsRemaining, "OnRep_BombsRemaining" }, // 1978496991
		{ &Z_Construct_UFunction_UTopDownArenaAttributeSet_OnRep_MovementSpeed, "OnRep_MovementSpeed" }, // 2509604055
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTopDownArenaAttributeSet_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * UTopDownArenaAttributeSet\n *\n *\x09""Class that defines attributes specific to the top-down arena gameplay mode.\n */" },
		{ "IncludePath", "TopDownArenaAttributeSet.h" },
		{ "ModuleRelativePath", "Private/TopDownArenaAttributeSet.h" },
		{ "ToolTip", "UTopDownArenaAttributeSet\n\n    Class that defines attributes specific to the top-down arena gameplay mode." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTopDownArenaAttributeSet_Statics::NewProp_BombsRemaining_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "TopDownArenaGame" },
		{ "Comment", "// The number of bombs remaining\n" },
		{ "ModuleRelativePath", "Private/TopDownArenaAttributeSet.h" },
		{ "ToolTip", "The number of bombs remaining" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UTopDownArenaAttributeSet_Statics::NewProp_BombsRemaining = { "BombsRemaining", "OnRep_BombsRemaining", (EPropertyFlags)0x0040000100000034, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTopDownArenaAttributeSet, BombsRemaining), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(Z_Construct_UClass_UTopDownArenaAttributeSet_Statics::NewProp_BombsRemaining_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTopDownArenaAttributeSet_Statics::NewProp_BombsRemaining_MetaData)) }; // 1975042971
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTopDownArenaAttributeSet_Statics::NewProp_BombCapacity_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "TopDownArenaGame" },
		{ "Comment", "// The maximum number of bombs that can be placed at once\n" },
		{ "ModuleRelativePath", "Private/TopDownArenaAttributeSet.h" },
		{ "ToolTip", "The maximum number of bombs that can be placed at once" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UTopDownArenaAttributeSet_Statics::NewProp_BombCapacity = { "BombCapacity", "OnRep_BombCapacity", (EPropertyFlags)0x0040000100000034, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTopDownArenaAttributeSet, BombCapacity), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(Z_Construct_UClass_UTopDownArenaAttributeSet_Statics::NewProp_BombCapacity_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTopDownArenaAttributeSet_Statics::NewProp_BombCapacity_MetaData)) }; // 1975042971
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTopDownArenaAttributeSet_Statics::NewProp_BombRange_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "TopDownArenaGame" },
		{ "Comment", "// The range/radius of bomb blasts\n" },
		{ "ModuleRelativePath", "Private/TopDownArenaAttributeSet.h" },
		{ "ToolTip", "The range/radius of bomb blasts" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UTopDownArenaAttributeSet_Statics::NewProp_BombRange = { "BombRange", "OnRep_BombRange", (EPropertyFlags)0x0040000100000034, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTopDownArenaAttributeSet, BombRange), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(Z_Construct_UClass_UTopDownArenaAttributeSet_Statics::NewProp_BombRange_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTopDownArenaAttributeSet_Statics::NewProp_BombRange_MetaData)) }; // 1975042971
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTopDownArenaAttributeSet_Statics::NewProp_MovementSpeed_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "TopDownArenaGame" },
		{ "Comment", "// The range/radius of bomb blasts\n" },
		{ "ModuleRelativePath", "Private/TopDownArenaAttributeSet.h" },
		{ "ToolTip", "The range/radius of bomb blasts" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UTopDownArenaAttributeSet_Statics::NewProp_MovementSpeed = { "MovementSpeed", "OnRep_MovementSpeed", (EPropertyFlags)0x0040000100000034, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTopDownArenaAttributeSet, MovementSpeed), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(Z_Construct_UClass_UTopDownArenaAttributeSet_Statics::NewProp_MovementSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTopDownArenaAttributeSet_Statics::NewProp_MovementSpeed_MetaData)) }; // 1975042971
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UTopDownArenaAttributeSet_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTopDownArenaAttributeSet_Statics::NewProp_BombsRemaining,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTopDownArenaAttributeSet_Statics::NewProp_BombCapacity,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTopDownArenaAttributeSet_Statics::NewProp_BombRange,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTopDownArenaAttributeSet_Statics::NewProp_MovementSpeed,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UTopDownArenaAttributeSet_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTopDownArenaAttributeSet>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UTopDownArenaAttributeSet_Statics::ClassParams = {
		&UTopDownArenaAttributeSet::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UTopDownArenaAttributeSet_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UTopDownArenaAttributeSet_Statics::PropPointers),
		0,
		0x002000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UTopDownArenaAttributeSet_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UTopDownArenaAttributeSet_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UTopDownArenaAttributeSet()
	{
		if (!Z_Registration_Info_UClass_UTopDownArenaAttributeSet.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UTopDownArenaAttributeSet.OuterSingleton, Z_Construct_UClass_UTopDownArenaAttributeSet_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UTopDownArenaAttributeSet.OuterSingleton;
	}
	template<> TOPDOWNARENARUNTIME_API UClass* StaticClass<UTopDownArenaAttributeSet>()
	{
		return UTopDownArenaAttributeSet::StaticClass();
	}

	void UTopDownArenaAttributeSet::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
	{
		static const FName Name_BombsRemaining(TEXT("BombsRemaining"));
		static const FName Name_BombCapacity(TEXT("BombCapacity"));
		static const FName Name_BombRange(TEXT("BombRange"));
		static const FName Name_MovementSpeed(TEXT("MovementSpeed"));

		const bool bIsValid = true
			&& Name_BombsRemaining == ClassReps[(int32)ENetFields_Private::BombsRemaining].Property->GetFName()
			&& Name_BombCapacity == ClassReps[(int32)ENetFields_Private::BombCapacity].Property->GetFName()
			&& Name_BombRange == ClassReps[(int32)ENetFields_Private::BombRange].Property->GetFName()
			&& Name_MovementSpeed == ClassReps[(int32)ENetFields_Private::MovementSpeed].Property->GetFName();

		checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in UTopDownArenaAttributeSet"));
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UTopDownArenaAttributeSet);
	struct Z_CompiledInDeferFile_FID_Lyra_Inventory_Plugins_GameFeatures_TopDownArena_Source_TopDownArenaRuntime_Private_TopDownArenaAttributeSet_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Lyra_Inventory_Plugins_GameFeatures_TopDownArena_Source_TopDownArenaRuntime_Private_TopDownArenaAttributeSet_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UTopDownArenaAttributeSet, UTopDownArenaAttributeSet::StaticClass, TEXT("UTopDownArenaAttributeSet"), &Z_Registration_Info_UClass_UTopDownArenaAttributeSet, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UTopDownArenaAttributeSet), 2253256099U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Lyra_Inventory_Plugins_GameFeatures_TopDownArena_Source_TopDownArenaRuntime_Private_TopDownArenaAttributeSet_h_2255831268(TEXT("/Script/TopDownArenaRuntime"),
		Z_CompiledInDeferFile_FID_Lyra_Inventory_Plugins_GameFeatures_TopDownArena_Source_TopDownArenaRuntime_Private_TopDownArenaAttributeSet_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Lyra_Inventory_Plugins_GameFeatures_TopDownArena_Source_TopDownArenaRuntime_Private_TopDownArenaAttributeSet_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
