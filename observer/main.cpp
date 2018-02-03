#include "player.h"
#include "secretary.h"
#include <iostream>
using namespace std;

int main()
{
	Secretary *secretary = new Secretary;
	PlayObserver *po1 = new PlayObserver(secretary);
	PlayObserver *po2 = new PlayObserver(secretary);
	secretary->setPlayerObserver(po1);
	secretary->setPlayerObserver(po2);
	secretary->notify("老板来了！！！");
	secretary->notify("老板走了！！！");
	delete po2;
	delete po1;
	delete secretary;
	return 0;
}