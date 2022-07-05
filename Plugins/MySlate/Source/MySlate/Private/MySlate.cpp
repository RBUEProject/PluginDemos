// Copyright Epic Games, Inc. All Rights Reserved.

#include "MySlate.h"
#include "MySlateStyle.h"
#include "MySlateCommands.h"
#include "LevelEditor.h"
#include "Widgets/Docking/SDockTab.h"
#include "Widgets/Layout/SBox.h"
#include "Widgets/Text/STextBlock.h"
#include "Widgets/Input/SButton.h"
#include "Widgets/Input/SSlider.h"
#include "ToolMenus.h"
//#include "SMyWidget.h"

//Tab名字
static const FName MySlateTabName("MySlate");
static const FName MyTab0Name("MyTab0");
static const FName MyTab1Name("MyTab1");

#define LOCTEXT_NAMESPACE "FMySlateModule"

void FMySlateModule::StartupModule()
{
	// This code will execute after your module is loaded into memory; the exact timing is specified in the .uplugin file per-module
	
	FMySlateStyle::Initialize();
	FMySlateStyle::ReloadTextures();

	FMySlateCommands::Register();
	
	PluginCommands = MakeShareable(new FUICommandList);

	//PluginButtonClicked时调用OpenPluginWindow
	PluginCommands->MapAction(
		FMySlateCommands::Get().OpenPluginWindow,
		FExecuteAction::CreateRaw(this, &FMySlateModule::PluginButtonClicked),
		FCanExecuteAction());
	//注册编辑器扩展
	UToolMenus::RegisterStartupCallback(FSimpleMulticastDelegate::FDelegate::CreateRaw(this, &FMySlateModule::RegisterMenus));
	
	//给MySlateName绑定OnSpawnPluginTab
	FGlobalTabmanager::Get()->RegisterNomadTabSpawner(MySlateTabName, FOnSpawnTab::CreateRaw(this, &FMySlateModule::OnSpawnPluginTab))
		.SetDisplayName(LOCTEXT("FMySlateTabTitle", "MySlate"))
		.SetMenuType(ETabSpawnerMenuType::Hidden);

	
	FGlobalTabmanager::Get()->RegisterNomadTabSpawner(MyTab0Name,
		FOnSpawnTab::CreateLambda([](const FSpawnTabArgs& SpawnTabArgs) {
			FText WidgetText = LOCTEXT("WindowMyTab0Text", "MyButton");
			return SNew(SDockTab)
				.TabRole(ETabRole::NomadTab)
				[
					// Put your tab content here!
					SNew(SButton)
					.HAlign(HAlign_Fill)
					.VAlign(VAlign_Fill)
					.OnClicked_Lambda(
						[]() {
							UE_LOG(LogTemp, Warning, TEXT("ok"));
							return FReply::Handled();
						}
					)
					[
						SNew(STextBlock)
						.Text(WidgetText)
					]
				];
			}))
		.SetDisplayName(LOCTEXT("MyTab0TabTitle", "MyTab0"))
		.SetMenuType(ETabSpawnerMenuType::Enabled);


	FGlobalTabmanager::Get()->RegisterNomadTabSpawner(MyTab1Name, FOnSpawnTab::CreateRaw(this, &FMySlateModule::OnSpawnPluginTab1))
		.SetDisplayName(LOCTEXT("FMyTab1TabTitle", "MyTab1"))
		.SetMenuType(ETabSpawnerMenuType::Hidden);
}

void FMySlateModule::ShutdownModule()
{
	// This function may be called during shutdown to clean up your module.  For modules that support dynamic reloading,
	// we call this function before unloading the module.

	UToolMenus::UnRegisterStartupCallback(this);

	UToolMenus::UnregisterOwner(this);

	FMySlateStyle::Shutdown();

	FMySlateCommands::Unregister();

	FGlobalTabmanager::Get()->UnregisterNomadTabSpawner(MySlateTabName);
}

TSharedRef<SDockTab> FMySlateModule::OnSpawnPluginTab(const FSpawnTabArgs& SpawnTabArgs)
{
	FText WidgetText = FText::Format(
		LOCTEXT("WindowWidgetText", "Add code to {0} in {1} to override this window's contents"),
		FText::FromString(TEXT("FMySlateModule::OnSpawnPluginTab")),
		FText::FromString(TEXT("MySlate.cpp"))
		);

	return SNew(SDockTab)
		.TabRole(ETabRole::NomadTab)
		[
			// Put your tab content here!
			SNew(SBox)
			.HAlign(HAlign_Center)
			.VAlign(VAlign_Center)
			[
				SNew(STextBlock)
				.Text(WidgetText)
			]
		];
}

TSharedRef<class SDockTab> FMySlateModule::OnSpawnPluginTab1(const FSpawnTabArgs& SpawnTabArgs)
{
	TSharedRef<SCheckBox> MyCheckBox = SNew(SCheckBox).IsChecked(ECheckBoxState::Unchecked);
	TSharedRef<SEditableText> MyEditableText = SNew(SEditableText).IsEnabled_Lambda(
		[MyCheckBox]() {
			return MyCheckBox->GetCheckedState() == ECheckBoxState::Checked;
		}
	);

	return SNew(SDockTab)
		.TabRole(ETabRole::NomadTab)
		[
			SNew(SVerticalBox)
			+ SVerticalBox::Slot().AutoHeight()
			[
				MyCheckBox
			]
			+ SVerticalBox::Slot().AutoHeight()
			[
				MyEditableText
			]
			+ SVerticalBox::Slot()
			.HAlign(HAlign_Center)
			.VAlign(VAlign_Center)
			[
				SNew(STextBlock)
				.Text_Lambda(
					[MyEditableText]() {
						auto res = MyEditableText->GetText();
						return res;
					}
				)
			]		
		];
}

void FMySlateModule::PluginButtonClicked()
{
	FGlobalTabmanager::Get()->TryInvokeTab(MySlateTabName);

	FGlobalTabmanager::Get()->TryInvokeTab(MyTab0Name);

	FGlobalTabmanager::Get()->TryInvokeTab(MyTab1Name);
}

void FMySlateModule::RegisterMenus()
{
	// Owner will be used for cleanup in call to UToolMenus::UnregisterOwner
	FToolMenuOwnerScoped OwnerScoped(this);

	{
		UToolMenu* Menu = UToolMenus::Get()->ExtendMenu("LevelEditor.MainMenu.Window");
		{
			FToolMenuSection& Section = Menu->FindOrAddSection("WindowLayout");
			Section.AddMenuEntryWithCommandList(FMySlateCommands::Get().OpenPluginWindow, PluginCommands);
		}
	}
}

#undef LOCTEXT_NAMESPACE
	
IMPLEMENT_MODULE(FMySlateModule, MySlate)