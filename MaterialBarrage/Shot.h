#pragma once
#include <Siv3D.hpp>
#include "MaterialPalette.h"
#include "GameObject.h"

class Shot : public GameObject
{
public:
	Shot();
	Shot(Vec2 pos);
	~Shot();

	void update() override;
	void draw() override;
};

