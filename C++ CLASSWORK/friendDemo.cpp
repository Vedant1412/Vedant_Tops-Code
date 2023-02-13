#include<iostream>
using namespace std;

class Vedant{
	
	private:
	int money=0;
	friend int Max(Vedant);
};

int Max(Vedant v)
{
	v.money =50000;
	return v.money;
}


int main()
{
	Vedant v1;
	cout<<"Max has given $"<<Max(v1)<<" to Vedant.";
	return 0;
}