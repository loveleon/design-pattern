#include "memento.h"
#include "caretaker.h"
#include "originator.h"
#include <iostream>
using namespace std;

int main1()
{
	Person *person = new Person("张三", 20);
	Memento *memento = person->createMemento();

	person->setAge(30);
	person->printT();
	person->setMemento(memento);
	person->printT();

	delete memento;
	delete person;
	return 0;
}

int main2()
{
	Person *person = new Person("张三", 20);
	Caretaker *caretaker = new Caretaker(person->createMemento());

	person->setAge(30);
	person->printT();
	person->setMemento(caretaker->getMemento());
	person->printT();

	delete caretaker;
	delete person;
	return 0;
}

int main()
{
	//main1();
	main2();
	return 0;
}
