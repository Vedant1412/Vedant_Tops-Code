#include<iostream>
using namespace std;

class MOdemo{
	public:
		void add()
		{
			int a=10,b=100;
			cout<<"\naddition: "<<(a+b);
		}
	    int add(int a,int b)
	    {
	    	return a+b;
		}
		int add(int a,int b,int c)
		{
			return a+b+c;
		}
        
};
	
int main()
{
    MOdemo obj1;
    obj1.add();
    int n1,n2,n3;
    cout<<"\nEnter N1 N2 N3 : ";

    cin>>n1>>n2>>n3;

    cout<<obj1.add(n1,n2,n3);
	return 0;
}