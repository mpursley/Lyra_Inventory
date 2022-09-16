// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FPendingAccoladeEntry;
class UUserWidget;
#ifdef SHOOTERCORERUNTIME_LyraAccoladeHostWidget_generated_h
#error "LyraAccoladeHostWidget.generated.h already included, missing '#pragma once' in LyraAccoladeHostWidget.h"
#endif
#define SHOOTERCORERUNTIME_LyraAccoladeHostWidget_generated_h

#define FID_Lyra_Inventory_Plugins_GameFeatures_ShooterCore_Source_ShooterCoreRuntime_Public_Accolades_LyraAccoladeHostWidget_h_19_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FPendingAccoladeEntry_Statics; \
	SHOOTERCORERUNTIME_API static class UScriptStruct* StaticStruct();


template<> SHOOTERCORERUNTIME_API UScriptStruct* StaticStruct<struct FPendingAccoladeEntry>();

#define FID_Lyra_Inventory_Plugins_GameFeatures_ShooterCore_Source_ShooterCoreRuntime_Public_Accolades_LyraAccoladeHostWidget_h_46_SPARSE_DATA
#define FID_Lyra_Inventory_Plugins_GameFeatures_ShooterCore_Source_ShooterCoreRuntime_Public_Accolades_LyraAccoladeHostWidget_h_46_RPC_WRAPPERS
#define FID_Lyra_Inventory_Plugins_GameFeatures_ShooterCore_Source_ShooterCoreRuntime_Public_Accolades_LyraAccoladeHostWidget_h_46_RPC_WRAPPERS_NO_PURE_DECLS
#define FID_Lyra_Inventory_Plugins_GameFeatures_ShooterCore_Source_ShooterCoreRuntime_Public_Accolades_LyraAccoladeHostWidget_h_46_EVENT_PARMS \
	struct LyraAccoladeHostWidget_eventCreateAccoladeWidget_Parms \
	{ \
		FPendingAccoladeEntry Entry; \
		UUserWidget* ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		LyraAccoladeHostWidget_eventCreateAccoladeWidget_Parms() \
			: ReturnValue(NULL) \
		{ \
		} \
	}; \
	struct LyraAccoladeHostWidget_eventDestroyAccoladeWidget_Parms \
	{ \
		UUserWidget* Widget; \
	};


#define FID_Lyra_Inventory_Plugins_GameFeatures_ShooterCore_Source_ShooterCoreRuntime_Public_Accolades_LyraAccoladeHostWidget_h_46_CALLBACK_WRAPPERS
#define FID_Lyra_Inventory_Plugins_GameFeatures_ShooterCore_Source_ShooterCoreRuntime_Public_Accolades_LyraAccoladeHostWidget_h_46_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesULyraAccoladeHostWidget(); \
	friend struct Z_Construct_UClass_ULyraAccoladeHostWidget_Statics; \
public: \
	DECLARE_CLASS(ULyraAccoladeHostWidget, UCommonUserWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ShooterCoreRuntime"), NO_API) \
	DECLARE_SERIALIZER(ULyraAccoladeHostWidget)


#define FID_Lyra_Inventory_Plugins_GameFeatures_ShooterCore_Source_ShooterCoreRuntime_Public_Accolades_LyraAccoladeHostWidget_h_46_INCLASS \
private: \
	static void StaticRegisterNativesULyraAccoladeHostWidget(); \
	friend struct Z_Construct_UClass_ULyraAccoladeHostWidget_Statics; \
public: \
	DECLARE_CLASS(ULyraAccoladeHostWidget, UCommonUserWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ShooterCoreRuntime"), NO_API) \
	DECLARE_SERIALIZER(ULyraAccoladeHostWidget)


#define FID_Lyra_Inventory_Plugins_GameFeatures_ShooterCore_Source_ShooterCoreRuntime_Public_Accolades_LyraAccoladeHostWidget_h_46_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ULyraAccoladeHostWidget(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ULyraAccoladeHostWidget) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ULyraAccoladeHostWidget); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULyraAccoladeHostWidget); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ULyraAccoladeHostWidget(ULyraAccoladeHostWidget&&); \
	NO_API ULyraAccoladeHostWidget(const ULyraAccoladeHostWidget&); \
public:


#define FID_Lyra_Inventory_Plugins_GameFeatures_ShooterCore_Source_ShooterCoreRuntime_Public_Accolades_LyraAccoladeHostWidget_h_46_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ULyraAccoladeHostWidget(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ULyraAccoladeHostWidget(ULyraAccoladeHostWidget&&); \
	NO_API ULyraAccoladeHostWidget(const ULyraAccoladeHostWidget&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ULyraAccoladeHostWidget); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULyraAccoladeHostWidget); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ULyraAccoladeHostWidget)


#define FID_Lyra_Inventory_Plugins_GameFeatures_ShooterCore_Source_ShooterCoreRuntime_Public_Accolades_LyraAccoladeHostWidget_h_43_PROLOG \
	FID_Lyra_Inventory_Plugins_GameFeatures_ShooterCore_Source_ShooterCoreRuntime_Public_Accolades_LyraAccoladeHostWidget_h_46_EVENT_PARMS


#define FID_Lyra_Inventory_Plugins_GameFeatures_ShooterCore_Source_ShooterCoreRuntime_Public_Accolades_LyraAccoladeHostWidget_h_46_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Lyra_Inventory_Plugins_GameFeatures_ShooterCore_Source_ShooterCoreRuntime_Public_Accolades_LyraAccoladeHostWidget_h_46_SPARSE_DATA \
	FID_Lyra_Inventory_Plugins_GameFeatures_ShooterCore_Source_ShooterCoreRuntime_Public_Accolades_LyraAccoladeHostWidget_h_46_RPC_WRAPPERS \
	FID_Lyra_Inventory_Plugins_GameFeatures_ShooterCore_Source_ShooterCoreRuntime_Public_Accolades_LyraAccoladeHostWidget_h_46_CALLBACK_WRAPPERS \
	FID_Lyra_Inventory_Plugins_GameFeatures_ShooterCore_Source_ShooterCoreRuntime_Public_Accolades_LyraAccoladeHostWidget_h_46_INCLASS \
	FID_Lyra_Inventory_Plugins_GameFeatures_ShooterCore_Source_ShooterCoreRuntime_Public_Accolades_LyraAccoladeHostWidget_h_46_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Lyra_Inventory_Plugins_GameFeatures_ShooterCore_Source_ShooterCoreRuntime_Public_Accolades_LyraAccoladeHostWidget_h_46_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Lyra_Inventory_Plugins_GameFeatures_ShooterCore_Source_ShooterCoreRuntime_Public_Accolades_LyraAccoladeHostWidget_h_46_SPARSE_DATA \
	FID_Lyra_Inventory_Plugins_GameFeatures_ShooterCore_Source_ShooterCoreRuntime_Public_Accolades_LyraAccoladeHostWidget_h_46_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Lyra_Inventory_Plugins_GameFeatures_ShooterCore_Source_ShooterCoreRuntime_Public_Accolades_LyraAccoladeHostWidget_h_46_CALLBACK_WRAPPERS \
	FID_Lyra_Inventory_Plugins_GameFeatures_ShooterCore_Source_ShooterCoreRuntime_Public_Accolades_LyraAccoladeHostWidget_h_46_INCLASS_NO_PURE_DECLS \
	FID_Lyra_Inventory_Plugins_GameFeatures_ShooterCore_Source_ShooterCoreRuntime_Public_Accolades_LyraAccoladeHostWidget_h_46_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SHOOTERCORERUNTIME_API UClass* StaticClass<class ULyraAccoladeHostWidget>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Lyra_Inventory_Plugins_GameFeatures_ShooterCore_Source_ShooterCoreRuntime_Public_Accolades_LyraAccoladeHostWidget_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
