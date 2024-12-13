#include <stdio.h>
#include <stdlib.h>

void intercala(int *V1, int q1, int *V2, int q2, int *Vr) {
    int i = 0, j = 0, k = 0;

    // Intercalar os dois vetores ordenados
    while (i < q1 && j < q2) {
        if (V1[i] < V2[j]) {
            Vr[k++] = V1[i++];
        } else {
            Vr[k++] = V2[j++];
        }
    }

    // Adicionar os elementos restantes de V1
    while (i < q1) {
        Vr[k++] = V1[i++];
    }

    // Adicionar os elementos restantes de V2
    while (j < q2) {
        Vr[k++] = V2[j++];
    }
}

int main() {
    int q1, q2, i;

    // Ler os tamanhos dos vetores
    scanf("%d", &q1);
    scanf("%d", &q2);

    // Alocar os vetores
    int *V1 = (int *)malloc(q1 * sizeof(int));
    int *V2 = (int *)malloc(q2 * sizeof(int));
    int *Vr = (int *)malloc((q1 + q2) * sizeof(int));

    if (V1 == NULL || V2 == NULL || Vr == NULL) {
        printf("Erro ao alocar memória\n");
        return 1;
    }

    // Ler os valores do vetor V1
    for (i = 0; i < q1; i++) {
        scanf("%d", &V1[i]);
    }

    // Ler os valores do vetor V2
    for (i = 0; i < q2; i++) {
        scanf("%d", &V2[i]);
    }

    // Intercalar os vetores
    intercala(V1, q1, V2, q2, Vr);

    // Imprimir o vetor resultante
    for (i = 0; i < q1 + q2; i++) {
        printf("%d\n", Vr[i]);
    }

    // Liberar memória alocada
    free(V1);
    free(V2);
    free(Vr);

    return 0;
}
