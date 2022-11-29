#include <stdio.h>
#include <conio.h>
int algv, algf, inkv, inkf, flabv, flabf, fizv, fizf, cebv, cebf, matv, matf, turv, turf;
int algo, inko, flabo, fizo, cebo, mato, turo;
float dersort(int vize, int final)
{
    float or = vize * 0.6 + final * 0.4;
    return or ;
}
float donemort(algo, inko, flabo, fizo, cebo, mato, turo)
{
    float top = ((algo * 5 + inko * 2 + flabo * 2 + fizo * 6 + cebo * 5 + mato * 6 + turo * 2) / 28);
    float dor = top / 25;
    return dor;
}
void main()
{
    printf("-----------------------------------------\n");
    printf("|DERS ADI                          |AKTS|\n");
    printf("|----------------------------------|----|\n");
    printf("|ALGORITMA VE PROGRAMLAMAYA GIRIS  |5   |\n");
    printf("|ATATURK ILKELERI VE INKILAP TARIHI|2   |\n");
    printf("|FIZIK LABORATUVARI                |2   |\n");
    printf("|FIZIK-I                           |6   |\n");
    printf("|LINEER CEBIR                      |5   |\n");
    printf("|MATEMATIK-I                       |6   |\n");
    printf("|TURK DILI-I                       |2   |\n");
    printf("-----------------------------------------\n");
    printf("Notlari 100 uzerinden giriniz.\n");
    printf("Algoritma ve programlamaya giris vize notunuz: ");
    scanf("%d", &algv);
    printf("Algoritma ve programlamaya giris final notunuz: ");
    scanf("%d", &algf);
    algo = dersort(algv, algf);
    printf("Algoritma ve programlama ders ortalamaniz: %d\n", algo);
    printf("Ataturk ilkeleri ve inkilap tarihi vize notunuz: ");
    scanf("%d", &inkv);
    printf("Ataturk ilkeleri ve inkilap tarihi final notunuz: ");
    scanf("%d", &inkf);
    inko = dersort(inkv, inkf);
    printf("Ataturk ilkeleri ve inkilap tarihi ders ortalamaniz: %d\n", inko);
    printf("Fizik laboratuvari vize notunuz: ");
    scanf("%d", &flabv);
    printf("Fizik laboratuvari final notunuz: ");
    scanf("%d", &flabf);
    flabo = dersort(flabv, flabf);
    printf("Fizik laboratuvari ders ortalamaniz: %d\n", flabo);
    printf("Fizik-I vize notunuz: ");
    scanf("%d", &fizv);
    printf("Fizik-I final notunuz: ");
    scanf("%d", &fizf);
    fizo = dersort(fizv, fizf);
    printf("Fizik-I ders ortalamaniz: %d\n", fizo);
    printf("Lineer cebir vize notunuz: ");
    scanf("%d", &cebv);
    printf("Lineer cebir final notunuz: ");
    scanf("%d", &cebf);
    cebo = dersort(cebv, cebf);
    printf("Lineer cebir ders ortalamaniz: %d\n", cebo);
    printf("Matematik-I vize notunuz: ");
    scanf("%d", &matv);
    printf("Matematik-I final notunuz: ");
    scanf("%d", &matf);
    mato = dersort(matv, matf);
    printf("Matematik-I ders ortalamaniz: %d\n", mato);
    printf("Turk dili vize notunuz: ");
    scanf("%d", &turv);
    printf("Turk dili final notunuz: ");
    scanf("%d", &turf);
    turo = dersort(turv, turf);
    printf("Turk dili ders ortalamaniz: %d\n", turo);
    float dort = donemort(algo, inko, flabo, fizo, cebo, mato, turo);
    printf("Donem sonu ortalamaniz 4 uzerinden: %.2f", dort);
    getch();
}