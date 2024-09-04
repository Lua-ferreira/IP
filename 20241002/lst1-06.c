#include <stdio.h>

int main () {
    int num1, num2;
    double som, med;
    scanf("%d%d", &num1, &num2);
    som= num1 + num2;
    med= som/2;

    printf("%.3lf\n", med);

    return 0;
}
