// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MyMode/Private/Tools/MyModeInteractiveTool.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMyModeInteractiveTool() {}
// Cross Module References
	MYMODE_API UClass* Z_Construct_UClass_UMyModeInteractiveToolBuilder_NoRegister();
	MYMODE_API UClass* Z_Construct_UClass_UMyModeInteractiveToolBuilder();
	INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UInteractiveToolBuilder();
	UPackage* Z_Construct_UPackage__Script_MyMode();
	MYMODE_API UClass* Z_Construct_UClass_UMyModeInteractiveToolProperties_NoRegister();
	MYMODE_API UClass* Z_Construct_UClass_UMyModeInteractiveToolProperties();
	INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UInteractiveToolPropertySet();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	MYMODE_API UClass* Z_Construct_UClass_UMyModeInteractiveTool_NoRegister();
	MYMODE_API UClass* Z_Construct_UClass_UMyModeInteractiveTool();
	INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UInteractiveTool();
// End Cross Module References
	void UMyModeInteractiveToolBuilder::StaticRegisterNativesUMyModeInteractiveToolBuilder()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMyModeInteractiveToolBuilder);
	UClass* Z_Construct_UClass_UMyModeInteractiveToolBuilder_NoRegister()
	{
		return UMyModeInteractiveToolBuilder::StaticClass();
	}
	struct Z_Construct_UClass_UMyModeInteractiveToolBuilder_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMyModeInteractiveToolBuilder_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInteractiveToolBuilder,
		(UObject* (*)())Z_Construct_UPackage__Script_MyMode,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMyModeInteractiveToolBuilder_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Builder for UMyModeInteractiveTool\n */" },
		{ "IncludePath", "Tools/MyModeInteractiveTool.h" },
		{ "ModuleRelativePath", "Private/Tools/MyModeInteractiveTool.h" },
		{ "ToolTip", "Builder for UMyModeInteractiveTool" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMyModeInteractiveToolBuilder_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMyModeInteractiveToolBuilder>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMyModeInteractiveToolBuilder_Statics::ClassParams = {
		&UMyModeInteractiveToolBuilder::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UMyModeInteractiveToolBuilder_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMyModeInteractiveToolBuilder_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMyModeInteractiveToolBuilder()
	{
		if (!Z_Registration_Info_UClass_UMyModeInteractiveToolBuilder.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMyModeInteractiveToolBuilder.OuterSingleton, Z_Construct_UClass_UMyModeInteractiveToolBuilder_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMyModeInteractiveToolBuilder.OuterSingleton;
	}
	template<> MYMODE_API UClass* StaticClass<UMyModeInteractiveToolBuilder>()
	{
		return UMyModeInteractiveToolBuilder::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMyModeInteractiveToolBuilder);
	void UMyModeInteractiveToolProperties::StaticRegisterNativesUMyModeInteractiveToolProperties()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMyModeInteractiveToolProperties);
	UClass* Z_Construct_UClass_UMyModeInteractiveToolProperties_NoRegister()
	{
		return UMyModeInteractiveToolProperties::StaticClass();
	}
	struct Z_Construct_UClass_UMyModeInteractiveToolProperties_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StartPoint_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_StartPoint;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EndPoint_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_EndPoint;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Distance_MetaData[];
#endif
		static const UECodeGen_Private::FDoublePropertyParams NewProp_Distance;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMyModeInteractiveToolProperties_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInteractiveToolPropertySet,
		(UObject* (*)())Z_Construct_UPackage__Script_MyMode,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMyModeInteractiveToolProperties_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Property set for the UMyModeInteractiveTool\n */" },
		{ "IncludePath", "Tools/MyModeInteractiveTool.h" },
		{ "ModuleRelativePath", "Private/Tools/MyModeInteractiveTool.h" },
		{ "ToolTip", "Property set for the UMyModeInteractiveTool" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMyModeInteractiveToolProperties_Statics::NewProp_StartPoint_MetaData[] = {
		{ "Category", "Options" },
		{ "Comment", "/** First point of measurement */" },
		{ "ModuleRelativePath", "Private/Tools/MyModeInteractiveTool.h" },
		{ "ToolTip", "First point of measurement" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMyModeInteractiveToolProperties_Statics::NewProp_StartPoint = { "StartPoint", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMyModeInteractiveToolProperties, StartPoint), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_UMyModeInteractiveToolProperties_Statics::NewProp_StartPoint_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMyModeInteractiveToolProperties_Statics::NewProp_StartPoint_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMyModeInteractiveToolProperties_Statics::NewProp_EndPoint_MetaData[] = {
		{ "Category", "Options" },
		{ "Comment", "/** Second point of measurement */" },
		{ "ModuleRelativePath", "Private/Tools/MyModeInteractiveTool.h" },
		{ "ToolTip", "Second point of measurement" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMyModeInteractiveToolProperties_Statics::NewProp_EndPoint = { "EndPoint", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMyModeInteractiveToolProperties, EndPoint), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_UMyModeInteractiveToolProperties_Statics::NewProp_EndPoint_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMyModeInteractiveToolProperties_Statics::NewProp_EndPoint_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMyModeInteractiveToolProperties_Statics::NewProp_Distance_MetaData[] = {
		{ "Category", "Options" },
		{ "Comment", "/** Current distance measurement */" },
		{ "ModuleRelativePath", "Private/Tools/MyModeInteractiveTool.h" },
		{ "ToolTip", "Current distance measurement" },
	};
#endif
	const UECodeGen_Private::FDoublePropertyParams Z_Construct_UClass_UMyModeInteractiveToolProperties_Statics::NewProp_Distance = { "Distance", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMyModeInteractiveToolProperties, Distance), METADATA_PARAMS(Z_Construct_UClass_UMyModeInteractiveToolProperties_Statics::NewProp_Distance_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMyModeInteractiveToolProperties_Statics::NewProp_Distance_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMyModeInteractiveToolProperties_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMyModeInteractiveToolProperties_Statics::NewProp_StartPoint,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMyModeInteractiveToolProperties_Statics::NewProp_EndPoint,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMyModeInteractiveToolProperties_Statics::NewProp_Distance,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMyModeInteractiveToolProperties_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMyModeInteractiveToolProperties>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMyModeInteractiveToolProperties_Statics::ClassParams = {
		&UMyModeInteractiveToolProperties::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UMyModeInteractiveToolProperties_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UMyModeInteractiveToolProperties_Statics::PropPointers),
		0,
		0x001000A8u,
		METADATA_PARAMS(Z_Construct_UClass_UMyModeInteractiveToolProperties_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMyModeInteractiveToolProperties_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMyModeInteractiveToolProperties()
	{
		if (!Z_Registration_Info_UClass_UMyModeInteractiveToolProperties.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMyModeInteractiveToolProperties.OuterSingleton, Z_Construct_UClass_UMyModeInteractiveToolProperties_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMyModeInteractiveToolProperties.OuterSingleton;
	}
	template<> MYMODE_API UClass* StaticClass<UMyModeInteractiveToolProperties>()
	{
		return UMyModeInteractiveToolProperties::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMyModeInteractiveToolProperties);
	void UMyModeInteractiveTool::StaticRegisterNativesUMyModeInteractiveTool()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMyModeInteractiveTool);
	UClass* Z_Construct_UClass_UMyModeInteractiveTool_NoRegister()
	{
		return UMyModeInteractiveTool::StaticClass();
	}
	struct Z_Construct_UClass_UMyModeInteractiveTool_Statics
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
	UObject* (*const Z_Construct_UClass_UMyModeInteractiveTool_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInteractiveTool,
		(UObject* (*)())Z_Construct_UPackage__Script_MyMode,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMyModeInteractiveTool_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * UMyModeInteractiveTool is an example Tool that allows the user to measure the \n * distance between two points. The first point is set by click-dragging the mouse, and\n * the second point is set by shift-click-dragging the mouse.\n */" },
		{ "IncludePath", "Tools/MyModeInteractiveTool.h" },
		{ "ModuleRelativePath", "Private/Tools/MyModeInteractiveTool.h" },
		{ "ToolTip", "UMyModeInteractiveTool is an example Tool that allows the user to measure the\ndistance between two points. The first point is set by click-dragging the mouse, and\nthe second point is set by shift-click-dragging the mouse." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMyModeInteractiveTool_Statics::NewProp_Properties_MetaData[] = {
		{ "Comment", "/** Properties of the tool are stored here */" },
		{ "ModuleRelativePath", "Private/Tools/MyModeInteractiveTool.h" },
		{ "ToolTip", "Properties of the tool are stored here" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UMyModeInteractiveTool_Statics::NewProp_Properties = { "Properties", nullptr, (EPropertyFlags)0x0024080000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMyModeInteractiveTool, Properties), Z_Construct_UClass_UMyModeInteractiveToolProperties_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UMyModeInteractiveTool_Statics::NewProp_Properties_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMyModeInteractiveTool_Statics::NewProp_Properties_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMyModeInteractiveTool_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMyModeInteractiveTool_Statics::NewProp_Properties,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMyModeInteractiveTool_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMyModeInteractiveTool>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMyModeInteractiveTool_Statics::ClassParams = {
		&UMyModeInteractiveTool::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UMyModeInteractiveTool_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UMyModeInteractiveTool_Statics::PropPointers),
		0,
		0x001000A8u,
		METADATA_PARAMS(Z_Construct_UClass_UMyModeInteractiveTool_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMyModeInteractiveTool_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMyModeInteractiveTool()
	{
		if (!Z_Registration_Info_UClass_UMyModeInteractiveTool.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMyModeInteractiveTool.OuterSingleton, Z_Construct_UClass_UMyModeInteractiveTool_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMyModeInteractiveTool.OuterSingleton;
	}
	template<> MYMODE_API UClass* StaticClass<UMyModeInteractiveTool>()
	{
		return UMyModeInteractiveTool::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMyModeInteractiveTool);
	struct Z_CompiledInDeferFile_FID_HostProject_Plugins_MyMode_Source_MyMode_Private_Tools_MyModeInteractiveTool_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_MyMode_Source_MyMode_Private_Tools_MyModeInteractiveTool_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMyModeInteractiveToolBuilder, UMyModeInteractiveToolBuilder::StaticClass, TEXT("UMyModeInteractiveToolBuilder"), &Z_Registration_Info_UClass_UMyModeInteractiveToolBuilder, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMyModeInteractiveToolBuilder), 835358386U) },
		{ Z_Construct_UClass_UMyModeInteractiveToolProperties, UMyModeInteractiveToolProperties::StaticClass, TEXT("UMyModeInteractiveToolProperties"), &Z_Registration_Info_UClass_UMyModeInteractiveToolProperties, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMyModeInteractiveToolProperties), 961499301U) },
		{ Z_Construct_UClass_UMyModeInteractiveTool, UMyModeInteractiveTool::StaticClass, TEXT("UMyModeInteractiveTool"), &Z_Registration_Info_UClass_UMyModeInteractiveTool, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMyModeInteractiveTool), 369788333U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_MyMode_Source_MyMode_Private_Tools_MyModeInteractiveTool_h_254259483(TEXT("/Script/MyMode"),
		Z_CompiledInDeferFile_FID_HostProject_Plugins_MyMode_Source_MyMode_Private_Tools_MyModeInteractiveTool_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_MyMode_Source_MyMode_Private_Tools_MyModeInteractiveTool_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
