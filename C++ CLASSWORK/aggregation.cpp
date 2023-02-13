#include<iostream>
using namespace std;

class Address{
	public: 
	private:
		string addressline,city,state,country;
		
		Address(string addressline,string city ,string state,string country )
		{
			this->addressline = addressline;
			this->city = city;
			this->state = state;
			this->country = country;
			 
		}
};

class Employee{
	private: 
	    Address*add;
	    public:
	    	int id;
	    	string name;
	    	Employee(int id,string name,Address*add)
	    	{
	    		this->id = id;
	    		this->name = name;
	    		this->add = add;
			}
void display()
{
	cout<<id<<""<<name<<""<<add->addressline<<""<<add->city<<add->state<<add->country<<endl;
}

};



int main()
{
     Address a1("\nsec 13","\nbapunagar","\nMP","\nindia");
     Employee e1(1,"\nvedant",&a1);
	 e1.display();	
	
	return 0;
	
}