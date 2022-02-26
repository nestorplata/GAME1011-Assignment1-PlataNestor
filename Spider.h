#pragma once

#include "AnimationFrame.h"
class Spider : public AnimationFrame {
public:
	Spider();
	void Update();

private:
	std::string Vspaces = "\n\n\n";
	std::string spaces = "  ";
	std::string frame[3];

	const int milli_seconds = 300;

};
