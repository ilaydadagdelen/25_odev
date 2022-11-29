#include <stdio.h>
#include <conio.h>
float Anapara, Vade;
float Faizorani;
float sonuc;
float bilesikfaiz()
{
    printf("Anapara miktarini giriniz: ");
    scanf("%f", &Anapara);
    printf("Vade suresini ay olarak giriniz: ");
    scanf("%f", &Vade);
    printf("Faiz oranini ondalik sayi olarak giriniz: ");
    scanf("%f", &Faizorani);
    return Anapara * (1 + Faizorani) * Vade - Anapara;
}
void main()
{
    sonuc = bilesikfaiz();
    printf("Sonuc olarak odemeniz gereken para miktari: %.2f TL\n", sonuc);
    getch();
}