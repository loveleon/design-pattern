#ifndef TEACHER_H_
#define TEACHER_H_
#include <iostream>
using namespace std;

class Person
{
	public:
		Person(string name, int age);
		virtual void printT() = 0;
		
	protected:
		string m_name;
		int m_age;
};

class Teacher: public Person
{
	public:
		Teacher(string name, int age, string id);
		void printT();
		
	private:
		string m_id;
};

#endif