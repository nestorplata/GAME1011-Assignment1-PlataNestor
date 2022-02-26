#pragma once

#include "AnimationFrame.h"
class Afformation : public AnimationFrame {
public:
	Afformation();
	void Update();

private:
	std::string Vspaces = "\n\n\n";
	std::string frame[3];

	const int milli_seconds = 500;

};
