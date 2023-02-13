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
		cout<<"\nparametarized constructor";
		cout<<"\nfirst name : "<<fname;
		cout<<"\nlast name : "<<lname;
		cout<<"\nage : "<<age;
	}
	~sample()
	{
		cout<<"\ndestructor called";
	}
};

int main()
{
    sample obj1,obj2,obj3;
    string fname;
    string lname;
    int age;
		
    cout<<"\nenter first name : ";
    cin>>fname;
    cout<<"\nenter last name : ";
    cin>>lname;
    cout<<"\nenter age : ";
    cin>>age;
    
    sample obj4 (fname,lname,age);
	return 0;
}
