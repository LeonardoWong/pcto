#include <stdio.h>
#include <stdbool.h>
#include <string.h>

void cs()
{
    int cx;
    scanf("%d", &cx);
}

int main()
{
    int arr [] = {192, 168, 0, 1};
    int cg;

    printf("Inserisci il numero sostitutivo\n");
    scanf("%d", &cg);

    if(cg>=0)
    {
        printf("Numero e' stato salvato con successo\n");
    }

    else
    {
        printf("Numero non puo' essere negativo\n");

        cs();
    }
    printf("Vorresti sostituire il valore con un valore della default gateway? (si/no)\n");

    char b[3];
    scanf("%s", b);
    if(strcmp(b, "si") == 0)
    {
        arr[3] = 4, 3, 6, 7, 5, 9;

        printf("Operazione completata con successo, vuoi verificare l'ip?\n");

        char y[3];
        scanf("%s", y);
        if(strcmp(y, "si") == 0)
        {
             for (int i = 0; i < sizeof(arr) / sizeof(arr[0]); i++)
            {
                printf("%d ", arr[i]);
            }
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

    printf("\n");

}