#include "Shot.h"



Shot::Shot()
{
	*this = Shot({0,0});
}


Shot::Shot(Vec2 pos){
	this->pos = pos;
}


Shot::~Shot()
{
}


void Shot::update() {

}


void Shot::draw() {

}