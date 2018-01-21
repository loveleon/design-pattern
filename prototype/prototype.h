#ifndef PROTOTYPE_H_
#define PROTOTYPE_H_

#include <iostream>
#include <string>
using namespace std;

class Person
{
	public:
		virtual Person *clone() = 0;
		virtual void printT() = 0;
};

class CPlusPlusProgrammer: public Person
{
	public:
		CPlusPlusProgrammer();
		CPlusPlusProgrammer(string name, int age);
		Person *clone();
		void printT();
		
	private:
		string m_name;
		int m_age;
};

#endif