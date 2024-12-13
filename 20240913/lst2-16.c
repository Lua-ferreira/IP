#include <stdio.h>
#include <math.h>

int main (){
    float aprox, inicio, fim;
    double a, b, c, delta, x1, x2, raiz, temp, erro;

    scanf("%lf%lf%lf", &a, &b, &c);

    delta=(b*b)-(4*a*c);

    if(delta==0){
        printf("RAIZ UNICA\n");
        x1=(-b)/(2*a);
        printf("X1 = %.2lf\n", x1);
    }
    
    if(delta>0){
        printf("RAIZES DISTINTAS\n");
        
        raiz=sqrt(delta);
        x1=(-b+raiz)/(2*a);
        x2=(-b-raiz)/(2*a);

        if(x1>x2){
            temp=x1;
            x1=x2;
            x2=temp;
        }

        printf("X1 = %.2lf\nX2 = %.2lf\n", x1, x2);
    }

    if(delta<0)
        printf("RAIZES IMAGINARIAS\n");

    return 0;
}