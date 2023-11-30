#include<stdio.h>
int main()
{
	int i,j,n;
	scanf("%d",&n);
	i=1;
	do
	{
		j=1;
		do
		{
			printf("%d\t",i);
			j++;
		}while(j<=n);
		printf("\n");
		i++;
	}while(i<=n);
	return 0;
}

/* 
1 1 1 1 1
2 2 2 2 2
3 3 3 3 3
4 4 4 4 4
5 5 5 5 5
*/