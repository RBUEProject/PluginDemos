// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NewAssetEditor/Public/MyFactory.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMyFactory() {}
// Cross Module References
	NEWASSETEDITOR_API UClass* Z_Construct_UClass_UMyFactory_NoRegister();
	NEWASSETEDITOR_API UClass* Z_Construct_UClass_UMyFactory();
	UNREALED_API UClass* Z_Construct_UClass_UFactory();
	UPackage* Z_Construct_UPackage__Script_NewAssetEditor();
// End Cross Module References
	void UMyFactory::StaticRegisterNativesUMyFactory()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMyFactory);
	UClass* Z_Construct_UClass_UMyFactory_NoRegister()
	{
		return UMyFactory::StaticClass();
	}
	struct Z_Construct_UClass_UMyFactory_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMyFactory_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UFactory,
		(UObject* (*)())Z_Construct_UPackage__Script_NewAssetEditor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMyFactory_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "MyFactory.h" },
		{ "ModuleRelativePath", "Public/MyFactory.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMyFactory_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMyFactory>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMyFactory_Statics::ClassParams = {
		&UMyFactory::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UMyFactory_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMyFactory_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMyFactory()
	{
		if (!Z_Registration_Info_UClass_UMyFactory.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMyFactory.OuterSingleton, Z_Construct_UClass_UMyFactory_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMyFactory.OuterSingleton;
	}
	template<> NEWASSETEDITOR_API UClass* StaticClass<UMyFactory>()
	{
		return UMyFactory::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMyFactory);
	struct Z_CompiledInDeferFile_FID_HostProject_Plugins_NewAsset_Source_NewAssetEditor_Public_MyFactory_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_NewAsset_Source_NewAssetEditor_Public_MyFactory_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMyFactory, UMyFactory::StaticClass, TEXT("UMyFactory"), &Z_Registration_Info_UClass_UMyFactory, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMyFactory), 3035122486U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_NewAsset_Source_NewAssetEditor_Public_MyFactory_h_3844987204(TEXT("/Script/NewAssetEditor"),
		Z_CompiledInDeferFile_FID_HostProject_Plugins_NewAsset_Source_NewAssetEditor_Public_MyFactory_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_NewAsset_Source_NewAssetEditor_Public_MyFactory_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
