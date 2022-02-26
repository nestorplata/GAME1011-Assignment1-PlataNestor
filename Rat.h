#pragma once

#include "AnimationFrame.h"
class Rat : public AnimationFrame {
public:
	Rat();
	void Update();

private:
	std::string Vspaces = "\n\n\n";
	std::string frame[4];

	const int milli_seconds = 300;

};