#pragma once

#include "AnimationFrame.h"
class Afformation : public AnimationFrame {
public:
	Afformation();
	void Update();

private:
	std::string m_Vspaces = "\n\n\n";
	std::string m_frame[3];

	const int s_milli_seconds = 500;

};
