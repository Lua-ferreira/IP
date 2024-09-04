#include <stdio.h>

int main () {
    double a, b, c, d, det;
    scanf("%lf%lf%lf%lf", &a, &b, &c, &d);
    det = (a*d) - (b*c);

    printf("O VALOR DO DETERMINANTE E = %.2lf\n", det);

    return 0;
}