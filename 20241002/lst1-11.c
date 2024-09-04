#include <stdio.h>

int main () {
    double prcf, pctd, pcti, prcc;
    scanf("%lf%lf%lf", &prcf, &pctd, &pcti);
    prcc= prcf + ((prcf*pctd)/100) + ((prcf*pcti)/100);


    printf("O VALOR DO CARRO E = %.2lf\n", prcc);

    return 0;
}