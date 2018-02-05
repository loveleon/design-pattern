#ifndef CONTEXT_H_
#define CONTEXT_H_

class Context
{
public:
	Context(int num);
	int getNum();
	void setNum(int num);
	int getRes();
	void setRes(int res);

private:
	int m_num;
	int m_res;
};

#endif