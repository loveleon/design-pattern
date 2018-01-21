#ifndef HOUSE_H_
#define HOUSE_H_

#include <string>
#include <iostream>
using namespace std;

class House
{
	public:
		void setDoor(string door);
		void setWall(string wall);
		void setWindow(string window);
		string getDoor();
		string getWall();
		string getWindow();
		
	private:
		string m_door;
		string m_wall;
		string m_window;
};

#endif