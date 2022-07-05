// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "Toolkits/BaseToolkit.h"
#include "MyModeEditorMode.h"

/**
 这个FModeToolkit只是创建了一个基本的UI面板，允许各种交互式工具
 已初始化，并且详细信息视图用于显示活动工具的属性。
 */
class FMyModeEditorModeToolkit : public FModeToolkit
{
public:
	FMyModeEditorModeToolkit();

	/** FModeToolkit interface */
	virtual void Init(const TSharedPtr<IToolkitHost>& InitToolkitHost, TWeakObjectPtr<UEdMode> InOwningMode) override;
	virtual void GetToolPaletteNames(TArray<FName>& PaletteNames) const override;

	/** IToolkit interface */
	virtual FName GetToolkitFName() const override;
	virtual FText GetBaseToolkitName() const override;
};
