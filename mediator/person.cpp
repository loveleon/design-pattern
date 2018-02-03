#include "person.h"

Person::Person(string name, int gender, int rank, Mediator *mediator)
{
	m_name = name;
	m_gender = gender;
	m_rank = rank;
	m_mediator = mediator; 
}

string Person::getName()
{
	return m_name;
}

int Person::getGender()
{
	return m_gender;
}

int Person::getRank()
{
	return m_rank;
}

Man::Man(string name, int gender, int rank, Mediator *mediator)
	: Person(name, gender, rank, mediator)
{
	
}

void Man::getPartner(Person *person)
{
	m_mediator->setMan(this);
	m_mediator->setWoman(person);
	m_mediator->getPartner();
}

Woman::Woman(string name, int gender, int rank, Mediator *mediator)
	: Person(name, gender, rank, mediator)
{
	
}

void Woman::getPartner(Person *person)
{
	m_mediator->setMan(person);
	m_mediator->setWoman(this);
	m_mediator->getPartner();
}