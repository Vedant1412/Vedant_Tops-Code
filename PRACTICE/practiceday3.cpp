#include<iostream>
using namespace std;
int main()
{
	string name,address;
	int age;
	cout<<"Enter Your Name : ";
	getline(cin,name);
	
	cout<<"enter your address : ";
	getline(cin,address);
	
	
	cout<<"EnterYour Age : ";
	cin>>age;
	
	
	
	cout<<"Your Name is = "<<name;
	cout<<"Your Age is = "<<age;
	cout<<"Your Address is = "<<address;
	
	
	return 0;
}