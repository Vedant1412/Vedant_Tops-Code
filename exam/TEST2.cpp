#include<iostream>
using namespace std;

class A{
	public:
		
		void looped()
		{
			for(int a=200;a<=300;a++)
			{
				cout<<"\n"<<a;
			}
		}
};

int main()
{
	A obj1;
	obj1.looped();
	return 0;
	
}