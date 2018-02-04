#ifndef WORKER_H_
#define WORKER_H_
#include "state.h"

class State;
class Worker
{
public:
	Worker();
	int getTime();
	void setTime(int time);
	State *getCurrentState();
	void setCurrentState(State *state);
	void doThing();

private:
	int m_time;
	State *m_state;
};

#endif