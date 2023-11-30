#include<stdio.h>
int main()
{
	int i,j,n;
	scanf("%d",&n);
	i=n;
	while(i>=1)
	{
		j=i;
		while(j<=n)
		{
			printf("%d\t",j);
			j++;
		}
		printf("\n");
		i--;
	}
	return 0;
}

/*
5
4 5
3 4 5
2 3 4 5
1 2 3 4 5 
*/
