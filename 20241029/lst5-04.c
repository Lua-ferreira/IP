#include <stdio.h>

int main(){
    float a, b, c, d;
    float a2, b2, c2, d2;

    scanf("%f%f%f%f", &a, &b, &c, &d);

    a2= (a*a)+(b*c);
    b2= (a*b)+(b*d);
    c2= (c*a)+(d*c);
    d2= (c*b)+(d*d);

    printf("%.3f %.3f\n%.3f %.3f\n", a2, b2, c2, d2);

    return 0;
}