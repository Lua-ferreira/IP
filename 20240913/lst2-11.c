#include <stdio.h>

int main (){
    int n;
    double i, f;

    scanf("%d", &n);
    f=1;

    for(i=n; i>0; i--){
        f *= i;
    }

    printf("%d! = %.0lf\n", n, f);

    return 0;
}