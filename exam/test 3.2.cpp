#include<iostream>
using namespace std;
class BankDemo{
	public:
		double bal=0;
		
		void deposit(double amt)
		{
			bal = bal+amt;
			cout<<"\nAmount Deposited Successfully";
		}
		
		void withdraw(double amt)
		{
			if(amt<bal)
			{
				bal = bal - amt;
				cout<<"\nWithdrawal successful";
			}
			else
			{
				cout<<"Insufficient Funds";
			}
		}
};
class balancedemo : public BankDemo{
	public: 
	 
	  
	  void balance()
	  {
	  	cout<<"\nBalance : "<<bal;
	  }
	  
};




int main()
{
	balancedemo obj1;
	obj1.balance();
	double amt;
	cout<<"\nEnter Amount to Deposit : ";
	cin>>amt;
	obj1.deposit(amt);
	obj1.balance();
	cout<<"\nEnter Amount to Withdraw : ";
	cin>>amt;
	obj1.withdraw(amt);
	obj1.balance();
}