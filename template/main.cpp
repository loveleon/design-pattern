#include "template.h"
#include <iostream>
using namespace std;

int main()
{
	MakeCar *makeJeep = new MakeJeep;
	makeJeep->makeCar();
	MakeCar *makeBus = new MakeBus;
	makeBus->makeCar();
	delete makeBus;
	delete makeJeep;
	return 0;
}