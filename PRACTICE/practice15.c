#include<stdio.h>
#include<string.h>

void string()
{
	char fname[10]="Vedant";
	char lname[10]="Patel";
	
	printf("\nString Lenght : %d",strlen(fname));
	printf("\nString Concat : %s",strcat(fname,lname));
	printf("\nString UpperCase : %s",strupr(fname));
	printf("\nString LowerCase : %s",strlwr(lname));
	
	
}
void main()
{
	string();
}