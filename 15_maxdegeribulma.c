#include <stdio.h>
#include <conio.h>
int max(int a, int b)
{
   int c;

   if (a > b)
   {
      c = a;
      printf("%d>%d", a, b);
   }
   else
   {
      c = b;
      printf("%d>%d", b, a);
   }

   return c;
}
void main()
{
   int s1, s2, sonuc;
   printf("Karsilastirmak istediginiz 1. tamsayi degerini giriniz: ");
   scanf("%d", &s1);
   printf("Karsilastirmak istediginiz 2. tamsayi degerini giriniz: ");
   scanf("%d", &s2);
   max(s1, s2);
   getch();
}