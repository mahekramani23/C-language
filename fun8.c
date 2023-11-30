#include<stdio.h>
void height()
{
	int height;
	printf("enter any number:");
	scanf("%d",&height);
	
	if(height<140)
	{
		printf("\n the person is dwarf");
	}else
	{
		printf("\n the person is tall");
	}
}
int main()
{
	height();
	return 0;
}
