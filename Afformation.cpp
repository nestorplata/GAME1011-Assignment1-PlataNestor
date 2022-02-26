#include"Afformation.h"

Afformation::Afformation() {
	SetFile("Afformation.txt");
	m_frame[0] = GetFrame(0, 2);
	m_frame[1] = GetFrame(1, 0);
	m_frame[2] = GetFrame(2, 1);
	Close();
}

void Afformation::Update() {
	system("CLS");

	std::cout << m_frame[1];
	Sleep(s_milli_seconds * 3);

	system("CLS");
	std::cout << m_Vspaces << m_frame[2];
	Sleep(s_milli_seconds * 3);

	system("CLS");
	std::cout << m_Vspaces << m_Vspaces << m_frame[0];
	Sleep(s_milli_seconds * 3);

}
