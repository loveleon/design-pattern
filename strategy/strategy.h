#ifndef STRATEGY_H_
#define STRATEGY_H_

class CarHandle
{
	public:
		virtual void handleCar() = 0;
		CarHandle *setNextHandle(CarHandle *carHandle);
		
	protected:
		CarHandle *m_carHandle;
};

class HeadCarHandle: public CarHandle
{
	public:
		void handleCar();
};

class BodyCarHandle: public CarHandle
{
	public:
		void handleCar();
};

class TailCarHandle: public CarHandle
{
	public:
		void handleCar();
};

#endif