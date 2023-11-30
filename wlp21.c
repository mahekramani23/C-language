#include<stdio.h>
int main()
{
	int i,j,n=65;
	i=1;
	while(i<=5)
	{
		j=i;
		while(j>=1)
		{
			printf("%c\t",n+j-1);
			j--;
		}
		printf("\n");
		i++;
	}
	return 0;
}

/*
A 
B A
C B A
D C B A
E D C B A
*/