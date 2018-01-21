#include "prototype.h"
#include <iostream>
using namespace std;

int main()
{
	Person *c1 = new CPlusPlusProgrammer("张三", 32);
	c1->printT();
	Person *c2 = c1->clone();
	c2->printT();
	return 0;
}