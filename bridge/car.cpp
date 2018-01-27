#include "car.h"
#include <iostream>
using namespace std;

Car::Car(Engine *engine)
{
	m_engine = engine;
}

BMW5::BMW5(Engine *engine): Car(engine)
{
	
}

void BMW5::installEngine()
{
	cout << "我是BMW5，正在安装发动机。。。" << endl;
	m_engine->useEngine();
}

BMW6::BMW6(Engine *engine): Car(engine)
{
	
}

void BMW6::installEngine()
{
	cout << "我是BMW6，正在安装发动机。。。" << endl;
	m_engine->useEngine();
}
