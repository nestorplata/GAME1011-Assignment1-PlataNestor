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

	std::string getFrame(int n)
	{
		frame.erase(0, 33);

		inFile.ignore(1+33*n, (char)(48+3*n));
		inFile.get(lines[0], 11, (char)(49 + 3 * n));
		inFile.ignore(11 + 33 * n, (char)(49 + 3 * n));
		inFile.get(lines[1], 11, (char)(50 + 3 * n));
		inFile.ignore(21 + 33 * n, (char)(50 + 3 * n));
		inFile.get(lines[2], 11, (char)(51 + 3 * n));

		for (int i = 0; i < 3; i++)
		{
			for (int j = 0; j < 10; j++)
			{
				frame.push_back(lines[i][j]);

			}
			frame = frame + '\n';
		}

		return frame;
	}
	void draw() //debug purposes
	{
		std::cout << frame << std::endl;


	}

	void close() {
		inFile.close();
	}

private:
	std::ifstream inFile;
	char lines[3][11];
	std::string frame;
};