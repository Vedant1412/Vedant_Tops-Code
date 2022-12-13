#include<iostream>
using namespace std;

class election
{ 
  public:
         
         int age;
        void getage() 
        {
		  cout<<"Enter your age : ";
          cin>>age;   
	    }
        void showage()
        {
        	cout<<"your age is : "<<age;
        
		}
  
  	
};

int main()
{
	election obj;
	obj.getage();
    obj.showage();


return 0;
}