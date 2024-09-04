#include <stdio.h>

int main () {
    double A, B, C, del;
    scanf("%lf%lf%lf", &A, &B, &C);
    del = (B*B)-(4*A*C);

    printf("O VALOR DE DELTA E = %.2lf\n", del);

    return 0;
}