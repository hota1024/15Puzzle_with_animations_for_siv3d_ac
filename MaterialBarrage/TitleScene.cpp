#include "TitleScene.h"



TitleScene::TitleScene()
{
	Graphics::SetBackground(MaterialPalette::Blue);
}


TitleScene::~TitleScene()
{
}


void TitleScene::update() {
	if (Input::KeyZ.clicked) {
		changeScene(L"Game");
	}
	if (Gamepad(0).button(3).pressed) {
		changeScene(L"Game");
	}
}


void TitleScene::draw() const {
	title(L"MaterialBarrage").drawCenter({Window::Center().x,100},MaterialPalette::White);
	if (Gamepad(0).isConnected()) {
		subtitle(L"press a button").drawCenter({ Window::Center().x,400 }, MaterialPalette::Grey200);
	}
	else {
		subtitle(L"press z key").drawCenter({ Window::Center().x,400 }, MaterialPalette::Grey200);
	}

}