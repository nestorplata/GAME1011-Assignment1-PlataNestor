#pragma once


#include "AnimationFrame.h"
class Ant : public AnimationFrame {
public:
	Ant();
	void Update();

private:
	std::string Vspaces = "\n\n\n";
	std::string frame[3];
	std::string spaces = "\t\t\t\t   ";

	const int milli_seconds = 300;

};