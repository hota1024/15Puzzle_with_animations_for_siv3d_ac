#pragma once
#include <Siv3D.hpp>
#include <HamFramework.hpp>
#include "MaterialPalette.h"

enum class SceneState {
	Title,
	Game,
};


using GameScene = SceneManager<String>;