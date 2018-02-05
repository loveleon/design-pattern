#include "context.h"

Context::Context(int num)
{
	m_num = num;
}

int Context::getNum()
{
	return m_num;
}

void Context::setNum(int num)
{
	m_num = num;
}

int Context::getRes()
{
	return m_res;
}

void Context::setRes(int res)
{
	m_res = res;
}
