#include "Ant.h"

Ant::Ant() {
	SetFile("Ant.txt");
	m_frame[0] = GetFrame(0, 0);
	m_frame[1] = GetFrame(1, 1);
	m_frame[2] = GetFrame(2, 2);
	Close();
}

void Ant::Update() {
	system("CLS");

	std::cout << m_Vspaces << m_frame[0];
	std::cout << spaces<< "FOOOOOOOOD";
	Sleep(s_milli_seconds * 3);

	system("CLS");
	std::cout << m_Vspaces << m_frame[1];
	std::cout << spaces << "FOOOOOOOOD";
	Sleep(s_milli_seconds * 3);

	system("CLS");
	std::cout << m_Vspaces << m_frame[2];
	std::cout << spaces << "FOOOOOOOOD";
	Sleep(s_milli_seconds * 3);

	system("CLS");
	std::cout << m_Vspaces << m_frame[2];
	Sleep(s_milli_seconds * 3);

}