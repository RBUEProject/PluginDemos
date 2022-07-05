// Copyright Epic Games, Inc. All Rights Reserved.

#include "NightButton.h"
#include "NightButtonStyle.h"
#include "NightButtonCommands.h"
#include "Misc/MessageDialog.h"
#include "ToolMenus.h"
#include "Kismet/GameplayStatics.h"
#include "Engine/DirectionalLight.h"
#include "Components/LightComponent.h"
#include "Engine/PostProcessVolume.h"
#include "Editor/EditorEngine.h"
static const FName NightButtonTabName("NightButton");

#define LOCTEXT_NAMESPACE "FNightButtonModule"

void FNightButtonModule::StartupModule()
{
	// This code will execute after your module is loaded into memory; the exact timing is specified in the .uplugin file per-module
	//StartupModule开始时做初始化，注册
	FNightButtonStyle::Initialize();
	FNightButtonStyle::ReloadTextures();
	FNightButtonCommands::Register();

	//给命令绑定PluginButtonClicked函数
	PluginCommands = MakeShareable(new FUICommandList);

	PluginCommands->MapAction(
		FNightButtonCommands::Get().PluginAction,
		FExecuteAction::CreateRaw(this, &FNightButtonModule::PluginButtonClicked),
		FCanExecuteAction());

	UToolMenus::RegisterStartupCallback(FSimpleMulticastDelegate::FDelegate::CreateRaw(this, &FNightButtonModule::RegisterMenus));
}

void FNightButtonModule::ShutdownModule()
{
	// This function may be called during shutdown to clean up your module.  For modules that support dynamic reloading,
	// we call this function before unloading the module.

	UToolMenus::UnRegisterStartupCallback(this);

	UToolMenus::UnregisterOwner(this);

	FNightButtonStyle::Shutdown();

	FNightButtonCommands::Unregister();
}

void FNightButtonModule::PluginButtonClicked()
{
	// Put your "OnButtonClicked" stuff here
	//切换白天夜晚逻辑
	FText DialogText = FText::FromString("Changing scene to day/night");
	FMessageDialog::Open(EAppMsgType::Ok, DialogText);
	AActor* FoundActor;
	FoundActor = FindActor(ADirectionalLight::StaticClass());

	if (!FoundActor)
	{
		DialogText = FText::FromString("Create A DirectionalLight?");
		FMessageDialog::Open(EAppMsgType::Ok, DialogText);
		FoundActor = AddActor(ADirectionalLight::StaticClass());
	}
	ADirectionalLight* Sun = Cast<ADirectionalLight>(FoundActor);
	bool bChangeToNight = Sun->GetLightComponent()->Intensity > 5.f;
	if (bChangeToNight)
	{
		Sun->GetLightComponent()->SetIntensity(1.f);
	}
	else
	{
		Sun->GetLightComponent()->SetIntensity(10.f);
	}

	FoundActor = FindActor(APostProcessVolume::StaticClass());
	if (!FoundActor)
	{
		DialogText = FText::FromString("Create A PostProcessVolume?");
		FMessageDialog::Open(EAppMsgType::Ok, DialogText);
		FoundActor = AddActor(APostProcessVolume::StaticClass());
	}
	APostProcessVolume* PPV = Cast<APostProcessVolume>(FoundActor);
	PPV->Settings.bOverride_AutoExposureBias = true;
	PPV->bUnbound = true;
	if (bChangeToNight)
	{
		PPV->Settings.AutoExposureBias = -3.f;

	}
	else
	{
		PPV->Settings.AutoExposureBias = 1.f;
	}
}

void FNightButtonModule::RegisterMenus()
{
	// Owner will be used for cleanup in call to UToolMenus::UnregisterOwner
	//注册时在编辑器生成 控件 并和PluginCommands 绑定
	FToolMenuOwnerScoped OwnerScoped(this);

	{
		UToolMenu* Menu = UToolMenus::Get()->ExtendMenu("LevelEditor.MainMenu.Window");
		{
			FToolMenuSection& Section = Menu->FindOrAddSection("WindowLayout");
			Section.AddMenuEntryWithCommandList(FNightButtonCommands::Get().PluginAction, PluginCommands);
		}
	}

	{
		UToolMenu* ToolbarMenu = UToolMenus::Get()->ExtendMenu("LevelEditor.LevelEditorToolBar.PlayToolBar");
		{
			FToolMenuSection& Section = ToolbarMenu->FindOrAddSection("PluginTools");
			{
				FToolMenuEntry& Entry = Section.AddEntry(FToolMenuEntry::InitToolBarButton(FNightButtonCommands::Get().PluginAction));
				Entry.SetCommandList(PluginCommands);
			}
		}
	}
}

AActor* FNightButtonModule::FindActor(TSubclassOf<AActor> ActorClass)
{
	TArray<AActor*> FoundActors;
	UWorld* World = GEditor->GetEditorWorldContext().World();
	if (World)
	{
		UGameplayStatics::GetAllActorsOfClass(World, ActorClass, FoundActors);
		if (FoundActors.Num() > 0)
		{
			return FoundActors[0];
		}
	}
	return nullptr;
}

AActor* FNightButtonModule::AddActor(TSubclassOf<AActor> ActorClass)
{
	ULevel* level = GEditor->GetEditorWorldContext().World()->GetCurrentLevel();
	return GEditor->AddActor(level, ActorClass, FTransform());
}

#undef LOCTEXT_NAMESPACE
	
IMPLEMENT_MODULE(FNightButtonModule, NightButton)