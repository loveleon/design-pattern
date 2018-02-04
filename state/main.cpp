#include "state.h"
#include "worker.h"
#include <iostream>
using namespace std;

int main()
{
	Worker *worker = new Worker;
	worker->setTime(7);
	worker->doThing();
	worker->setTime(9);
	worker->doThing();
	worker->setTime(12);
	worker->doThing();

	delete worker;
	return 0;
}