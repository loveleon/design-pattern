#ifndef MEDIATOR_H_
#define MEDIATOR_H_
#include "person.h"

class Person;
class Mediator
{
	public:
		void setMan(Person *man);
		void setWoman(Person *woman);
		void getPartner();
		
	private:
		Person *m_man;
		Person *m_woman;
};

#endif