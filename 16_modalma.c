#include <stdio.h>
#include <conio.h>
int mod(int a, int b)
{
    int c = a % b;
    return c;
}
void main()
{
    int s1, s2, sonuc;
    printf("Modunu almak istediginiz 1. sayiyi giriniz: ");
    scanf("%d", &s1);
    printf("Modunu almak istediginiz 2. sayiyi giriniz: ");
    scanf("%d", &s2);
    sonuc = mod(s1, s2);
    printf("(%d)%(%d)=%d", s1, s2, sonuc);
    getch();
}