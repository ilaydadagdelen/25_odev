#include <stdio.h>
#include <time.h>
#include <conio.h>
int oyuncu = 0, bilgisayar = 0, osecim;
int bsecim = 0;
void f1()
{
    if (bsecim == 1)
    {
        bilgisayar = bilgisayar + 1;
        oyuncu = oyuncu + 1;
        printf("Bilgisayar da tas secti.\nSkor Oyuncu:%d Bilgisayar:%d.\n", oyuncu, bilgisayar);
    }
    if (bsecim == 2)
    {
        bilgisayar = bilgisayar + 1;
        printf("Bilgisayar kagit secti.\nSkor O:%d B:%d.\n", oyuncu, bilgisayar);
    }
    if (bsecim == 3)
    {
        oyuncu = oyuncu + 1;
        printf("Bilgisayar makas secti.\nSkor Oyuncu:%d Bilgisayar:%d.\n", oyuncu, bilgisayar);
    }
}
void f2()
{
    if (bsecim == 1)
    {
        oyuncu = oyuncu + 1;
        printf("Bilgisayar tas secti.\nSkor Oyuncu:%d Bilgisayar:%d.\n", oyuncu, bilgisayar);
    }
    else if (bsecim == 2)
    {
        bilgisayar = bilgisayar + 1;
        oyuncu = oyuncu + 1;
        printf("Bilgisayar da kagit secti.\nSkor Oyuncu:%d Bilgisayar:%d.\n", oyuncu, bilgisayar);
    }
    else if (bsecim == 3)
    {
        bilgisayar = bilgisayar + 1;
        printf("Bilgisayar makas secti.\nSkor Oyuncu:%d Bilgisayar:%d.\n", oyuncu, bilgisayar);
    }
}
void f3()
{
    if (bsecim == 1)
    {
        bilgisayar = bilgisayar + 1;
        printf("Bilgisayar tas secti.\nSkor O:%d, B=%d\n", oyuncu, bilgisayar);
    }
    else if (bsecim == 2)
    {
        oyuncu = oyuncu + 1;
        printf("Bilgisayar kagit secti.\nSkor Oyuncu:%d Bilgisayar:%d.\n", oyuncu, bilgisayar);
    }
    else if (bsecim == 3)
    {
        bilgisayar = bilgisayar + 1;
        oyuncu = oyuncu + 1;
        printf("Bilgisayar da makas secti.\nSkor Oyuncu:%d Bilgisayar:%d.\n", oyuncu, bilgisayar);
    }
}
void main()
{
    int T = 1, K = 2, M = 3, i;

    printf("Tas=1, Kagit=2, Makas=3\n");
    for (i = 1; i <= 3; i++)
    {
        printf("Seciminizi giriniz: ");
        scanf("%d", &osecim);

        srand(time(NULL));
        bsecim = rand() % 3 + 1;

        if (osecim == 1)
        {
            f1();
        }
        else if (osecim == 2)
        {
            f2();
        }
        else if (osecim == 3)
        {
            f3();
        }
        else
        {
            printf("Hatali giris yaptiniz!\n");
        }
    }
    if (bilgisayar > oyuncu)
    {
        printf("Bilgisayar kazandi!");
    }
    else if (bilgisayar < oyuncu)
    {
        printf("Oyuncu kazandi!");
    }
    else if (bilgisayar = oyuncu)
    {
        printf("Oyun berabere bitti.");
    }
    getch();
}