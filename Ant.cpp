#include "Ant.h"

Ant::Ant() {
	SetFile("Ant.txt");
	frame[0] = GetFrame(0, 0);
	frame[1] = GetFrame(1, 1);
	frame[2] = GetFrame(2, 2);
	Close();
}

void Ant::Update() {
	system("CLS");

	std::cout << Vspaces << frame[0];
	std::cout << spaces<< "FOOOOOOOOD";
	Sleep(milli_seconds * 3);

	system("CLS");
	std::cout << Vspaces << frame[1];
	std::cout << spaces << "FOOOOOOOOD";
	Sleep(milli_seconds * 3);

	system("CLS");
	std::cout << Vspaces << frame[2];
	std::cout << spaces << "FOOOOOOOOD";
	Sleep(milli_seconds * 3);

	system("CLS");
	std::cout << Vspaces << frame[2];
	Sleep(milli_seconds * 3);

}