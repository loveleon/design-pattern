#ifndef TEMPLATE_H_
#define TEMPLATE_H_

class MakeCar
{
	public:
		virtual void makeHead() = 0;
		virtual void makeBody() = 0;
		virtual void makeTail() = 0;
		void makeCar();
};

class MakeJeep: public MakeCar
{
	public:
		void makeHead();
		void makeBody();
		void makeTail();
};

class MakeBus: public MakeCar
{
	public:
		void makeHead();
		void makeBody();
		void makeTail();
};

#endif