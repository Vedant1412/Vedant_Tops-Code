#include<iostream>
using namespace std;

class ScopeDemo{
	
	public:
		void fun();
		int add(int a,int b);
		int sub(int a, int b);
		int mul(int a, int b);
};

void ScopeDemo::fun()
{
	cout<<"outside";
}
int ScopeDemo::add(int a,int b)
{
	return a+b;
}

int ScopeDemo::sub(int a, int b)
{
	return a-b;
}

int ScopeDemo::mul(int a,int b)
{
	return a*b;
}
int main()
{
    ScopeDemo sd;
 
 	sd.fun();
	
	int a,b;
	cout<<"\nEnter A : ";
	cin>>a;
	cout<<"\nEnter B : ";
	cin>>b;
	cout<<"\naddition : "<<sd.add(a,b);	
	cout<<"\nsubtraction : "<<sd.sub(a,b);
	cout<<"\nmultiplication : "<<sd.mul(a,b);
	
	
	return 0;
	
}


