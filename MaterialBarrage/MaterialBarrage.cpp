#include "MaterialBarrage.h"



MaterialBarrage::MaterialBarrage()
{
}


MaterialBarrage::~MaterialBarrage()
{
}


void MaterialBarrage::update() {
	scenes.update();
}


void MaterialBarrage::draw() {
	scenes.draw();
}