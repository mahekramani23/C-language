#include<stdio.h>
int main()
{
	int i,j,k=65;
	i=1;
	while(i<=5)
	{
		j=1;
		while(j<=i)
		{
			if(i%2==1)
			{
				printf("%c\t",k);
			}else
			{
				printf("%c\t",k+32);
			}
			k++;
			j++;
		}
		printf("\n");
		i++;			
	}
	return 0;
}

/*
A
b c
D E F
g h i j
K L M N O
*/