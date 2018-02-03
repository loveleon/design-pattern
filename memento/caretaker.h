#ifndef CARETAKER_H_
#define CARETAKER_H_
#include "memento.h"

class Caretaker
{
public:
	Caretaker(Memento *memento);
	Memento *getMemento();
	void setMemento(Memento *memento);

private:
	Memento *m_memento;
};

#endif