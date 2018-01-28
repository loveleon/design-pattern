#include "composite.h"

File::File(string name)
{
	m_name = name;
}

void File::display()
{
	cout << m_name << endl;
}

int File::add(IFile *ifile)
{
	return -1;
}

int File::remove(IFile *ifile)
{
	return -1;
}

list<IFile *> *File::getChild()
{
	return NULL;
}

Dir::Dir(string name)
{
	m_name = name;
	m_list = new list<IFile *>;
}

void Dir::display()
{
	cout << m_name << endl;
}

int Dir::add(IFile *ifile)
{
	m_list->push_back(ifile);
	return 0;
}

int Dir::remove(IFile *ifile)
{
	m_list->remove(ifile);
	return 0;
}

list<IFile *> *Dir::getChild()
{
	return m_list;
}

