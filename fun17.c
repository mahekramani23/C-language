#include<stdio.h>
int isPerfect(int num)
{
	int i,sum=0;
	for(i=1;i<=num/2;i++)
	{
		if(num%1==0)
		{
			sum+=i;
		}
	}
	if(sum==num && num>0)
	{
		return 1;
	}else
	{
		return 0;
	}
}
int main()
{
	int num;
	printf("enter a number :");
	scanf("%d",&num);
	if(isPerfect(num))
	{
		printf("%d is a perfect number.",num);
	}else
	{
		printf("%d is a not perfect number.",num);
	}
	return 0;
}