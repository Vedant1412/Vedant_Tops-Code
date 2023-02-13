#include<stdio.h>

void square(int a)
{
	printf("\nSQUARE = %d",(a*a));
}

void cube(int a)
{
	printf("\nCUBE = %d",(a*a*a));
}
void main()
{
	int x=3;
	
	square(x);
	cube(x);
    
}