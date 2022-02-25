#pragma once

#include "AnimationFrame2.h"
class Slime2 {
public:
	Slime2() {
		FrameGenerator.setfile("Slime2.txt");
		frame[0] = FrameGenerator.getFrame(0, 0);
		frame[1] = FrameGenerator.getFrame(1, 0);
		frame[2] = FrameGenerator.getFrame(2, 0);
		frame[3] = FrameGenerator.getFrame(3, 0);
		FrameGenerator.close();;
	}

	void Update() {	
		system("CLS");
		std::cout << Vspaces <<Vspaces<<frame[0];
		Sleep(milli_seconds*3);

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

private:
	AnimationFrame2 FrameGenerator;
	std::string Vspaces = "\n\n\n";
	std::string frame[4];

	const int numFrames = 3;
	const int milli_seconds = 300;

};