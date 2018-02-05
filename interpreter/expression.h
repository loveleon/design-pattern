#ifndef EXPRESSION_H_
#define EXPRESSION_H_

#include "context.h"

class Expression
{
public:
	virtual void interpret(Context *context) = 0;

private:
	Context *m_context;
};

class PlusExpression: public Expression
{
public:
	PlusExpression();
	void interpret(Context *context);

private:
	Context *m_context;
};

class MinusExpression: public Expression
{
public:
	MinusExpression();
	void interpret(Context *context);

private:
	Context *m_context;
};

#endif