// Copyright Epic Games, Inc. All Rights Reserved.

#include "MyModeModule.h"
#include "MyModeEditorModeCommands.h"

#define LOCTEXT_NAMESPACE "MyModeModule"

void FMyModeModule::StartupModule()
{
	// This code will execute after your module is loaded into memory; the exact timing is specified in the .uplugin file per-module

	FMyModeEditorModeCommands::Register();
}

void FMyModeModule::ShutdownModule()
{
	// This function may be called during shutdown to clean up your module.  For modules that support dynamic reloading,
	// we call this function before unloading the module.

	FMyModeEditorModeCommands::Unregister();
}

#undef LOCTEXT_NAMESPACE

IMPLEMENT_MODULE(FMyModeModule, MyModeEditorMode)