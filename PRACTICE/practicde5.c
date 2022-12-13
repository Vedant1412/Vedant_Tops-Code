#include<stdio.h>
void main()
{
	int a,s;
	printf("\nEnter Value A : ");
	scanf("%d",&a);
	
	printf("\nEnter Value S : ");
	scanf("%d",&s);
	
	printf("\nA = %dand S = %d",a,s);

    if(a<s)
    {
    	printf("\nS is Greater");
	}
    else 
    {
    	printf("\nA is Greater");
	}



}