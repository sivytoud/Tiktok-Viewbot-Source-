#include <iostream>
#include <windows.h>
#include <string>
#include <conio.h>


void Color(unsigned short color)
{
	HANDLE hcon = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(hcon, color);
}
