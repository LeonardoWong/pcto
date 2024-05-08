#include <stdio.h>

int main()
{
    int x, y = 0, z = 2;

    printf("Insert number\n");
    scanf("%d", &x);

    while (z < x)
    {
        if (x % z == 0)
        {
            y++;
        }
        z++;
    }
    if (y == 0)
    {
        printf("This is a prime number\n");
    }
    else
    {
        printf("This is not a prime number\n");
    }

    return 0;
}
