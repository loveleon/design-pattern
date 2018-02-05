#include "context.h"
#include "expression.h"
#include <iostream>
using namespace std;

int main()
{
	Context *context = new Context(10);
	cout << context->getNum() << endl;
	Expression *expression = new PlusExpression;
	expression->interpret(context);
	cout << context->getRes() << endl;

	expression = new MinusExpression;
	expression->interpret(context);
	cout << context->getRes() << endl;

	delete expression;
	delete context;
	return 0;
}