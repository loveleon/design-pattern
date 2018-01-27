#ifndef CAR_H_
#define CAR_H_
#include "engine.h"

class Car
{
	public:
		Car(Engine *engine);
		virtual void installEngine() = 0;
		
	protected:
		Engine *m_engine;
};

class BMW5: public Car
{
	public:
		BMW5(Engine *engine);
		void installEngine();
};

class BMW6: public Car
{
	public:
		BMW6(Engine *engine);
		void installEngine();
};

#endif