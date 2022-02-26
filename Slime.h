#pragma once

#include "AnimationFrame.h"
class Slime: public AnimationFrame {
public:
	Slime();
	void Update();

private:
	std::string Vspaces = "\n\n\n";
	std::string frame[4];

	const int milli_seconds = 300;

};