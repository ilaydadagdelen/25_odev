#include <stdio.h>
#include <conio.h>
int bakiye = 1000;
int islem;
int tutar;
void fonksiyon()
{
    switch (islem)
    {
    case 1:
        printf("Bakiyeniz %d TL.\n", bakiye);
        printf("Cekmek istediginiz tutar: ");
        scanf("%d", &tutar);
        if (tutar > 1000)
        {
            printf("Gecersiz deger girdiniz!\n");
            printf("Tekrar giriniz: ");
            scanf("%d", &tutar);
        }
        bakiye = bakiye - tutar;
        printf("Guncel bakiyeniz %d TL.\n", bakiye);
        break;
    case 2:
        printf("Bakiyeniz %d TL.\n", bakiye);
        printf("Yatirmak istediginiz tutar: ");
        scanf("%d", &tutar);
        bakiye = bakiye + tutar;
        printf("Guncel bakiyeniz %d TL.\n", bakiye);
        break;
    case 3:
        printf("Bakiyeniz %d TL.\n", bakiye);
        break;
    case 4:
        printf("Kartinizi almayi unutmayin!\n");
        break;
    }
}
void main()
{
    printf("Bakiyeniz %d TL'dir.\n", bakiye);
    printf("Para Cekme-1\nPara Yatirma-2\nBakiye Sorgulama-3\nKart Iade-4\n");
    printf("Yapmak istediginiz islemi seciniz: ");
    scanf("%d", &islem);
    fonksiyon();
    getch();
}