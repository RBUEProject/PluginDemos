// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "Modules/ModuleManager.h"

class FToolBarBuilder;
class FMenuBuilder;

class FMySlateModule : public IModuleInterface
{
public:

	//注册编辑器的扩展，绑定点击事件，给slate绑定OnSpawnPluginTab
	virtual void StartupModule() override;
	virtual void ShutdownModule() override;
	
	//点击Btn时，唤醒Tab
	void PluginButtonClicked();
	
private:
	//创建编译器扩展
	void RegisterMenus();

	//生成Tab时调用
	TSharedRef<class SDockTab> OnSpawnPluginTab(const class FSpawnTabArgs& SpawnTabArgs);

	TSharedRef<class SDockTab> OnSpawnPluginTab1(const class FSpawnTabArgs& SpawnTabArgs);

private:
	//插件的命令
	TSharedPtr<class FUICommandList> PluginCommands;
};
