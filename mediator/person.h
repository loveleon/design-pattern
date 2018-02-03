#ifndef PERSON_H_
#define PERSON_H_
#include "mediator.h"
#include <iostream>
#include <string>
using namespace std;

class Mediator;
class Person
{
	public:
		Person(string name, int gender, int rank, Mediator *mediator);
		string getName();
		int getGender();
		int getRank();
		virtual void getPartner(Person *person) = 0;
		
	protected:
		string m_name;
		int m_gender;
		int m_rank;
		Mediator *m_mediator;
};

class Man: public Person
{
	public:
		Man(string name, int gender, int rank, Mediator *mediator);
		void getPartner(Person *person);
};

class Woman: public Person
{
	public:
		Woman(string name, int gender, int rank, Mediator *mediator);
		void getPartner(Person *person);
};

#endif