#include<stdio.h>
int main()
{
	int i,j,n;
	scanf("%d",&n);
	i=1;
	while(i<=n)
	{
		j=1;
		while(j<=i)
		{
			printf("%d\t",i);
			j++;
		}
		printf("\n");
		i++;
	}
	return 0;
}

/*
1
2 2
3 3 3
4 4 4 4
5 5 5 5 5
*/
