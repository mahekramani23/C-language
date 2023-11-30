#include<stdio.h>
int main()
{
	int i=1,j,n;
	scanf("%d",&n);
	while(i<=2*n)
	{
		if(i%2==0)
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
2 2 2 2 2
4 4 4 4 4
6 6 6 6 6 
8 8 8 8 8
10 10 10 10 10
*/