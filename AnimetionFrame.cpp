#include "AnimationFrame.h"

void AnimationFrame::SetFile(std::string File)
{
	m_inFile.open(File);
	if (!m_inFile) {
		std::cout << "Unable to open file datafile.txt";
	}
}

std::string AnimationFrame::GetFrame(int n, int h)
{
	m_frame.erase(0, 200);
	for (int i = 0; i < 3; i++)
	{
		for (int k = 0; k < h; k++)
		{
			m_frame += m_Hspaces;
		}

		m_inFile.ignore(1 + 10 * i + 33 * n, (char)(48 + i + 3 * n));
		m_inFile.get(m_lines[i], 11, (char)(49 + i + 3 * n));
		for (int j = 0; j < 11; j++)
		{
			m_frame.push_back(m_lines[i][j]);

		}

		m_frame += '\n';

	}

	return m_frame;
}


void AnimationFrame::Close() {
	m_inFile.close();
	//outFile.open("Animation.txt");

}