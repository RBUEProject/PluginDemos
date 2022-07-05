// Fill out your copyright notice in the Description page of Project Settings.


#include "MyFactory.h"
#include "MyObject.h"

UMyFactory::UMyFactory()
{
//���ô������ʲ�������
	bCreateNew = true;
	bEditAfterNew = true;
	SupportedClass = UMyObject::StaticClass();
}

UObject* UMyFactory::FactoryCreateNew(UClass* InClass, UObject* InParent, 
	FName InName, EObjectFlags Flags, UObject* Context, FFeedbackContext* Warn, 
	FName CallingContext)
{
//�����µ��ʲ�
	return NewObject<UMyObject>(InParent,InName,Flags|RF_Transactional);
}
