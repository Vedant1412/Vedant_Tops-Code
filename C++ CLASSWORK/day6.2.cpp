#include<iostream>
using namespace std;

class A{
	
	public : 
	
	int a;
	   
	   void geta()
	   {
	   	cout<<"enter a : ";
	   	cin>>a;
	   	}
	   	
	   	void showa()
	   	{
	   	cout<<"a = "<<a;
		}
};


class B : public A{
	public: 
	
	int b;
	 
	 void getb()
	 {
	 	cout<<"\n\nenter b : ";
	 	cin>>b;
	 }
	 
	 void showb()
	 {
	 	cout<<"\nb = "<<b;
	 }
	
};






int main()
{
	B obj1;
	obj1.geta();
	obj1.getb();
	obj1.showa();
	obj1.showb();
	
	
	
	
	return 0;
	
}
