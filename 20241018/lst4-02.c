#include <stdio.h>

#define N 1000

int main(){
    int vetor[N];
    int n, k, i=0, cont=0;

    while(i==0){
        scanf("%d", &n);
        if(n>=1 && n<=1000)
            i=1;
    }

    for(i=0; i<n; i++){
        scanf("%d", &vetor[i]);
    }
    scanf("%d", &k);
    for(i=0; i<n; i++){
        if(vetor[i]>=k)
            cont++;
    }

    printf("%d\n", cont);

    return 0;
}