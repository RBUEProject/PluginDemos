// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "Modules/ModuleManager.h"
#include "PropertyEditorDelegates.h"

class FTestDetailsModule : public IModuleInterface
{
public:

	/** IModuleInterface implementation */
	virtual void StartupModule() override;
	virtual void ShutdownModule() override;

private:
	void RegisterPropertyTypeCustomizations();
	void RegisterObjectCustomizations();

	//ע���Զ����಼��
	void RegisterCustomClassLayout(FName ClassName, FOnGetDetailCustomizationInstance DetailLayoutDelegate);
	//ע���Զ����������Ͳ���
	void RegisterCustomPropertyTypeLayout(FName PropertyTypeName, FOnGetPropertyTypeCustomizationInstance PropertyTypeLayoutDelegate);

private:

	TSet< FName > RegisteredClassNames;
	TSet< FName > RegisteredPropertyTypes;
};
