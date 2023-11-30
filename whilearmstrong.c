#include<stdio.h>
#include<math.h>
int main()
{
	int i,j,a,n,d;
	float c=0;
	scanf("%d",&n);
	d=n;
	i=1;
	while(n>0)
	{
		n=n/10;
	}
	n=d;
	j=1;
	while(j<i)
	{
		a=d%10;
		c=c+pow(a,i-1);
		d=d/10;
		j++;
	}
	if(c==n)
	{
		printf("%d is armstrong number",n);
	}else
	{
		printf("%d is not armstrong number");
	}i++;
	return 0;
}

// if a number is armstrong or not.//
