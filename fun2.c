#include<stdio.h>
void positive()
{
	int a;
	printf("enter value of a : ");
	scanf("%d",&a);
	
	if(a>0)
	{
		printf("%d is positive",a);
	}else if(a<0)
	{
		printf("%d is negative",a);
	}else
	{
		printf("%d is zero",a);
	}
}
int main()
{
	positive();
	return 0;
}