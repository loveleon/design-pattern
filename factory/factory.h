#ifndef FACTORY_H_
#define FACTORY_H_
#include "product.h"

class Factory
{
	public:
		virtual Fruit *createProduct() = 0;
};

class BananaFactory: public Factory
{
	public:
		Fruit *createProduct();
};

class AppleFactory: public Factory
{
	public:
		Fruit *createProduct();
};


#endif