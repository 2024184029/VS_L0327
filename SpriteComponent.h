#pragma once
#include "Component.h"
#include "RenderableComponent.h"
#include "SDL.h"

class USpriteComponent : public UComponent, public IRenderableComponent
{
public:
	USpriteComponent();
	~USpriteComponent();

	// UComponent 구현, Abstract class
	virtual void BeginPlay() override;

	virtual void Tick() override;

	// URendarableComponent 를 구현, Interface라는 것 구현 -> C++엔 문법 없음 (블루프린트, C#, 자바에만 잇음)
	virtual void Render() override;

	int ZOrder = 0;

	int X = 0;
	int Y = 0;

	SDL_Surface* Image;
	SDL_Texture* Texture;
};

