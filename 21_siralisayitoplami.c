#include <stdio.h>
#include <conio.h>
int f(int a)
{
    int b, c = 0;
    for (b = 1; b <= a; b++)
    {
        c = b + c;
    }
    return c;
}
void main()
{
    int sayi, sonuc;
    printf("Bir tamsayi degeri giriniz: ");
    scanf("%d", &sayi);
    sonuc = f(sayi);
    printf("Girdiginiz sayinin kendisi ve kendisinden onceki sayilarla olan toplami: %d", sonuc);
    getch();
}
