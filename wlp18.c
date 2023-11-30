#include<stdio.h>
int main()
{
	int i,j,n,k=65;
	scanf("%d",&n);
	i=1;
	while(i<=n)
	{
		j=1;
		while(j<=i)
		{
			printf("%c\t",k++);
			j++;
		}
		printf("\n");
		i++;
	}
	return 0;
}

/*
A 
B C
D E F
G H I J 
K L M N O
*/