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
			printf("%d\t",j);
			j--;
		}
		printf("\n");
		i--;	
	}
	return 0;
}

/*
5
5 4 
5 4 3
5 4 3 2
5 4 3 2 1
*/