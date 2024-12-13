#include <stdio.h>
#include <math.h>

unsigned long int fat(int n){
    unsigned long int f=1;
    while(n>1){
        f=f*n;
        n--;
    }
    return f;
}

int main (){
    int n;
    double x, e=0, i, num, den, frac;

    scanf("%lf%d", &x, &n);

    for(i=0; i<=n; i++){
        num=pow(x,i);
        den=fat(i);
        frac=num/den;
        e=e+frac;
    }
    printf("e^%.2lf = %.6lf\n", x, e);

    return 0;
}