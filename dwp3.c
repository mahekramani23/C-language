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
			printf("%d\t",j);
			j++;
		}while(j<=n);
		printf("\n");
		i++;
	}while(i<=n);
	return 0;
}

/*
1 2 3 4 5 
1 2 3 4 5
1 2 3 4 5
1 2 3 4 5
1 2 3 4 5
*/