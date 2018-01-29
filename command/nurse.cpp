#include "nurse.h"
#include <iostream>
using namespace std;

BeautyNurse::BeautyNurse(Command *cmd)
{
	m_cmd = cmd;
}

void BeautyNurse::submitCmd()
{
	m_cmd->treat();
}

HeadNurse::HeadNurse()
{
	cmdList.clear();
}

void HeadNurse::setCmd(Command *cmd)
{
	cmdList.push_back(cmd);
}

void HeadNurse::submitCmd()
{
	for (list<Command *>::iterator it = cmdList.begin(); it != cmdList.end(); it++)
		(*it)->treat();
}

