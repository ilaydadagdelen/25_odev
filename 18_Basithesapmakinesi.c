#include <stdio.h>
#include <conio.h>
int topla(int s1, int s2)
{
    int sonuc = s1 + s2;
    return sonuc;
}
int cıkar(int s1, int s2)
{
    int sonuc = s1 - s2;
    return sonuc;
}
int carp(int s1, int s2)
{
    int sonuc = s1 * s2;
    return sonuc;
}
int bol(int s1, int s2)
{
    int sonuc = s1 / s2;
    return sonuc;
}
void main()
{
    int secim;
    int s1, s2;
    int sonuc;
    printf("Basit hesap makinesi:\n");
    printf("Toplama:1, Cıkarma:2, Carpma:3, Bolme:4\n");
    printf("Yapmak istediginiz islemin numarasini giriniz:");
    scanf("%d", &secim);
    if (secim == 1)
    {
        printf("Toplama islemini sectiniz.\n");
        printf("Toplamak istediginiz 1. tamsayiyi giriniz: ");
        scanf("%d", &s1);
        printf("Toplamak istediginiz 2. tamsayiyi giriniz: ");
        scanf("%d", &s2);
        sonuc = topla(s1, s2);
        printf("%d+%d=%d", s1, s2, sonuc);
    }
    else if (secim == 2)
    {
        printf("Cikarma islemini sectiniz.\n");
        printf("Cikarmak istediginiz 1. tamsayiyi giriniz: ");
        scanf("%d", &s1);
        printf("Cikarmak istediginiz 2. tamsayiyi giriniz: ");
        scanf("%d", &s2);
        sonuc = cıkar(s1, s2);
        printf("%d-%d=%d", s1, s2, sonuc);
    }
    else if (secim == 3)
    {
        printf("Carpma islemini sectiniz.\n");
        printf("Carpmak istediginiz 1. tamsayiyi giriniz: ");
        scanf("%d", &s1);
        printf("Carpmak istediginiz 2. tamsayiyi giriniz: ");
        scanf("%d", &s2);
        sonuc = carp(s1, s2);
        printf("%d*%d=%d", s1, s2, sonuc);
    }
    else if (secim == 4)
    {
        printf("Bolme islemini sectiniz.\n");
        printf("Bolmek istediginiz 1. tamsayiyi giriniz: ");
        scanf("%d", &s1);
        printf("Bolmek istediginiz 2. tamsayiyi giriniz: ");
        scanf("%d", &s2);
        sonuc = bol(s1, s2);
        printf("%d/%d=%d", s1, s2, sonuc);
    }
    else
    {
        printf("Gecersiz secim yaptiniz!");
    }
    getch();
}