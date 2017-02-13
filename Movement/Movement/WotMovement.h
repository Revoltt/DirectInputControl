#pragma once
#include <utility>
#include <cmath>
#include "GeneralMovement.h"

//scancodes for movement buttons
#define W 0x11
#define A 0x1E
#define D 0x20
#define S 0x1F

using namespace std;

class WotMovement
{
public:
	WotMovement();
	~WotMovement();
	static int turnTurretFlick(double degree);
	static int moveGunVerticalFlick(double degree);
	static int staticTurnTank(double degree);
	static int staticTurnAllFLick(double degree);
	static int accelerate();
	static int stop();
	static int moveToPosition(int xDest, int yDest);
	static int aim(int xTarget, int yTarget, int zTarget);
	static int shoot();
	static int autoaimLock();
private:
	static const double angle1;
	static const double tankTurnSpeed;
};