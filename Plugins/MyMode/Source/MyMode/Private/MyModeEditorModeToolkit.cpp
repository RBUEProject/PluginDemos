// Copyright Epic Games, Inc. All Rights Reserved.

#include "MyModeEditorModeToolkit.h"
#include "MyModeEditorMode.h"
#include "Engine/Selection.h"

#include "Modules/ModuleManager.h"
#include "PropertyEditorModule.h"
#include "IDetailsView.h"
#include "EditorModeManager.h"

#define LOCTEXT_NAMESPACE "MyModeEditorModeToolkit"

FMyModeEditorModeToolkit::FMyModeEditorModeToolkit()
{
}

void FMyModeEditorModeToolkit::Init(const TSharedPtr<IToolkitHost>& InitToolkitHost, TWeakObjectPtr<UEdMode> InOwningMode)
{
	FModeToolkit::Init(InitToolkitHost, InOwningMode);
}

void FMyModeEditorModeToolkit::GetToolPaletteNames(TArray<FName>& PaletteNames) const
{
	PaletteNames.Add(NAME_Default);
}


FName FMyModeEditorModeToolkit::GetToolkitFName() const
{
	return FName("MyModeEditorMode");
}

FText FMyModeEditorModeToolkit::GetBaseToolkitName() const
{
	return LOCTEXT("DisplayName", "MyModeEditorMode Toolkit");
}

#undef LOCTEXT_NAMESPACE
