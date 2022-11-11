#include<stdio.h>
void main()
{
	int a,b;
	printf("\nEnter A : ");
	scanf("%d",&a);
	printf("\nEnter B : ");
	scanf("%d",&b);
	printf("A = %d and B = %d",a,b);
	printf("\nADDITION : %d",(a+b));
	printf("\nSUBTRACTION : %d",(a-b));
	printf("\nMULTIPLICATION : %d",(a*b));
	printf("\nDIVISION : %.2f",((float)a/b));
	
	if(a<b)
	{
	printf("\nB is GREATER");
	}
	else
	{
	printf("\nA is GREATER");
	}
	
}