#include <stdio.h>
#include <math.h>

int raizesEq2Grau(double a, double b, double c, double *x1, double *x2){
    double delta, raiz, temp;

    delta=(b*b)-(4*a*c);

    if(delta==0){
        *x1=(-b)/(2*a);
        return 1;
    }
    
    if(delta>0){
        raiz=sqrt(delta);
        *x1=(-b+raiz)/(2*a);
        *x2=(-b-raiz)/(2*a);

        if(x1>x2){
            temp=*x1;
            *x1=*x2;
            *x2=temp;
        }

        return 2;
    }

    if(delta<0)
        return 0;
}

int main (){
    double a, b, c;
    double x1, x2;
    int raizes;

    scanf("%lf%lf%lf", &a, &b, &c);

    raizes= raizesEq2Grau(a, b, c, &x1, &x2);

    if(raizes==1){
        printf("RAIZ UNICA\n");
        printf("X1 = %.2lf\n", x1);
    }
    
    if(raizes==2){
        printf("RAIZES DISTINTAS\n");
        printf("X1 = %.2lf\nX2 = %.2lf\n", x1, x2);
    }

    if(raizes==0)
        printf("RAIZES IMAGINARIAS\n");

    return 0;
}