#include <stdio.h>

int main () {
    double num;

    scanf("%lf", &num);

    printf("%.1lf00000\n%.2lf0000\n%.3lf000\n", num, num, num);

    return 0;
}