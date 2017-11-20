#pragma once
#include "GameScene.h"
#include "Player.h"

class StageScene : public GameScene::Scene
{
protected:
	Player player;
public:
	StageScene();
	~StageScene();
};

