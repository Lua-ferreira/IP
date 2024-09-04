#include <stdio.h>

int main () {
    double v, Ab, h, a;
    scanf("%lf%lf", &h, &a);
    Ab=(3*a*a*1.73205081)/2;
    v=(Ab*h)/3;


    printf("O VOLUME DA PIRAMIDE E = %.2lf METROS CUBICOS\n", v);

    return 0;
}
