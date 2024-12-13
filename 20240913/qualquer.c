#include <stdio.h>

int main(){
    int idade = 10;
    int * p = &idade;

    printf("Endereço idade: %p\n", &idade);
    printf("Conteúdo de p: %p\n", p);
    printf("Endereço p: %p\n", &p);

    return 0;
}
