#ifndef ORIGINATOR_H_
#define ORIGINATOR_H_
#include "memento.h"
#include <iostream>
#include <string>
using namespace std;

class Person
{
public:
	Person(string name, int age);
	string getName();
	int getAge();
	void setName(string name);
	void setAge(int age);
	void printT();
	Memento *createMemento();
	void setMemento(Memento *memento);

private:
	string m_name;
	int m_age;
};

#endif