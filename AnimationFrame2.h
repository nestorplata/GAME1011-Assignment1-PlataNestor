#pragma once

#include <iostream>
#include <fstream>
#include <string>

class AnimationFrame2 {
public:

	void setfile(std::string File)
	{
		inFile.open(File);
		if (!inFile) {
			std::cout << "Unable to open file datafile.txt";
		}
	}

	std::string getFrame(int n, int h)
	{
		frame.erase(0, 100);
		for (int i = 0; i < 3; i++)
		{
			for (int k = 0; k < h; k++)
			{
				frame += Hspaces;
			}

			inFile.ignore(1 +10*i + 33 * n, (char)(48 + i + 3 * n));
			inFile.get(lines[i], 11, (char)(49 + i + 3 * n));
			for (int j = 0; j < 11; j++)
			{
				frame.push_back(lines[i][j]);

			}
			
			frame += '\n';

		}

		return frame;
	}

	void draw() //debug purposes
	{
		std::cout << frame << std::endl;

	}

	void close() {
		inFile.close();
		//outFile.open("Animation.txt");

	}

private:
	std::ifstream inFile;
	std::ofstream outFile;
	char lines[3][11];
	std::string frame;
	std::string Hspaces = "\t\t\t";



};