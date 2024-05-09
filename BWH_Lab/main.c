#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <unistd.h>
#include <ctype.h>

#ifdef _WIN32
#include <windows.h>
#define sleep_ms(x) Sleep(x)
#else
#include <unistd.h>
#define sleep_ms(x) usleep((x) * 1000)
#endif

void delprt(const char* s) {
    for (const char* c = s; *c != '\0'; ++c) {
        printf("%c", *c);
        fflush(stdout);
        sleep_ms(23);
        putchar(' ');
        putchar('\b');
    }
}

void flush_input_buffer() 
{
    int c;
    while ((c = getchar()) != '\n' && c != EOF);
}

void skintypeal()
{
    int skn;
    delprt("Il procedimento e' molto semplice, ti bastera' indicare il tuo tipo di pelle tra SECCA (1), GRASSA (2), MISTA (3):\n");
    scanf("%d", &skn);

    if(skn==1)
    {
        delprt("Ecco la migliore dieta per la tua pelle secca:\nSono da favorire i cibi ricchi di acqua, vitamine e minerali antiossidanti.\nFrutta e verdura a volonta' e alimenti ricchi di omega 3, come pesci provenienti da mari freddi, olio e semi di lino, ed omega 6, come olio di borragine, frutta secca, olio di vinaccioli e legumi.\nAltri esempi da alimenti da prediligere sono:\n* La mela: costituita per buona parte da acqua, e' ricca di fibre e antiossidanti;\n* L'anguria, fonte preziosa di vitamina C;\n* Il cetriolo: composto da circa il 96% di acqua, possiede poche calorie ed e' ricco di potassio, vitamina C e fibre;\n* 	Il kiwi: ricco di vitamina C, regola il colesterolo e favorisce la pressione sanguigna;\n* 	Gli agrumi: con il loro carico di vitamina C stimolano la produzione di collagene;\n* 	La frutta secca come mandorle, pistacchi e noci: fornisce vitamina E ed omega 3;\n* 	Il pomodoro: ricco di licopene, aiuta a proteggere la pelle e ne contrasta l'invecchiamento;\n* 	Gli spinaci e la lattuga: ricchi di minerali e vitamina A e C;\n*	I cereali integrali: con le loro proprieta' antiossidanti apportano rutina e vitamina B;\n* 	I frutti di mare come le ostriche e pesci grassi come il salmone, ricchi di omega 3 e zinco.\n");
    }
    else if(skn==2)
    {
        delprt("Ecco la migliore dieta per la tua pelle grassa:\nDa mangiare:\n*  Tanta frutta e verdura, in quanto ricca di antiossidanti;\n*  Alimenti ricchi di omega 3 (pesce come merluzzo, salmone, sgombro) e omega 6 (frutta secca in generale);\n*  Cereali integrali;\n*  Carni bianche, limitando il consumo di carni rosse;\n\nDa evitare:\n* 	 Grassi di origine animale (limitarne il consumo);\n* 	 Alcolici;\n* 	 Farine e zuccheri raffinati;\n");
    }
    else if(skn==3)
    {
        delprt("Ecco la migliore dieta per la tua pelle mista:\nE' consigliabile includere nella propria alimentazione:\n*  Tanta frutta e verdura, in quanto ricca di antiossidanti;\n*  Alimenti ricchi di omega 3 (pesce come merluzzo, salmone, sgombro) e omega 6 (frutta secca in generale);\n*  Cereali ricchi di proteine e a basso indice glicemicocome il riso integrale o la quinoa.\n");
    }
    else{
        printf("Errore313: NoOptionDetected; Inserire una opzione valida.\n");
            sleep(5);
            exit(0);
    }

    delprt("Grazie per aver scelto BWH Lab.\n");
    sleep(5);
    exit (0);

}

void skintypemk()
{
    int skn;
    delprt("Il procedimento e' molto semplice, ti bastera' indicare il tuo tipo di pelle tra SECCA (1), GRASSA (2), MISTA (3):\n");
    scanf("%d", &skn);

    if(skn==1)
    {
        delprt("Ecco i migliori prodotti make-up per la tua pelle secca:\nIlluminante in polvere Rare Beauty (29.90 euro)\nIlluminante in crema Rare Beauty Positive Light Highlighter (17.00 euro)\nBlush rare beauty (16.00 euro)\nBlush Elf Halo Glow Blush Beauty Wand (9.99 euro)\nCorrettore Tarte Finish Glowy (29.90 euro)\nCorrettore Elf Hydrating Satin Camo Concealer (7.99 euro)\nCorrettore Radiant Creamy Concealer Mini - Correttore Anti-occhiaie nars (18.90 euro)\nFondotinta Elf Halo Glow Liquid Filter (14.90 euro)\nFondotinta Charlotte Tilbury Hollywood Flawless Filter Travel (19.90 euro)\nFondotinta Armani luminous silk (25.90 euro)\nContouring Elf Halo Glow Contour Beauty Wand (9.99 euro)\n");
    }
    else if(skn==2)
    {
        delprt("Ecco i migliori prodotti make-up per la tua pelle grassa:\nIlluminante DIOR BACKSTAGE GLOW FACE PALETTE (52.00 euro)\nIlluminante NYX PROFESSIONAL MAKEUP JUMBO HIGHLIGHTER STICK (8.99 euro)\nIlluminante Dior Forever Glow Maximizer (41.99 euro)\nBlush HOLLYWOOD BLUSH & GLOW GLIDE PALETTE (33.00 euro)\nBlush too faced Cloud Crush (31.90 euro)\nCorrettore tarte finish matte (29.90 euro)\nCorrettore Huda beauty Luminous Matte - Antiocchiaie liquido (32.00 euro)\nFondotinta estee lauder DOUBLE WEAR STAY-IN-PLACE MAKEUP SPF10 (22.99 euro)\nContouring nyx professional make up Sweet Cheeks Blush Matte (8.80 euro)\nContouring Dior BackstageRosy Glow Blush (33.90 euro)\nContouring Anastasia Beverly Hills in polvere Contour kit (34.90 euro)\n");
    }
    else if(skn==3)
    {
        delprt("Ecco i migliori prodotti make-up per la tua pelle mista:\nIlluminante in polvere Benefit (22.90 euro)\nBlush in crema Charlotte Tilbury (39.00 euro)\nBlush in polvere Soft Pop Powder Blush (28.50 euro)\nCorrettore Astra (5.40 euro)\nCorrettore Benefit Boiing Cakeless Concealer (31.00 euro)\nCorretore Maybelline (8.98 euro)\nFondotinta Elf Flawless Satin Foundation (10.99 euro)\nFondotinta Dior BackstageFace & Body Foundation (38.89 euro)\nContouring in polvere Make up by Mario SoftSculpt Bronzer - Terra abbronzante (33.00 euro)\nContouring in crema Too Faced Chocolate Soleil Bronzer - Terra Abbronzante (24.00 euro)\n");
    }
    else
    {
        printf("Errore313: NoOptionDetected; Inserire una opzione valida.\n");
            sleep(5);
            exit(0);
    }

    sleep(5);
    delprt("Come ultimo questionario per completare il tuo piano personalizzato per la skincare, rispondi a questo quiz\n");
            sleep(2);
            system("clear");
            skintypeal();
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
    flush_input_buffer();
    scanf("%9s", anss);
    sleep(1);

    system("clear");
    delprt("Domanda 4. Stai utilizzando una qualsiasi prescrizione medica?\n");
    scanf("%9s", ass);
    sleep(1);

    system("clear");
    delprt("Domanda 5. Quanto spesso ti esponi al sole e per quanto tempo?\n");
    scanf("%9s", asssub);
    sleep(1);

    system("clear");
    delprt("Domanda 6. Usi la crema solare?\n");
    scanf("%9s", one);
    sleep(1);

    system("clear");
    delprt("Domanda 7. Sei soggetto a stress, smog o segui una dieta particolare?\n");
    scanf("%9s", two);
    sleep(1);

    system("clear");
    delprt("Domanda 8. Quali risultati vorresti raggiungere?\n1) Pelle luminosa\n2) Pelle idratata\n");
    scanf("%d", &three);
    sleep(1);

    system("clear");
    delprt("Domanda 9. Quali prodotti e marche prediligi durante i trattamenti?\n");
    scanf("%9s", four);
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
    if(strcmp(anss, "si") == 0)
    {
        if(three == 1)
        {
            delprt("Secondo i risultati che hai inserito, consigliamo vivamente di provare la Crema Lenitiva Avene Antirougeurs.\nQuesto prodotto è formulato appositamente per le pelli sensibili soggette a rossori e irritazioni, offrendo un'azione lenitiva e protettiva che favorisce un incarnato uniforme e luminoso.\nArricchita con ingredienti selezionati per la loro capacità di lenire la pelle e ridurre le infiammazioni, questa crema dona sollievo immediato mentre lavora per rafforzare la barriera cutanea e ridurre la comparsa di rossori nel tempo.\nGrazie alla sua texture leggera e non grassa, è ideale per l'uso quotidiano sotto il trucco o da sola, garantendo una base perfetta per il tuo regime di bellezza.\nAffronta ogni giorno con fiducia, sapendo di avere la tua pelle sensibile protetta e curata con la Avene Antirougeurs Giorno rema lenitiva.\nIl prezzo varia tra 25.27euro e 29.57euro");
            sleep(3);
            delprt("Il quiz seguente completera' il questionario per darti un feedback completo per la tua skincare\n");
            sleep(2);
            system("clear");
            skintypemk();

        }
        else if (three == 2)
        {
            delprt("In base alle risposte che hai inserito, non cercare oltre la Esfoliante Body Spot 2% BHA.\nQuesto prodotto è una soluzione mirata per migliorare la texture della pelle, ridurre le imperfezioni e mantenere la pelle idratata, il tutto con delicatezza.\nLa sua formula contiene acido salicilico al 2%, che è noto per le sue proprietà esfolianti e purificanti.\nTuttavia, ciò che rende questo prodotto adatto anche alle pelli sensibili è la sua formula delicata che lenisce e idrata la pelle mentre lavora per esfoliare delicatamente le cellule morte e liberare i pori.\nCon l'uso regolare, la tua pelle apparirà più luminosa, più levigata e più idratata, senza irritazioni o secchezza.\nGoditi una pelle visibilmente migliorata e confortevole con la Esfoliante Body Spot 2% BHA.\nIl prezzo di questo prodotto si stabilisce tra i 20 e i 23euro");
            sleep(3);
            delprt("Il quiz seguente completera' il questionario per darti un feedback completo per la tua skincare\n");
            sleep(2);
            system("clear");
            skintypemk();
        }
        else
        {
            printf("Errore313: NoOptionDetected; Inserire una opzione valida.\n");
            sleep(5);
            exit(0);
        }
        }

    else if(strcmp(anss, "no") == 0)
    {
        if(three == 1)
        {
            delprt("Abbiamo due ottimi prodotti da consigliarti:\n\n");
    
            delprt("1. Inizia con la crema idratante Cetaphil, una scelta affidabile per mantenere la tua pelle idratata e luminosa. La sua formula leggera e non comedogena si assorbe rapidamente nella pelle, offrendo un'idratazione profonda senza ungere.\nArricchita con emollienti e agenti idratanti, questa crema aiuta a ripristinare e a mantenere il naturale equilibrio idrolipidico della pelle, rendendola morbida e levigata giorno dopo giorno.\nE' particolarmente indicata per le pelli normali e miste che cercano un'idratazione leggera e confortevole.\n\n");

            delprt("2. Per un'idratazione intensa e un effetto liscio duraturo, ti consigliamo anche La Roche-Posay Nutric Intense Riche.\nQuesta crema ultra-nutriente è formulata con ingredienti altamente idratanti e riparatori, ideale per le pelli secche e molto secche che necessitano di un trattamento ricco e rigenerante.\nGrazie alla sua texture cremosa e avvolgente, questa crema nutriente penetra in profondità nella pelle, aiutando a riparare la barriera cutanea e a fornire un'idratazione duratura.\nLa tua pelle sarà visibilmente più morbida, liscia e luminosa dopo l'uso.\n\n");

            delprt("Sia la crema idratante Cetaphil che La Roche-Posay Nutric Intense Riche sono disponibili in diverse varianti e formati, adattabili alle esigenze specifiche della tua pelle e al tuo budget.\nI prezzi possono variare a seconda del formato e del negozio, ma in genere si aggirano intorno ai 15-30 euro. Verifica direttamente presso i rivenditori locali o online per ottenere il prezzo più aggiornato e trovare la formulazione che meglio si adatta alle tue esigenze di idratazione e levigatezza cutanea.\n");
            sleep(3);
            delprt("Il quiz seguente completera' il questionario per darti un feedback completo per la tua skincare\n");
            sleep(2);
            system("clear");
            skintypemk();
        }
        else if (three == 2)
        {
            printf("Se stai cercando un trattamento per mantenere la tua pelle idratata e luminosa, ti consigliamo di provare The Depuff Eyespresso.\n\n");

            printf("The Depuff Eyespresso è un gel leggero e rinfrescante formulato appositamente per rivitalizzare la delicata zona del contorno occhi.\nArricchito con ingredienti idratanti e nutrienti come l'acido ialuronico e l'estratto di cetriolo, questo prodotto è ideale per combattere la secchezza e la disidratazione intorno agli occhi, riducendo al contempo gonfiori e occhiaie.\nLa sua texture leggera si assorbe rapidamente nella pelle, lasciando una sensazione fresca e idratata senza appesantire la zona.\nCon l'uso regolare, i tuoi occhi appariranno più riposati, luminosi e visibilmente idratati.\n\n");

            sleep(3);
            delprt("Il quiz seguente completera' il questionario per darti un feedback completo per la tua skincare\n");
            sleep(2);
            system("clear");
            skintypemk();
        }
        
        }
    else
        {
            printf("Errore313: NoOptionDetected; Inserire una opzione valida.\n");
            sleep(5);
            exit(0);
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
    else
        {
            printf("Errore313: NoOptionDetected; Inserire una opzione valida.\n");
            sleep(5);
            exit(0);
        }
    
    sleep(2);
    delprt("Grazie per aver scelto BWH Lab.\n");
    sleep(5);
    exit (0);
}

int main()
{
    int lol;
    
    system("clear");
    delprt("Benvenuto all'AI di BHW Lab. Come possiamo aiutarle oggi?\n");
    delprt("1. Aiutami con skincare\n2. Aiutami con haircare\n[Scegli tra 1 o 2 e scrivi il numero nel terminale, poi premi invia]\n");
    scanf("%d", &lol);
    if(lol==1)
    {
        sleep(1);
        system("clear");

        squiz();
    }
    else if(lol==2)
    {
        sleep(1);
        system("clear");
        hquiz();
    }
    else
        {
            printf("Errore313: NoOptionDetected; Inserire una opzione valida.\n");
            sleep(5);
            exit(0);
            while(1)
            {
                exit(0);
            }
        }

    return 0;
}