#include <stdio.h>

int main()
{
    int num;
    
    printf("Enter any number : ");
    scanf("%d", &num);

    if (num < 0) 
    {
        goto negative;
    }

    if (num % 2 == 0) 
    {
        goto even;
    } 
    else
    {
        goto odd;
    }

negative:
    printf("The number is negative.\n");
    goto end;

even:
    printf("The number is even.\n");
    goto end;

odd:
    printf("The number is odd.\n");

end:
    return 0;

}