#include "house.h"
#include "builder.h"
#include "director.h"
#include <iostream>
using namespace std;

int main()
{
	House *house = NULL;
	Builder *builder = NULL;
	Director *director = NULL;
	
	builder = new FlatBuilder;
	director = new Director(builder);
	director->construct();
	house = builder->getHouse();
	house->getDoor();
	house->getWall();
	house->getWindow();
	delete director;
	delete builder;
	
	builder = new VillaBuilder;
	director = new Director(builder);
	director->construct();
	house = builder->getHouse();
	house->getDoor();
	house->getWall();
	house->getWindow();
	delete director;
	delete builder;
	
	delete house;
	
	
	return 0;
}