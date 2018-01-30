#include "strategy.h"
#include <iostream>
using namespace std;

CarHandle *CarHandle::setNextHandle(CarHandle *carHandle)
{
	m_carHandle = carHandle;
}

void HeadCarHandle::handleCar()
{
	cout << "造车头" << endl;
	if (m_carHandle != NULL)
		m_carHandle->handleCar();
}

void BodyCarHandle::handleCar()
{
	cout << "造车身" << endl;
	if (m_carHandle != NULL)
		m_carHandle->handleCar();
}

void TailCarHandle::handleCar()
{
	cout << "造车尾" << endl;
	if (m_carHandle != NULL)
		m_carHandle->handleCar();
}

