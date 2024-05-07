#include <iostream>

using namespace std;

int main() 
{
    int x;

    cout << "Inserisci l'anno di nascita: ";
    cin >> x;

    if (x == 1969) 
    {
        cout << "Sei nato nell'anno in cui l'uomo è andato sulla Luna!\n";
    } else if (x < 1969) 
    {
        cout << "Sei nato " << 1969 - x << "anni prima dell'anno in cui l'uomo è andato sulla Luna.\n";
    } else {
        cout << "Sei nato " << x - 1969 << "anni dopo l'anno in cui l'uomo è andato sulla Luna.\n";
    }

    return 0;
}
