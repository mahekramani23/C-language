#include<stdio.h>
#include<string.h>
int main()
{
	char fn[10],ln[10];
	int i,j,n;
	
	printf("enter first name : ");
	scanf("%s",&fn);
	printf("enter last name : ");
	scanf("%s",&ln);
	
	printf("\n string without space = %s%s",fn,ln);
	printf("\n string with space = %s %s",fn,ln);

	
	return 0;

}