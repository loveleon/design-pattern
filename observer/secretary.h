#ifndef SECRETARY_H_
#define SECRETARY_H_
#include <iostream>
#include <string>
#include <list>
#include "player.h"
using namespace std;

class Secretary
{
public:
	Secretary();
	void notify(string info);
	void setPlayerObserver(PlayObserver *po);

private:
	list<PlayObserver *> m_list;
};

#endif