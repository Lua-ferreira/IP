#include <stdio.h>
#include <math.h>

int main () {
    double l1, l2, l3, A, T;
    scanf("%lf%lf%lf", &l1, &l2, &l3);
    T= (l1+l2+l3)/2;
    A= sqrt(T*(T-l1)*(T-l2)*(T-l3));

    printf("A AREA DO TRIANGULO E = %.2lf\n", A);

    return 0;
}