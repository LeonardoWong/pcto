#include <stdio.h>

int main() 
{
    int x;
    int y = 1969;

    printf("Inserisci l'anno di nascita: ");
    scanf("%d", &x);

    if (x == y) 
    {
        printf("Sei nato nell'anno in cui l'uomo è andato sulla Luna!\n");
    } else if (x < y) 
    {
        printf("Sei nato %d anni prima dell'anno in cui l'uomo è andato sulla Luna.\n", y - x);
    } else {
        printf("Sei nato %d anni dopo l'anno in cui l'uomo è andato sulla Luna.\n", x - y);
    }

    return 0;
}
