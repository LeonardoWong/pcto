#include <iostream>
#include <string>

using namespace std;

void cs()
{
    int cx;
    cin >> cx;
}

int main()
{
    int arr[4] = {192, 168, 0, 1};
    int cg;

    cout << "Inserisci il numero sostitutivo\n";
    cin >> cg;

    if(cg>=0)
    {
        cout << "Numero e' stato salvato con successo\n";
    }

    else
    {
        cout << "Numero non puo' essere negativo\n";

        cs();
    }
    cout << "Vorresti sostituire il valore con un valore della default gateway? (si/no)\n";

    string b;
    cin >> b;
    if(b == "si")
    {
        arr[3] = cg;

        printf("Operazione completata con successo, vuoi verificare l'ip? (si/no)\n");

        string y;
        cin >> y;
        if( y == "si")
        {
             cout << arr << endl;
        }
        else
        {
            return 0;
        }
    }
    else
    {
        return 0;
    }

    cout << "\n";

}