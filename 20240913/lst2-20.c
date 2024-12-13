#include <stdio.h>

int main (){
    long int n, graosbrancos, graosescuros, graos, i, k;

    scanf("%ld", &n);

    graosbrancos = n*31;
    graosescuros = n*64;

    graos = graosbrancos + graosescuros;

    printf("%ld\n", graos);

    return 0;
}