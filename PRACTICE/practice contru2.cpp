#include<iostream>
using namespace std;

class sample{
	public:
		sample()
		{
			cout<<"\ndefault constructor";
		}
		
		sample(string fname,string lname,int age)
		{
			cout<<"\nparamerterized constructor";
			cout<<"\nEnter Your First Name : "<<fname;
			cout<<"\nEnter Your Last Name : "<<lname;
			cout<<"\nEnter Your Age : "<<age;
			
		}
		
		~sample()
		{
			cout<<"\n destructor called.";
		}
		
};


int main()
{
    sample obj1,obj2,obj3;
	string fname;
	string lname;
	int age;
	
	
	cout<<"\nEnter your First Name : ";
	getline(cin,fname);
	
	cout<<"\nEnter your Last Name : ";
	getline(cin,lname);
	
	cout<<"\nenter your Age : ";
	cin>>age;
	
		sample obj4(fname,lname,age);
		sample obj5(fname,lname,age);
		sample obj6(fname,lname,age);
	return 0;
	
}