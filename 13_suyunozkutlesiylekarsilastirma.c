#include <stdio.h>
#include <conio.h>
float ozkutle()
{
    float m, V;
    printf("Maddenin kutlesini giriniz: ");
    scanf("%f", &m);
    printf("Maddenin hacmini giriniz: ");
    scanf("%f", &V);
    return (m / V);
}
void main()
{
    printf("Bu programin amaci cismin ozkutlesini bulup suyun ozkutlesine gore karsilastirmak:\n");
    float sonuc;
    int su = 1;
    sonuc = ozkutle();
    printf("Maddenin ozkutlesi: %.2f.\n", sonuc);
    if (sonuc < su)
    {
        printf("Maddeniz ozkutlesi suyun ozkutlesinden kucuktur.");
    }
    else if (sonuc == su)
    {
        printf("Maddenin ozkutlesi suyun ozkutlesine esittir.");
    }
    else
    {
        printf("Maddenin ozkutlesi suyun ozkutlesinden buyuktur.");
    }
    getch();
}