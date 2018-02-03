#include "visitor.h"
#include "element.h"
#include <iostream>
using namespace std;

int main1()
{
	Visitor *visitorA = new VisitorA;
	Visitor *visitorB = new VisitorB;

	ParkElement *parkA = new ParkA;
	ParkElement *parkB = new ParkB;

	parkA->accept(visitorA);
	parkB->accept(visitorB);

	return 0;
}

int main2()
{
	Visitor *managerVisitor = new ManagerVisitor;
	Park *park = new Park;

	ParkElement *parkA = new ParkA;
	ParkElement *parkB = new ParkB;
	park->setParkElement(parkA);
	park->setParkElement(parkB);
	park->accept(managerVisitor);

	delete parkB;
	delete parkA;
	delete park;
	delete managerVisitor;
	return 0;
}

int main()
{
	//main1();
	main2();
	return 0;
}
