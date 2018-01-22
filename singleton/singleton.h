#ifndef SINGLETON_H_
#define SINGLETON_H_

class Singleton
{
public:
	static Singleton *getInstance();
	static void destroyInstance();
	
protected:
	Singleton();
	~Singleton();
	
private:
	static Singleton *_instance;
};

#endif