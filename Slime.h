#pragma once

#include "AnimationFrame.h"
class Slime: public AnimationFrame {
public:
	Slime();
	void Update();

private:
	std::string m_Vspaces = "\n\n\n";
	std::string m_frame[4];

	const int s_milli_seconds = 300;

};