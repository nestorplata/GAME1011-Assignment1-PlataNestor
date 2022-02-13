#include <iostream>
//#include<stdio.h>
#include<Windows.h>

#include "Slug.h"
#include "Slime.h"

int main()
{
	Slug m_slug;
	Slime m_slime;

	m_slime.Update();
	m_slug.Update();

	//system("pause");
	return 0;
}