#include <stdio.h>
#include <conio.h>
char karakter;
void fonksiyon()
{
    if ((karakter >= 'a' && karakter <= 'z') || (karakter >= 'A' && karakter <= 'Z'))
        printf("%c karakteri bir harftir.", karakter);
    else
        printf("%c karakteri bir harf degildir.", karakter);
}
int main()
{
    printf("Bir karakterin harf olup olmadigini belirleme programi.\n");
    printf("Bir karakter giriniz: ");
    scanf("%c", &karakter);

    fonksiyon();
    return 0;
    getch();
}
