#include "secretary.h"

Secretary::Secretary()
{
	m_list.clear();
}

void Secretary::notify(string info)
{
	for (list<PlayObserver *>::iterator it = m_list.begin(); it != m_list.end(); it++)
	{
		(*it)->update(info);
	}
}

void Secretary::setPlayerObserver(PlayObserver *po)
{
	m_list.push_back(po);
}
