/* Write a program in c for adding two matrices of the size.*/
#include<stdio.h>
int main()
{
	int a[100][100],b[100][100],c[100][100],i,j,m,n;
	printf("Enter Rows : ");
	scanf("%d",&n);
	printf("Enter Columns : ");
	scanf("%d",&m);
	printf("\n1st matrices : \n");
	
	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
		{
			printf("enter elements:");
			scanf("%d",&a[i][j]);
		}
	}
	printf("\n2nd matrices : \n");
	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
		{
			printf("enter elements:");
			scanf("%d",&b[i][j]);
		}
	}
	printf("\n Sum of matrices :\n");
	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
		{
			c[i][j]=a[i][j]+b[i][j];
			printf("%d ",c[i][j]);
			
			if(j==m-1)
			{
				printf("\n");
			}
		}
	}
	return 0;
}