#include "element.h"

void ParkA::accept(Visitor *visitor)
{
	visitor->visit(this);
}

void ParkB::accept(Visitor *visitor)
{
	visitor->visit(this);
}

Park::Park()
{
	park_list.clear();
}

void Park::setParkElement(ParkElement *parkElement)
{
	park_list.push_back(parkElement);
}

void Park::accept(Visitor *visitor)
{
	for (list<ParkElement *>::iterator it = park_list.begin(); it != park_list.end(); it++)
	{
		visitor->visit(this);
	}
	
}