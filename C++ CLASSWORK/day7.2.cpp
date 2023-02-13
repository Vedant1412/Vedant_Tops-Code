#include<iostream>
using namespace std;

class A {
	public: 
	   void msg1()
	   {
	   	  cout<<"\n\nHELLO FROM A";
	   }
};

class B : public A{
	public:
		void msg2()
		{
			cout<<"\n\nHELLO FROM B ";
		}
};

class C : public A{
	public:
		void msg3()
		{
			cout<<"\n\nHELLO FROM C";
		}
};
class D : public A{
	public:
		void msg4()
		{
			cout<<"\n\nHELLO FROM D";
		}
};


int main()
{
	B obj1;
	
	obj1.msg1();
	obj1.msg2();
	
	C obj2;
	
	obj2.msg1();
	obj2.msg3();
	
	D obj3;
	
	obj3.msg1();
	obj3.msg4();
	
	
	return 0;
	
}