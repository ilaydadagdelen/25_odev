#include <stdio.h>
#include <conio.h>
int a;
int b;
int c;
int d;
int deger;
void piramitfonk()
{
    for (b = 1; b <= deger - a; b++)
    {
        printf(" ");
    }
    for (c = a; c >= 1; c--)
    {
        printf("%d", c);
    }
    for (d = 2; d <= a; d++)
    {
        printf("%d", d);
    }
    printf("\n");
}
void main()
{
    printf("Bir deger giriniz: ");
    scanf("%d", &deger);
    for (a = 1; a <= deger; a++)
    {
        piramitfonk();
    }
    getch();
}