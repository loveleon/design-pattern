#ifndef DIRECTOR_H_
#define DIRECTOR_H_

#include "builder.h"

class Director
{
	public:
		Director(Builder *builder);
		void construct();
		
	private:
		Builder *m_builder;
};

#endif