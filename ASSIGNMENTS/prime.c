#include<stdio.h>

void main()
{
	int num;
	int i,count=0;
	printf("\nEnter No.");
	scanf("%d",&num);
	
	for(i=1;i<=num;i++)
	{
		if(num%2==0)
		{
			count+=1;
		}
	}
	
	if(count>2)
	{
		printf("\nIt is not a prime");
	}
	else
	{
		printf("\nIt is a prime");
	}
	
}