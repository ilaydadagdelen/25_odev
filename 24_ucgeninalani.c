#include<stdio.h>
#include<conio.h>
int yukseklik;
int taban;
int alan;
int ucgenalani(){
    return taban*yukseklik/2;
}
void main(){
    printf("Ucgenin alanini bulmak icin:\n");
    printf("Ucgenin yuksekligini giriniz: ");
    scanf("%d",&yukseklik);
    printf("Ucgenin tabanini giriniz: ");
    scanf("%d",&taban);
    alan=ucgenalani();
    printf("Ucgenin alani: %d",alan);
    getch();
}