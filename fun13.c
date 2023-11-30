#include<stdio.h>
int positive(int a)
{
	if(a>0)
	{
		printf("%d is positive",a);
	}
	else if(a<0)
	{
		printf("%d is negative",a);
	}
	else
	{
		printf("%d is zero",a);
	}
}
int main()
{
	int a;
	printf("enter any number : ");
	scanf("%d",&a);
	positive(a);
	return 0; 	
}