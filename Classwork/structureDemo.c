#include<stdio.h>

struct student {
	int sid;
	char name[30];
	float per;
	
};


void main()
{
   struct student s;
   printf("enter Student Id : ");
   scanf("%d",&s.sid);
   printf("\nenter name : ");
   scanf("%s",&s.name);
   printf("\nenter percentage : ");
   scanf("%f.",&s.per);

	printf("\nroll no : %d",s.sid);
	printf("\nname : %s",s.name);
	printf("\n percentage : %.2f",s.per);
}