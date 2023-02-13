#include<iostream>
using namespace std;

class A{
	public:
		void Aclass()
		{
			cout<<"\nHello A ";
		}
};

class B:public A{
	public:
		void Bclass()
		{
			cout<<"\nHello B ";
		}
};

class C:public B{
	public:
		void Cclass()
		{
			cout<<"\nHello C ";
		}
};
int main()
{
	C obj1;
	obj1.Aclass();
	obj1.Bclass();
	obj1.Cclass();
	return 0;
}