#include<stdio.h>
int main()
{
    int i = 1;

    for(i=1;i<=10;i++)
    {
        printf("%d\t",i);
        if(i==7)
        {
            break;
        }
    }
    return 0;

}