#include<stdio.h>
int main()
{
	int i=1,j,n;
	scanf("%d",&n);
	while(i<=2*n)
	{
		if(i%2==1)
		{
			j=1;
			while(j<=n)
			{
				printf("%d\t",i);
				j++;
			}	
		}
		printf("\n");
		i++;	
	}
	return 0;
}

/*
1 1 1 1 1
3 3 3 3 3
5 5 5 5 5
7 7 7 7 7
9 9 9 9 9
*/