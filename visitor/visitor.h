#ifndef VISITOR_H_
#define VISITOR_H_
#include "element.h"
#include <iostream>
using namespace std;

class ParkElement;
class Visitor
{
public:
	virtual void visit(ParkElement *parkElement) = 0;
};

class VisitorA: public Visitor
{
public:
	void visit(ParkElement *parkElement);
};

class VisitorB: public Visitor
{
public:
	void visit(ParkElement *parkElement);
};

class ManagerVisitor: public Visitor
{
public:
	void visit(ParkElement *parkElement);
};

#endif