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
			if(i%2==0)
			{
				printf("%d\t",i);
			}
			j++;
		}while(j<=n);
		printf("\n");
		i++;
	}while(i<=2*n);
	return 0;
}

/*
2 2 2 2 2
4 4 4 4 4
6 6 6 6 6 
8 8 8 8 8
10 10 10 10 10
*/