#pragma once
#include <iostream>
#include<fstream>

class Slug {
public:
	Slug() {
		//setInitialText();
		setfile("Slug.txt");
	}

	void setfile(std::string File)
	{
		inFile.open(File);
		if (!inFile) {
			std::cout << "Unable to open file datafile.txt";
		}
		else
		{
			setText();
		}
	}

	void setText()
	{
		inFile.get(frame1[0], 11);
		inFile.get(frame1[2], 11);
		inFile.get(frame1[4], 11);

		inFile.get(frame2[1], 11);
		inFile.get(frame2[3], 11);
		inFile.get(frame2[6], 11);

		inFile.get(frame3[2], 11);
		inFile.get(frame3[5], 11);
		inFile.get(frame3[8], 11);

	}

	void close() {
		inFile.close();
	}

	void Update() {
		while (isUpdating) {
			system("CLS");
			std::cout << spaces << frame1[0] << std::endl;
			std::cout << spaces << frame1[2] << std::endl;
			std::cout << spaces << frame1[4] << std::endl;
			Sleep(milli_seconds);

			system("CLS");
			std::cout << spaces << "\t" << frame3[2] << std::endl;
			std::cout << spaces << "\t" << frame3[5] << std::endl;
			std::cout << spaces << "\t" << frame3[8] << std::endl;
			Sleep(milli_seconds);

			system("CLS");
			std::cout << spaces << "\t\t" << frame2[1] << std::endl;
			std::cout << spaces << "\t\t" << frame2[3] << std::endl;
			std::cout << spaces << "\t\t" << frame2[6] << std::endl;
			Sleep(milli_seconds);

			system("CLS");
			std::cout << spaces << "\t\t\t" << frame3[2] << std::endl;
			std::cout << spaces << "\t\t\t" << frame3[5] << std::endl;
			std::cout << spaces << "\t\t\t" << frame3[8] << std::endl;
			Sleep(milli_seconds);

			if (i == 2)
			{
				system("CLS");
				std::cout << spaces << "\t\t\t\t" << frame1[0] << std::endl;
				std::cout << spaces << "\t\t\t\t" << frame1[2] << std::endl;
				std::cout << spaces << "\t\t\t\t" << frame1[4] << std::endl;
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
	std::ifstream inFile;
	std::string spaces;
	char frame1[5][10];
	char frame2[7][10];
	char frame3[9][10];
	int i = 0;
	bool isUpdating =true;
	const int milli_seconds = 500;

};