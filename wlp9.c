#include<stdio.h>
int main()
{
	int i,j,n,c=11;
	scanf("%d",&n);
	i=1;
	while(i<=n)
	{
		j=1;
		while(j<=5)
		{
			printf("%d\t",c++);
			j++;
		}
		printf("\t");
		i++;
		c+=5;
	}
	return 0;
}

/*
11 12 13 14 15 
21 22 23 24 25
31 32 33 34 35
41 42 43 44 45
51 52 53 54 55 */