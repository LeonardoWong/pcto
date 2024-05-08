#include <iostream>

using namespace std;

int main()
{
    int x, y = 0, z=2;

    cout << "Insert number\n";
    cin >> x;

    while(z<x)
    {
        if(x%z==0)
        {
            y++;
        }
        z++;
    }
    if(y == 0 && x!=1)
    {
        cout << "This is a prime number\n";
    }
    else
    {
        cout << "This is not a prime number\n";
    }
}