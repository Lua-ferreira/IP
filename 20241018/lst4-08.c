#include <stdio.h>

#define MAX_VAL 10000

int main() {
    int N, i, j, max_val;
    int vetor[MAX_VAL + 1];
    int count[MAX_VAL + 1];

    while (1) {
        // Leitura do tamanho do vetor
        scanf("%d", &N);
        if (N == 0) break;  // Encerra o programa se N for 0

        // Inicialização dos vetores de contagem
        for (i = 0; i <= MAX_VAL; i++) {
            count[i] = 0;
        }

        // Leitura do vetor e cálculo do maior valor
        max_val = 0;
        for (i = 0; i < N; i++) {
            scanf("%d", &vetor[i]);
            if (vetor[i] > max_val) {
                max_val = vetor[i];
            }
            count[vetor[i]]++;  // Conta a ocorrência de cada valor
        }

        // Cálculo da frequência acumulada
        for (i = 1; i <= max_val; i++) {
            count[i] += count[i - 1];
        }

        // Impressão da saída para cada valor de 0 até max_val
        for (i = 0; i <= max_val; i++) {
            printf("(%d) %d\n", i, count[i]);
        }
    }

    return 0;
}
