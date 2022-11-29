#include <stdio.h>
#include <conio.h>
long bin(int ds)
{
    long bs = 0, kalan, f = 1;
    while (ds != 0)
    {
        kalan = ds % 2;
        bs = bs + kalan * f;
        f = f * 10;
        ds = ds / 2;
    }
    return bs;
}

void main()
{
    long bs;
    int ds;
    printf("Decimal bir tamsayi giriniz: ");
    scanf("%d", &ds);
    bs = bin(ds);
    printf("\nBinary karsiligi : %ld\n\n", bs);
    getch();
}
