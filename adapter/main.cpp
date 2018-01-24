#include "adapter.h"
#include <iostream>
using namespace std;

int main()
{
	Current220V *current220v = NULL;
	Adapter *adapter = NULL;
	
	current220v = new Current220V;
	adapter = new Adapter(current220v);
	adapter->useCurrent18V();
	delete adapter;
	delete current220v;
	return 0;
}