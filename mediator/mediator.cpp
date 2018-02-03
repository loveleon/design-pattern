#include "mediator.h"

void Mediator::setMan(Person *man)
{
	m_man = man;
}

void Mediator::setWoman(Person *woman)
{
	m_woman = woman;
}

void Mediator::getPartner()
{
	if (m_man->getGender() == m_woman->getGender())
		cout << "不允许同性恋" << endl;
	
	if (m_man->getRank() == m_woman->getRank())
		cout << m_man->getName() << "和" << m_woman->getName() << "绝配" << endl;
	else
		cout << m_man->getName() << "和" << m_woman->getName() << "不配" << endl;
}