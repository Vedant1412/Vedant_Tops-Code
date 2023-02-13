#include<iostream>
using namespace std;


int main()
{
	string name="Tops Tech.";
	string address="CG Road.";
	string city;
	cout<<name+address;
	city = address;
	cout<<city;
	int len = address.size();
	cout<<len;
	return 0;
}