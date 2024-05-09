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

void skintype()
{
    int skn;
    delprt("Il procedimento e' molto semplice, ti bastera' indicare il tuo tipo di pelle tra SECCA (1), GRASSA (2), MISTA (3):\n");
    scanf("%d", &skn);

    if(skn==1)
    {
        delprt("Perfetto... ecco la migliore dieta per la tua pelle secca:\nSono da favorire i cibi ricchi di acqua, vitamine e minerali antiossidanti.\nFrutta e verdura a volonta' e alimenti ricchi di omega 3, come pesci provenienti da mari freddi, olio e semi di lino, ed omega 6, come olio di borragine, frutta secca, olio di vinaccioli e legumi.\nAltri esempi da alimenti da prediligere sono:\n* La mela: costituita per buona parte da acqua, e' ricca di fibre e antiossidanti;\n* L'anguria, fonte preziosa di vitamina C;\n* Il cetriolo: composto da circa il 96% di acqua, possiede poche calorie ed e' ricco di potassio, vitamina C e fibre;\n* 	Il kiwi: ricco di vitamina C, regola il colesterolo e favorisce la pressione sanguigna;\n* 	Gli agrumi: con il loro carico di vitamina C stimolano la produzione di collagene;\n* 	La frutta secca come mandorle, pistacchi e noci: fornisce vitamina E ed omega 3;\n* 	Il pomodoro: ricco di licopene, aiuta a proteggere la pelle e ne contrasta l'invecchiamento;\n* 	Gli spinaci e la lattuga: ricchi di minerali e vitamina A e C;\n*	I cereali integrali: con le loro proprieta' antiossidanti apportano rutina e vitamina B;\n* 	I frutti di mare come le ostriche e pesci grassi come il salmone, ricchi di omega 3 e zinco.\n");
    }
    else if(skn==2)
    {
        delprt("Perfetto... ecco la migliore dieta per la tua pelle grassa:\nDa mangiare:\n*  Tanta frutta e verdura, in quanto ricca di antiossidanti;\n*  Alimenti ricchi di omega 3 (pesce come merluzzo, salmone, sgombro) e omega 6 (frutta secca in generale);\n*  Cereali integrali;\n*  Carni bianche, limitando il consumo di carni rosse;\n\nDa evitare:\n* 	 Grassi di origine animale (limitarne il consumo);\n* 	 Alcolici;\n* 	 Farine e zuccheri raffinati;\n");
    }
    else if(skn==3)
    {
        delprt("Perfetto... ecco la migliore dieta per la tua pelle mista:\nE' consigliabile includere nella propria alimentazione:\n*  Tanta frutta e verdura, in quanto ricca di antiossidanti;\n*  Alimenti ricchi di omega 3 (pesce come merluzzo, salmone, sgombro) e omega 6 (frutta secca in generale);\n*  Cereali ricchi di proteine e a basso indice glicemicocome il riso integrale o la quinoa.\n");
    }
}
int main()
{
    system("clear");
    delprt("Benvenuti nella sezione alimentazione a cura di BWH Labs!\nQui ti consiglieremo la dieta migliore per il tuo tipo di pelle!\n");
    sleep(1.5);
    skintype();

}