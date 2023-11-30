#include<stdio.h>
void  series()
{
	int a,b,c=1;
	printf("enter value :");
	scanf("%d",&b);
	for(a=1;a<=b;a++)
	{
		printf("%d\t",c);
		c=c*2;
	}
}
int main()
{
	series();
	return 0;
}
