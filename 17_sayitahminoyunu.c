#include <stdio.h>
#include <time.h>
#include <conio.h>
int aralik, tahmin, bilgisayar;
void iffonk()
{
    if (tahmin == bilgisayar)
    {
        printf("Tebrikler!Bilgisayarla ayni sayiyi tuttunuz.\n");
    }
    else
    {
        printf("Tutulan sayiyi dogru tahmin edemediniz.\n");
    }
}
void main()
{
    printf("Sayi tahmin oyunu.\n");
    printf("0dan buyuk bir tamsayi belirtiniz: ");
    scanf("%d", &aralik);
    printf("Oyun 0-%d sayilari araliginda.\n", aralik);
    printf("0-%d araliginda bir sayi tahmin ediniz: ", aralik);
    scanf("%d", &tahmin);
    srand(time(NULL));
    bilgisayar = rand() % aralik + 1;
    printf("Tahmin ettiginiz sayi: %d\n", tahmin);
    printf("Bilgisayarin tuttugu sayi: %d\n", bilgisayar);
    iffonk();
    getch();
}