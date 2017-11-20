#pragma once
#include "GameObject.h"

class Player :
	public GameObject
{
	Vec2	accel;
	double	normalSpeed;
	double	lowSpeed;
	double	drawRadius;

	double	adjustmentSpeed(double speed);		// �΂߈ړ����̃X�s�[�h��Ԃ��܂��B
	Vec2	getInputAngle();					// ���͂��ꂽ�i�s�p�x��Ԃ��܂��B
	bool	isWallOver();						// ��ʊO�Ȃ� true ��Ԃ��܂��B
	void	resolveWallOver();					// ��ʊO�Ȃ��ʓ��Ɉړ����܂��B
	bool	isUpOver();							// ��ʏ㕔�̊O�Ȃ� true ��Ԃ��܂��B
	bool	isDownOver();						// ��ʉ����̊O�Ȃ� true ��Ԃ��܂��B
	bool	isLeftOver();						// ��ʏ㕔�̍��Ȃ� true ��Ԃ��܂��B
	bool	isRightOver();						// ��ʏ㕔�̉E�Ȃ� true ��Ԃ��܂��B
	double	upWallY();							// ��ʏ㕔�� y ���W��Ԃ��܂��B
	double	downWallY();						// ��ʏ㕔�� y ���W��Ԃ��܂��B
	double	leftWallX();						// ��ʏ㕔�� x ���W��Ԃ��܂��B
	double	rightWallX();						// ��ʏ㕔�� x ���W��Ԃ��܂��B
	double	getSpeed();							// ���݂̃v���C���[�̃X�s�[�h��Ԃ��܂��B
	bool	upKey();							// ���@�́@�u��v�@�ɐi�ރL�[��������Ă����� true ��Ԃ��܂��B
	bool	downKey();							// ���@�́@�u���v�@�ɐi�ރL�[��������Ă����� true ��Ԃ��܂��B
	bool	leftKey();							// ���@�́@�u���v�@�ɐi�ރL�[��������Ă����� true ��Ԃ��܂��B
	bool	rightKey();							// ���@�́@�u�E�v�@�ɐi�ރL�[��������Ă����� true ��Ԃ��܂��B
public:
	Player();
	Player(Vec2 pos);
	~Player();

	void update();
	void draw();

	double	getNormalSpeed();				// �ʏ펞�̃X�s�[�h��Ԃ��܂��B
	void	setNormalSpeed(double speed);	// �ʏ펞�̃X�s�[�h���Z�b�g���܂��B
	double	getLowSpeed();					// �ᑬ���̃X�s�[�h��Ԃ��܂��B
	void	setLowSpeed(double speed);		// �ᑬ���̃X�s�[�h���Z�b�g���܂��B
	double	getDrawRadius();					// �`�掞�̉~�̔��a��Ԃ��܂��B
	void	setDrawRadius(double radius);					// �`�掞�̉~�̔��a���Z�b�g���܂��B
	
};

