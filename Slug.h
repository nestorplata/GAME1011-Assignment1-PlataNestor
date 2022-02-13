#pragma once

#include "AnimationFrame.h"
class Slug{
public:
	Slug() {
		//setInitialText();
		Frames.setfile("Slug.txt");
	}

	void Update() {
		while (isUpdating) {
			system("CLS");
			std::cout << spaces << Frames.getframe1(0) << std::endl;
			std::cout << spaces << Frames.getframe1(2) << std::endl;
			std::cout << spaces << Frames.getframe1(4) << std::endl;
			Sleep(milli_seconds);

			system("CLS");
			std::cout << spaces << "\t" << Frames.getframe3(2) << std::endl;
			std::cout << spaces << "\t" << Frames.getframe3(5) << std::endl;
			std::cout << spaces << "\t" << Frames.getframe3(8) << std::endl;
			Sleep(milli_seconds);

			system("CLS");
			std::cout << spaces << "\t\t" << Frames.getframe2(1) << std::endl;
			std::cout << spaces << "\t\t" << Frames.getframe2(3) << std::endl;
			std::cout << spaces << "\t\t" << Frames.getframe2(6) << std::endl;
			Sleep(milli_seconds);

			system("CLS");
			std::cout << spaces << "\t\t\t" << Frames.getframe3(2) << std::endl;
			std::cout << spaces << "\t\t\t" << Frames.getframe3(5) << std::endl;
			std::cout << spaces << "\t\t\t" << Frames.getframe3(8) << std::endl;
			Sleep(milli_seconds);

			if (i == 2)
			{
				system("CLS");
				std::cout << spaces << "\t\t\t\t" << Frames.getframe1(0) << std::endl;
				std::cout << spaces << "\t\t\t\t" << Frames.getframe1(2) << std::endl;
				std::cout << spaces << "\t\t\t\t" << Frames.getframe1(4) << std::endl;
				Sleep(milli_seconds);
				system("CLS");
				isUpdating = false;

			}

			if (i < 2)
			{
				spaces += "\t\t\t\t";
				++i;
			}
			else {

				spaces = "";
				i = 0;
			}
		}

	}

private:
	AnimationFrame Frames;
	std::string spaces;
	int i = 0;
	const int milli_seconds = 500;
	bool isUpdating =true;

};