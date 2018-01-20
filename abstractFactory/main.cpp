#include <iostream>
#include "factory.h"
#include "product.h"
using namespace std;


int main()
{
	Factory *factory = NULL;
	Fruit *fruit = NULL;
	
	/* 生产北方的水果 */
	factory = new NorthFruitFactory;
	fruit = factory->createBanana();
	fruit->sayName();
	delete fruit;
	fruit = factory->createApple();
	fruit->sayName();
	delete fruit;
	
	/* 生产南方的水果 */
	factory = new NorthFruitFactory;
	fruit = factory->createBanana();
	fruit->sayName();
	delete fruit;
	fruit = factory->createApple();
	fruit->sayName();
	delete fruit;
	
	return 0;
}