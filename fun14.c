#include<stdio.h>
int marks(int math,phy,chem)
{
	
	total2=math+phy;
	total=total2+chem;
	if((total<=140)&&(total>=188))
	{
		printf("The candidate is  eligible for admission.");
	}else
	{
		printf("The candidate is not eligible for admission.");
	}
}
int main()
{
	int math,phy,chem,total,total2;
	printf("enter your maths marks :");
	scanf("%d",&math);
	printf("enter your physic marks :");
	scanf("%d",&phy);
	printf("enter your chemestry marks :");
	scanf("%d",&chem);
	marks(math,phy,chem);
	return 0; 	
}