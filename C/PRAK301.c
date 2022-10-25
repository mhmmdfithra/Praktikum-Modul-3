#include <stdio.h>

int main(){
    int a,b,c;
    printf(""); scanf("%d", &a);
    printf(""); scanf("%d", &b);
    printf(""); scanf("%d", &c);
if (a<b && b<c){printf("%d, %d, %d",a,b,c);}
else if (b<a && a<c){printf("%d, %d, %d", b,a,c);}
else if ( c<b && b<a){printf ("%d, %d, %d",c,b,a);}
else if(a<c && c<b){printf ("%d, %d, %d",a,c,b);}
else if (c<a && a<b){printf ("%d, %d, %d",c,a,b);}
}