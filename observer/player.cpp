#include "player.h"

PlayObserver::PlayObserver(Secretary *secretary)
{
	m_secretary = secretary;
}

void PlayObserver::update(string action)
{
	cout << "老板来了，我好害怕呀。。。" << endl;
	cout << "action: " << action << endl;
}