#include<stdio.h>
void gretest()
{
	int a,b;
	printf("\n enter value of a :");
	scanf("%d",&a);
	printf("\n enter value of b :");
	scanf("%d",&b);
	
	if(a==b)
	{
		printf("\n number 1 and number 2 are equal");
	}else
	{
		printf("\n number 1 and number 2 are not equal");
	}
}
int main()
{
	gretest();
	return 0;
}