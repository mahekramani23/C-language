#include<stdio.h>
int main()
{
	int i,j,n,c=1;
	scanf("%d",&n);
	i=1;
	while(i<=n)
	{
		j=1;
		while(j<=i)
		{
			printf("%d\t",c++);
			j++;
		}
		printf("\n");
		i++;
	}
	return 0;
}

/*
1 
2 3
4 5 6
7 8 9 10
11 12 13 14 15 
*/