#include<stdio.h>
int salary(float bs,float hra,float da,float gs)
{
	if(hra<=5000)
	{
		hra=bs*0.08;
		da=bs*0.2;
	}else if((bs>5000)&&(bs<=10000))
	{
		hra=bs*0.12;
		da=bs*0.3;
	}else if((bs>10000)&&(bs<=15000))
	{
		hra=bs*0.15;
		da=bs*0.4;
	}else
	{
		hra=bs*0.2;
		da=bs*0.5;
	}
	gs=bs+hra+da;
	
	printf("\n HRA : %f",hra);
	printf("\n DA : %f",da);
	printf("\n GROSS SALARY : %f",gs);	
}
int main()
{
	float bs,hra,da,gs;
	printf("enter any salary : ");
	scanf("%f",&bs);
	salary(bs,hra,da,gs);
	return 0; 	
}