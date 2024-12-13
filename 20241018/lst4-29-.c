#include <stdio.h>

#define MAX 500000

void intercala(int V1[], int q1, int V2[], int q2, int Vr[]) {
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

    // Vetores com alocação estática
    int V1[MAX], V2[MAX], Vr[2 * MAX];

    // Ler os tamanhos dos vetores
    scanf("%d", &q1);
    scanf("%d", &q2);

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

    return 0;
}
