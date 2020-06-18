#include "libs.h"


void SetPos(int x, int y)
{
	COORD cPos;
	cPos.X = x;
	cPos.Y = y;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), cPos);
}