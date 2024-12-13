#include <stdio.h>
#include <stdlib.h>
#include <math.h>

struct{
    double u, x, y, z;
    double norma;
}typedef Vetor;

int comparaNorma(const void *a, const void *b){
    Vetor *vetorA = (Vetor *)a;
    Vetor *vetorB = (Vetor *)b;

    if(vetorA->norma < vetorB->norma) return -1;
    if(vetorA->norma > vetorB->norma) return 1;

    return 0;
}

int main(){
    int n, i;

    scanf("%d", &n); //num de vetores

    //alocar memoria para armazenar vetores
    Vetor *vetores = (Vetor *)malloc(n * sizeof(Vetor));

    //le os vetores
    for(i=0; i<n; i++){
        scanf("%lf%lf%lf%lf", &vetores[i].u, &vetores[i].x, &vetores[i].y, &vetores[i].z);
        vetores[i].norma = sqrt(pow(vetores[i].u, 2) + pow(vetores[i].x, 2) + 
                                pow(vetores[i].y, 2) + pow(vetores[i].z, 2));
    }

    //ordena crescente
    qsort(vetores, n, sizeof(Vetor), comparaNorma);

    //imprimir vetores e normas
    for(i=0; i<n; i++){
        printf("Vetor: (%.2lf, %.2lf, %.2lf, %.2lf) Norma: %.2lf\n",
               vetores[i].u, vetores[i].x, vetores[i].y, vetores[i].z, vetores[i].norma);
    }

    free(vetores);

    return 0;
}


