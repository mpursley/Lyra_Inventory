// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ShooterCoreRuntime/Public/Accolades/LyraAccoladeHostWidget.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLyraAccoladeHostWidget() {}
// Cross Module References
	SHOOTERCORERUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FPendingAccoladeEntry();
	UPackage* Z_Construct_UPackage__Script_ShooterCoreRuntime();
	SHOOTERCORERUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FLyraAccoladeDefinitionRow();
	ENGINE_API UClass* Z_Construct_UClass_USoundBase_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UUserWidget_NoRegister();
	SHOOTERCORERUNTIME_API UClass* Z_Construct_UClass_ULyraAccoladeHostWidget_NoRegister();
	SHOOTERCORERUNTIME_API UClass* Z_Construct_UClass_ULyraAccoladeHostWidget();
	COMMONUI_API UClass* Z_Construct_UClass_UCommonUserWidget();
	GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_PendingAccoladeEntry;
class UScriptStruct* FPendingAccoladeEntry::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_PendingAccoladeEntry.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_PendingAccoladeEntry.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FPendingAccoladeEntry, Z_Construct_UPackage__Script_ShooterCoreRuntime(), TEXT("PendingAccoladeEntry"));
	}
	return Z_Registration_Info_UScriptStruct_PendingAccoladeEntry.OuterSingleton;
}
template<> SHOOTERCORERUNTIME_API UScriptStruct* StaticStruct<FPendingAccoladeEntry>()
{
	return FPendingAccoladeEntry::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FPendingAccoladeEntry_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Row_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Row;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Sound_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Sound;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Icon_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Icon;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AllocatedWidget_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_AllocatedWidget;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPendingAccoladeEntry_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Accolades/LyraAccoladeHostWidget.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FPendingAccoladeEntry_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPendingAccoladeEntry>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPendingAccoladeEntry_Statics::NewProp_Row_MetaData[] = {
		{ "Category", "PendingAccoladeEntry" },
		{ "ModuleRelativePath", "Public/Accolades/LyraAccoladeHostWidget.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPendingAccoladeEntry_Statics::NewProp_Row = { "Row", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPendingAccoladeEntry, Row), Z_Construct_UScriptStruct_FLyraAccoladeDefinitionRow, METADATA_PARAMS(Z_Construct_UScriptStruct_FPendingAccoladeEntry_Statics::NewProp_Row_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPendingAccoladeEntry_Statics::NewProp_Row_MetaData)) }; // 1001208819
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPendingAccoladeEntry_Statics::NewProp_Sound_MetaData[] = {
		{ "Category", "PendingAccoladeEntry" },
		{ "ModuleRelativePath", "Public/Accolades/LyraAccoladeHostWidget.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FPendingAccoladeEntry_Statics::NewProp_Sound = { "Sound", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPendingAccoladeEntry, Sound), Z_Construct_UClass_USoundBase_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FPendingAccoladeEntry_Statics::NewProp_Sound_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPendingAccoladeEntry_Statics::NewProp_Sound_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPendingAccoladeEntry_Statics::NewProp_Icon_MetaData[] = {
		{ "Category", "PendingAccoladeEntry" },
		{ "ModuleRelativePath", "Public/Accolades/LyraAccoladeHostWidget.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FPendingAccoladeEntry_Statics::NewProp_Icon = { "Icon", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPendingAccoladeEntry, Icon), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FPendingAccoladeEntry_Statics::NewProp_Icon_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPendingAccoladeEntry_Statics::NewProp_Icon_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPendingAccoladeEntry_Statics::NewProp_AllocatedWidget_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Accolades/LyraAccoladeHostWidget.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FPendingAccoladeEntry_Statics::NewProp_AllocatedWidget = { "AllocatedWidget", nullptr, (EPropertyFlags)0x0010000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPendingAccoladeEntry, AllocatedWidget), Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FPendingAccoladeEntry_Statics::NewProp_AllocatedWidget_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPendingAccoladeEntry_Statics::NewProp_AllocatedWidget_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPendingAccoladeEntry_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPendingAccoladeEntry_Statics::NewProp_Row,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPendingAccoladeEntry_Statics::NewProp_Sound,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPendingAccoladeEntry_Statics::NewProp_Icon,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPendingAccoladeEntry_Statics::NewProp_AllocatedWidget,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPendingAccoladeEntry_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ShooterCoreRuntime,
		nullptr,
		&NewStructOps,
		"PendingAccoladeEntry",
		sizeof(FPendingAccoladeEntry),
		alignof(FPendingAccoladeEntry),
		Z_Construct_UScriptStruct_FPendingAccoladeEntry_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPendingAccoladeEntry_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000005),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FPendingAccoladeEntry_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPendingAccoladeEntry_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FPendingAccoladeEntry()
	{
		if (!Z_Registration_Info_UScriptStruct_PendingAccoladeEntry.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_PendingAccoladeEntry.InnerSingleton, Z_Construct_UScriptStruct_FPendingAccoladeEntry_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_PendingAccoladeEntry.InnerSingleton;
	}
	static FName NAME_ULyraAccoladeHostWidget_CreateAccoladeWidget = FName(TEXT("CreateAccoladeWidget"));
	UUserWidget* ULyraAccoladeHostWidget::CreateAccoladeWidget(FPendingAccoladeEntry const& Entry)
	{
		LyraAccoladeHostWidget_eventCreateAccoladeWidget_Parms Parms;
		Parms.Entry=Entry;
		ProcessEvent(FindFunctionChecked(NAME_ULyraAccoladeHostWidget_CreateAccoladeWidget),&Parms);
		return Parms.ReturnValue;
	}
	static FName NAME_ULyraAccoladeHostWidget_DestroyAccoladeWidget = FName(TEXT("DestroyAccoladeWidget"));
	void ULyraAccoladeHostWidget::DestroyAccoladeWidget(UUserWidget* Widget)
	{
		LyraAccoladeHostWidget_eventDestroyAccoladeWidget_Parms Parms;
		Parms.Widget=Widget;
		ProcessEvent(FindFunctionChecked(NAME_ULyraAccoladeHostWidget_DestroyAccoladeWidget),&Parms);
	}
	void ULyraAccoladeHostWidget::StaticRegisterNativesULyraAccoladeHostWidget()
	{
	}
	struct Z_Construct_UFunction_ULyraAccoladeHostWidget_CreateAccoladeWidget_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Entry_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Entry;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULyraAccoladeHostWidget_CreateAccoladeWidget_Statics::NewProp_Entry_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULyraAccoladeHostWidget_CreateAccoladeWidget_Statics::NewProp_Entry = { "Entry", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LyraAccoladeHostWidget_eventCreateAccoladeWidget_Parms, Entry), Z_Construct_UScriptStruct_FPendingAccoladeEntry, METADATA_PARAMS(Z_Construct_UFunction_ULyraAccoladeHostWidget_CreateAccoladeWidget_Statics::NewProp_Entry_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraAccoladeHostWidget_CreateAccoladeWidget_Statics::NewProp_Entry_MetaData)) }; // 2678207863
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULyraAccoladeHostWidget_CreateAccoladeWidget_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULyraAccoladeHostWidget_CreateAccoladeWidget_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LyraAccoladeHostWidget_eventCreateAccoladeWidget_Parms, ReturnValue), Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ULyraAccoladeHostWidget_CreateAccoladeWidget_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraAccoladeHostWidget_CreateAccoladeWidget_Statics::NewProp_ReturnValue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULyraAccoladeHostWidget_CreateAccoladeWidget_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULyraAccoladeHostWidget_CreateAccoladeWidget_Statics::NewProp_Entry,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULyraAccoladeHostWidget_CreateAccoladeWidget_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULyraAccoladeHostWidget_CreateAccoladeWidget_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Accolades/LyraAccoladeHostWidget.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULyraAccoladeHostWidget_CreateAccoladeWidget_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULyraAccoladeHostWidget, nullptr, "CreateAccoladeWidget", nullptr, nullptr, sizeof(LyraAccoladeHostWidget_eventCreateAccoladeWidget_Parms), Z_Construct_UFunction_ULyraAccoladeHostWidget_CreateAccoladeWidget_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraAccoladeHostWidget_CreateAccoladeWidget_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08420800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULyraAccoladeHostWidget_CreateAccoladeWidget_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraAccoladeHostWidget_CreateAccoladeWidget_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULyraAccoladeHostWidget_CreateAccoladeWidget()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULyraAccoladeHostWidget_CreateAccoladeWidget_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULyraAccoladeHostWidget_DestroyAccoladeWidget_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Widget_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Widget;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULyraAccoladeHostWidget_DestroyAccoladeWidget_Statics::NewProp_Widget_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULyraAccoladeHostWidget_DestroyAccoladeWidget_Statics::NewProp_Widget = { "Widget", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LyraAccoladeHostWidget_eventDestroyAccoladeWidget_Parms, Widget), Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ULyraAccoladeHostWidget_DestroyAccoladeWidget_Statics::NewProp_Widget_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraAccoladeHostWidget_DestroyAccoladeWidget_Statics::NewProp_Widget_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULyraAccoladeHostWidget_DestroyAccoladeWidget_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULyraAccoladeHostWidget_DestroyAccoladeWidget_Statics::NewProp_Widget,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULyraAccoladeHostWidget_DestroyAccoladeWidget_Statics::Function_MetaDataParams[] = {
		{ "Comment", "//~End of UUserWidget interface\n" },
		{ "ModuleRelativePath", "Public/Accolades/LyraAccoladeHostWidget.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULyraAccoladeHostWidget_DestroyAccoladeWidget_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULyraAccoladeHostWidget, nullptr, "DestroyAccoladeWidget", nullptr, nullptr, sizeof(LyraAccoladeHostWidget_eventDestroyAccoladeWidget_Parms), Z_Construct_UFunction_ULyraAccoladeHostWidget_DestroyAccoladeWidget_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraAccoladeHostWidget_DestroyAccoladeWidget_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULyraAccoladeHostWidget_DestroyAccoladeWidget_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULyraAccoladeHostWidget_DestroyAccoladeWidget_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULyraAccoladeHostWidget_DestroyAccoladeWidget()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULyraAccoladeHostWidget_DestroyAccoladeWidget_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ULyraAccoladeHostWidget);
	UClass* Z_Construct_UClass_ULyraAccoladeHostWidget_NoRegister()
	{
		return ULyraAccoladeHostWidget::StaticClass();
	}
	struct Z_Construct_UClass_ULyraAccoladeHostWidget_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LocationName_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_LocationName;
		static const UECodeGen_Private::FStructPropertyParams NewProp_PendingAccoladeLoads_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PendingAccoladeLoads_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_PendingAccoladeLoads;
		static const UECodeGen_Private::FStructPropertyParams NewProp_PendingAccoladeDisplays_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PendingAccoladeDisplays_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_PendingAccoladeDisplays;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ULyraAccoladeHostWidget_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UCommonUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_ShooterCoreRuntime,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ULyraAccoladeHostWidget_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ULyraAccoladeHostWidget_CreateAccoladeWidget, "CreateAccoladeWidget" }, // 725960771
		{ &Z_Construct_UFunction_ULyraAccoladeHostWidget_DestroyAccoladeWidget, "DestroyAccoladeWidget" }, // 679953080
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULyraAccoladeHostWidget_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "Accolades/LyraAccoladeHostWidget.h" },
		{ "ModuleRelativePath", "Public/Accolades/LyraAccoladeHostWidget.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULyraAccoladeHostWidget_Statics::NewProp_LocationName_MetaData[] = {
		{ "Category", "LyraAccoladeHostWidget" },
		{ "Comment", "// The location tag (used to filter incoming messages to only display the appropriate accolades in a given location)\n" },
		{ "ModuleRelativePath", "Public/Accolades/LyraAccoladeHostWidget.h" },
		{ "ToolTip", "The location tag (used to filter incoming messages to only display the appropriate accolades in a given location)" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ULyraAccoladeHostWidget_Statics::NewProp_LocationName = { "LocationName", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULyraAccoladeHostWidget, LocationName), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(Z_Construct_UClass_ULyraAccoladeHostWidget_Statics::NewProp_LocationName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULyraAccoladeHostWidget_Statics::NewProp_LocationName_MetaData)) }; // 802167388
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ULyraAccoladeHostWidget_Statics::NewProp_PendingAccoladeLoads_Inner = { "PendingAccoladeLoads", nullptr, (EPropertyFlags)0x0000008000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FPendingAccoladeEntry, METADATA_PARAMS(nullptr, 0) }; // 2678207863
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULyraAccoladeHostWidget_Statics::NewProp_PendingAccoladeLoads_MetaData[] = {
		{ "Comment", "// List of async pending load accolades (which might come in the wrong order due to the row read)\n" },
		{ "ModuleRelativePath", "Public/Accolades/LyraAccoladeHostWidget.h" },
		{ "ToolTip", "List of async pending load accolades (which might come in the wrong order due to the row read)" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ULyraAccoladeHostWidget_Statics::NewProp_PendingAccoladeLoads = { "PendingAccoladeLoads", nullptr, (EPropertyFlags)0x0040008000002000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULyraAccoladeHostWidget, PendingAccoladeLoads), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ULyraAccoladeHostWidget_Statics::NewProp_PendingAccoladeLoads_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULyraAccoladeHostWidget_Statics::NewProp_PendingAccoladeLoads_MetaData)) }; // 2678207863
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ULyraAccoladeHostWidget_Statics::NewProp_PendingAccoladeDisplays_Inner = { "PendingAccoladeDisplays", nullptr, (EPropertyFlags)0x0000008000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FPendingAccoladeEntry, METADATA_PARAMS(nullptr, 0) }; // 2678207863
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULyraAccoladeHostWidget_Statics::NewProp_PendingAccoladeDisplays_MetaData[] = {
		{ "Comment", "// List of pending accolades (due to one at a time display duration; the first one in the list is the current visible one)\n" },
		{ "ModuleRelativePath", "Public/Accolades/LyraAccoladeHostWidget.h" },
		{ "ToolTip", "List of pending accolades (due to one at a time display duration; the first one in the list is the current visible one)" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ULyraAccoladeHostWidget_Statics::NewProp_PendingAccoladeDisplays = { "PendingAccoladeDisplays", nullptr, (EPropertyFlags)0x0040008000002000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULyraAccoladeHostWidget, PendingAccoladeDisplays), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ULyraAccoladeHostWidget_Statics::NewProp_PendingAccoladeDisplays_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULyraAccoladeHostWidget_Statics::NewProp_PendingAccoladeDisplays_MetaData)) }; // 2678207863
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ULyraAccoladeHostWidget_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULyraAccoladeHostWidget_Statics::NewProp_LocationName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULyraAccoladeHostWidget_Statics::NewProp_PendingAccoladeLoads_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULyraAccoladeHostWidget_Statics::NewProp_PendingAccoladeLoads,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULyraAccoladeHostWidget_Statics::NewProp_PendingAccoladeDisplays_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULyraAccoladeHostWidget_Statics::NewProp_PendingAccoladeDisplays,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ULyraAccoladeHostWidget_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULyraAccoladeHostWidget>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ULyraAccoladeHostWidget_Statics::ClassParams = {
		&ULyraAccoladeHostWidget::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ULyraAccoladeHostWidget_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ULyraAccoladeHostWidget_Statics::PropPointers),
		0,
		0x00A010A0u,
		METADATA_PARAMS(Z_Construct_UClass_ULyraAccoladeHostWidget_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ULyraAccoladeHostWidget_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ULyraAccoladeHostWidget()
	{
		if (!Z_Registration_Info_UClass_ULyraAccoladeHostWidget.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ULyraAccoladeHostWidget.OuterSingleton, Z_Construct_UClass_ULyraAccoladeHostWidget_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ULyraAccoladeHostWidget.OuterSingleton;
	}
	template<> SHOOTERCORERUNTIME_API UClass* StaticClass<ULyraAccoladeHostWidget>()
	{
		return ULyraAccoladeHostWidget::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ULyraAccoladeHostWidget);
	struct Z_CompiledInDeferFile_FID_Lyra_Inventory_Plugins_GameFeatures_ShooterCore_Source_ShooterCoreRuntime_Public_Accolades_LyraAccoladeHostWidget_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Lyra_Inventory_Plugins_GameFeatures_ShooterCore_Source_ShooterCoreRuntime_Public_Accolades_LyraAccoladeHostWidget_h_Statics::ScriptStructInfo[] = {
		{ FPendingAccoladeEntry::StaticStruct, Z_Construct_UScriptStruct_FPendingAccoladeEntry_Statics::NewStructOps, TEXT("PendingAccoladeEntry"), &Z_Registration_Info_UScriptStruct_PendingAccoladeEntry, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FPendingAccoladeEntry), 2678207863U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Lyra_Inventory_Plugins_GameFeatures_ShooterCore_Source_ShooterCoreRuntime_Public_Accolades_LyraAccoladeHostWidget_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ULyraAccoladeHostWidget, ULyraAccoladeHostWidget::StaticClass, TEXT("ULyraAccoladeHostWidget"), &Z_Registration_Info_UClass_ULyraAccoladeHostWidget, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ULyraAccoladeHostWidget), 1632656102U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Lyra_Inventory_Plugins_GameFeatures_ShooterCore_Source_ShooterCoreRuntime_Public_Accolades_LyraAccoladeHostWidget_h_2763561230(TEXT("/Script/ShooterCoreRuntime"),
		Z_CompiledInDeferFile_FID_Lyra_Inventory_Plugins_GameFeatures_ShooterCore_Source_ShooterCoreRuntime_Public_Accolades_LyraAccoladeHostWidget_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Lyra_Inventory_Plugins_GameFeatures_ShooterCore_Source_ShooterCoreRuntime_Public_Accolades_LyraAccoladeHostWidget_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Lyra_Inventory_Plugins_GameFeatures_ShooterCore_Source_ShooterCoreRuntime_Public_Accolades_LyraAccoladeHostWidget_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Lyra_Inventory_Plugins_GameFeatures_ShooterCore_Source_ShooterCoreRuntime_Public_Accolades_LyraAccoladeHostWidget_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
