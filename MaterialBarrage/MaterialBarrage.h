#pragma once
#include "GameSceneManager.h"

class MaterialBarrage
{
	GameSceneManager scenes;
public:
	MaterialBarrage();
	~MaterialBarrage();
	
	void update();
	void draw();
};

