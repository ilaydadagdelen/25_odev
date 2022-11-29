#include <stdio.h>
#include <conio.h>
int kinetikenerji()
{
    int V, W, m, I = 10;
    printf("Cismin cizgisel hizini giriniz: ");
    scanf("%d", &V);
    printf("Cismin kutlesini giriniz: ");
    scanf("%d", &m);
    printf("Cismin acisal hizini giriniz: ");
    scanf("%d", &W);
    return (0.5 * I * W * W + 0.5 * m * V * V);
}
void main()
{
    printf("Cismin kinetik enerjisini bulmak icin:\n");
    int sonuc;
    sonuc = kinetikenerji();
    printf("Cismin kinetik enerjisi: %d J.", sonuc);
    getch();
}
