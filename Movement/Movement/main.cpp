#include "GeneralMovement.h"
#include "WotMovement.h"
#include <utility>
#include <iostream>

using namespace std;

int main()
{
	Sleep(5000);
	WotMovement::staticTurnAllFLick(90);
	Sleep(5000);
	WotMovement::turnTurretFlick(30);
	
	/*int n = 18;
	int angle5 = 35; // pixels for x axis to turn turret on 5 degrees
	pair<int, int> mouseRelativePos(0, 0); // relative coordinates for ability to return turret in initial state
	
	Sleep(5000);
	n = 21;
	GeneralMovement::mouseMoveRelative(angle5 * n, 0);
	mouseRelativePos.first += angle5 * n;
	//Sleep(n * 131);
	//mouseLeftSinglePress();
	Sleep(2000);
	GeneralMovement::mouseMoveRelative(-mouseRelativePos.first, -mouseRelativePos.second);
	mouseRelativePos.first = 0;
	Sleep(2000);
	n = -12;
	GeneralMovement::mouseMoveRelative(angle5 * n, -140);
	mouseRelativePos.first += angle5 * n;
	Sleep(2000);
	GeneralMovement::mouseMoveRelative(-mouseRelativePos.first, -mouseRelativePos.second);
	mouseRelativePos.first = 0;
	Sleep(2000);
	n = -16;
	GeneralMovement::mouseMoveRelative(angle5 * n, 0);
	GeneralMovement::keyExtendedPress(0x1E);
	Sleep(2200);
	GeneralMovement::keyRelease(0x1E);
	
	GeneralMovement::keyExtendedPress(0x11);
	Sleep(6500);
	GeneralMovement::keyExtendedPress(0x20);
	Sleep(2200);
	GeneralMovement::keyRelease(0x20);
	Sleep(10000);
	GeneralMovement::keyRelease(0x11); */
}