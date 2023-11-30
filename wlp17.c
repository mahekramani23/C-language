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
			if(j%2==0)
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
a
b C
d E f
g H i J
k L m N o
*/