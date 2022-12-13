#include<iostream>
using namespace std;
int main()
{
	int a,b;
	cout<<"enter A : ";
	cin>>a;
	cout<<"enter b : ";
	cin>>b;
	int choice;
	
	cout<<"press1.addition \npress2.subtraction\npress3.multiplication ";
	cout<<"\nenter your choice?";
	cin>>choice;
	
	switch(choice)
	{
		case 1: cout<<"/naddition : "<<(a+b);
		break;
		case 2: cout<<"\nsubtraction : "<<(a-b);
		break;
		default: cout<<"invalid input";
		case 3: cout<<"\nmultiplication : "<<(a*b);
		break;
		
		
		
	}
	
}