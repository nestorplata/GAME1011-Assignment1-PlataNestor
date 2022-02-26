#include"Afformation.h"

Afformation::Afformation() {
	SetFile("Afformation.txt");
	frame[0] = GetFrame(0, 2);
	frame[1] = GetFrame(1, 0);
	frame[2] = GetFrame(2, 1);
	Close();
}

void Afformation::Update() {
	system("CLS");

	std::cout << frame[1];
	Sleep(milli_seconds * 3);

	system("CLS");
	std::cout << Vspaces << frame[2];
	Sleep(milli_seconds * 3);

	system("CLS");
	std::cout << Vspaces << Vspaces << frame[0];
	Sleep(milli_seconds * 3);

}
