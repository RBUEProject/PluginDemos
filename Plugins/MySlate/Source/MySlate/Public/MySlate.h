// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "Modules/ModuleManager.h"

class FToolBarBuilder;
class FMenuBuilder;

class FMySlateModule : public IModuleInterface
{
public:

	//ע��༭������չ���󶨵���¼�����slate��OnSpawnPluginTab
	virtual void StartupModule() override;
	virtual void ShutdownModule() override;
	
	//���Btnʱ������Tab
	void PluginButtonClicked();
	
private:
	//������������չ
	void RegisterMenus();

	//����Tabʱ����
	TSharedRef<class SDockTab> OnSpawnPluginTab(const class FSpawnTabArgs& SpawnTabArgs);

	TSharedRef<class SDockTab> OnSpawnPluginTab1(const class FSpawnTabArgs& SpawnTabArgs);

private:
	//���������
	TSharedPtr<class FUICommandList> PluginCommands;
};
