#include "person.h"
#include "mediator.h"
#include <iostream>
using namespace std;

int main()
{
	Mediator *mediator = new Mediator;
	Person *xiaofang = new Woman("小芳", 0, 5, mediator);
	Person *zhangsan = new Man("张三", 1, 4, mediator);
	Person *lisi = new Man("李四", 1, 5, mediator);
	xiaofang->getPartner(zhangsan);
	xiaofang->getPartner(lisi);
	delete lisi;
	delete zhangsan;
	delete xiaofang;
	delete mediator;
	return 0;
}