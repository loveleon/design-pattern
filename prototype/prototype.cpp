#include "prototype.h"

CPlusPlusProgrammer::CPlusPlusProgrammer()
{
	m_name = "";
	m_age = 0;
}

CPlusPlusProgrammer::CPlusPlusProgrammer(string name, int age)
{
	m_name = name;
	m_age = age;
}

Person *CPlusPlusProgrammer::clone()
{
	CPlusPlusProgrammer *tmp = new CPlusPlusProgrammer;
	tmp = this;
}

void CPlusPlusProgrammer::printT()
{
	cout << "name = " << m_name << ", age = " << m_age << endl;
}