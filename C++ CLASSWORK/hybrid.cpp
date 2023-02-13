#include<iostream>
using namespace std;

class A{
	public:
		void geta()
		{
			cout<<"hello a ";
		}
};

class B : public A{
	public:
		void getb()
		{
			cout<<"heloo b";
		}
};
class C: public A{
	public:
		void getc()
		{
			cout<<"hello c";
		}
};

class D: public B,public C{
	public:
		void getd()
		{
			cout<<"hello d";
		}
};

int main()
{
	D obj1;
	obj1.geta();
	obj1.getb();
	obj1.getc();
	obj1.getd();
	
	
	return 0;
	
}