// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNewAssetEditor_init() {}
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_NewAssetEditor;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_NewAssetEditor()
	{
		if (!Z_Registration_Info_UPackage__Script_NewAssetEditor.OuterSingleton)
		{
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/NewAssetEditor",
				nullptr,
				0,
				PKG_CompiledIn | 0x00000040,
				0xEC6D22AA,
				0x50336B26,
				METADATA_PARAMS(nullptr, 0)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_NewAssetEditor.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_NewAssetEditor.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_NewAssetEditor(Z_Construct_UPackage__Script_NewAssetEditor, TEXT("/Script/NewAssetEditor"), Z_Registration_Info_UPackage__Script_NewAssetEditor, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0xEC6D22AA, 0x50336B26));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
