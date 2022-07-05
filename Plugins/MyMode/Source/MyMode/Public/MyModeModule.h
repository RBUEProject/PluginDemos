// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "Modules/ModuleManager.h"

/**
* 这是编辑器模式的模块定义。您可以实现自定义功能
 * 当您的插件模块启动和关闭时。有关更多扩展性选项，请参阅 IModuleInterface。
 */
class FMyModeModule : public IModuleInterface
{
public:

	/** IModuleInterface implementation */
	virtual void StartupModule() override;
	virtual void ShutdownModule() override;
};
