#include <stdio.h>

int main() {
    int N, i, j;
    scanf("%d", &N);

    int A[N][N];
    int AT[N][N];
    int result[N][N];
    int trace = 0;

    // Leitura da matriz A
    for (i = 0; i < N; i++) {
        for (j = 0; j < N; j++) {
            scanf("%d", &A[i][j]);
            if (i == j) {
                trace += A[i][j]; // Soma dos elementos na diagonal principal
            }
        }
    }

    // Calculando a transposta AT
    for (i = 0; i < N; i++) {
        for (j = 0; j < N; j++) {
            AT[i][j] = A[j][i];
        }
    }

    // Calculando o resultado tr(A) * A + AT
    for (i = 0; i < N; i++) {
        for (j = 0; j < N; j++) {
            result[i][j] = trace * A[i][j] + AT[i][j];
        }
    }

    // Imprimindo o resultado
    for (i = 0; i < N; i++) {
        for (j = 0; j < N; j++) {
            printf("%d ", result[i][j]);
        }
        printf("\n");
    }

    return 0;
}
