#ifndef ENGINE_H_
#define ENGINE_H_

class Engine
{
	public:
		virtual void useEngine() = 0;
};

class Engine4400cc: public Engine
{
	void useEngine();
};

class Engine4500cc: public Engine
{
	void useEngine();
};

#endif