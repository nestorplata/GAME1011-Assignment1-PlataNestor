#pragma once


#include "AnimationFrame.h"
class Ant : public AnimationFrame {
public:
	Ant();
	void Update();

private:
	std::string m_Vspaces = "\n\n\n";
	std::string m_frame[3];
	std::string spaces = "\t\t\t\t   ";

	const int s_milli_seconds = 300;

};