#include "Player.h"



Player::Player()
{
	*this = Player({ Window::Center().x, 400 });
}


Player::Player(Vec2 pos) {
	this->pos = pos;
	accel = Vec2(0,0);
	setNormalSpeed(3);
	setLowSpeed(1);
	setDrawRadius(32);
}


Player::~Player()
{
}


bool Player::upKey() {
	return Input::KeyUp.pressed || Gamepad(0).povForward.pressed;
}


bool Player::downKey() {
	return Input::KeyDown.pressed || Gamepad(0).povBackward.pressed;
}


bool Player::leftKey() {
	return Input::KeyLeft.pressed || Gamepad(0).povLeft.pressed;
}


bool Player::rightKey() {
	return Input::KeyRight.pressed || Gamepad(0).povRight.pressed;
}


double Player::adjustmentSpeed(double speed) {
	bool upOrDown		=	upKey()		|| downKey();
	bool leftOrRight	=	leftKey()	|| rightKey();

	if (upOrDown && leftOrRight) return speed / Math::Sqrt(2.0);
	return speed;
}


bool Player::isWallOver() {
	return
		(
			!isUpOver()		||
			!isDownOver()	||
			!isLeftOver()	||
			!isRightOver()
		);
}


void Player::resolveWallOver() {
	if (!isWallOver()) return;
	if (isUpOver())		pos.y = upWallY();
	if (isDownOver())	pos.y = downWallY();
	if (isLeftOver())	pos.x = leftWallX();
	if (isRightOver())	pos.x = rightWallX();
}

bool Player::isUpOver(){
	return pos.y < upWallY();
}

bool Player::isDownOver(){
	return pos.y > downWallY();
}


bool Player::isLeftOver() {
	return pos.x < leftWallX();
}


bool Player::isRightOver() {
	return pos.x > rightWallX();
}


double Player::upWallY(){
	return 0 + drawRadius;
}


double Player::downWallY() {
	return Window::Size().y - drawRadius;
}


double Player::leftWallX() {
	return 0 + drawRadius;
}


double Player::rightWallX() {
	return Window::Size().x - drawRadius;
}


Vec2 Player::getInputAngle() {
	auto angle = Vec2(0,0);
	if (leftKey())	angle.x	-= 1;
	if (rightKey()) angle.x +=	1;
	if (upKey())	angle.y	+= -1;
	if (downKey())	angle.y	+=	1;

	return angle;
}


double Player::getSpeed() {
	if (Input::KeyLShift.pressed) return lowSpeed;
	if (Gamepad(0).button(6).pressed) return lowSpeed;
	return normalSpeed;
}


void Player::update() {
	auto speed		=	getSpeed();
	auto plusAccel	=	Vec2(0,0);

	speed = adjustmentSpeed(speed);

	accel	+=	getInputAngle() * speed;
	pos		+=	accel;
	accel	*=	0.85;

	resolveWallOver();
}


void Player::draw() {
	Circle(pos.x, pos.y, drawRadius).draw(MaterialPalette::White);
}


double Player::getNormalSpeed() {
	return normalSpeed;
}


void Player::setNormalSpeed(double speed) {
	normalSpeed = speed;
}


double Player::getLowSpeed() {
	return lowSpeed;
}


void Player::setLowSpeed(double speed) {
	lowSpeed = speed;
}


double Player::getDrawRadius() {
	return drawRadius;
}


void Player::setDrawRadius(double radius) {
	drawRadius = radius;
}