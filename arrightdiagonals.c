/*Write a program in c to find the sum of the right diagonals of a matrix.*/
#include<stdio.h>
int main()
{
	int a[100][100],i,j,c=0,n;
	printf("enter matrix size : ");
	scanf("%d",&n);
	
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("enter elements :");
			scanf("%d",&a[i][j]);
			
			if(i==j)
			{
				c+=a[i][j];
			}
		}
	}
	printf("\n-----\n\n");
	
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("%d ",a[i][j]);
		}
		printf("\n\n");
	}
	printf("Right diagonals of a matrix : %d",c);
	
	return 0;
}