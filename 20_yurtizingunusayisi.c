#include <stdio.h>
#include <conio.h>
int toplam;
int izin;
int kalan;
void hesap(){
    do{
    printf("Izin almak istediginiz gun sayisini giriniz: ");
        scanf("%d", &izin);
        kalan = kalan - izin;
        printf("Kalan gun sayisi: %d\n", kalan);}
        while(kalan>0);
}
void main()
{
    printf("Bu program yurt izin gununu hesaplamak amaciyla yazilmistir.\n");
    printf("Yurdunuzun total izin gununu giriniz: ");
    scanf("%d", &toplam);
    kalan=toplam;
    hesap();
    printf("Izin gununuz bitmistir.");
    getch();
}
