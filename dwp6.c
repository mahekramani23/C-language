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
			if(i%2==1)
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
1 1 1 1 1
3 3 3 3 3
5 5 5 5 5
7 7 7 7 7
9 9 9 9 9
*/
