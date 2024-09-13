#include <stdio.h>

int main () {
    int num3, numin, dig1, dig2, dig3;
    scanf("%d", &num3);

    dig1=num3/100;
    dig2=(num3/10)-(dig1*10);
    dig3=num3-(dig1*100)-(dig2*10);

    numin= (dig3*100)+(dig2*10)+dig1;


    printf("%d\n", numin);

    return 0;
}