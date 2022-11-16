#include<stdio.h>
void main()
{
 int rollno;
 char name[10];
 int s1,s2,s3,total;
 float per;
 
 printf("\nEnter your Roll No :");
 scanf("%d",&rollno);
 printf("\nEnter your Name :");
 scanf("%s",&name);
 printf("\nEnter physics marks : ");
 scanf("%d",&s1);
 printf("\nEnter chemistry marks : ");
 scanf("%d",&s2);
 printf("\nEnter maths marks : ");
 scanf("%d",&s3);
 total = s1+s2+s3;
 per = (float)total/3;
 printf("\nTotal : %d",s1+s2+s3);
 printf("\nPercentage : %.2f",(float)total/3);
 
 if(per>=85)
 {
 	printf("\nDistinction");
 }
 else if(per>=75)
 {
 	printf("\nGrade A");
 }
 else if(per>=65)
 {
 	printf("\nGrade B");
 }
 else if(per>=55)
 {
 	printf("\nGrade C");
 }
 else
 {
 	printf("\nFail");
 }
 
 
 
 
 
 
 
 
 
 	
}