#include <stdio.h>
#include <conio.h>
float Anapara, Vade;
float Faizorani;
float Faiztutari, sonuc;
float basitfaiz()
{
    printf("Anapara miktarini giriniz: ");
    scanf("%f", &Anapara);
    printf("Vade suresini ay olarak giriniz: ");
    scanf("%f", &Vade);
    printf("Faiz oranini ondalik sayi olarak giriniz: ");
    scanf("%f", &Faizorani);
    return Anapara * Vade * Faizorani;
}
float toplam(float faiz)
{
    return Anapara + faiz;
}
void main()
{

    Faiztutari = basitfaiz();
    printf("Faiz tutari: %.2f TL\n", Faiztutari);
    sonuc = toplam(Faiztutari);
    printf("Sonuc olarak odemeniz gereken para miktari: %.2f TL\n", sonuc);
    getch();
}