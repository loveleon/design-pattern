#ifndef FACADE_H_
#define FACADE_H_

class SubsystemA
{
	public:
		void doThing();
};

class SubsystemB
{
	public:
		void doThing();
};

class SubsystemC
{
	public:
		void doThing();
};

class Facade
{
	public:
		Facade();
		~Facade();
		void doThing();
		
	private:
		SubsystemA *sysA;
		SubsystemB *sysB;
		SubsystemC *sysC;
};


#endif