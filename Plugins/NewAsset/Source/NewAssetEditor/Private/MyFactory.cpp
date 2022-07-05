// Fill out your copyright notice in the Description page of Project Settings.


#include "MyFactory.h"
#include "MyObject.h"

UMyFactory::UMyFactory()
{
//设置创建的资产的属性
	bCreateNew = true;
	bEditAfterNew = true;
	SupportedClass = UMyObject::StaticClass();
}

UObject* UMyFactory::FactoryCreateNew(UClass* InClass, UObject* InParent, 
	FName InName, EObjectFlags Flags, UObject* Context, FFeedbackContext* Warn, 
	FName CallingContext)
{
//返回新的资产
	return NewObject<UMyObject>(InParent,InName,Flags|RF_Transactional);
}
