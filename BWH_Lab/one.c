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
        delprt("Perfetto... ecco i migliori prodotti make-up per la tua pelle secca:\nIlluminante in polvere Rare Beauty (29.90 euro)\nIlluminante in crema Rare Beauty Positive Light Highlighter (17.00 euro)\nBlush rare beauty (16.00 euro)\nBlush Elf Halo Glow Blush Beauty Wand (9.99 euro)\nCorrettore Tarte Finish Glowy (29.90 euro)\nCorrettore Elf Hydrating Satin Camo Concealer (7.99 euro)\nCorrettore Radiant Creamy Concealer Mini - Correttore Anti-occhiaie nars (18.90 euro)\nFondotinta Elf Halo Glow Liquid Filter (14.90 euro)\nFondotinta Charlotte Tilbury Hollywood Flawless Filter Travel (19.90 euro)\nFondotinta Armani luminous silk (25.90 euro)\nContouring Elf Halo Glow Contour Beauty Wand (9.99 euro)\n");
    }
    else if(skn==2)
    {
        delprt("Perfetto... ecco i migliori prodotti make-up per la tua pelle grassa:\nIlluminante DIOR BACKSTAGE GLOW FACE PALETTE (52.00 euro)\nIlluminante NYX PROFESSIONAL MAKEUP JUMBO HIGHLIGHTER STICK (8.99 euro)\nIlluminante Dior Forever Glow Maximizer (41.99 euro)\nBlush HOLLYWOOD BLUSH & GLOW GLIDE PALETTE (33.00 euro)\nBlush too faced Cloud Crush (31.90 euro)\nCorrettore tarte finish matte (29.90 euro)\nCorrettore Huda beauty Luminous Matte - Antiocchiaie liquido (32.00 euro)\nFondotinta estee lauder DOUBLE WEAR STAY-IN-PLACE MAKEUP SPF10 (22.99 euro)\nContouring nyx professional make up Sweet Cheeks Blush Matte (8.80 euro)\nContouring Dior BackstageRosy Glow Blush (33.90 euro)\nContouring Anastasia Beverly Hills in polvere Contour kit (34.90 euro)\n");
    }
    else if(skn==3)
    {
        delprt("Perfetto... ecco i migliori prodotti make-up per la tua pelle mista:\nIlluminante in polvere Benefit (22.90 euro)\nBlush in crema Charlotte Tilbury (39.00 euro)\nBlush in polvere Soft Pop Powder Blush (28.50 euro)\nCorrettore Astra (5.40 euro)\nCorrettore Benefit Boiing Cakeless Concealer (31.00 euro)\nCorretore Maybelline (8.98 euro)\nFondotinta Elf Flawless Satin Foundation (10.99 euro)\nFondotinta Dior BackstageFace & Body Foundation (38.89 euro)\nContouring in polvere Make up by Mario SoftSculpt Bronzer - Terra abbronzante (33.00 euro)\nContouring in crema Too Faced Chocolate Soleil Bronzer - Terra Abbronzante (24.00 euro)\n");
    }
}
int main()
{
    system("clear");
    delprt("Benvenuti nella sezione make-up a cura di BWH Labs!\nQui ti consiglieremo i prodotti make-up migliori per il tuo tipo di pelle!\n");
    sleep(1.5);
    skintype();

}