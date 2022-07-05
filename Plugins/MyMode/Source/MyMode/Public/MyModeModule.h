// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "Modules/ModuleManager.h"

/**
* ���Ǳ༭��ģʽ��ģ�鶨�塣������ʵ���Զ��幦��
 * �����Ĳ��ģ�������͹ر�ʱ���йظ�����չ��ѡ������ IModuleInterface��
 */
class FMyModeModule : public IModuleInterface
{
public:

	/** IModuleInterface implementation */
	virtual void StartupModule() override;
	virtual void ShutdownModule() override;
};
