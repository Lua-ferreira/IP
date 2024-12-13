#include <stdio.h>

#define N 499

int findch(char ch, char *str){
    int i=0;

    while(str[i] && str[i]!=ch)
        i++;

    if(!str[i])
        return -1;

    return i;
}

int main(){
    int n, i; //qde de casos de teste
    char x;
    char str[N+1];

    scanf("%d%*c", &n);
    while(n--){
        scanf("%c%*c%[^\n]%*c", &x, str);
        i= findch(x, str);
        if(i==-1)
            printf("Caractere %c nao encontrado.\n", x);
        else
            printf("Caractere %c encontrado no indice %d da string.\n", x, i);
    }

    return 0;
}