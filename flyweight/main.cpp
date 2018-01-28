#include "teacher.h"
#include "flyweightTeacherFactory.h"
#include <iostream>
using namespace std;

int main()
{
	Person *p1 = NULL;
	Person *p2 = NULL;
	FlyweightTeacherFactory *ftf = new FlyweightTeacherFactory;
	p1 = ftf->getTeacher("001");
	p1->printT();
	p2 = ftf->getTeacher("001");
	p2->printT();
	delete ftf;
	return 0;
}