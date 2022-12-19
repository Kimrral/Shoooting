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


	//private 비공개, protected 상속 자식만 접근허용, public 공개 / 접근 한정자, 접근 제한자
	// UPROPERTY - EditAnywhere, EditDefalutsOnly, EditInstanceOnly 수정권한부여
	// BlueprintReadWrite 블루프린트에서 변수로 활용가능 Get, Set 둘다가능
	// BlueprintReadOnly  Get만 가능 Set 불가능
	// Category=name name이라는 이름의 카테고리 생성
	// 빌드 버그는 다시 빌드를 통해 통째로  다시 빌드하면 해결된다.
	// .vs 파일, sln(solution파일)은 generate visual studio files 선택 시 복원됨
	// SDK Software Development Kit
	// API Application Programming Interface
	// 함수 선언 - header (.h) 반환자료형 함수이름 (매개변수, ); Void BeginPlay
	//구현 - Source(.cpp)
	// int32 Add(int32 num1, int32 num2);
	// 반환자료형 함수이름 Add 정수 num1,num2 입력값 결과값으로 정수형이 반환된다.
	// void - 텅빈, 반환자료형이 void일 경우 반환값이 없다.
	// 입력값 없이 운용되는 함수 - int32 JustShoot() 입력값 빈괄호.


	//UPROPERTY(EditInstanceOnly, BlueprintReadOnly, Category=CodeVariable)
	// 정수형 변수 number, number2를 선언한다.    
	//int32 number;
// int32 number = 0
	//UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category=CodeVariable)
	//int32 number2;
	// 조건문 : 조건이 성립했을 때 ?를 실행
	// 조건이 성립하지 않았을 때 , ? 실행
	// if - 함수 안에서만 구현 및 실행 가능

// 	실수형 변수 fnumber을 선언한다.
// 		float fnumber1 = 3.14;
// 		float fnumber2 = 10;
// 	
// 		// 문자열 변수 name을 선언한다.
// 		FString name;
// 		// Fstring name = " ";
// 		FString name2 = FString(TEXT("박원석"));
// 	
// 		// 논리형 변수isStudent
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

	// 문자열 두 개를 받아서 문자열 한 개로 합쳐서 반환하는 상수를 만들고 싶다.
	// 함수 선언 - 함수 호출 - 출력
	// BlueprintCallable - 블루프린트로 활용가능 실행핀이 있음
	// BlueprintPure - 블루프린트로 활용가능 실행핀이 없음 ex) get actor location 등 
// 	UFUNCTION(BlueprintPure)
// 	FString Stringappend(FString a, FString b);

	// 반복문 : 같은 행동을 지정한 횟수만큼 반복해서 실행하고자 할때
	// for문 : for(초기화; 조건식; 증감식;)반복해서 할 일};

//	int32 i1 = 7;*/

//	void MultiplicationTable(int32 gugunum)

	// 접두어 a - 부모중에 actor가 있고 상속받아 레벨에 배치 가능한상태.

};