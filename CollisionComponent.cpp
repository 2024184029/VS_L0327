#include "CollisionComponent.h"

// 초기화 목적으로 생성자 옆에 둠 ? 차이를 뭐라고 하셧더라
UCollisionComponent::UCollisionComponent() : bIsGenerateHit(false), bIsGenerateOverlap(false)
{
}

UCollisionComponent::~UCollisionComponent()
{
}

void UCollisionComponent::BeginPlay()
{
}

void UCollisionComponent::Tick()
{
}
