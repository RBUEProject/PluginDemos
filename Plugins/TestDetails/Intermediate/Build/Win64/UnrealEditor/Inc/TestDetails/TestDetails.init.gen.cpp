// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTestDetails_init() {}
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_TestDetails;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_TestDetails()
	{
		if (!Z_Registration_Info_UPackage__Script_TestDetails.OuterSingleton)
		{
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/TestDetails",
				nullptr,
				0,
				PKG_CompiledIn | 0x00000080,
				0x4713D3B8,
				0x8FF4B72E,
				METADATA_PARAMS(nullptr, 0)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_TestDetails.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_TestDetails.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_TestDetails(Z_Construct_UPackage__Script_TestDetails, TEXT("/Script/TestDetails"), Z_Registration_Info_UPackage__Script_TestDetails, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0x4713D3B8, 0x8FF4B72E));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
