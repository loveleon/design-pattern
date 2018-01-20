#include "factory.h"
#include <iostream>
using namespace std;

Fruit *BananaFactory::createProduct()
{
	return new Banana;
}

Fruit *AppleFactory::createProduct()
{
	return new Apple;
}