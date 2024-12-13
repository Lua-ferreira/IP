#include <stdio.h>
#include <math.h>
    
int main (){
    int pares, i=0;
    double n, n1, n2, p, p_, q, M, N;
    
    scanf("%d", &pares);
    
    for(n=2; i<pares; n++){
        n1=n-1;
        n2=(2*n)-1;
    
        p=(3*(pow(2,n)))-1;
        p_=(3*(pow(2,n1)))-1;
        q=(9*(pow(2,n2)))-1;
        M=(pow(2,n))*p_*p;
        N=(pow(2,n))*q;
        printf("(%.0lf,%.0lf)\n", M, N);
        i++;
    }
    
    
    return 0;
} //acha numeros amigos, mas nao sao os primeiros