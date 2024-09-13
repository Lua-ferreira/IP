#include <stdio.h>

int main () {
    int dec, alg1, alg2, alg3, alg4, alg5, alg6, alg7, alg8;
    scanf("%d", &dec);
    if(dec<0 || dec>255) {
        printf("Numero invalido!\n");
    } else{
        alg1=dec%2;
        dec=dec/2;
        alg2=(dec%2);
        dec=dec/2;
        alg3=(dec%2);
        dec=dec/2;
        alg4=(dec%2);
        dec=dec/2;
        alg5=(dec%2);
        dec=dec/2;
        alg6=(dec%2);
        dec=dec/2;
        alg7=(dec%2);
        dec=dec/2;
        alg8=(dec%2);

    printf("%d%d%d%d%d%d%d%d\n", alg8, alg7, alg6, alg5, alg4, alg3, alg2, alg1);
    }
    return 0;
}

