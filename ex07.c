#include <stdio.h>
#include <string.h>

int main()
{
    float x, y, z;

    printf("Insert measures of each side of the triangle: \n");
    scanf("%f %f %f", &x, &y, &z);
    
    if(x+y>z && z+y>x && x+z>y)
    {
        if(x==z && y==x && z==y)
        {
            printf("This is an equilatheral triangle\n");
        }
        else if(x==y || x==z || z==y)
        {
            printf("This is an isosceles triangle\n");
        }
        else if (x*x + y*y == z*z || x*x + z*z == y*y || y*y + z*z == x*x)
        {
            printf("This is a right angle triangle\n");
        }
        else if (x!=y || x!=z || z!=y)
        {
            printf("This is a generic triangle\n");
        }
        else
        {
            printf("This is not a triangle\n");;
        }
    }
    else
    {
        printf("Error001: NoTrianglesDetected, try again\n");
    }
}