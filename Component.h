#pragma once

// 이걸 상속 받는 사람들한테 밑의 함수를 무조건 만들라고 강요하고 싶음
// 추상 클래스
// 추상 클래스는 바로 생성 안 되고 (메인에서 부르기 안 됨)
// => 상속 받아서만 구현 가능
// 자식에서 이 함수를 무조건 재정의 해야 함
class UComponent
{
public:
	UComponent();
	virtual ~UComponent();

	// pure virtual function 순수 가상 함수
	virtual void BeginPlay() = 0; // 함수 = 0 하면 순수 가상 함수 되고 추상 클래스라 함

	virtual void Tick() = 0;

	class AActor* Owner;
};

