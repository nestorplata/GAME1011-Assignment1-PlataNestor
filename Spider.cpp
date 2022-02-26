#include "Spider.h"

Spider::Spider() {
	SetFile("Spider.txt");
	m_frame[0] = GetFrame(0, 0);
	m_frame[1] = GetFrame(1, 1);
	m_frame[2] = GetFrame(2, 2);
	Close();
}

void Spider::Update() {
	//1
	system("CLS");
	for (int i = 0; i < 7; i++)
	{
		std::cout << "\\\\" << std::endl;
	}
	std::cout <<  m_frame[0];
	Sleep(s_milli_seconds * 3);

	//2
	system("CLS");
	for (int i = 0; i< 7; i++)
	{
		std::cout << spaces << "\\\\" << std::endl;
		spaces +="  ";
	}

	std::cout << m_frame[1];
	Sleep(s_milli_seconds * 3);

	//3
	system("CLS");
	for (int i = 0; i < 16; i++)
	{
		std::cout << "\\\\";
	}
	std::cout << std::endl<<m_frame[2];
	Sleep(s_milli_seconds * 3);

	//4
	system("CLS");
	spaces = "  ";
	for (int i = 0; i < 7; i++)
	{
		std::cout << spaces << "\\\\" << std::endl;
		spaces += "  ";
	}

	std::cout << m_frame[1];
	Sleep(s_milli_seconds * 3);

	//5
	system("CLS");
	for (int i = 0; i < 7; i++)
	{
		std::cout << "\\\\" << std::endl;
	}
	std::cout << m_frame[0];

	Sleep(s_milli_seconds * 3);
}