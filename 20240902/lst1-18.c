#include <stdio.h>

int main () {
    double a, b, c, d, e, f;
    double x, y, z, w;
    scanf("%lf%lf%lf%lf%lf%lf", &a, &b, &c, &d, &e, &f);

    //x = (c-(b*y))/a;
    y = ((a*f)-(d*c))/((a*e)-(d*b));
    x = (c-(b*y))/a;

    printf("O VALOR DE X E = %.2lf\n", x);
    printf("O VALOR DE Y E = %.2lf\n", y);

    return 0;
}