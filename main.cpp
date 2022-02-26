
#include "Slug.h"
#include "Slime.h"
#include "Rat.h"
#include "Spider.h"
#include "Ant.h"
#include "Afformation.h"

int main()
{
	AnimationFrame* m_Slug = new Slug();
	AnimationFrame* m_Slime = new Slime();
	AnimationFrame* m_Rat = new Rat();
	AnimationFrame* m_Spider = new Spider();
	AnimationFrame* m_Ant = new Ant();
	AnimationFrame* m_Afformation = new Afformation();


	m_Slime->Update();
	m_Spider->Update();
	m_Ant->Update();
	m_Rat->Update();
	m_Slug->Update();
	m_Afformation->Update();

	return 0;
}