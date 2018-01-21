#include "proxy.h"
#include <iostream>
using namespace std;

void RealSubjectBook::sellBooks()
{
	cout << "sell books" << endl;
}

void DangdangProxy::sellBooks()
{
	RealSubjectBook *rsb = new RealSubjectBook;
	rsb->sellBooks();
	promoion();
}

void DangdangProxy::promoion()
{
	cout << "promotion" << endl;
}