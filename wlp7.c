#include<stdio.h>
int main()
{
	int i=1,j,n;
	scanf("%d",&n);
	while(i<=n)
	{
		j=1;
		while(j<=5)
		{
			printf("%d\t",i++);
			j++;
		}
		printf("\n");
		i+=0;
	}
	return 0;
}

/*
1 2 3 4 5 
6 7 8 9 10
11 12 13 14 15
16 17 18 19 20
21 22 23 24 25 
*/