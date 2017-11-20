#pragma once
#include <Siv3D.hpp>
#include "MaterialPalette.h"

class GameObject
{
public:
	GameObject();
	GameObject(Vec2 pos);
	~GameObject();

	virtual void update() = 0;
	virtual void draw() = 0;

	Vec2 pos;
};

