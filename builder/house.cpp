#include "house.h"

void House::setDoor(string door)
{
	this->m_door = door;
}

void House::setWall(string wall)
{
	this->m_wall = wall;
}

void House::setWindow(string window)
{
	this->m_window = window;
}

string House::getDoor()
{
	cout << this->m_door << endl;
	return this->m_door;
}

string House::getWall()
{
	cout << this->m_wall << endl;
	return this->m_wall;
}

string House::getWindow()
{
	cout << this->m_window << endl;
	return this->m_window;
}
