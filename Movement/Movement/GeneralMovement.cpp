#include "GeneralMovement.h"

GeneralMovement::GeneralMovement()
{
}

GeneralMovement::~GeneralMovement()
{
}

INPUT GeneralMovement::inputGenerateKeyboard(WORD hexcode, DWORD flags)
{
	INPUT input;
	input.type = INPUT_KEYBOARD;
	input.ki.wScan = hexcode;
	input.ki.wVk = 0;
	input.ki.dwFlags = flags; // for directinput not using vk codes
	input.ki.dwExtraInfo = NULL;
	input.ki.time = 0;
	return input;
}


INPUT GeneralMovement::inputGenerateMouse(LONG dx, LONG dy, DWORD flags)
{
	INPUT input;
	input.type = INPUT_MOUSE;
	input.mi.dx = dx;
	input.mi.dy = dy;
	input.mi.dwFlags = flags;
	input.mi.mouseData = 0;
	input.mi.time = 0;
	input.mi.dwExtraInfo = NULL;
	return input;
}

int GeneralMovement::keyExtendedPress(WORD hexcode)
{
	INPUT input = inputGenerateKeyboard(hexcode, KEYEVENTF_SCANCODE);
	SendInput(1, &input, sizeof(INPUT));
	return 0;
}

int GeneralMovement::keyRelease(WORD hexcode)
{
	INPUT input = inputGenerateKeyboard(hexcode, KEYEVENTF_SCANCODE | KEYEVENTF_KEYUP);
	SendInput(1, &input, sizeof(INPUT));
	return 0;
}

int GeneralMovement::mouseLeftSinglePress()
{
	INPUT input = inputGenerateMouse(0, 0, MOUSEEVENTF_LEFTDOWN | MOUSEEVENTF_LEFTUP);
	SendInput(1, &input, sizeof(INPUT));
	return 0;
}

int GeneralMovement::mouseLeftExtendedPress()
{
	INPUT input = inputGenerateMouse(0, 0, MOUSEEVENTF_LEFTDOWN);
	SendInput(1, &input, sizeof(INPUT));
	return 0;
}

int GeneralMovement::mouseLeftRelease()
{
	INPUT input = inputGenerateMouse(0, 0, MOUSEEVENTF_LEFTUP);
	SendInput(1, &input, sizeof(INPUT));
	return 0;
}

int GeneralMovement::mouseRightSinglePress()
{
	INPUT input = inputGenerateMouse(0, 0, MOUSEEVENTF_RIGHTDOWN | MOUSEEVENTF_RIGHTUP);
	SendInput(1, &input, sizeof(INPUT));
	return 0;
}

int GeneralMovement::mouseRightExtendedPress()
{
	INPUT input = inputGenerateMouse(0, 0, MOUSEEVENTF_RIGHTDOWN);
	SendInput(1, &input, sizeof(INPUT));
	return 0;
}

int GeneralMovement::mouseMoveRelative(LONG dx, LONG dy)
{
	INPUT input = inputGenerateMouse(dx, dy, MOUSEEVENTF_MOVE);
	SendInput(1, &input, sizeof(INPUT));
	return 0;
}

int GeneralMovement::mouseRightRelease()
{
	INPUT input = inputGenerateMouse(0, 0, MOUSEEVENTF_RIGHTUP);
	SendInput(1, &input, sizeof(INPUT));
	return 0;
}