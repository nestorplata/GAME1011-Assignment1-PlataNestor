#pragma once

#include <iostream>
#include <fstream>
#include <string>
#include<Windows.h>

class AnimationFrame {
public:

	virtual void Update() = 0;


	void SetFile(std::string File);

	std::string GetFrame(int n, int h);

	void Close();


private:
	std::ifstream m_inFile;
	char lines[3][11];
	std::string frame;
	std::string Hspaces = "\t\t";

};