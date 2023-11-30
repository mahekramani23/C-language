#include<stdio.h>
void odd()
{
	int a;
	printf("enter any number:");
	scanf("%d",&a);
	
	if(a%2==0)
	{
		printf("%d is even number",a);
	}else
	{
		printf("%d is an odd number",a);
	}
}
int main()
{
	odd();
	return 0;
}