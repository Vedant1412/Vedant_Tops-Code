#include<iostream>
using namespace std;

class A{
	public:
		void main()
		{
			cout<<"\nheloo A";
		}
};

class B:public A{
	public:
		void main()
		{
			cout<<"\nhello B";
		}
};

class C:public B {
	public:
		void main()
		{
			A::main();
		    B::main();
			cout<<"\nhello C";
		}
};


int main()
{
	C obj1;
	obj1.main();
	
	Oreturn 0;
}