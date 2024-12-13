#include <stdio.h>
#include <time.h>

int main(){
    clock_t start = clock();

    int vetor[1000], pares[1000];
    int cont=0, i, n;

    scanf("%d", &n);

    for(i=0; i<n; i++){
        scanf("%d", &vetor[i]);
        if(vetor[i]%2==0){
            pares[cont]=vetor[i];
            cont++;
        }
    }
    for(i=0; i<cont; i++){
        printf("%d ", pares[i]);
    }

    printf("%d\n", cont);

    clock_t end = clock();

    double cpu_time_used = ((double) (end - start)) * 1000 / CLOCKS_PER_SEC;

    printf("\n Tempo de execucao: %.2f milissegundos\n", cpu_time_used);

    return 0;
}

