// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MyMode/Private/Tools/MyModeSimpleTool.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMyModeSimpleTool() {}
// Cross Module References
	MYMODE_API UClass* Z_Construct_UClass_UMyModeSimpleToolBuilder_NoRegister();
	MYMODE_API UClass* Z_Construct_UClass_UMyModeSimpleToolBuilder();
	INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UInteractiveToolBuilder();
	UPackage* Z_Construct_UPackage__Script_MyMode();
	MYMODE_API UClass* Z_Construct_UClass_UMyModeSimpleToolProperties_NoRegister();
	MYMODE_API UClass* Z_Construct_UClass_UMyModeSimpleToolProperties();
	INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UInteractiveToolPropertySet();
	MYMODE_API UClass* Z_Construct_UClass_UMyModeSimpleTool_NoRegister();
	MYMODE_API UClass* Z_Construct_UClass_UMyModeSimpleTool();
	INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_USingleClickTool();
// End Cross Module References
	void UMyModeSimpleToolBuilder::StaticRegisterNativesUMyModeSimpleToolBuilder()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMyModeSimpleToolBuilder);
	UClass* Z_Construct_UClass_UMyModeSimpleToolBuilder_NoRegister()
	{
		return UMyModeSimpleToolBuilder::StaticClass();
	}
	struct Z_Construct_UClass_UMyModeSimpleToolBuilder_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMyModeSimpleToolBuilder_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInteractiveToolBuilder,
		(UObject* (*)())Z_Construct_UPackage__Script_MyMode,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMyModeSimpleToolBuilder_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Builder for UMyModeSimpleTool\n */" },
		{ "IncludePath", "Tools/MyModeSimpleTool.h" },
		{ "ModuleRelativePath", "Private/Tools/MyModeSimpleTool.h" },
		{ "ToolTip", "Builder for UMyModeSimpleTool" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMyModeSimpleToolBuilder_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMyModeSimpleToolBuilder>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMyModeSimpleToolBuilder_Statics::ClassParams = {
		&UMyModeSimpleToolBuilder::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x001000A8u,
		METADATA_PARAMS(Z_Construct_UClass_UMyModeSimpleToolBuilder_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMyModeSimpleToolBuilder_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMyModeSimpleToolBuilder()
	{
		if (!Z_Registration_Info_UClass_UMyModeSimpleToolBuilder.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMyModeSimpleToolBuilder.OuterSingleton, Z_Construct_UClass_UMyModeSimpleToolBuilder_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMyModeSimpleToolBuilder.OuterSingleton;
	}
	template<> MYMODE_API UClass* StaticClass<UMyModeSimpleToolBuilder>()
	{
		return UMyModeSimpleToolBuilder::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMyModeSimpleToolBuilder);
	void UMyModeSimpleToolProperties::StaticRegisterNativesUMyModeSimpleToolProperties()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMyModeSimpleToolProperties);
	UClass* Z_Construct_UClass_UMyModeSimpleToolProperties_NoRegister()
	{
		return UMyModeSimpleToolProperties::StaticClass();
	}
	struct Z_Construct_UClass_UMyModeSimpleToolProperties_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ShowExtendedInfo_MetaData[];
#endif
		static void NewProp_ShowExtendedInfo_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ShowExtendedInfo;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMyModeSimpleToolProperties_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInteractiveToolPropertySet,
		(UObject* (*)())Z_Construct_UPackage__Script_MyMode,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMyModeSimpleToolProperties_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Settings UObject for UMyModeSimpleTool. This UClass inherits from UInteractiveToolPropertySet,\n * which provides an OnModified delegate that the Tool will listen to for changes in property values.\n */" },
		{ "IncludePath", "Tools/MyModeSimpleTool.h" },
		{ "ModuleRelativePath", "Private/Tools/MyModeSimpleTool.h" },
		{ "ToolTip", "Settings UObject for UMyModeSimpleTool. This UClass inherits from UInteractiveToolPropertySet,\nwhich provides an OnModified delegate that the Tool will listen to for changes in property values." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMyModeSimpleToolProperties_Statics::NewProp_ShowExtendedInfo_MetaData[] = {
		{ "Category", "Options" },
		{ "Comment", "/** If enabled, dialog should display extended information about the actor clicked on. Otherwise, only basic info will be shown. */" },
		{ "DisplayName", "Show Extended Info" },
		{ "ModuleRelativePath", "Private/Tools/MyModeSimpleTool.h" },
		{ "ToolTip", "If enabled, dialog should display extended information about the actor clicked on. Otherwise, only basic info will be shown." },
	};
#endif
	void Z_Construct_UClass_UMyModeSimpleToolProperties_Statics::NewProp_ShowExtendedInfo_SetBit(void* Obj)
	{
		((UMyModeSimpleToolProperties*)Obj)->ShowExtendedInfo = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMyModeSimpleToolProperties_Statics::NewProp_ShowExtendedInfo = { "ShowExtendedInfo", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UMyModeSimpleToolProperties), &Z_Construct_UClass_UMyModeSimpleToolProperties_Statics::NewProp_ShowExtendedInfo_SetBit, METADATA_PARAMS(Z_Construct_UClass_UMyModeSimpleToolProperties_Statics::NewProp_ShowExtendedInfo_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMyModeSimpleToolProperties_Statics::NewProp_ShowExtendedInfo_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMyModeSimpleToolProperties_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMyModeSimpleToolProperties_Statics::NewProp_ShowExtendedInfo,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMyModeSimpleToolProperties_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMyModeSimpleToolProperties>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMyModeSimpleToolProperties_Statics::ClassParams = {
		&UMyModeSimpleToolProperties::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UMyModeSimpleToolProperties_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UMyModeSimpleToolProperties_Statics::PropPointers),
		0,
		0x001000A8u,
		METADATA_PARAMS(Z_Construct_UClass_UMyModeSimpleToolProperties_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMyModeSimpleToolProperties_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMyModeSimpleToolProperties()
	{
		if (!Z_Registration_Info_UClass_UMyModeSimpleToolProperties.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMyModeSimpleToolProperties.OuterSingleton, Z_Construct_UClass_UMyModeSimpleToolProperties_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMyModeSimpleToolProperties.OuterSingleton;
	}
	template<> MYMODE_API UClass* StaticClass<UMyModeSimpleToolProperties>()
	{
		return UMyModeSimpleToolProperties::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMyModeSimpleToolProperties);
	void UMyModeSimpleTool::StaticRegisterNativesUMyModeSimpleTool()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMyModeSimpleTool);
	UClass* Z_Construct_UClass_UMyModeSimpleTool_NoRegister()
	{
		return UMyModeSimpleTool::StaticClass();
	}
	struct Z_Construct_UClass_UMyModeSimpleTool_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Properties_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Properties;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMyModeSimpleTool_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USingleClickTool,
		(UObject* (*)())Z_Construct_UPackage__Script_MyMode,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMyModeSimpleTool_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * UMyModeSimpleTool is an example Tool that opens a message box displaying info about an actor that the user\n * clicks left mouse button. All the action is in the ::OnClicked handler.\n */" },
		{ "IncludePath", "Tools/MyModeSimpleTool.h" },
		{ "ModuleRelativePath", "Private/Tools/MyModeSimpleTool.h" },
		{ "ToolTip", "UMyModeSimpleTool is an example Tool that opens a message box displaying info about an actor that the user\nclicks left mouse button. All the action is in the ::OnClicked handler." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMyModeSimpleTool_Statics::NewProp_Properties_MetaData[] = {
		{ "ModuleRelativePath", "Private/Tools/MyModeSimpleTool.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UMyModeSimpleTool_Statics::NewProp_Properties = { "Properties", nullptr, (EPropertyFlags)0x0024080000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMyModeSimpleTool, Properties), Z_Construct_UClass_UMyModeSimpleToolProperties_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UMyModeSimpleTool_Statics::NewProp_Properties_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMyModeSimpleTool_Statics::NewProp_Properties_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMyModeSimpleTool_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMyModeSimpleTool_Statics::NewProp_Properties,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMyModeSimpleTool_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMyModeSimpleTool>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMyModeSimpleTool_Statics::ClassParams = {
		&UMyModeSimpleTool::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UMyModeSimpleTool_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UMyModeSimpleTool_Statics::PropPointers),
		0,
		0x001000A8u,
		METADATA_PARAMS(Z_Construct_UClass_UMyModeSimpleTool_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMyModeSimpleTool_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMyModeSimpleTool()
	{
		if (!Z_Registration_Info_UClass_UMyModeSimpleTool.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMyModeSimpleTool.OuterSingleton, Z_Construct_UClass_UMyModeSimpleTool_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMyModeSimpleTool.OuterSingleton;
	}
	template<> MYMODE_API UClass* StaticClass<UMyModeSimpleTool>()
	{
		return UMyModeSimpleTool::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMyModeSimpleTool);
	struct Z_CompiledInDeferFile_FID_HostProject_Plugins_MyMode_Source_MyMode_Private_Tools_MyModeSimpleTool_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_MyMode_Source_MyMode_Private_Tools_MyModeSimpleTool_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMyModeSimpleToolBuilder, UMyModeSimpleToolBuilder::StaticClass, TEXT("UMyModeSimpleToolBuilder"), &Z_Registration_Info_UClass_UMyModeSimpleToolBuilder, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMyModeSimpleToolBuilder), 1678949690U) },
		{ Z_Construct_UClass_UMyModeSimpleToolProperties, UMyModeSimpleToolProperties::StaticClass, TEXT("UMyModeSimpleToolProperties"), &Z_Registration_Info_UClass_UMyModeSimpleToolProperties, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMyModeSimpleToolProperties), 1876211681U) },
		{ Z_Construct_UClass_UMyModeSimpleTool, UMyModeSimpleTool::StaticClass, TEXT("UMyModeSimpleTool"), &Z_Registration_Info_UClass_UMyModeSimpleTool, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMyModeSimpleTool), 198985913U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_MyMode_Source_MyMode_Private_Tools_MyModeSimpleTool_h_1739093115(TEXT("/Script/MyMode"),
		Z_CompiledInDeferFile_FID_HostProject_Plugins_MyMode_Source_MyMode_Private_Tools_MyModeSimpleTool_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_MyMode_Source_MyMode_Private_Tools_MyModeSimpleTool_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
