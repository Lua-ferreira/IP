#include <stdio.h>

#define N 100000

int main(){
    int n, m, vetor[N], compara, i, j, cont;

    scanf("%d", &n);

    for(i=0; i<n; i++){
        scanf("%d", &vetor[i]);
    }

    scanf("%d", &m);

    for(j=0; j<m; j++){
        scanf("%d", &compara);
        cont=0;
        for(i=0; i<n; i++){
            if(vetor[i]==compara) cont=1;
        }
        if(cont==1) printf("ACHEI\n");
        else printf("NAO ACHEI\n");
    }

    return 0;
}