#include <iostream>
#include "singleton.h"
using namespace std;

Singleton *Singleton::_instance = NULL;

Singleton::Singleton()
{
	cout << "Singleton constructor" << endl;
}

Singleton::~Singleton()
{
	cout << "Singleton destructor" << endl;
}

Singleton *Singleton::getInstance()
{
	cout << "---getInstance" << endl;
	if (_instance == NULL) {
		cout << "------new singleton()" << endl;
		_instance = new Singleton();
	} else {
		cout << "------singleton already exists" << endl;
	}
	return _instance;
}

void Singleton::destroyInstance()
{
	cout << "---destroyInstance" << endl;
	if (_instance != NULL) {
		delete _instance;
		_instance = NULL;
	}
}