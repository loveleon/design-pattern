#ifndef FLYWEIGHTTEACHERFACTORY_H_
#define FLYWEIGHTTEACHERFACTORY_H_
#include "teacher.h"
#include <iostream>
#include <map>
using namespace std;

class FlyweightTeacherFactory
{
	public:
		FlyweightTeacherFactory();
		~FlyweightTeacherFactory();
		Person *getTeacher(string id);
		
	private:
		map<string, Person *> teacherMap;
};


#endif