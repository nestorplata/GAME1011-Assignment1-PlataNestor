#pragma once

#include "AnimationFrame.h"
class Spider : public AnimationFrame {
public:
	Spider();
	void Update();

private:
	std::string m_Vspaces = "\n\n\n";
	std::string spaces = "  ";
	std::string m_frame[3];

	const int s_milli_seconds = 300;

};
