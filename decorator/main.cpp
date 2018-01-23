#include "decorator.h"
#include <iostream>
using namespace std;

int main()
{
	Car *car = NULL;
	cout << "--------runcar" << endl;
	car = new RunCar;
	car->show();
	
	
	return 0;
}