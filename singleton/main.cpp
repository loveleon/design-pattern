#include <iostream>
#include "singleton.h"
using namespace std;

int main()
{
	Singleton *s1 = Singleton::getInstance();
	Singleton *s2 = Singleton::getInstance();
	
	Singleton::destroyInstance();
	return 0;
}