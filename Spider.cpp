#include "Spider.h"

Spider::Spider() {
	SetFile("Spider.txt");
	frame[0] = GetFrame(0, 0);
	frame[1] = GetFrame(1, 1);
	frame[2] = GetFrame(2, 2);
	Close();
}

void Spider::Update() {
	//1
	system("CLS");
	for (int i = 0; i < 7; i++)
	{
		std::cout << "\\\\" << std::endl;
	}
	std::cout <<  frame[0];
	Sleep(milli_seconds * 3);

	//2
	system("CLS");
	for (int i = 0; i< 7; i++)
	{
		std::cout << spaces << "\\\\" << std::endl;
		spaces +="  ";
	}

	std::cout << frame[1];
	Sleep(milli_seconds * 3);

	//3
	system("CLS");
	for (int i = 0; i < 16; i++)
	{
		std::cout << "\\\\";
	}
	std::cout << std::endl<<frame[2];
	Sleep(milli_seconds * 3);

	//4
	system("CLS");
	spaces = "  ";
	for (int i = 0; i < 7; i++)
	{
		std::cout << spaces << "\\\\" << std::endl;
		spaces += "  ";
	}

	std::cout << frame[1];
	Sleep(milli_seconds * 3);

	//5
	system("CLS");
	for (int i = 0; i < 7; i++)
	{
		std::cout << "\\\\" << std::endl;
	}
	std::cout << frame[0];

	Sleep(milli_seconds * 3);
}