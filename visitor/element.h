#ifndef ELEMENT_H_
#define ELEMENT_H_
#include "visitor.h"
#include <iostream>
#include <list>
using namespace std;

class Visitor;
class ParkElement
{
public:
	virtual void accept(Visitor *visitor) = 0;
};

class ParkA: public ParkElement
{
public:
	void accept(Visitor *visitor);
};

class ParkB: public ParkElement
{
public:
	void accept(Visitor *visitor);
};

class Park: public ParkElement
{
public:
	Park();
	void setParkElement(ParkElement *parkElement);
	void accept(Visitor *visitor);

private:
	list<ParkElement *> park_list;
};

#endif