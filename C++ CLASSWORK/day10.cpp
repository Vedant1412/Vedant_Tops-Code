#include<iostream>
using namespace std;

class StaticDemo{
     public:
	 static int a;
     	
     	StaticDemo()
     	{
     		cout<<"\nconstructur called.";
     		a++;
		 }

};

int StaticDemo::a=0;

int main()
{
	StaticDemo obj1,obj2,obj3,obj4,obj5;
    cout<<"\n number of A : "<<obj1.a;
	return 0;
}
