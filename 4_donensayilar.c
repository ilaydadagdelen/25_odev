#include <stdio.h>
#include <conio.h>
int fonk(int a)
{
    int b = a * 2 - 1;
    return b;
}
void main()
{
    int sayi;
    printf("Bir deger giriniz: ");
    scanf("%d", &sayi);
    int a, b, d, e;
    int c = 1;
    int f, g, h, j;
    int i = sayi;
    int deger = fonk(sayi);
    for (f = sayi; f > 1; f--)
    {
        for (h = sayi; h > (i); h--)
        {
            printf("%d", h);
        }
        for (g = (f * 2 - 1); g >= 1; g--)
        {
            printf("%d", i);
        }
        for (j = (i + 1); j <= sayi; j++)
        {
            printf("%d", j);
        }
        printf("\n");
        i--;
    }
    for (a = 1; a <= sayi; a++)
    {
        for (d = sayi; d >= (c + 1); d--)
        {
            printf("%d", d);
        }
        for (b = 1; b <= (a * 2 - 1); b++)
        {
            printf("%d", c);
        }
        for (e = (c + 1); e <= sayi; e++)
        {
            printf("%d", e);
        }
        printf("\n");
        c++;
    }
    getch();
}