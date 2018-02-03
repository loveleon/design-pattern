#include "originator.h"

Person::Person(string name, int age)
{
	m_name = name;
	m_age = age;
}

string Person::getName()
{
	return m_name;
}

int Person::getAge()
{
	return m_age;
}

void Person::setName(string name)
{
	m_name = name;
}

void Person::setAge(int age)
{
	m_age = age;
}

void Person::printT()
{
	cout << "m_name:" << m_name << " m_age:" << m_age << endl;
}

Memento *Person::createMemento()
{
	return new Memento(m_name, m_age);
}

void Person::setMemento(Memento *memento)
{
	m_name = memento->getName();
	m_age = memento->getAge();
}