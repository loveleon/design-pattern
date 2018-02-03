#include "visitor.h"

void VisitorA::visit(ParkElement *parkElement)
{
	cout << "清洁工A完成公园A部分的打扫" << endl;
}

void VisitorB::visit(ParkElement *parkElement)
{
	cout << "清洁工B完成公园B部分的打扫" << endl;
}

void ManagerVisitor::visit(ParkElement *parkElement)
{
	cout << "管理员完成公园各个部分的检查" << endl;
}