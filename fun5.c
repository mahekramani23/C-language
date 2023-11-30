#include<stdio.h>
void voting()
{
	int age;
	printf("enter any age:");
	scanf("%d",&age);
	
	if(age>=18)
	{
		printf("congratulations ! you are eligible for casting your vote");
		
	}else
	{
		printf("sorry,you are not eligible for casting your vote");
	}
}
int main()
{
	voting();
	return 0;
}