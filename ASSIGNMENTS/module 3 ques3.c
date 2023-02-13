#include<stdio.h>

void main()
{
	int rollno;
	int s1,s2,s3,total;
	char name[10];
	float per;
	
	printf("Enter your roll no : ");
	scanf("%d",&rollno);
	printf("\nEnter your Name : ");
	scanf("%s",&name);
	printf("\nEnter chemistry marks : ");
	scanf("%d",&s1);
	printf("\nEnter physics marks : ");
	scanf("%d",&s2);
	printf("\nEnter maths marks : ");
	scanf("%d",&s3);
	total = s1+s2+s3;
	per=(float)total/3;
	printf("\nTotal : %d",s1+s2+s3);
	printf("\npercentage : %.2f",(float)total/3);
	
	if(per>75)
	{
		printf("\nDistinct");
	}
	else if(per>=75)
	{
		printf("\nFirst Class");
	}
	else if(per>=60)
	{
		printf("\nSecond Class");
	}
	else if(per>=50)
	{
		printf("\nPass Class");
	}
	else
	{
		printf("\nFail");
		
	}
	
	
}