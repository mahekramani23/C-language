#include<stdio.h>
int main()
{
    int i = 1;

    for(i=1;i<=10;i++)
    {
        if(i==7)
        {
            continue;
        }
        printf("%d\t",i);
    }
    return 0;
}