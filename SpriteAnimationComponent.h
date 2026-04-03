#pragma once
#include "SpriteComponent.h"
#include "Actor.h"

class USpriteAnimationComponent : public USpriteComponent
{
public:
	USpriteAnimationComponent();
	virtual ~USpriteAnimationComponent();

	virtual void Tick();

	virtual void Render();

	USpriteAnimationComponent* SpriteAnimationComponent;

	int SpriteIndexX = 0;
	int SpriteIndexY = 0;

	float ElapsedTime = 0;
	float ExecutionTime = 0.1f;

	class AActor* Owner;
};

