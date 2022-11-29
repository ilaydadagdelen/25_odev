#include <stdio.h>
#include <conio.h>
int a = 0;
int sayi;
int i;
void degeralma()
{
    printf("Bu program girdiginiz pozitif tamsayi degerinin asal olup olmadigini bulmak icindir.\n");
    printf("Bir pozitif tamsayi giriniz:");
    scanf("%d", &sayi);
}
void main()
{
    degeralma();
    for (i = 2; i <= sayi / 2; i++)
    {
        if (sayi % i == 0)
        {
            a = 1;
            break;
        }
    }
    if (a == 0)
    {
        printf("Sayi asaldir.\n");
    }
    else
    {
        printf("Sayi asal degildir.\n");
    }
    getch();
}