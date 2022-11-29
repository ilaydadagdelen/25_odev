#include <stdio.h>
#include <conio.h>
int a;
int b;
int c;
int d;
int deger;
void fonk()
{
    for (b = 1; b <= deger - a; b++)
    {
        printf(" ");
    }
    for (c = 1; c <= a; c++)
    {
        printf("%d", c);
    }
    for (d = a - 1; d >= 1; d--)
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
        fonk();
    }
    getch();
}