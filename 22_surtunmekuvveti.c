#include <stdio.h>
#include <conio.h>
float m;
float sonuc;
float g = 9.8;
float surtunmekatsayisi;
float surtunmekuvveti(float a, float b, float c)
{
    return a * b * c;
}
void main()
{
    while (surtunmekatsayisi <= 0 || surtunmekatsayisi >= 1)
    {
        printf("Surtunme katsayisini giriniz: ");
        scanf("%f", &surtunmekatsayisi);
        if (surtunmekatsayisi <= 0 || surtunmekatsayisi >= 1)
        {
            printf("Gecersiz deger girdiniz.");
        }
        printf("Cismin kutlesini giriniz: ");
        scanf("%f", &m);
    }
    float sonuc = surtunmekuvveti(surtunmekatsayisi, g, m);
    printf("Surtunme kuvveti=%.2f", sonuc);
    getch();
}
