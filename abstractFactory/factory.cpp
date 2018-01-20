#include "factory.h"
#include <iostream>
using namespace std;

Fruit *NorthFruitFactory::createBanana()
{
	return new NorthBanana;
}

Fruit *NorthFruitFactory::createApple()
{
	return new NorthApple;
}

Fruit *SouthFruitFactory::createBanana()
{
	return new SouthBanana;
}

Fruit *SouthFruitFactory::createApple()
{
	return new SouthApple;
}
