#include<stdio.h>
int main()
{
	int i,j;
	i=65;
	do
	{
		j=65;
		do
		{
			printf("%c\t",i);
			j++;
		}while(j<=69);
		printf("\n");
		i++;
	}while(i<=69);
	return 0;
}

/*
A A A A A
B B B B B
C C C C C
D D D D D
E E E E E
*/
