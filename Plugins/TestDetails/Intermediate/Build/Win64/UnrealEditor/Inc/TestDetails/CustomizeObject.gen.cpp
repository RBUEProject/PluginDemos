// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TestDetails/Public/CustomizeObject.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCustomizeObject() {}
// Cross Module References
	TESTDETAILS_API UClass* Z_Construct_UClass_UCustomizeObject_NoRegister();
	TESTDETAILS_API UClass* Z_Construct_UClass_UCustomizeObject();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_TestDetails();
	TESTDETAILS_API UScriptStruct* Z_Construct_UScriptStruct_FStructVariable();
// End Cross Module References
	void UCustomizeObject::StaticRegisterNativesUCustomizeObject()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCustomizeObject);
	UClass* Z_Construct_UClass_UCustomizeObject_NoRegister()
	{
		return UCustomizeObject::StaticClass();
	}
	struct Z_Construct_UClass_UCustomizeObject_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Hle_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Hle;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Hello_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Hello;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HelloA_MetaData[];
#endif
		static const UECodeGen_Private::FTextPropertyParams NewProp_HelloA;
		static const UECodeGen_Private::FIntPropertyParams NewProp_HelloAArray_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HelloAArray_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_HelloAArray;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HelloI_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_HelloI;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HelloF_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_HelloF;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCustomizeObject_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_TestDetails,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCustomizeObject_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "CustomizeObject.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/CustomizeObject.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCustomizeObject_Statics::NewProp_Hle_MetaData[] = {
		{ "Category", "Hell" },
		{ "ModuleRelativePath", "Public/CustomizeObject.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCustomizeObject_Statics::NewProp_Hle = { "Hle", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCustomizeObject, Hle), Z_Construct_UScriptStruct_FStructVariable, METADATA_PARAMS(Z_Construct_UClass_UCustomizeObject_Statics::NewProp_Hle_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCustomizeObject_Statics::NewProp_Hle_MetaData)) }; // 161002610
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCustomizeObject_Statics::NewProp_Hello_MetaData[] = {
		{ "Category", "Hell" },
		{ "ModuleRelativePath", "Public/CustomizeObject.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCustomizeObject_Statics::NewProp_Hello = { "Hello", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCustomizeObject, Hello), METADATA_PARAMS(Z_Construct_UClass_UCustomizeObject_Statics::NewProp_Hello_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCustomizeObject_Statics::NewProp_Hello_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCustomizeObject_Statics::NewProp_HelloA_MetaData[] = {
		{ "Category", "Hell" },
		{ "ModuleRelativePath", "Public/CustomizeObject.h" },
	};
#endif
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UClass_UCustomizeObject_Statics::NewProp_HelloA = { "HelloA", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCustomizeObject, HelloA), METADATA_PARAMS(Z_Construct_UClass_UCustomizeObject_Statics::NewProp_HelloA_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCustomizeObject_Statics::NewProp_HelloA_MetaData)) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UCustomizeObject_Statics::NewProp_HelloAArray_Inner = { "HelloAArray", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCustomizeObject_Statics::NewProp_HelloAArray_MetaData[] = {
		{ "Category", "Hell" },
		{ "ModuleRelativePath", "Public/CustomizeObject.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UCustomizeObject_Statics::NewProp_HelloAArray = { "HelloAArray", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCustomizeObject, HelloAArray), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UCustomizeObject_Statics::NewProp_HelloAArray_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCustomizeObject_Statics::NewProp_HelloAArray_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCustomizeObject_Statics::NewProp_HelloI_MetaData[] = {
		{ "Category", "Hell" },
		{ "ModuleRelativePath", "Public/CustomizeObject.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UCustomizeObject_Statics::NewProp_HelloI = { "HelloI", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCustomizeObject, HelloI), METADATA_PARAMS(Z_Construct_UClass_UCustomizeObject_Statics::NewProp_HelloI_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCustomizeObject_Statics::NewProp_HelloI_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCustomizeObject_Statics::NewProp_HelloF_MetaData[] = {
		{ "Category", "Hell" },
		{ "ModuleRelativePath", "Public/CustomizeObject.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCustomizeObject_Statics::NewProp_HelloF = { "HelloF", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCustomizeObject, HelloF), METADATA_PARAMS(Z_Construct_UClass_UCustomizeObject_Statics::NewProp_HelloF_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCustomizeObject_Statics::NewProp_HelloF_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCustomizeObject_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCustomizeObject_Statics::NewProp_Hle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCustomizeObject_Statics::NewProp_Hello,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCustomizeObject_Statics::NewProp_HelloA,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCustomizeObject_Statics::NewProp_HelloAArray_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCustomizeObject_Statics::NewProp_HelloAArray,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCustomizeObject_Statics::NewProp_HelloI,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCustomizeObject_Statics::NewProp_HelloF,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCustomizeObject_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCustomizeObject>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UCustomizeObject_Statics::ClassParams = {
		&UCustomizeObject::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UCustomizeObject_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UCustomizeObject_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UCustomizeObject_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UCustomizeObject_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCustomizeObject()
	{
		if (!Z_Registration_Info_UClass_UCustomizeObject.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCustomizeObject.OuterSingleton, Z_Construct_UClass_UCustomizeObject_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UCustomizeObject.OuterSingleton;
	}
	template<> TESTDETAILS_API UClass* StaticClass<UCustomizeObject>()
	{
		return UCustomizeObject::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCustomizeObject);
	struct Z_CompiledInDeferFile_FID_HostProject_Plugins_TestDetails_Source_TestDetails_Public_CustomizeObject_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_TestDetails_Source_TestDetails_Public_CustomizeObject_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UCustomizeObject, UCustomizeObject::StaticClass, TEXT("UCustomizeObject"), &Z_Registration_Info_UClass_UCustomizeObject, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCustomizeObject), 1928325535U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_TestDetails_Source_TestDetails_Public_CustomizeObject_h_528281920(TEXT("/Script/TestDetails"),
		Z_CompiledInDeferFile_FID_HostProject_Plugins_TestDetails_Source_TestDetails_Public_CustomizeObject_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_TestDetails_Source_TestDetails_Public_CustomizeObject_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
