#ifndef STATE_H_
#define STATE_H_
#include "worker.h"

class Worker;
class State
{
public:
	virtual void doThing(Worker *worker) = 0;
};

class State1: public State
{
public:
	void doThing(Worker *worker);
};

class State2: public State
{
public:
	void doThing(Worker *worker);
};

#endif