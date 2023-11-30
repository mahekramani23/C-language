#include<stdio.h>
int main()
{
	int i,j,n;
	scanf("%d",&n);
	i=n;
	while(i>=1)
	{
		j=n;
		while(j>=i)
		{
			printf("%d\t",i);
			j--;
		}
		printf("\n");
		i--;
	}
	return 0;
}

/*
5
4 4 
3 3 3
2 2 2 2
1 1 1 1 1
*/