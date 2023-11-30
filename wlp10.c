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
			printf("%d\t",j);
			j++;
		}
		printf("\n");
		i++;
	}
	return 0;
}

/*
1
1 2
1 2 3
1 2 3 4
1 2 3 4 5
*/