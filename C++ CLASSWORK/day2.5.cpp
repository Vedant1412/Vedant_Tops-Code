#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{
	char name[10],addr[20];
	int age;
	long long mob;
	
	//cin>>name;
	gets(name);
	cin>>age;
	//cin>>addr;
	gets(addr);
	cin>>mob;
	
	//cout<<name;
	puts(name);
	cout<<age;
	puts(addr);
	//cout<<addr;
	cout<<mob;
	
	
	
	return 0;
}