#include <stdio.h>

double calculaPi(int n){
    int i;
    double pi=1, num, den;

    for(i=1; i<=n/2; i++){
        num = i*2;
        den = ((num-1))*((num+1));
        pi *= (num*num)/den;
    }

    pi*=2;

    return pi;
}

int main(){
    int n;
    double pi;

    scanf("%d", &n);

    pi = calculaPi(n);
    printf("%.12lf\n", pi);

    return 0;
}