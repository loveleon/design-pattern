#ifndef PLAYER_H_
#define PLAYER_H_
#include <iostream>
#include <string>
using namespace std;

class Secretary;
class PlayObserver
{
public:
	PlayObserver(Secretary *secretary);
	void update(string action);

private:
	Secretary *m_secretary;
};

#endif