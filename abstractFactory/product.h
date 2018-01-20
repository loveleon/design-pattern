#ifndef PRODUCT_H_
#define PRODUCT_H_

class Fruit
{
	public:
		virtual void sayName() = 0;
};

class NorthBanana: public Fruit
{
	public:
		void sayName();
};

class NorthApple: public Fruit
{
	public:
		void sayName();
};

class SouthBanana: public Fruit
{
	public:
		void sayName();
};

class SouthApple: public Fruit
{
	public:
		void sayName();
};

#endif