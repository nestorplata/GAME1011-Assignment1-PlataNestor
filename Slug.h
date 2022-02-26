#pragma once

#include "AnimationFrame.h"
class Slug : public AnimationFrame{
public:
	Slug();
	void Update();

private:
	std::string m_Vspaces = "\n\n\n";
	std::string m_frame[5];

	const int s_milli_seconds = 300;

};