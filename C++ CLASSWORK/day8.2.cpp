#include<iostream>
using namespace std;

class Side{
      protected:
	  int lenght;
	  public:
	    void setL(int x)
		{
			lenght = x;
		}	
};

class Square : public Side{
	public:
	
	    int sqr()
		{
	    	return lenght*lenght;
	    }
};

class Cube : public Side{
	public:
		int cub()
		{
			return lenght*lenght*lenght;
		}
};
int main()
{
    Square s;
    s.setL(6);
    cout<<"\nsquare of 6 : "<<s.sqr();

    Cube c;
    c.setL(8);
    cout<<"\ncube of 8 : "<<c.cub();

	return 0;
}