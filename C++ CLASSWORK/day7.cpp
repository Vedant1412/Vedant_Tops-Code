#include<iostream>
using namespace std;

class A
{
	public:
		int a;
		void getA()
		{
			cout<<"enter a :";
			cin>>a;
		}
		void showA()
		{
			cout<<"\nvalue of a = "<<a;
			
		}
};

class B : public A
{
   public:
        int b;
        void getB()
        {
        	cout<<"enter b : ";
        	cin>>b;
		}
        void showB()
        {
        	cout<<"\n b = "<<b;
        	
		}
   	
};

class C : public B
{
	public:
		int c;
		void getC()
		{
			cout<<"enter c: ";
			cin>>c;
		
		}
	    void showC()
	    {
	    	cout<<"c = "<<c;
		}
};




int main()
{
	
	C obj1;
	
	obj1.getA();
	obj1.getB();
	obj1.getC();
	obj1.showA();
	obj1.showB();
	obj1.showC();
	
	return 0;
	}