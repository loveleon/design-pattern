#ifndef BUILDER_H_
#define BUILDER_H_

#include "house.h"

class Builder
{
	public:
		virtual void buildDoor() = 0;
		virtual void buildWall() = 0;
		virtual void buildWindow() = 0;
		virtual House *getHouse() = 0;
};

class FlatBuilder: public Builder
{
	public:
		FlatBuilder();
		void buildDoor();
		void buildWall();
		void buildWindow();
		House *getHouse();
		
	private:
		House *m_house;
};

class VillaBuilder: public Builder
{
	public:
		VillaBuilder();
		void buildDoor();
		void buildWall();
		void buildWindow();
		House *getHouse();
		
	private:
		House *m_house;
};

#endif