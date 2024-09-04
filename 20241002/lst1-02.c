#include <stdio.h>

int main () {
    double f, c, pl, mm;
    scanf("%lf%lf", &f, &pl);
    c=(5*(f-32))/9;
    mm=25.4*pl;
    printf("O VALOR EM CELSIUS = %.2lf\n", c);
    printf("A QUANTIDADE DE CHUVA E = %.2lf\n", mm);

    return 0;
}
