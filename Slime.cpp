#include "Slime.h"

Slime :: Slime() {
	SetFile("Slime.txt");
	frame[0] = GetFrame(0, 0);
	frame[1] = GetFrame(1, 0);
	frame[2] = GetFrame(2, 0);
	frame[3] = GetFrame(3, 0);
	Close();
}

void Slime::Update() {
	system("CLS");
	std::cout << Vspaces << Vspaces << frame[0];
	Sleep(milli_seconds * 3);

	system("CLS");
	std::cout << Vspaces << Vspaces << frame[1];
	Sleep(milli_seconds * 3);

	system("CLS");
	std::cout << Vspaces << frame[0];
	Sleep(milli_seconds * 3);

	system("CLS");
	std::cout << frame[2];
	Sleep(milli_seconds * 3);

	system("CLS");
	std::cout << frame[3];
	Sleep(milli_seconds * 3);

	system("CLS");
	std::cout << Vspaces << frame[3];
	Sleep(milli_seconds * 3);

	system("CLS");
	std::cout << Vspaces << Vspaces << frame[1];
	Sleep(milli_seconds * 3);

	system("CLS");
	std::cout << Vspaces << Vspaces << frame[0];
	Sleep(milli_seconds * 3);

}