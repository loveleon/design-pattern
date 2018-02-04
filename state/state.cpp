#include "state.h"
#include <iostream>
using namespace std;

void State1::doThing(Worker *worker)
{
	if (worker->getTime() == 7 || worker->getTime() == 8){
		cout << "吃早饭" << endl;
	} else{
		delete worker->getCurrentState();
		worker->setCurrentState(new State2);
		worker->getCurrentState()->doThing(worker);
	}
}

void State2::doThing(Worker *worker)
{
	if (worker->getTime() == 9 || worker->getTime() == 10){
		cout << "工作" << endl;
	} else{
		delete worker->getCurrentState();
		worker->setCurrentState(new State1);
		cout << "当前时间点：" << worker->getTime() << "，未知状态" << endl;
	}
}