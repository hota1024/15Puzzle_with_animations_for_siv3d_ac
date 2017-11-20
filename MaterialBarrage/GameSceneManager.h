#pragma once
#include "GameScene.h"
#include "TitleScene.h"
#include "GameScene.h"

class GameSceneManager
{
	GameScene manager;
public:
	GameSceneManager();
	~GameSceneManager();

	void update();
	void draw();
};

