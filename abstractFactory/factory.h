#ifndef FACTORY_H_
#define FACTORY_H_
#include "product.h"

class Factory
{
	public:
		virtual Fruit *createBanana() = 0;
		virtual Fruit *createApple() = 0;
};

class NorthFruitFactory: public Factory
{
	public:
		Fruit *createBanana();
		Fruit *createApple();
};

class SouthFruitFactory: public Factory
{
	public:
		Fruit *createBanana();
		Fruit *createApple();
};


#endif