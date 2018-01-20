#include <iostream>
#include "factory.h"
#include "product.h"
using namespace std;

int main()
{
	Factory *factory = NULL;
	Fruit *fruit = NULL;
	
	factory = new BananaFactory();
	fruit = factory->createProduct();
	fruit->sayName();
	delete fruit;
	delete factory;
	
	factory = new AppleFactory;
	fruit = factory->createProduct();
	fruit->sayName();
	delete fruit;
	delete factory;
	
	return 0;
}