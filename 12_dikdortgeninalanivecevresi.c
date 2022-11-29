#include <stdio.h>
#include <conio.h>
int kisa, uzun;
int alanhesabi()
{
    return kisa * uzun;
}
int cevrehesabi()
{
    return kisa * 2 + uzun * 2;
}
void main()
{
    printf("Dikdortgenin alanini ve cevresini hesaplamak icin;\n");
    printf("Dikdortgenin kisa kenarinin uzunlugunu giriniz: ");
    scanf("%d", &kisa);
    printf("Dikdortgenin uzun kenarini giriniz: ");
    scanf("%d", &uzun);
    int cevre, alan;
    alan = alanhesabi();
    cevre = cevrehesabi();
    printf("Dikdortgenin alani: %d\n", alan);
    printf("Dikdortgenin cevresi: %d\n", cevre);
    getch();
}