#include<stdio.h>
int main()
{
    int i,c,n,a=0,b=1;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        c=i*b;
        printf("%d\t",c);
        b=b*2;
    }
    return 0;
}