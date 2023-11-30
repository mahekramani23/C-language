#include<stdio.h>
int main()
{
	int i,j,n;
	scanf("%d",&n);
	i=65;
	while(i<=n)
	{
		j=65;
		while(j<=i)
		{
			printf("%c\t",j);
			j++;
		}
		printf("\n");
		i++;
	}
	return 0;
}

/*
A
A B
A B C
A B C D
A B C D E 
*/
