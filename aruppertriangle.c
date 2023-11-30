/*Write a program in to find the sum of the upper triangle of a matrix.*/
#include<stdio.h>
int main()
{
	int a[100][100],i,j,n,c=0;
	printf("enter matrix size :");
	scanf("%d",&n);
	
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("enter elements :");
			scanf("%d",&a[i][j]);
		}
	}
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			if(i<=j)
			{
				c+=a[i][j];
			}
		}
	}
	printf("Sum of the upper triangle of a matrix : %d",c);
	return 0;
}