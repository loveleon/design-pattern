#include "decorator.h"
#include <iostream>
using namespace std;

void RunCar::show()
{
	cout << "可以跑" << endl;
}

SwimCarDecorator::SwimCarDecorator(Car *car)
{
	m_car = car;
}

void SwimCarDecorator::show()
{
	m_car->show();
	swim();
}

void SwimCarDecorator::swim()
{
	cout << "可以游泳" << endl;
}

FlyCarDecorator::FlyCarDecorator(Car *car)
{
	m_car = car;
}

void FlyCarDecorator::show()
{
	m_car->show();
	fly();
}

void FlyCarDecorator::fly()
{
	cout << "可以飞" << endl;
}
