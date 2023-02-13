#include<iostream>
using namespace std;

class A{
	public:
		void show()
		{
			cout<<"\nshow method Class A";
		}
};

class B : public A{
	public:
		void show()
		{
			cout<<"\nshow method Class B";
		}
};

class C : public B{
	public:
		void show()
		{
			B::show();
			A::show();
			cout<<"\nshow method class C";
		}
};

int main()
{
	C obj1;
	obj1.show();
	return 0;
}