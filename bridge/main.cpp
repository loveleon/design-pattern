#include "engine.h"
#include "car.h"
#include <iostream>
using namespace std;

int main()
{
	Car *car = NULL;
	Engine *engine = NULL;
	engine = new Engine4400cc;
	car = new BMW5(engine);
	car->installEngine();
	delete car;
	delete engine;
	return 0;
}