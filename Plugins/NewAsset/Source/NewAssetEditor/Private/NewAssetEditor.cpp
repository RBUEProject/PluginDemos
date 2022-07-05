// Copyright Epic Games, Inc. All Rights Reserved.

#include "NewAssetEditor.h"
#include "IAssetTools.h"
#include "AssetToolsModule.h"
#include "NewAssetTypeAction.h"

#define LOCTEXT_NAMESPACE "FNewAssetEditorModule"

void FNewAssetEditorModule::StartupModule()
{
	// This code will execute after your module is loaded into memory; the exact timing is specified in the .uplugin file per-module
	IAssetTools& AssetTools = FModuleManager::LoadModuleChecked<FAssetToolsModule>("AssetTools").Get();
	//定义资产的分类名
	EAssetTypeCategories::Type AssetCategory = AssetTools.RegisterAdvancedAssetCategory(FName(TEXT("CustomAssets")), FText::FromName(TEXT("CustomAssets")));
	TSharedPtr<FAssetTypeAction> actionType = MakeShareable(new FAssetTypeAction(AssetCategory));
	AssetTools.RegisterAssetTypeActions(actionType.ToSharedRef());
}

void FNewAssetEditorModule::ShutdownModule()
{
	// This function may be called during shutdown to clean up your module.  For modules that support dynamic reloading,
	// we call this function before unloading the module.
	if (FModuleManager::Get().IsModuleLoaded("AssetTools"))
	{
		IAssetTools& AssetTools = FModuleManager::Get().GetModuleChecked<FAssetToolsModule>("AssetTools").Get();
		AssetTools.UnregisterAssetTypeActions(MakeShareable(new FAssetTypeAction(AssetTools.RegisterAdvancedAssetCategory(FName(TEXT("CustomAssets")), FText::FromName(TEXT("CustomAssets"))))));
	}
}

#undef LOCTEXT_NAMESPACE
	
IMPLEMENT_MODULE(FNewAssetEditorModule, NewAssetEditor)