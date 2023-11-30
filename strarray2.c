#include<stdio.h>
#include<string.h>
int main()
{
	char a[20]="mahek ramani";
	int i,j;
	// len=strlen(a);
	printf("%s",a);
	printf("\n size of string  = %d",strlen(a));	
	printf("\n reverse string = ");
	for(i=strlen(a);i>=0;i--)
	{
		printf("%c",a[i]);
	}	
	return 0;

}