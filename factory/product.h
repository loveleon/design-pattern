#ifndef PRODUCT_H_
#define PRODUCT_H_

class Fruit
{
	public:
		virtual void sayName() = 0;
};

class Banana: public Fruit
{
	public:
		void sayName();
};

class Apple: public Fruit
{
	public:
		void sayName();
};


#endif