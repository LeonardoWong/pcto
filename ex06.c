#include <stdio.h>

int main()
{
    unsigned x;

    printf("Please insert your age \n");
    scanf("%u", &x);
    if((x>18 && x<=18) || (x<100 && x<=100))
    {
        printf("Access granted\n");
    }
    else
    {
        printf("Not old enough or too old, go fuck yourself\n");
    }

    return 0;
}