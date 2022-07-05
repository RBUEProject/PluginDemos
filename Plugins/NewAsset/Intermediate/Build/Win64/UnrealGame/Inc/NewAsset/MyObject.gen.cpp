// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NewAsset/Public/MyObject.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMyObject() {}
// Cross Module References
	NEWASSET_API UClass* Z_Construct_UClass_UMyObject_NoRegister();
	NEWASSET_API UClass* Z_Construct_UClass_UMyObject();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_NewAsset();
// End Cross Module References
	void UMyObject::StaticRegisterNativesUMyObject()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMyObject);
	UClass* Z_Construct_UClass_UMyObject_NoRegister()
	{
		return UMyObject::StaticClass();
	}
	struct Z_Construct_UClass_UMyObject_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMyObject_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_NewAsset,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMyObject_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "MyObject.h" },
		{ "ModuleRelativePath", "Public/MyObject.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMyObject_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMyObject>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMyObject_Statics::ClassParams = {
		&UMyObject::StaticClass,
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
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UMyObject_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMyObject_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMyObject()
	{
		if (!Z_Registration_Info_UClass_UMyObject.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMyObject.OuterSingleton, Z_Construct_UClass_UMyObject_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMyObject.OuterSingleton;
	}
	template<> NEWASSET_API UClass* StaticClass<UMyObject>()
	{
		return UMyObject::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMyObject);
	struct Z_CompiledInDeferFile_FID_HostProject_Plugins_NewAsset_Source_NewAsset_Public_MyObject_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_NewAsset_Source_NewAsset_Public_MyObject_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMyObject, UMyObject::StaticClass, TEXT("UMyObject"), &Z_Registration_Info_UClass_UMyObject, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMyObject), 501842709U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_NewAsset_Source_NewAsset_Public_MyObject_h_2842042817(TEXT("/Script/NewAsset"),
		Z_CompiledInDeferFile_FID_HostProject_Plugins_NewAsset_Source_NewAsset_Public_MyObject_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_NewAsset_Source_NewAsset_Public_MyObject_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
