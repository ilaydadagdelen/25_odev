#include <stdio.h>
#include <conio.h>
int kalan;
int bardak;
void fonksiyon(){
    while (kalan > 0)
    {
        printf("Kac bardak su ictiniz: ");
        scanf("%d", &bardak);
        kalan = kalan - bardak;
        printf("Hala icmeniz gereken %d bardak su var!\n", kalan);
    }
}
void main()
{
    printf("Bir insanin gunluk ortalama icmesi gereken su miktari ortalama 2-2,5 Litredir.\n");
    printf("Bu da yaklasik 10 bardak suya karsilik gelmektedir.\n");
    printf("Gunluk su icme hesabinizi yapabilmek icin gun icinde her su icisinizde bardak olarak veri giriniz.\n");
    kalan = 10;
    fonksiyon();
    printf("Tebrikler! Gunluk icmeniz gereken su miktarina ulastiniz.");
    getch();
}