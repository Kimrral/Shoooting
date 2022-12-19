// Fill out your copyright notice in the Description page of Project Settings.


#include "CodeTest.h"

#pragma warning (disable : 4458) // c4458경고 끄기

// Sets default values
// 기본 값을 설정할 수 있다.
// 생성자 함수 - 특수한 함수기 때문에 반환자료형이 없다
// Class 의 Life Cycle 생애주기
// 액터를 레벨에 배치 - 생성자 함수 호출, 컴포넌트 생성, 기본값을 넣어 변수 초기화 - 레벨 생성(인스턴스) - Begin play
ACodeTest::ACodeTest()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned - event function
void ACodeTest::BeginPlay()
{
	Super::BeginPlay();

	// Add 함수에 입력값 8,4를 넣어서 결과를 result 변수에 받는다.
// 	int32 result1 = Add(1, 2);
// 	int32 result2 = Subtract(210, 208);
// 	int32 result3 = Multiply(1, 1);
// 	float result4 = Divide(4, 8);
// 
// 	// Result 변수에 있는 값을 화면에 출력한다.
// 	UE_LOG(LogTemp, Warning, TEXT("Result : %d"), result1);
// 	UE_LOG(LogTemp, Warning, TEXT("Result : %d"), result2);
// 	UE_LOG(LogTemp, Warning, TEXT("Result : %d"), result3);
// 	UE_LOG(LogTemp, Warning, TEXT("Result : %.2f"), result4);
	// if - else if - else 중 하나라도 참이 되면 나머지는 실행하지 않음.
	// And 조건문은 둘다참 Or조건문은 둘중에 하나라도참
	
// 	FString name1 = StringAppender(firstname, lastname);
// 	
// 	UE_LOG(LogTemp, Warning, TEXT("Name : %s"), *name1);
// 	if (age >= 20 && height >= 160)
// 	{
// 		UE_LOG(LogTemp, Warning, TEXT(" 환영 "));
// 	}
// 	else
// 	{
// 		UE_LOG(LogTemp, Warning, TEXT(" 외면 "));
// 	}

// 	if (korean = true && (age >= 20 && age < 40))
// 	{
// 		UE_LOG(LogTemp, Warning, TEXT(" 청년 "));
// 	}
// 	else
// 	{
// 		UE_LOG(LogTemp, Warning, TEXT(" 청년아님 "));
	// 
// 	FString result = Stringappend(TEXT("김현"), TEXT("준"));
// 	UE_LOG(LogTemp, Warning, (TEXT("Name : %s")), *result);
// 
// 	UPROPERTY(EditAnywhere, Category = CodeVariable)
// 	int32 checker = 122;
// 	if (checker % 2 == 0)
// 	{
// 		UE_LOG(LogTemp, Warning, TEXT("even"));
// 	}
// 	else
// 	{
// 		UE_LOG(LogTemp, Warning, TEXT("odd"));
// 	}

	//안녕하세요 라는 문자열을 10번 출력하고 싶다.
	// i++ 후위증가 ++i 전위증가
	
// 
// 	int32 num = 3;
// 
// 	num = num + 2;
// 	num += 2;
// 
// 	num -= 2;
// 	num = num - 2;

	//구구단 1~9단 출력


	for (int32 i = 2; i < 10; ++i)
	{
		for (int32 j = 1; j < 10; ++j)
		{
			UE_LOG(LogTemp, Warning, TEXT("%d x %d = %d"),i ,j ,i * j);
		}
		UE_LOG(LogTemp, Warning, TEXT("==========================="));
	}



}

// void ACodeTest::MultiplicationTable(int32 gugunum)
// {
// 	for (int32 i = 1; i < 10; ++i)
// 	{
// 		UE_LOG(LogTemp, Warning, TEXT("%d x %d = %d"), gugunum, i, gugunum * i);
// 	}
// }
// 자료형의 변환 - Type Casting




	
	// number 변수에 3을 대입한다.
	//number = 3;
	//number = number2;
	//number2 = -7;	

	// number의 값을 output 콘솔 창에 출력한다.
	//UE_LOG(LogTemp, Warning, TEXT("number1 is %d, number2 is %d"));
// 	UE_LOG(LogTemp, Warning, TEXT(" float number is %f:"), fnumber1);
 	/*UE_LOG(LogTemp, Warning, TEXT("Hello World %s"), *name2);*/
	
// 	isTeacher = false;
// 	if (isTeacher == true)
// 		{
// 		UE_LOG(LogTemp, Warning, TEXT("True"));
// 		}
// 	else
// 		{
// 		UE_LOG(LogTemp, Warning, TEXT("False"));
// 		}



// Called every frame
void ACodeTest::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

// // class 이름 앞에 A가 붙을 경우 Actor class로부터 상속받은 것을 의미한다
// int32 ACodeTest::Add(int32 num1, int32 num2)
// {
// 	// to do
// 	return num1 + num2;
// }
// int32 ACodeTest::Subtract(int32 num3, int32 num4)
// {
// 	// to do
// 	return num3 - num4;
// }
// int32 ACodeTest::Multiply(int32 num5, int32 num6)
// {
// 	// to do
// 	return num5 * num6;
// }
// int32 ACodeTest::Divide(int32 num7, int32 num8)
// {
// 	// to do
// 	return (float)num7 / (float)num8;
// }
// 함수 선언 - 반환자료형 함수이름 (매개변수, );
// 함수 구현 - 반환자료형 클래스명 :: 함수이름 (매개변수, );
// 
// 
// FString ACodeTest::StringAppender(FString firstname2, FString lastname2)
// {
// 	return firstname + " " + lastname;
/*}*/
// FString ACodeTest::Stringappend(FString a, FString b)
// {
// 	return a + b;
// }

// 전역 변수와 지역 변수 Variable Scope
// Header 파일에 선언한 변수 혹은 함수 바깥쪽이면서 header 안쪽 - 전역
// 어떤 함수 안에 선언한 변수 - 지역
// 같은 함수 내의 변수는 전역함수보다 지역함수가 우선한다.
// 지역변수는 특정 함수에 종속된 존재기 때문에 영구하지 않다. return값을 뱉어내고 함수는 삭제됨 - 종속된 지역변수도 삭제
// 전역변수는 클래스를 삭제하지 않는 한 영구하다.
