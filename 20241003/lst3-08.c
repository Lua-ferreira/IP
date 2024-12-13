#include <stdio.h>
#include <math.h>

int proxpotencia(int n, int p, int *base){
    int x, i=0, temp;

    x = pow(i, p);

    for(i=0; x<=n; i++){
        x = pow(i, p);
        *base = i-1;
    }

    temp=*base;
    x = pow(temp, p);

    return x;
}

int main(){
    int n, p, x, pot;

    scanf("%d%d", &n, &p);

    x = proxpotencia(n,p, &pot);

    printf("%d -> %d^%d = %d\n", n, pot, p, x);

    return 0;
}