#include "memento.h"

Memento::Memento(string name, int age)
{
	m_name = name;
	m_age = age;
}

string Memento::getName()
{
	return m_name;
}

int Memento::getAge()
{
	return m_age;
}

void Memento::setName(string name)
{
	m_name = name;
}

void Memento::setAge(int age)
{
	m_age = age;
}
