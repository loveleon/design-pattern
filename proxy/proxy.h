#ifndef PROXY_H_
#define PROXY_H_

class Subject
{
	public:
		virtual void sellBooks() = 0;
};

class RealSubjectBook: public Subject
{
	public:
		void sellBooks();
};

class DangdangProxy: public Subject
{
	public:
		void sellBooks();
		void promoion();
		
	private:
		Subject *m_subject;
};


#endif