// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.

#include "TestDetails.h"
#include "PropertyEditorModule.h"
#include "MyTestDetailCustomization.h"
#include "StructVariableDetail.h"

#define LOCTEXT_NAMESPACE "FTestDetailsModule"

void FTestDetailsModule::StartupModule()
{
//×¢²áÐÅÏ¢
	FPropertyEditorModule& PropertyModule = FModuleManager::GetModuleChecked<FPropertyEditorModule>("PropertyEditor");

	RegisterPropertyTypeCustomizations();
	RegisterObjectCustomizations();

	PropertyModule.NotifyCustomizationModuleChanged();
}

void FTestDetailsModule::ShutdownModule()
{
	if (FModuleManager::Get().IsModuleLoaded("PropertyEditor"))
	{
		FPropertyEditorModule& PropertyModule = FModuleManager::GetModuleChecked<FPropertyEditorModule>("PropertyEditor");

		for (auto It = RegisteredClassNames.CreateConstIterator(); It; ++It)
		{
			if (It->IsValid())
			{
				PropertyModule.UnregisterCustomClassLayout(*It);
			}
		}

		for (auto It = RegisteredPropertyTypes.CreateConstIterator(); It; ++It)
		{
			if (It->IsValid())
			{
				PropertyModule.UnregisterCustomPropertyTypeLayout(*It);
			}
		}

		PropertyModule.NotifyCustomizationModuleChanged();
	}
}

void FTestDetailsModule::RegisterPropertyTypeCustomizations()
{
	RegisterCustomPropertyTypeLayout("StructVariable", FOnGetPropertyTypeCustomizationInstance::CreateStatic(&FStructVariableDetail::MakeInstance));
}

void FTestDetailsModule::RegisterObjectCustomizations()
{
	RegisterCustomClassLayout("CustomizeObject", FOnGetDetailCustomizationInstance::CreateStatic(&FMyTestDetailCustomization::MakeInstance));
}

void FTestDetailsModule::RegisterCustomClassLayout(FName ClassName, FOnGetDetailCustomizationInstance DetailLayoutDelegate)
{
	check(ClassName != NAME_None);

	RegisteredClassNames.Add(ClassName);

	FPropertyEditorModule& PropertyModule = FModuleManager::GetModuleChecked<FPropertyEditorModule>("PropertyEditor");
	PropertyModule.RegisterCustomClassLayout(ClassName, DetailLayoutDelegate);
}

void FTestDetailsModule::RegisterCustomPropertyTypeLayout(FName PropertyTypeName, FOnGetPropertyTypeCustomizationInstance PropertyTypeLayoutDelegate)
{
	check(PropertyTypeName != NAME_None);

	RegisteredPropertyTypes.Add(PropertyTypeName);

	FPropertyEditorModule& PropertyModule = FModuleManager::GetModuleChecked<FPropertyEditorModule>("PropertyEditor");
	PropertyModule.RegisterCustomPropertyTypeLayout(PropertyTypeName, PropertyTypeLayoutDelegate);
}

#undef LOCTEXT_NAMESPACE
	
IMPLEMENT_MODULE(FTestDetailsModule, TestDetails)