#include <stdio.h>
#include <conio.h>
int yataygecispuani(int o, int a)
{
    int puan = o * 0.6 + a * 0.4;
    return puan;
}
void main()
{
    int agno, sonuc;
    int osys, taban;
    printf("100 uzerinden not ortalamanizi  giriniz: ");
    scanf("%d", &agno);
    printf("OSYS puaninizi giriniz: ");
    scanf("%d", &osys);
    printf("Programin taban puanini giriniz: ");
    scanf("%d", &taban);
    sonuc = yataygecispuani(osys, agno);
    printf("Yatay gecis puaniniz: %d\n", sonuc);
    if (sonuc >= taban)
    {
        printf("Kabul edildiniz!");
    }
    else
    {
        printf("Kabul edilmediniz.");
    }
    getch();
}