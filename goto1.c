#include<stdio.h>
void myfunc()
{
    printf("Hello");
    next :
        printf("next is executed");
        printf("statement1 executed");
        goto next;
}
int main()
{
    myfunc();
    return 0;
}