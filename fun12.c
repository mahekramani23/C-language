#include<stdio.h>
int LargestNo(int x,int y)
{
	printf("%d is largest number.",x>y?x:y);
}
int main()
{
	int a,b;
	printf("enter a and b : ");
	scanf("%d%d",&a,&b);
	LargestNo(a,b); 	
}