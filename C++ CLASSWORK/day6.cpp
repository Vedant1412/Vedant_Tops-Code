#include<iostream>
using namespace std;

class A
{
	public:
		
		int a;
		void getA()
		{
			cout<<"enter a : ";
			cin>>a;
		}
        void showA()
        {
        	cout<<"a = "<<a;
		}


};

class B {
	public:

        int b;
		void getB()
		{
		cout<<"enter B : ";
		cin>>b;	
	    }	  	

        void showB()
        {
        	cout<<"b = "<<b;
		}

};




int main()
{
  A obj1;
  B obj2;
  obj1.showA();
  obj1.showA();
  obj2.getB();
  obj2.showB();

  return 0;
  
}
