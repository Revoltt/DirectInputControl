#include "WotMovement.h"

const double WotMovement::angle1 = 7.4;
const double WotMovement::tankTurnSpeed = 37.55;

WotMovement::WotMovement()
{
}

WotMovement::~WotMovement()
{
}

int WotMovement::turnTurretFlick(double degree)
{
	GeneralMovement::mouseMoveRelative((LONG) trunc(degree * angle1), 0);
	return 0;
}

int WotMovement::moveGunVerticalFlick(double degree)
{
	GeneralMovement::mouseMoveRelative(0, (LONG) trunc(degree * angle1));
	return 0;
}

int WotMovement::staticTurnTank(double degree)
{
	if (degree > 0)
	{
		GeneralMovement::keyExtendedPress(D);
		Sleep(trunc(1000 * abs(degree) * 1.0 / tankTurnSpeed));
		GeneralMovement::keyRelease(D);
	}
	else
	{
		GeneralMovement::keyExtendedPress(A);
		Sleep(trunc(1000 * abs(degree) * 1.0 / tankTurnSpeed));
		GeneralMovement::keyRelease(A);
	}
	return 0;
}

int WotMovement::staticTurnAllFLick(double degree)
{
	WotMovement::staticTurnTank(degree);
	WotMovement::turnTurretFlick(degree);
	return 0;
}

int WotMovement::shoot()
{
	GeneralMovement::mouseLeftSinglePress();
	return 0;
}

int WotMovement::autoaimLock()
{
	GeneralMovement::mouseRightSinglePress();
	return 0;
}

int WotMovement::accelerate()
{
	GeneralMovement::keyExtendedPress(W);
	//WotMovement::forwardKeyPressed = true;
	return 0;
}

int WotMovement::stop()
{
	GeneralMovement::keyRelease(W);
	//WotMovement::forwardKeyPressed = false;
	return 0;
}

int WotMovement::moveToPosition(int xDest, int yDest)
{
	return 0;
}

int WotMovement::aim(int xTarget, int yTarget, int zTarget)
{
	return 0;
}
