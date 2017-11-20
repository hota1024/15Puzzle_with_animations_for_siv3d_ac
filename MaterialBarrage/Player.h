#pragma once
#include "GameObject.h"

class Player :
	public GameObject
{
	Vec2	accel;
	double	normalSpeed;
	double	lowSpeed;
	double	drawRadius;

	double	adjustmentSpeed(double speed);		// 斜め移動時のスピードを返します。
	Vec2	getInputAngle();					// 入力された進行角度を返します。
	bool	isWallOver();						// 画面外なら true を返します。
	void	resolveWallOver();					// 画面外なら画面内に移動します。
	bool	isUpOver();							// 画面上部の外なら true を返します。
	bool	isDownOver();						// 画面下部の外なら true を返します。
	bool	isLeftOver();						// 画面上部の左なら true を返します。
	bool	isRightOver();						// 画面上部の右なら true を返します。
	double	upWallY();							// 画面上部の y 座標を返します。
	double	downWallY();						// 画面上部の y 座標を返します。
	double	leftWallX();						// 画面上部の x 座標を返します。
	double	rightWallX();						// 画面上部の x 座標を返します。
	double	getSpeed();							// 現在のプレイヤーのスピードを返します。
	bool	upKey();							// 自機の　「上」　に進むキーが押されていたら true を返します。
	bool	downKey();							// 自機の　「下」　に進むキーが押されていたら true を返します。
	bool	leftKey();							// 自機の　「左」　に進むキーが押されていたら true を返します。
	bool	rightKey();							// 自機の　「右」　に進むキーが押されていたら true を返します。
public:
	Player();
	Player(Vec2 pos);
	~Player();

	void update();
	void draw();

	double	getNormalSpeed();				// 通常時のスピードを返します。
	void	setNormalSpeed(double speed);	// 通常時のスピードをセットします。
	double	getLowSpeed();					// 低速時のスピードを返します。
	void	setLowSpeed(double speed);		// 低速時のスピードをセットします。
	double	getDrawRadius();					// 描画時の円の半径を返します。
	void	setDrawRadius(double radius);					// 描画時の円の半径をセットします。
	
};

