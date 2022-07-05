// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "Toolkits/BaseToolkit.h"
#include "MyModeEditorMode.h"

/**
 ���FModeToolkitֻ�Ǵ�����һ��������UI��壬������ֽ���ʽ����
 �ѳ�ʼ����������ϸ��Ϣ��ͼ������ʾ����ߵ����ԡ�
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
