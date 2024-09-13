#include <stdio.h>

int main () {
    int din100, din50, din10, din1, valor;
    scanf("%d", &valor);

    din100=valor/100;
    valor=valor%100;
    din50=valor/50;
    valor=valor%50;
    din10=valor/10;
    valor=valor%10;
    din1=valor;

    printf("NOTAS DE 100 = %d\n", din100);
    printf("NOTAS DE 50 = %d\n", din50);
    printf("NOTAS DE 10 = %d\n", din10);
    printf("MOEDAS DE 1 = %d\n", din1);

    return 0;
}