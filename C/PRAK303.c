#include <stdio.h>

int main(){
int bilangan;
printf("Masukkan bilangan N  : "); scanf("%d", &bilangan);
if(bilangan > 0){
    printf("positif"); }
else if (bilangan < 0){
    printf("Negatif");}
else {
    printf("Nol");}
}