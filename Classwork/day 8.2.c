#include<stdio.h>

void sub(int a, int b)
{
	printf("\nSUBTRACTION : %d",(a-b));
	printf("\naddition : %d",(a+b));
    printf("\nmultiplication : %d",(a*b));

}

void main()
{
	int x=35,y=49;
	sub(x,y);
	
}