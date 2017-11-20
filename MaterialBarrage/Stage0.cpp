#include "Stage0.h"



Stage0::Stage0()
{
	Graphics::SetBackground(MaterialPalette::Blue);
}


Stage0::~Stage0()
{
}

void Stage0::update(){
	player.update();
	player.draw();
}
