#include <windows.h>
#include <iostream>
using namespace std;

int main(int argc, char* argv[])
{
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), CONSOLE_FULLSCREEN_MODE	1);
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_GREEN);
	cout << "green?" << endl;
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_RED);
	cout << "red?" << endl;
	cin.ignore();
	return 0;
}
