#include <stdio.h>
#include <stdlib.h>

#define NUM_ANOES 9
#define LEGITIMOS 7

// Função para comparar dois inteiros (usada no qsort)
int compara(const void *a, const void *b) {
    return (*(int *)a - *(int *)b);
}

void encontra_legitimos(int *anoes) {
    int i, j, soma_total = 0;

    // Calcular a soma total dos números
    for (i = 0; i < NUM_ANOES; i++) {
        soma_total += anoes[i];
    }

    // Encontrar os dois números que devem ser excluídos
    for (i = 0; i < NUM_ANOES; i++) {
        for (j = i + 1; j < NUM_ANOES; j++) {
            if (soma_total - anoes[i] - anoes[j] == 100) {
                // Marcar os dois números para exclusão
                anoes[i] = -1;
                anoes[j] = -1;
                goto ordena_e_imprime; // Sair do loop duplo
            }
        }
    }

ordena_e_imprime:
    // Ordenar os números restantes
    qsort(anoes, NUM_ANOES, sizeof(int), compara);

    // Imprimir os 7 números legítimos
    for (i = 0; i < NUM_ANOES; i++) {
        if (anoes[i] != -1) {
            printf("%d\n", anoes[i]);
        }
    }
}

int main() {
    int T, i, j;
    int anoes[NUM_ANOES];

    // Ler o número de casos de teste
    scanf("%d", &T);

    for (i = 0; i < T; i++) {
        // Ler os 9 números das toucas dos anões
        for (j = 0; j < NUM_ANOES; j++) {
            scanf("%d", &anoes[j]);
        }

        // Encontrar e imprimir os números legítimos
        encontra_legitimos(anoes);

        if (i < T - 1) {
            printf("\n"); // Separar os casos de teste com uma linha em branco
        }
    }

    return 0;
}
