#include<iostream>
using namespace std;

class A{
	
	public:
		
		void getnameA()
		{
			cout<<"heloo a";
			
		}
	
};
class B {
	
	public:
		
		void getnameB()
		{
			cout<<"hello b";
		}
};
class C : public A ,public B{
	public: 
	    void getnameC()
	    {
	    	cout<<"hello c";
		}
};


int main()
{
	 C obj1;
	 obj1.getnameA();
	 obj1.getnameB();
	 obj1.getnameC();
	return 0;
}