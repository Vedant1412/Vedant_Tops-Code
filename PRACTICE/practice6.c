#include<stdio.h>
void main()
{
	int rollno;
	char name[10];
	int s1,s2,s3;
	float per;
	int total;
	printf("\nENTER YOUR ROLL NO : ");
	scanf("%d",&rollno);
	
	printf("\nENTER YOUR NAME : ");
	scanf("%s",&name);
	
	printf("\nENTER YOUR PHYSICS MARKS : ");
	scanf("%d",&s1);
	printf("\nENTER YOUR CHEMISTRY MARKS : ");
	scanf("%d",&s2);
	printf("\nENTER YOUR MATHS MARKS : ");
	scanf("%d",&s3);
	
	total = s1+s2+s3;
	per = (float)total/3;
	printf("\nTotal : %d",s1+s2+s3);
	printf("\nPercentage : %.2f",(float)total/3);
	
	if(per>=90)
	{
		printf("\nDISTINCTION");
	}
	else if (per>=80)
	{
		printf("\nGRADE A");
	}
	else if (per>=70)
	{
		printf("\nGRADE B");
	}
	else if (per>=50)
	{
		printf("\nGRADE C");
	}
    else 	
    {
    	printf("\nFAIL");
	}




}