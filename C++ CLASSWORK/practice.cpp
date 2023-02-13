#include<iostream>
using namespace std;

class A{
	public: 
	  void show()
	  {
	  	cout<<"hello A";
	  }
};

class B:public A{
	public:
		void showname()
		{
			cout<<"\nhello B";
		}
};

class C:public B{
	public:
		void shown()
		{
			cout<<"\nhello c";
		}
};

int main()
{
	C obj1;
	obj1.show();
	obj1.showname();
	obj1.shown();
	obj1.show();
	obj1.shown();
	obj1.showname();
	
	
	
	return 0;
	
}