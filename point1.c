#include<stdio.h>
int main()
{
    int myname=10;
    int* ptr;
    ptr = &myname;
    int **p;


    printf("value of myname is: %d\n",myname);

    printf("Address of myname is: %p\n",myname);

    printf("pointer of myname is: %p\n",ptr);

    printf("pointer of ptr pointer is: %p",p);


    return 0;
}