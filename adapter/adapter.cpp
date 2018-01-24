#include "adapter.h"
#include <iostream>
using namespace std;

void Current220V::useCurrent220V()
{
	cout << "我是220v 欢迎使用" << endl;
}

Adapter::Adapter(Current220V * current)
{
	m_current = current;
}

void Adapter::useCurrent18V()
{
	cout << "适配器 220V -> 18V" << endl;
	m_current->useCurrent220V();
}
