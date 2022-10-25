#include<stdio.h>

int main(){
    int hari, jam, menit, detik,waktu, day, hour, min, sisa;
    scanf("%d", &waktu);
    hari= waktu / 86400; sisa= waktu %86400;
    jam= sisa /3600;  hour= sisa % 3600;
    menit= hour/60; detik= hour % 60;
    if(waktu >0 && waktu <= 86400){
        printf("%.2d:%.2d:%.2d", jam, menit, detik );
    }
    else{printf("%d hari %.2d:%.2d:%.2d", hari, jam, menit, detik);}
}
