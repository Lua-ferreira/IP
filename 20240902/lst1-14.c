#include <stdio.h>

int main () {
    int num3, num4, digcon, dig1, dig2, dig3, res;
    scanf("%d", &num3);

    dig1=num3/100;
    dig2=(num3/10)-(dig1*10);
    dig3=num3-(dig1*100)-(dig2*10);

    num4= num3*10;

    digcon= (dig1+(dig2*3)+(dig3*5))%7;
    res=digcon+num4;

    printf("O NOVO NUMERO E = %d\n", res);

    return 0;
}