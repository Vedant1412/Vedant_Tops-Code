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

class election1:public election{

	public:
       int no;
	   void getno()
	   {
	   		cout<<"enter your no :"	;
	   		cin>>no;
	   }		
	   void showno()
	   {
	   	   	cout<<"your no is :"<<no;
	   }
};

int main()
{
	election1 obj;
	obj.getage();
    obj.showage();


return 0;  
}