#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <unistd.h>

#define YTEXT "\x1b[33;5;150m"
#define RCOL "\x1b[0m"
#define RTEXT "\x1b[31m"

void delprt(const char* s) 
{
    for (const char* c = s; *c != '\0'; ++c) {
        printf(YTEXT "%c" RCOL, *c);
        fflush(stdout);
        usleep(120000);
        putchar(' ');
        putchar('\b');
    }
}

void questtwo()
{
    int ab;
    delprt("1) Pollo arrosto\n2) Il tofu pregiatissimo della fabbrica\n");
    scanf("%d", &ab);
    if(ab==1)
    {
        delprt( "Il pollo era avvelenato, ricorda che il signor China ama il suo tofu. HAI PERSO.\n");
        sleep(2);
        while (1) 
        {
            int x = 9389483;
            printf( "%d", x*x);
        }
        exit(0);
    }
    else if(ab==2)
    {
        delprt("Perfetto, mangi il prelibato Tofu.\n");
    }

}

void questaltone()
{

}

void questalttwo()
{
    int aat, aatt;
    delprt("Tu hai scelto il coltellino.\n1) Corri nella cantina e cerchi di attaccare il signore China\n2) Ti nascondi fuori dalla cantina per poi attaccare il signor China mentre esce\n");
    scanf("%d", &aat);
    if(aat==1)
    {
        delprt("Il signor China ti ha reso tofu. HAI PERSO.\n");
        while (1) 
        {
            int x = 9389483;
            printf( "%d", x*x);
        }
        exit(0);
        
    }
    else if(aat==2)
    {
        delprt("appena uscito, il signor china viene colto alla sprovvista dal tuo agguato, ma sembra che sia riuscito a scappare.\nDalla finestra lo vedi entrare nella sua fabbrica, ma sai che di notte non puoi entrare...\n1) Devi entrare, per il bene di tutti!\n2) Non entrare, scappa nel bosco\n");
        scanf("%d", &aatt);
        if(aatt==1)
        {
            delprt("Vedi intorno a te il tofu del signor china...\nchiami i soccorsi ma non riescono a trovare il signor china...\n sembra finita, ma lui e' ancora vivo, e potrebbe far male ad altre persone...\n pero', almeno per questa volta, HAI VINTO\n");
            exit(0);
        }
        else if (aatt==2)
        {
            delprt("il signor china ti cattura e di rinchiude tra le membra degli umani uccisi...\n HAI PERSO.\n");
            while (1) 
        {
            int x = 9389483;
            printf( "%d", x*x);
        }
            exit(0);
        }
    }
}

void questaltthree()
{
    int aattt;
    delprt("Tu hai scelto lo strano ricettario.\n1) Apri il libro e cerchi una ricetta simile a quella del signor China\n2) Lo butti, probabilmente e' inutile\n");
    scanf("%d", &aattt);
    if(aattt==1)
    {
        delprt("Non era un ricettario, ma un libro magico.\n Spunta un guardiano dal libro, che cattura il signor China, rinchiudendolo per sempre all'interno del libro...\n o almeno cosi' si pensa.\n Ma per solo per questa volta, HAI VINTO.\n");
        exit(0);
    }
    else if(aattt==2)
    {
        delprt("Cavolo, hai perso un'occasione importantissima.\nMa finche' signor China non ti scopre, sei salvo.\nPer ora, e SOLO per ora, hai vinto.\n");
        exit(0);
    }
}

int main()
{
    char nomeutente[50];
    int aa, ac, ad;
    char ans[3], anss[3];

    system("clear");
    delprt("BENVENUTO NEL GIOCO DEL SIGNOR CHINA\n");
    sleep(1.3);
    delprt("INSERIRE IL TUO NOME (PREFERIBILMENTE IN CAPS)\n");
    scanf("%s", nomeutente);
    system("clear");
    sleep(1);
    printf(YTEXT "PERFETTO " RTEXT "%s,\n", nomeutente);
    sleep(1);
    delprt("DA ORA SARAI IDENTIFICATO CON QUESTO NOME.\n");
    sleep(2.4);
    system("clear");
    delprt("ECCO LE REGOLE DEL GIOCO:\n1) Non andare mai nella fabbrica di tofu durante la notte\n");
    delprt("2) Non entrare nella cantina PER NESSUN MOTIVO\n3) Non chiedere al signor China cosa c'e' in cantina\n4) Mangia sempre tutta la cena e scendi immediatamente a tavola appena il signor China ti chiama\n\n");
    delprt("Hai letto le regole del gioco attentamente? (si / no)\n");
    scanf("%s", ans);
    if(strcmp(ans, "si") == 0)
    {
        sleep(1);
        delprt("Sei sicuro di voler proseguire? Se perdi, il tuo computer verra' messo in tilt. Proseguire ancora? (si / no)\n");
        scanf("%s", anss);
        if(strcmp(anss, "si") == 0)
        {
            sleep(1);
            delprt("OK, iniziamo\n");
            sleep(3);
            system("clear");
            delprt("Caricamento.");
            sleep(2);
            delprt(".");
            sleep(0.5);
            delprt(".\n");
        }
        else
        {
            exit(0);
        }
    }
    else
    {
        exit(0);
    }

    sleep(3);
    system("clear");
    delprt("Sei nella tua stanza, mentre giochi con il tuo computer, pero', senti una voce provenire dal piano di sotto:\n");
    printf(RTEXT "'%s" YTEXT ", scendi adesso la cena e' pronta!'\n\n", nomeutente);
    delprt("1) Scendi subito\n2) Di' al signor China di aspettare\n[Scrivi il numero 1 o 2 e premi invia (vale per tutto il gioco)]\n");

    scanf("%d", &aa);
    if(aa==1)
    {
        system("clear");
        delprt("Il signor china e' contento e ti lascia scegliere cosa mangiare:\n\n");
        questtwo();
    }
    else if(aa==2)
    {
        system("clear");
        delprt("Il signor china si spazientisce, ma stavolta te la fa scampare e ti fa scegliere cosa mangiare:\n\n");
        questtwo();
    }

    delprt("Il signor China poi ti dice:\n'"); 
    printf(RTEXT "%s" YTEXT ", vorresti andare a visitare la fabbrica di tofu?'\n", nomeutente);
    delprt("\n1) Non andare e inventa una scusa\n2) Vai con il signor China\n");
    scanf("%d", &ac);
    if(ac==1)
    {
        delprt("Bene, il signor china ti ha creduto.\n");
    }
    else if(ac==2)
    {
        printf(RTEXT "%s" YTEXT ", non ricordi le regole?", nomeutente);
        sleep(1);
        delprt("Mi dispiace... HAI PERSO.\n");
        while (1) 
        {
            int x = 9389483;
            printf( "%d", x*x);
        }
        exit(0);
    }


    printf(YTEXT "ATTENZIONE " RTEXT "%s" YTEXT ", LE SEGUENTI SCELTE AVRANNO UN EFFETTO IMPORTANTE SULLA FINE DELLA STORIA.\n", nomeutente);
    sleep(2);

    delprt("La mattina seguente tu e il signor china andate a comprare qualcosa in citta', SCEGLI ACCURATAMENTE CIO' CHE COMPRI.\n\n1) Un carillon\n2) Un coltellino svizzero\n3) Uno strano ricettario...\n");
    scanf("%d", &ad);
    delprt(YTEXT "Tornate a casa e ti addormenti sul tuo letto. Durante la notte pero' ti svegli a casusa di rumori provenienti dalla cantina;\nTi affacci e vedi il signor china cucinare del tofu utilizzando ingredienti strani, come mani e ossa.\n");
    printf(RTEXT "%s", nomeutente); 
    delprt("devi assolutamente scoprire il suo segreto per sconffiggerlo.\nCio' che hai comprato ti potrebbe essere utile per proseguire il gioco.\n");

    sleep(2);

    if(ad==1)
    {
       delprt("e hai scelto il carillon, mi dispiace, hai perso, la musica attira il signor china che ti fa diventare tofu\n"); //hold
    }
    else if(ad==2)
    {
        questalttwo();
    }
    else if(ad==3)
    {
        questaltthree();
    }
}