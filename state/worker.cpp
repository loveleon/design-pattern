#include "worker.h"

Worker::Worker()
{
	m_state = new State1;
}

int Worker::getTime()
{
	return m_time;
}

void Worker::setTime(int time)
{
	m_time = time;
}

State *Worker::getCurrentState()
{
	return m_state;
}

void Worker::setCurrentState(State *state)
{
	m_state = state;
}

void Worker::doThing()
{
	m_state->doThing(this);
}
