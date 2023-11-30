#include<stdio.h>
int main()
{
	int i,j,a,c=1;
	i=5;
	while(i>=1)
	{
		j=1;
		while(j<=i-1)
		{
			printf(" ");
			j++;
		}
		a=1;
		while(a<=c)
		{
			printf(" *");
			a++;
		}
		printf("\n");
		i--;
		c++;
	}
	return 0;
}				


/*				
				*
			*		*
		*		*		*
	*		*		*		*
*		*		*		*		*

*/