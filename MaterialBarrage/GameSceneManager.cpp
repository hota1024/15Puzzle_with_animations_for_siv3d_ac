#include "GameSceneManager.h"



GameSceneManager::GameSceneManager()
{
	manager.add<TitleScene>(L"Title");
	manager.add<GameScene>(L"Game");
}


GameSceneManager::~GameSceneManager()
{
}


void GameSceneManager::update() {
	manager.update();
}


void GameSceneManager::draw() {
	manager.draw();
}