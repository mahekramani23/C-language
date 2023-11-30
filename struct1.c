#include<stdio.h>

struct student
{
	int rn;
	char name[10];
	float per;
}s1,s2;	
int main()
{
	struct student s3,s4,s5;		
	printf("student 1 : ");
	printf("roll no. : ");
	scanf("%d",&s1.rn);
	printf("name : ");
	scanf("%s",&s1.name);
	printf("perentage : ");
	scanf("%f",&s1.per);
	
	printf("student 2 : ");
	printf("roll no. : ");
	scanf("%d",&s2.rn);
	printf("name : ");
	scanf("%s",&s2.name);
	printf("perentage : ");
	scanf("%f",&s2.per);
	
	printf("student 3 : ");
	printf("roll no. : ");
	scanf("%d",&s3.rn);
	printf("name : ");
	scanf("%s",&s3.name);
	printf("perentage : ");
	scanf("%f",&s3.per);
	
	printf("student 4 : ");
	printf("roll no. : ");
	scanf("%d",&s4.rn);
	printf("name : ");
	scanf("%s",&s4.name);
	printf("perentage : ");
	scanf("%f",&s4.per);
		
	printf("student 5 : ");
	printf("roll no. : ");
	scanf("%d",&s5.rn);
	printf("name : ");
	scanf("%s",&s5.name);
	printf("perentage : ");
	scanf("%f",&s5.per);

	printf("%d\t%s\t%f\n",s1.rn,s1.name,s1.per);
	printf("%d\t%s\t%f\n",s2.rn,s2.name,s2.per);
	printf("%d\t%s\t%f\n",s3.rn,s3.name,s3.per);
	printf("%d\t%s\t%f\n",s4.rn,s4.name,s4.per);
	printf("%d\t%s\t%f\n",s5.rn,s5.name,s5.per);
	
	return 0;
}



