#include <stdio.h>

int main () {
    double qtkw, sal, cpk, cdc, ccd, valkw;
    scanf("%lf%lf", &sal, &qtkw);
    valkw=sal*0.7/100;
    cpk=valkw;
    cdc=cpk*qtkw;
    ccd=cdc*0.9;
    printf("Custo por kW: R$ %.2lf\n", cpk);
    printf("Custo do consumo: R$ %.2lf\n", cdc);
    printf("Custo com desconto: R$ %.2lf\n", ccd);

    return 0;
}