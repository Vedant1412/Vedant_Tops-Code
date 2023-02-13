#include<stdio.h>

void simpleinter(int prin,int intere,int time)
{
	printf("\nsimple interest = %d",(prin*intere*time));
}

void compound(int prin,int intere,int time)
{
   printf("\ncompound interest = %d",(prin*intere*time-prin));
}
void main()
{
	int x=5000,y=200,z=2;
	simpleinter(x,y,z);
	compound(x,y,z);
}