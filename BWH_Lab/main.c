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
    int st, nd, rd, th, fth;
    char ans[3], anss[3];
    
    system("clear");
    delprt("Questo e' il quiz sulla skincare a cura di BWH Labs!\n");
    sleep(1);
    delprt("Vi ricordiamo che la collezione dei dati avviene interamente in modo locale, proteggendo la vostra privacy\n");
    sleep(1);
    delprt("Per risultati ottimali, vi preghiamo di seguire le indicazioni date per ogni risposta.\n");
    sleep(4);
    system("clear");

    delprt("Domanda 1. Hai mai fatto skincare?\n");
    scanf("%s", ans);
   
   sleep(1);
   delprt("Ok");
   system("clear");

   delprt("Domanda 2. Quali tra questi prodotti stai utilizzando attualmente?\n[rispondi scegliendo i numeri delle opzioni e aggiungendo spazi tra ogni numero]\n\n1) Detergente viso\n2) Tonico idratante\n3) Tonico esfoliante\n4) Scrub viso\n5)Crema idratante viso\n6) Siero antirughe\n7) Siero illuminante\n8) Maschera idratante\n9) Maschera purificante\n10) Acne gel\n11) Siero anti-macchie\n12) Trattamento antieta'");
   scanf("%d", &st, &nd, &rd, &th, &fth);
   sleep(1);
   delprt("Ok");
   system("clear");
   
   delprt("Domanda 3. Hai mai avuto sensibilita' a qualche prodotto per la cura della pelle?\n");
   scanf("%s", anss);
   sleep(1);
   delprt("Ok");
   system("clear");

   delprt("Domanda 4. Stai utilizzando una qualsiasi prescrizione medica?\n");

   delprt("Quanto spesso ti esponi al sole e per quanto tempo?\n");

   delprt("Usi la crema solare?");

   delprt("Sei soggetto a sress, smog o segui una dieta particolare?\n");

   delprt("Quali risultati vorresti raggiungere?\n");

   delprt("Quali prodotti e marche prediligi durante i trattamenti?\n");   
}

int main()
{
    system("clear");
    delprt("Benvenuti al quiz sulla skincare a cura di BWH Labs!\n");
    sleep(1.5);
}

/*

2. **Hai mai avuto sensibilita'� a qualche prodotto per la cura della pelle?**
   - Questa domanda aiuta a identificare potenziali allergie o irritazioni.

3. **Con quale frequenza esfoli la pelle?**
   - La frequenza dell'esfoliazione influisce sulla texture e sulla salute della pelle.

4. **Stai utilizzando qualche prescrizione medica?**
   - Conoscere i farmaci prescritti garantisce scelte di trattamento sicure.

5. **Quanto spesso ti esponi al sole e per quanto tempo?**
   - L'esposizione al sole influisce sull'invecchiamento della pelle e sul rischio di danni solari.

6. **Usi la crema solare?**
   - L'uso della crema solare e' fondamentale per proteggere la pelle dai dannosi raggi UV.

7. **Sei soggetto a stress, smog o segui una dieta particolare?**
   - Comprendere i fattori sottostanti (ad esempio, stress, dieta, ambiente) aiuta a personalizzare i trattamenti.

9. **Quali risultati vorresti raggiungere?**
   - Avere aspettative realistiche garantisce la soddisfazione del cliente.

10. **Quali prodotti e marche prediligi durante i trattamenti?**
    - Conoscere i prodotti utilizzati durante i trattamenti aiuta a valutarne l'efficacia².

Ricorda che una corretta analisi della pelle inizia con una dettagliata procedura di accoglienza, che include domande sulla storia genetica, nutrizione, idratazione, stile di vita, storia medica, storia cosmetica, tipo di pelle, caratteristiche intrinseche (legate alla genetica), caratteristiche estrinseche (legati allo stile di vita) e fattori di rischio per il trattamento¹. Con queste informazioni, i professionisti possono fornire raccomandazioni accurate e personalizzate per una salute ottimale della pelle.*/
