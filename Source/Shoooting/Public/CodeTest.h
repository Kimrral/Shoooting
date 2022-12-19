// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "CodeTest.generated.h"

UCLASS()
class SHOOOTING_API ACodeTest : public AActor
{
	GENERATED_BODY()

public:
	// Sets default values for this actor's properties
	ACodeTest();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;


	//private �����, protected ��� �ڽĸ� �������, public ���� / ���� ������, ���� ������
	// UPROPERTY - EditAnywhere, EditDefalutsOnly, EditInstanceOnly �������Ѻο�
	// BlueprintReadWrite �������Ʈ���� ������ Ȱ�밡�� Get, Set �Ѵٰ���
	// BlueprintReadOnly  Get�� ���� Set �Ұ���
	// Category=name name�̶�� �̸��� ī�װ� ����
	// ���� ���״� �ٽ� ���带 ���� ��°��  �ٽ� �����ϸ� �ذ�ȴ�.
	// .vs ����, sln(solution����)�� generate visual studio files ���� �� ������
	// SDK Software Development Kit
	// API Application Programming Interface
	// �Լ� ���� - header (.h) ��ȯ�ڷ��� �Լ��̸� (�Ű�����, ); Void BeginPlay
	//���� - Source(.cpp)
	// int32 Add(int32 num1, int32 num2);
	// ��ȯ�ڷ��� �Լ��̸� Add ���� num1,num2 �Է°� ��������� �������� ��ȯ�ȴ�.
	// void - �ֺ�, ��ȯ�ڷ����� void�� ��� ��ȯ���� ����.
	// �Է°� ���� ���Ǵ� �Լ� - int32 JustShoot() �Է°� ���ȣ.


	//UPROPERTY(EditInstanceOnly, BlueprintReadOnly, Category=CodeVariable)
	// ������ ���� number, number2�� �����Ѵ�.    
	//int32 number;
// int32 number = 0
	//UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category=CodeVariable)
	//int32 number2;
	// ���ǹ� : ������ �������� �� ?�� ����
	// ������ �������� �ʾ��� �� , ? ����
	// if - �Լ� �ȿ����� ���� �� ���� ����

// 	�Ǽ��� ���� fnumber�� �����Ѵ�.
// 		float fnumber1 = 3.14;
// 		float fnumber2 = 10;
// 	
// 		// ���ڿ� ���� name�� �����Ѵ�.
// 		FString name;
// 		// Fstring name = " ";
// 		FString name2 = FString(TEXT("�ڿ���"));
// 	
// 		// ���� ����isStudent
// 		bool isStudent;
// 		// bool isStudent - False;
// 		bool isTeacher = true;

// 	int32 Add(int32 num1, int32 num2);
// 	int32 Subtract(int32 num3, int32 num4);
// 	int32 Multiply(int32 num5, int32 num6);
// 	int32 Divide(int32 num7, int32 num8);

// 	UPROPERTY(EditAnywhere, Category=CodeVariable)
// 	int32 age = 42;
// 	int32 height = 182;
// 	bool korean = true;
// 	int32 age2 = 35;


// 	FString StringAppender (FString firstname, FString lastname);
// 	UPROPERTY(EditAnywhere, Category = CodeVariable)
// 	FString firstname = "Hong";
// 	UPROPERTY(EditAnywhere, Category = CodeVariable)
// 	FString lastname = "Gil Dong";

	// ���ڿ� �� ���� �޾Ƽ� ���ڿ� �� ���� ���ļ� ��ȯ�ϴ� ����� ����� �ʹ�.
	// �Լ� ���� - �Լ� ȣ�� - ���
	// BlueprintCallable - �������Ʈ�� Ȱ�밡�� �������� ����
	// BlueprintPure - �������Ʈ�� Ȱ�밡�� �������� ���� ex) get actor location �� 
// 	UFUNCTION(BlueprintPure)
// 	FString Stringappend(FString a, FString b);

	// �ݺ��� : ���� �ൿ�� ������ Ƚ����ŭ �ݺ��ؼ� �����ϰ��� �Ҷ�
	// for�� : for(�ʱ�ȭ; ���ǽ�; ������;)�ݺ��ؼ� �� ��};

//	int32 i1 = 7;*/

//	void MultiplicationTable(int32 gugunum)

	// ���ξ� a - �θ��߿� actor�� �ְ� ��ӹ޾� ������ ��ġ �����ѻ���.

};