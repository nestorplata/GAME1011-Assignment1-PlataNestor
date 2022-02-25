#pragma once

#include "AnimationFrame2.h"
class Slime2 {
public:
	Slime2() {
		FrameGenerator.setfile("Slime2.txt");
		frame0 = FrameGenerator.getFrame(0);
		frame1 = FrameGenerator.getFrame(1);
		frame2 = FrameGenerator.getFrame(2);

		FrameGenerator.close();;
	}

	void Update() {

		while (isUpdating) {

			//std::cout << frame0;
			//std::cout << spaces << frame1 << std::endl;
			//std::cout << frame2 << std::endl;



			Sleep(milli_seconds*3);
			isUpdating = false;
		}

	}

private:
	AnimationFrame2 FrameGenerator;
	std::string spaces = "\t\t\t\t";
	std::string frame0;
	std::string frame1;
	std::string frame2;
	const int numFrames = 3;
	const int milli_seconds = 500;
	bool isUpdating = true;

};