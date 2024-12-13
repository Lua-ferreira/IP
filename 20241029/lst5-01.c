#include <stdio.h>

int main(){
    double a, b, c, d, det;

    scanf("%lf%lf%lf%lf", &a, &b, &c, &d);

    det= (a*d)-(b*c);

    printf("%.2lf\n", det);

    return 0;
}