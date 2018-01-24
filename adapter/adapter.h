#ifndef ADAPTER_H_
#define ADAPTER_H_

class Current18V
{
	public:
		virtual void useCurrent18V() = 0;
};

class Current220V
{
	public:
		void useCurrent220V();
};

class Adapter: public Current18V
{
	public:
		Adapter(Current220V * current);
		void useCurrent18V();
		
	private:
		Current220V * m_current;
};



#endif