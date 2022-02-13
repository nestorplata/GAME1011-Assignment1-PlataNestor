#pragma once

#include <iostream>
#include <fstream>

class AnimationFrame {
public:

	void setfile(std::string File)
	{
		inFile.open(File);
		if (!inFile) {
			std::cout << "Unable to open file datafile.txt";
		}
		else
		{
			setframe1();
			setframe2();
			setframe3();
		}
	}

	void setframe1(){
		inFile.get(frame1[0], 11);
		inFile.get(frame1[2], 11);
		inFile.get(frame1[4], 11);
	}

	void setframe2() {
		inFile.get(frame2[1], 11);
		inFile.get(frame2[3], 11);
		inFile.get(frame2[6], 11);
	}
	void setframe3() {
		inFile.get(frame3[2], 11);
		inFile.get(frame3[5], 11);
		inFile.get(frame3[8], 11);
	}

	std::string getframe1(int i) {
		return frame1[i];
	}

	std::string getframe2(int i) {
		return frame2[i];
	}

	std::string getframe3(int i) {
		return frame3[i];
	}

	void close() {
		inFile.close();
	}

private:
	std::ifstream inFile;
	char frame1[5][10];
	char frame2[7][10];
	char frame3[9][10];

};