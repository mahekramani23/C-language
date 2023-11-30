#include<stdio.h>
int main()
{
	int i,j,n=1;
	i=1;
	while(i<=5)
	{
		j=1;
		while(j<=i)
		{
			printf("%d\t",n);
			
			if(n==1)
			{
				n=0;
			}else
			{
				n=1;
			}
			j++;
		}
		printf("\n");
		i++;
	}
	return 0;
}

/*
1
0 1
0 1 0
1 0 1 0
1 0 1 0 1
*/