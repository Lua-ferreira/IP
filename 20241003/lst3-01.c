#include <stdio.h>

unsigned long long int fatorial(int n){
    int i;
    unsigned long long int f=1;

    for(i=n; i>0; i--){
        f *= i;
    }

    return f;
}

int main (){
    int n;

    scanf("%d", &n);

    printf("%d! = %llu\n", n, fatorial(n));

    return 0;
}