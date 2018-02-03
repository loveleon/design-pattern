#include "caretaker.h"

Caretaker::Caretaker(Memento *memento)
{
	m_memento = memento;
}

Memento *Caretaker::getMemento()
{
	return m_memento;
}

void Caretaker::setMemento(Memento *memento)
{
	m_memento = memento;
}
