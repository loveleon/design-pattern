#include "flyweightTeacherFactory.h"

FlyweightTeacherFactory::FlyweightTeacherFactory()
{
	teacherMap.clear();
}

FlyweightTeacherFactory::~FlyweightTeacherFactory()
{
	while (!teacherMap.empty()) {
		Person *tmp = NULL;
		map<string, Person *>::iterator it = teacherMap.begin();
		tmp = it->second;
		teacherMap.erase(it);
		delete tmp;
	}
}

Person *FlyweightTeacherFactory::getTeacher(string id)
{
	Person *tmp = NULL;
	map<string, Person*>::iterator it = teacherMap.begin();
	it = teacherMap.find(id);
	if (it == teacherMap.end()) {
		string tmp_name;
		int tmp_age;
		cout << "请输入老师名字" << endl;
		cin >> tmp_name;
		cout << "请输入老师年龄" << endl;
		cin >> tmp_age;
		
		tmp = new Teacher(tmp_name, tmp_age, id);
		teacherMap.insert(pair<string, Person *>(id, tmp));
	} else 
		tmp = it->second;
	return tmp;
}
