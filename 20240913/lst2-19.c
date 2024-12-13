#include <stdio.h>

int main (){
    double cc, dr, rt;

    scanf("%lf%lf%lf", &cc, &dr, &rt);


    if(cc<7 && dr>50 && rt>80000)
        printf("ACO DE GRAU = 10\n");
        
    else if(cc<7 && dr>50)
        printf("ACO DE GRAU = 9\n");

    else if(cc<7)
        printf("ACO DE GRAU = 8\n");
        
    else
        printf("ACO DE GRAU = 7\n");

    return 0;
}