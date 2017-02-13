#pragma once
#include "Windows.h"
class GeneralMovement
{
public:
	GeneralMovement();
	~GeneralMovement();
	static int keyExtendedPress(WORD hexcode);
	static int keyRelease(WORD hexcode);
	static int mouseLeftSinglePress();
	static int mouseLeftExtendedPress();
	static int mouseLeftRelease();
	static int mouseRightSinglePress();
	static int mouseRightExtendedPress();
	static int mouseMoveRelative(LONG dx, LONG dy);
	static int mouseRightRelease();
private:
	static INPUT inputGenerateKeyboard(WORD hexcode, DWORD flags);
	static INPUT inputGenerateMouse(LONG dx, LONG dy, DWORD flags);
};
