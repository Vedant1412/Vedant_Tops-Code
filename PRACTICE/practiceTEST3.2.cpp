#include<iostream>
using namespace std;

class balancedemo{
	public:
		int a=0;
		int b;
		
		void deposit(int b)
		{
			a=a+b;
			cout<<"\nDeposit Succesful";
		}
		
		void withdraw(int b)
		{
			if(b<a)
			{
				a=a-b;
				cout<<"\nWithdraw Successful";
			}
			else
			{
				cout<<"\nInsufficient Funds";
				
			}
			
			
		}
};

class bankdemo: public balancedemo{
	
	public:
		
		void bala()
		{
			cout<<"\nBALANCE : "<<a;
		}
};

int main()
{
	bankdemo obj1;
	obj1.bala();
	int b;
	cout<<"\nEnter amt of Deposit : ";
	cin>>b;
	obj1.deposit( b);
	obj1.bala();
	
	cout<<"\nEnter amt of Withdraw : ";
	cin>>b;
	
	obj1.withdraw( b);
	obj1.bala();
	return 0;
	
}