#include<iostream>
using namespace std;
class method
{
	public:
		string name;
		
		void getname()
    {
    	cout<<"Enter Name : ";
    	getline(cin,name);
	}		
		
		void showname()
		{
			cout<<"name is : "<<name;
		}
		
};

int main()
{
	method obj;
	obj.getname();
	obj.showname();
	
	return 0;
}
