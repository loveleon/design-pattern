#include "expression.h"
#include <iostream>
using namespace std;

PlusExpression::PlusExpression()
{
	m_context = NULL;
}

void PlusExpression::interpret(Context *context)
{
	int num = context->getNum();
	num++;
	context->setNum(num);
	context->setRes(num);
}

MinusExpression::MinusExpression()
{
	m_context = NULL;
}

void MinusExpression::interpret(Context *context)
{
	int num = context->getNum();
	num--;
	context->setNum(num);
	context->setRes(num);
}