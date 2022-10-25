#include<stdio.h>

int main(){
int bilangan;
    printf("Masukkan nilai Mahasiswa : "); scanf("%d", &bilangan);
if(bilangan >= 80){
     printf("\nA\n");}
else if (bilangan >=70 && bilangan <=79){
    printf("\nB\n");}
else if (bilangan >=60 && bilangan <=69){
    printf("\nC\n");}
else if (bilangan >=50 && bilangan <59){
    printf("\nD\n");}
else{
    printf("\nE\n");}
}