#include "template.h"
#include <iostream>
using namespace std;

void MakeCar::makeCar()
{
	makeTail();
	makeBody();
	makeHead();
}

void MakeJeep::makeHead()
{
	cout << "make jeep head" << endl;
}

void MakeJeep::makeBody()
{
	cout << "make jeep body" << endl;
}

void MakeJeep::makeTail()
{
	cout << "make jeep tail" << endl;
}

void MakeBus::makeHead()
{
	cout << "make bus head" << endl;
}

void MakeBus::makeBody()
{
	cout << "make bus body" << endl;
}

void MakeBus::makeTail()
{
	cout << "make bus tail" << endl;
}

