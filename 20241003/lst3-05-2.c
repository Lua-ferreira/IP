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
    double *x1, *x2; /*o erro estava aqui, x1 e x2 não podem ser ponteiros de acordo com sua lógica, 
    para eles serem ponteiros eles precisariam guardar os endereços de outras duas variáveis, se eu retirar 
    os ponteiros aqui e aplicar o & na chamada da função, o código funcionará corretamente.*/
    int raizes;

    scanf("%lf%lf%lf", &a, &b, &c);

    /*outro erro aqui, pois como vc ja declarou x1 e x2 como ponteiros, não precisa passar o & na chamada 
    da função, porém eles estão vazios e sem endereços dentro deles, o que acarretaria em problemas no restante da lógica.*/
    raizes= raizesEq2Grau(a, b, c, &x1, &x2);

    if(raizes==1){
        printf("RAIZ UNICA\n");
        printf("X1 = %.2lf\n", &x1);
    }
    
    if(raizes==2){
        printf("RAIZES DISTINTAS\n");
        printf("X1 = %.2lf\nX2 = %.2lf\n", &x1, &x2);
    }

    if(raizes==0)
        printf("RAIZES IMAGINARIAS\n");

    return 0;
}

/*Para seu codigo funcionar usando a logica que vc colocou, deveriam se ter outras 2 variaveis 
para guardar os valores de x1 e x2, depois disso vc passaria os endereços delas para seus dois 
ponteiros e, assim, enviar estes ponteiros para a função. Ademais para printar neste caso você 
nao precisa passar o & na frente de x1 e x2, pois eles já são ponteiros, mas o ideal seria usar 
aquelas outras 2 variaveis que estariam guardando os valores de x1 e x2 ao invez de printar os ponteiros.*/