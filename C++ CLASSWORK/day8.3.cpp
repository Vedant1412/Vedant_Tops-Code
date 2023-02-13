#include<iostream>
using namespace std;

class A{
	public:
		int a;
		
		void getA()
		{
			cout<<"enter A = ";
			cin>>a;
		}
};

class B{
	public:
		int b;
		
		void getb()
		{
			cout<<"\nenter b = ";
			cin>>b;
		}
};

class C:public A ,public B{
	public:
		int c;
		void getC()
		{
			cout<<"\n enter c : ";
			cin>>c;
		}
		
		void showall()
		{
		   cout<<"\nA = "<<a;
		   cout<<"\nB = "<<b;
		   cout<<"\nC = "<<c;	
		}
};




int main()
{
	C obj1;
	obj1.getA();
	obj1.getb();
	obj1.getC();
	obj1.showall();
	
	return 0;
}