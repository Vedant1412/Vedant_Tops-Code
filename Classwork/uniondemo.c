#include<stdio.h>
/*
   union : it is similar like structure.
         - we use union keyword.
         
         syntax : union union-name
                  {
                     data-members.
                     ...
                     ...
                  }; 
         - in union it will accept the data once and display at once.

*/

union Student{
	int student_id;
	char student_name[20];
	float student_per;
};


void main()
{
	union Student s1;
	
	printf("\nenter id : ");
	scanf("%d",&s1.student_id);
	printf("ID : %d",s1.student_id);
	
	printf("\nEnter name : ");
	scanf("%s",s1.student_name);
	printf("Name : %s",s1.student_name);
	
	printf("\nenter percentage : ");
	scanf("%f",&s1.student_per);
	printf("percentage : %.2f",s1.student_per);
	
	
}