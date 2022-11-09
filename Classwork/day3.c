#include<stdio.h>
void main()
{
	int a,b;
	printf("\nEnter A :");
	scanf("%d",&a);
	printf("\nEnter B :");
	scanf("%d",&b);
    printf("A = %d and B = %d",a,b);
    
    if(a<b)
    {
    	printf("\nB is Greater");
	}
    else
    {
    	printf("\n A is Greater");
	}


}