#include "Slug.h"

Slug::Slug()
{
	SetFile("Slug.txt");
	frame[0] = GetFrame(0, 0);
	frame[1] = GetFrame(1, 1);
	frame[2] = GetFrame(2, 2);
	frame[3] = GetFrame(3, 3);
	frame[4] = GetFrame(4, 4);


	Close();
}

void Slug::Update()
{

	system("CLS");
	std::cout << frame[0];
	Sleep(milli_seconds * 3);

	system("CLS");
	std::cout << frame[1];
	Sleep(milli_seconds * 3);

	system("CLS");
	std::cout << frame[2];
	Sleep(milli_seconds * 3);

	system("CLS");
	std::cout << frame[3];
	Sleep(milli_seconds * 3);

	system("CLS");
	std::cout << frame[4];
	Sleep(milli_seconds * 3);



}
