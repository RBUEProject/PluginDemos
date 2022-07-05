// Copyright Epic Games, Inc. All Rights Reserved.

#include "MyModeEditorMode.h"
#include "MyModeEditorModeToolkit.h"
#include "EdModeInteractiveToolsContext.h"
#include "InteractiveToolManager.h"
#include "MyModeEditorModeCommands.h"


//////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////// 
// AddYourTool Step 1 - include the header file for your Tools here
//////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////// 
#include "Tools/MyModeSimpleTool.h"
#include "Tools/MyModeInteractiveTool.h"

// step 2: register a ToolBuilder in FMyModeEditorMode::Enter() below
//在Enter注册ToolBuilder

#define LOCTEXT_NAMESPACE "MyModeEditorMode"

const FEditorModeID UMyModeEditorMode::EM_MyModeEditorModeId = TEXT("EM_MyModeEditorMode");

FString UMyModeEditorMode::SimpleToolName = TEXT("MyMode_ActorInfoTool");
FString UMyModeEditorMode::InteractiveToolName = TEXT("MyMode_MeasureDistanceTool");


UMyModeEditorMode::UMyModeEditorMode()
{
	FModuleManager::Get().LoadModule("EditorStyle");

	// appearance and icon in the editing mode ribbon can be customized here
	Info = FEditorModeInfo(UMyModeEditorMode::EM_MyModeEditorModeId,
		LOCTEXT("ModeName", "MyMode"),
		FSlateIcon(),
		true);
}


UMyModeEditorMode::~UMyModeEditorMode()
{
}


void UMyModeEditorMode::ActorSelectionChangeNotify()
{
}

void UMyModeEditorMode::Enter()
{
	UEdMode::Enter();

	//////////////////////////////////////////////////////////////////////////
	//////////////////////////////////////////////////////////////////////////
	// AddYourTool Step 2 - register the ToolBuilders for your Tools here.
	// 传递给工具管理器的字符串名称用于稍后选择/激活工具生成器。
	//////////////////////////////////////////////////////////////////////////
	////////////////////////////////////////////////////////////////////////// 
	const FMyModeEditorModeCommands& SampleToolCommands = FMyModeEditorModeCommands::Get();

	RegisterTool(SampleToolCommands.SimpleTool, SimpleToolName, NewObject<UMyModeSimpleToolBuilder>(this));
	RegisterTool(SampleToolCommands.InteractiveTool, InteractiveToolName, NewObject<UMyModeInteractiveToolBuilder>(this));

	// active tool type is not relevant here, we just set to default
	GetToolManager()->SelectActiveToolType(EToolSide::Left, SimpleToolName);
}

void UMyModeEditorMode::CreateToolkit()
{
	Toolkit = MakeShareable(new FMyModeEditorModeToolkit);
}

TMap<FName, TArray<TSharedPtr<FUICommandInfo>>> UMyModeEditorMode::GetModeCommands() const
{
	return FMyModeEditorModeCommands::Get().GetCommands();
}

#undef LOCTEXT_NAMESPACE
