#include<stdio.h>
void leap()
{
	int year;
	printf("enter any year : ");
	scanf("%d",&year);
	
	if(year%4==0)
	{
		printf("%d is a leap year",year);
	}else
	{
		printf("%d is a not leap year",year);
	}
}
int main()
{
	leap();
	return 0;
}
