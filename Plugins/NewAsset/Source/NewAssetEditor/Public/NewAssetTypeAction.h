#pragma once

#include "CoreMinimal.h"
#include "AssetTypeActions_Base.h"
#include "MyObject.h"


class FAssetTypeAction : public FAssetTypeActions_Base
{

public:
	FAssetTypeAction(EAssetTypeCategories::Type InAssetCategory);
	//�����ʲ�������
	virtual FColor GetTypeColor() const override { return FColor(97, 85, 212); }
	// IAssetTypeActions Implementation 
	virtual FText GetName() const override { return FText::FromName(TEXT("MyDefinedAsset")); }
	virtual UClass* GetSupportedClass() const override { return UMyObject::StaticClass(); }
	virtual uint32 GetCategories() override { return MyAssetCategory; }

	//���ʲ��༭��
	virtual void OpenAssetEditor(const TArray<UObject*>& InObjects, TSharedPtr<class IToolkitHost> EditWithinLevelEditor = TSharedPtr<IToolkitHost>()) override;

private:
	EAssetTypeCategories::Type MyAssetCategory;

};

