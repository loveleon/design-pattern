#ifndef NURSE_H_
#define NURSE_H_
#include "command.h"
#include <iostream>
#include <list>
using namespace std;

class BeautyNurse
{
	public:
		BeautyNurse(Command *cmd);
		void submitCmd();
	
	private:
		Command *m_cmd;
};

class HeadNurse
{
	public:
		HeadNurse();
		void setCmd(Command *cmd);
		void submitCmd();
		
	private:
		list<Command *> cmdList;
};

#endif