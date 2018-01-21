#include "director.h"

Director::Director(Builder *builder)
{
	this->m_builder = builder;
}

void Director::construct()
{
	this->m_builder->buildDoor();
	this->m_builder->buildWall();
	this->m_builder->buildWindow();
}

