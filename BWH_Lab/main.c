#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <unistd.h>
#include <ctype.h>

void delprt(const char* s) 
{
    for (const char* c = s; *c != '\0'; ++c) 
    {
        printf("%c", *c);
        fflush(stdout);
        usleep(23000);
        putchar(' ');
        putchar('\b');
    }
}

void squiz()
{
    char ans[3], anss[3], ass[3], asssub[100], one[3], two[100], four[100];
    int choice, three;

    system("clear");
    delprt("Benvenuti al quiz sulla skincare a cura di BWH Labs!\n");
    sleep(1);

    system("clear");
    delprt("Domanda 1. Hai mai fatto skincare?\n");
    scanf("%s", ans);
    sleep(1);

    system("clear");
    delprt("Domanda 2. Quali tra questi prodotti stai utilizzando attualmente?\n[rispondi scegliendo i numeri delle opzioni e aggiungendo spazi tra ogni numero]\n\n1) Detergente viso\n2) Tonico idratante\n3) Tonico esfoliante\n4) Scrub viso\n5) Crema idratante viso\n6) Siero antirughe\n7) Siero illuminante\n8) Maschera idratante\n9) Maschera purificante\n10) Acne gel\n11) Siero anti-macchie\n12) Trattamento antieta'\n");
    scanf("%d", &choice);
    sleep(1);

    system("clear");
    delprt("Domanda 3. Hai mai avuto sensibilita' a qualche prodotto per la cura della pelle? [si / no]\n");
    scanf("%s", anss);
    sleep(1);

    system("clear");
    delprt("Domanda 4. Stai utilizzando una qualsiasi prescrizione medica?\n");
    scanf("%s", ass);
    sleep(1);

    system("clear");
    delprt("Domanda 5. Quanto spesso ti esponi al sole e per quanto tempo?\n");
    scanf("%s", asssub);
    sleep(1);

    system("clear");
    delprt("Domanda 6. Usi la crema solare?\n");
    scanf("%s", one);
    sleep(1);

    system("clear");
    delprt("Domanda 7. Sei soggetto a stress, smog o segui una dieta particolare?\n");
    scanf("%s", two);
    sleep(1);

    system("clear");
    delprt("Domanda 8. Quali risultati vorresti raggiungere?\n1) Pelle luminosa\n2) Pelle idratata\n");
    scanf("%d", &three);
    sleep(1);

    system("clear");
    delprt("Domanda 9. Quali prodotti e marche prediligi durante i trattamenti?\n");
    scanf("%s", four);
    sleep(1);

    system("clear");
    delprt("Grazie per aver risposto al quiz!\n");
    sleep(3);

    delprt("Caricamento dei risultati in corso..");
    sleep(0.5);
    delprt(".");
    sleep(0.5);
    delprt(".");
    sleep(0.7);
    delprt(".");
    sleep(1);

    system("clear");
    if(strcmp(ans, "si") == 0)
    {
      if(strcmp(ans, "SI") == 0)
      {
        if(strcmp(ans, "Si") == 0)
        {
        if(three == 1)
        {
            delprt("Ti consigliamo Avene per ottenere una pelle luminosa.\n");
        }
        }
      } 
    }
}

int main()
{
    squiz();
    return 0;
}
