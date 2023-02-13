#include<iostream>
using namespace std;

class balancedemo{
      public:
	  
	  void demo()
	  {
	  	cout<<"\ndemo";
		  }	
};
	
class bankdemo : public balancedemo{
	public: 
	int deposit;
	int balance;
	int withdraw;
	void bal()
	{
      cout<<"\n10000"<<balance;
    }
	void draw()
	{
		cout<<"\nenter amount to withdraw : "<<withdraw<<(balance-withdraw);
	    cin>>withdraw;
	}
	
     void depo()
    o {
     	cout<<"\nenter ammount to deposit : "<<deposit<<(balance+deposit);
	 }
	 	
	



};

int main()
{
	bankdemo obj1;
	obj1.demo();
	obj1.bal();
	obj1.draw();
	obj1.depo();
	
	
	
	
	
	return 0;
}