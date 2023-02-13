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
			cout<<"\nparameterized constructor";
			cout<<"\nFirst Name : "<<fname;
			cout<<"\nLast Name : "<<lname;
			cout<<"\nAge : "<<age;
		}
		~sample()
		{
			cout<<"destructor called";
		}
		
};

int main()
{
    sample obj1,obj2;
    string fname;
    string lname;
    int age;
    
    cout<<"\nEnter your name : ";
    cin>>fname;
    cout<<"\nEnter your Last Name : ";
    cin>>lname;
    cout<<"\nEnter your Age : ";
    cin>>age;
    
    sample obj3(fname,lname,age);
   
    sample obj5(fname,lname,age);
    sample obj6(fname,lname,age);
    
    
	return 0;
	
}