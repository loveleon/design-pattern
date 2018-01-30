#include "strategy.h"
#include <iostream>
using namespace std;

int main()
{
	HeadCarHandle *headCarHandle = new HeadCarHandle;
	BodyCarHandle *bodyCarHandle = new BodyCarHandle;
	TailCarHandle *tailCarHandle = new TailCarHandle;
	
	headCarHandle->setNextHandle(bodyCarHandle);
	bodyCarHandle->setNextHandle(tailCarHandle);
	tailCarHandle->setNextHandle(NULL);
	
	headCarHandle->handleCar();
	
	return 0;
}