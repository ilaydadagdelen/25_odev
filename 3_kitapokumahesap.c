#include <stdio.h>
#include <conio.h>
int gunluksayfaort(k1, k2, k3, k4, k5)
{
    int or = (k1 + k2 + k3 + k4 + k5) / 5;
    return or ;
}
int kitapbitirmegunu(k, o)
{
    int g = k / o;
    return g;
}
void main()
{
    int ks, s1, s2, s3, s4, s5, ort, gun;
    printf("Okuyacaginiz kitabin sayfa sayisini giriniz: ");
    scanf("%d", &ks);
    printf("1. gun okudugunuz sayfa sayisini giriniz: ");
    scanf("%d", &s1);
    printf("2. gun okudugunuz sayfa sayisini giriniz: ");
    scanf("%d", &s2);
    printf("3. gun okudugunuz sayfa sayisini giriniz: ");
    scanf("%d", &s3);
    printf("4. gun okudugunuz sayfa sayisini giriniz: ");
    scanf("%d", &s4);
    printf("5. gun okudugunuz sayfa sayisini giriniz: ");
    scanf("%d", &s5);
    ort = gunluksayfaort(s1, s2, s3, s4, s5);
    printf("1 gunde okudugunuz ortalama sayfa sayisi: %d\n", ort);
    gun = kitapbitirmegunu(ks, ort);
    printf("Kitabi bitireceginiz ortalama gun sayisi: %d\n", gun);
    getch();
}