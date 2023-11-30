#include<stdio.h>  
int main()
{
	int i,n,a=1,b=0,c;
	printf("enter value :");
	scanf("%d",&n);
	printf("%d\t",a);
	for(i=1;i<=n;i++)
	{
		c=a+b;
		printf("%d\t",c);
		b=a;
		a=c;
	}
	return 0;
}