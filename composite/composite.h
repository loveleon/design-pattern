#ifndef COMPOSITE_H_
#define COMPOSITE_H_
#include <list>
#include <string>
#include <iostream>
using namespace std;

class IFile
{
	public:
		virtual void display() = 0;
		virtual int add(IFile *ifile) = 0;
		virtual int remove(IFile *ifile) = 0;
		virtual list<IFile *> *getChild() = 0;
};

class File: public IFile
{
	public:
		File(string name);
		void display();
		int add(IFile *ifile);
		int remove(IFile *ifile);
		list<IFile *> *getChild();
	
	private:
		string m_name;
};

class Dir: public IFile
{
	public:
		Dir(string name);
		void display();
		int add(IFile *ifile);
		int remove(IFile *ifile);
		list<IFile *> *getChild();
		
	private:
		string m_name;
		list<IFile *> *m_list;
};
#endif