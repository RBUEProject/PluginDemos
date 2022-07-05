// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TestDetails/Public/StructVariable.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeStructVariable() {}
// Cross Module References
	TESTDETAILS_API UScriptStruct* Z_Construct_UScriptStruct_FStructVariable();
	UPackage* Z_Construct_UPackage__Script_TestDetails();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_StructVariable;
class UScriptStruct* FStructVariable::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_StructVariable.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_StructVariable.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FStructVariable, Z_Construct_UPackage__Script_TestDetails(), TEXT("StructVariable"));
	}
	return Z_Registration_Info_UScriptStruct_StructVariable.OuterSingleton;
}
template<> TESTDETAILS_API UScriptStruct* StaticStruct<FStructVariable>()
{
	return FStructVariable::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FStructVariable_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MyText_MetaData[];
#endif
		static const UECodeGen_Private::FTextPropertyParams NewProp_MyText;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStructVariable_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/StructVariable.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FStructVariable_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FStructVariable>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStructVariable_Statics::NewProp_MyText_MetaData[] = {
		{ "Category", "Hell" },
		{ "ModuleRelativePath", "Public/StructVariable.h" },
	};
#endif
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FStructVariable_Statics::NewProp_MyText = { "MyText", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FStructVariable, MyText), METADATA_PARAMS(Z_Construct_UScriptStruct_FStructVariable_Statics::NewProp_MyText_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStructVariable_Statics::NewProp_MyText_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FStructVariable_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStructVariable_Statics::NewProp_MyText,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FStructVariable_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_TestDetails,
		nullptr,
		&NewStructOps,
		"StructVariable",
		sizeof(FStructVariable),
		alignof(FStructVariable),
		Z_Construct_UScriptStruct_FStructVariable_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStructVariable_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FStructVariable_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStructVariable_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FStructVariable()
	{
		if (!Z_Registration_Info_UScriptStruct_StructVariable.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_StructVariable.InnerSingleton, Z_Construct_UScriptStruct_FStructVariable_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_StructVariable.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_HostProject_Plugins_TestDetails_Source_TestDetails_Public_StructVariable_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_TestDetails_Source_TestDetails_Public_StructVariable_h_Statics::ScriptStructInfo[] = {
		{ FStructVariable::StaticStruct, Z_Construct_UScriptStruct_FStructVariable_Statics::NewStructOps, TEXT("StructVariable"), &Z_Registration_Info_UScriptStruct_StructVariable, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FStructVariable), 161002610U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_TestDetails_Source_TestDetails_Public_StructVariable_h_3343525380(TEXT("/Script/TestDetails"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_HostProject_Plugins_TestDetails_Source_TestDetails_Public_StructVariable_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_TestDetails_Source_TestDetails_Public_StructVariable_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
