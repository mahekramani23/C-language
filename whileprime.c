#include<stdio.h>
int main()
{
	int i=2,n,isPrime=1;
	scanf("%d",&n);
	while(i<=n/2&&isPrime==1)
	{
		if(n%i==0)
		{
			isPrime=0;
		}
		i++;
	}
	if(isPrime==1)
	{
		printf("%d is prime number",n);
	}else
	{
		printf("%d is not prime number",n);
	}
	return 0;
}

//if a number is prime or not.//