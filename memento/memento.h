#ifndef MEMENTO_H_
#define MEMENTO_H_
#include <iostream>
#include <string>
using namespace std;

class Memento
{
public:
	Memento(string name, int age);
	string getName();
	int getAge();
	void setName(string name);
	void setAge(int age);

private:
	string m_name;
	int m_age;
};

#endif