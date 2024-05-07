#include <iostream>

using namespace std;

int main()
{
    float x, y, z;

    cout << "Insert measures of each side of the triangle: \n";
    cin >> x >> y >> z;
    
    if(x+y>z && z+y>x && x+z>y)
    {
        if(x==z && y==x && z==y)
        {
            cout << "This is an equilatheral triangle\n";
        }
        else if(x==y || x==z || z==y)
        {
            cout << "This is an isosceles triangle\n";
        }
        else if (x*x + y*y == z*z || x*x + z*z == y*y || y*y + z*z == x*x)
        {
            cout << "This is a right angle triangle\n";
        }
        else if (x!=y && x!=z && z!=y)
        {
            cout << "This is a generic triangle\n";
        }
        else
        {
            cout << "This is not a triangle\n";
        }
    }
    else
    {
        cout << "Error001: NoTrianglesDetected, try again\n";
    }
}