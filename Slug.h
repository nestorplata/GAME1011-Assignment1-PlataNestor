#pragma once

#include "AnimationFrame.h"
class Slug : public AnimationFrame{
public:
	Slug();
	void Update();

private:
	std::string Vspaces = "\n\n\n";
	std::string frame[5];

	const int milli_seconds = 300;

};