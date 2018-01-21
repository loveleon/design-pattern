#include "proxy.h"
#include <iostream>
using namespace std;

int main()
{
	Subject *s = new DangdangProxy;
	s->sellBooks();
	delete s;
	return 0;
}