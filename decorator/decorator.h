#ifndef DECORATOR_H_
#define DECORATOR_H_

class Car
{
	public:
		virtual void show() = 0;
};

class RunCar: public Car
{
	public:
		void show();
};

class SwimCarDecorator: public Car
{
	public:
		SwimCarDecorator(Car *car);
		void show();
		void swim();
		
	private:
		Car *m_car;
};

class FlyCarDecorator: public Car
{
	public:
		FlyCarDecorator(Car *car);
		void show();
		void fly();
		
	private:
		Car *m_car;
};


#endif