#include<stdio.h>
int main()
{
	int i,j,n;
	scanf("%d",&n);
	i=n;
	do
	{
		j=n;
		do
		{
			printf("%d\t",i);
			j--;
		}while(j>=1);
		printf("\n");
		i--;
	}while(i>=1);
	return 0;
}

/*
5 5 5 5 5
4 4 4 4 4
3 3 3 3 3
2 2 2 2 2
1 1 1 1 1
*/