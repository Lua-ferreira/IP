#include <stdio.h>

int main (){
    int num, x, cont=1, soma=1;

    scanf("%d", &num);

    printf("%d = 1", num);
    for(x=2; x<num; x++){
        if(num%x==0){
            soma+=x;
            printf(" + %d", x);
        }
    }
    printf(" = %d", soma);
    if(soma==num)
        printf(" (NUMERO PERFEITO)\n");
    else
        printf(" (NUMERO NAO E PERFEITO)\n");

    return 0;
}