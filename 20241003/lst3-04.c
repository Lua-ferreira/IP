#include <stdio.h>

void somaDivisores(int * num){
    int x, cont=1, soma=1;

    printf("%d = 1", *num);
    for(x=2; x<*num; x++){
        if(*num%x==0){
            soma+=x;
            printf(" + %d", x);
        }
    }
    printf(" = %d", soma);
    if(soma==*num)
        printf(" (NUMERO PERFEITO)\n");
    else
        printf(" (NUMERO NAO E PERFEITO)\n");

}

int main (){
    int num;

    scanf("%d", &num);

    somaDivisores(&num);

    return 0;
}