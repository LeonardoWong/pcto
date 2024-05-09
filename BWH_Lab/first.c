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

void hquiz()
{
    int a, b , c, d, e, f, ans;

    system("clear");
    delprt("Questo e' il quiz sulla haircare a cura di BWH Labs!\n");
    sleep(1);
    delprt("Vi ricordiamo che la collezione dei dati avviene interamente in modo locale e la processione su un server encryptato, proteggendo la vostra privacy.\n");
    sleep(1);
    delprt("Per risultati ottimali, vi preghiamo di seguire le indicazioni date per ogni risposta.\n");
    sleep(1);
    system("clear");

    delprt("Domanda 1. La texture dei capelli puo' essere classificata come fine (1), medium (2) o coarse (3). Quale descrive meglio i tuoi capelli?\n[inserisci numero 1, 2 e 3]\n");
    scanf("%d", &a);

    delprt("Domanda 2. Hai mai sottoposto i tuoi capelli a trattamenti chimici, come la colorazione? (SI=1/NO=2)\n");
    scanf("%d", &ans);


    delprt("Domanda 3. I tuoi capelli sono corti (1), medi (2) o lunghi (3)?\n");
    scanf("%d", &b);

    delprt("Domanda 4. I tuoi capelli sono mossi (1), lisci(2) o ricci(3)?\n");
    scanf("%d", &c);

    delprt("Domanda 5. Hai i capelli secchi (1) o grassi (2)?\n");
    scanf("%d", &e);


    delprt("Domanda 6. Qual e' il colore naturale dei tuoi capelli? Biondi (1) o Scuri (2)?\n");
    scanf ("%d", &f);

    if(f==1 && e==1)
    {
        delprt("Bene... ti consigliamo di utilizzare:\n Kerastase Elixir ultime le Bain (19,80 euro);\nGarnier Ultra dolce Camomilla e Miele (2,49 euro), sia in formato shampoo che in formato balsamo;\nCamomilla Schulz Balsamo Ravvivante (3,49 euro).\n");
    }
    else if(ans==2)
    {
        delprt("Bene ti consigliamo di utilizzare:\n L'Oreal professional serie expert vitamino color (42,99 euro) in formati shampoo, balsamo e spray;\nAlfaparf Lisse maintainance conditioner Keratin therapy (12,90 euro).\n");
    }
    else if(e==2)
    {
        delprt("Bene... ti consigliamo i seguenti prodotti:\nKerastase Genesis Bain Hydra-Fortigiant (25,89 euro);\nLa Roche-Posay shampoo antiforfora grassa (9,37 euro);\nGarnier Ultra Dolce al Carbone Magnetico (3,49 euro).\n");
    }
    else if(c==2)
    {
        delprt("Bene... ti consigliamo i seguenti prodotti:\nGarnier Fructis Hair Food Macadamia Lisciante (5,54 euro).\n");
    }
    else if(c==3)
    {
        delprt("Bene... ti consigliamo i seguenti prodotti:\nGarnier Fructis Hair Food Burro di Cacao Rigenera Ricci (5,60 euro).\n");
    }
    else if(f==2)
    {
        delprt("Bene... ti consigliamo i seguenti prodotti:\nPantene pro-v miracles Rigenera e Protegge (6,99 euro).\n");
    }



}


int main()
{
    system("clear");
    delprt("Benvenuti al quiz sulla haircare a cura di BWH Labs!\n");
    sleep(1.5);
    hquiz();
}