#include "facade.h"
#include <iostream>
using namespace std;

int main()
{
	Facade *f = new Facade;
	f->doThing();
	delete f;
	return 0;
}