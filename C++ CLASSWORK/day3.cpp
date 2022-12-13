#include<iostream>
using namespace std;
int main()
{
	string name,address;
	int age;
	cout<<"Enter your name : ";
	//cin>>name;
	getline(cin,name);
	
	cout<<"Enter your address : ";
	//cin>>address;
	getline(cin,address);
	
	cout<<"Enter your age : ";
	cin>>age;
	
	
	cout<<"\nYour name is : "<<name;
	cout<<"\nYour address is : "<<address;
	cout<<"\nYour age is : "<<age;
	
	
	
	
	
	
	
	
	
}