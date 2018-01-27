#include "facade.h"
#include <iostream>
using namespace std;

void SubsystemA::doThing()
{
	cout << "SubsystemA run" << endl;
}

void SubsystemB::doThing()
{
	cout << "SubsystemB run" << endl;
}

void SubsystemC::doThing()
{
	cout << "SubsystemC run" << endl;
}

Facade::Facade()
{
	sysA = new SubsystemA;
	sysB = new SubsystemB;
	sysC = new SubsystemC;
}

Facade::~Facade()
{
	delete sysA;
	delete sysB;
	delete sysC;
}

void Facade::doThing()
{
	sysA->doThing();
	sysB->doThing();
	sysC->doThing();
}
