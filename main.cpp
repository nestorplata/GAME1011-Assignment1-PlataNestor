#include <iostream>
//#include<stdio.h>
#include<Windows.h>

int main()
{
	int milli_seconds = 500;

	while (true) {
		system("CLS");
		std::cout << "\t\\/ " << std::endl;
		std::cout << "\t00" << std::endl;
		std::cout << "~000000000" << std::endl;
		Sleep(milli_seconds);

		system("CLS");
		std::cout << "\t\t\t\\/" << std::endl;
		std::cout << "\t\t     0  00" << std::endl;
		std::cout << "\t\t~0000 0000" << std::endl;

		Sleep(milli_seconds);
		system("CLS");
		std::cout << "\t\t\t\t\t\\/" << std::endl;
		std::cout << "\t\t\t\t    000 00" << std::endl;
		std::cout << "\t\t\t\t~000   000" << std::endl;

		Sleep(milli_seconds);
		system("CLS");
		std::cout << "\t\t\t\t\t\t\t\\/" << std::endl;
		std::cout << "\t\t\t\t\t\t     0  00" << std::endl;
		std::cout << "\t\t\t\t\t\t~0000 0000" << std::endl;

		Sleep(milli_seconds);
		system("CLS");
		std::cout << "\t\t\t\t\t\t\t\t\t\\/" << std::endl;
		std::cout << "\t\t\t\t\t\t\t\t        00" << std::endl;
		std::cout << "\t\t\t\t\t\t\t\t~000000000" << std::endl;
		
		Sleep(milli_seconds);
	}
}