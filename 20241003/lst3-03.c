#include <stdio.h>

void inverte(int * num){
    int dig1, dig2, dig3;

    dig1=*num/100;
    dig2=(*num/10)-(dig1*10);
    dig3=*num-(dig1*100)-(dig2*10);

    *num= (dig3*100)+(dig2*10)+dig1;
}

int main () {
    int num, numin;
    scanf("%d", &num);

    inverte(&num);

    printf("%d\n", num);

    return 0;
}