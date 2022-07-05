// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMyMode_init() {}
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_MyMode;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_MyMode()
	{
		if (!Z_Registration_Info_UPackage__Script_MyMode.OuterSingleton)
		{
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/MyMode",
				nullptr,
				0,
				PKG_CompiledIn | 0x00000040,
				0xD5B319F3,
				0xBFBDA917,
				METADATA_PARAMS(nullptr, 0)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_MyMode.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_MyMode.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_MyMode(Z_Construct_UPackage__Script_MyMode, TEXT("/Script/MyMode"), Z_Registration_Info_UPackage__Script_MyMode, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0xD5B319F3, 0xBFBDA917));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
