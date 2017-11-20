#pragma once
#include "GameScene.h"

class TitleScene : public GameScene::Scene
{
	Font title{ 50 };
	Font subtitle{ 30 };
public:
	TitleScene();
	~TitleScene();

	void update() override;
	void draw() const override;
};

