#include "teacher.h"

Person::Person(string name, int age)
{
	m_name = name;
	m_age = age;
}

Teacher::Teacher(string name, int age, string id): Person(name, age)
{
	m_id = id;
}

void Teacher::printT()
{
	cout << "name: " << m_name << ", age: " << m_age << ", id: " << m_id << endl;
}
