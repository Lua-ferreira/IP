#include <stdio.h>

void ordena_coluna(int matriz[][1000], int N, int coluna) {
    int i, j;

    for (i = 0; i < N - 1; i++) {
        for (j = i + 1; j < N; j++) {
            if (matriz[i][coluna] > matriz[j][coluna]) {
                int temp = matriz[i][coluna];
                matriz[i][coluna] = matriz[j][coluna];
                matriz[j][coluna] = temp;
            }
        }
    }
}

int main() {
    int N, i, j, col;
    scanf("%d", &N);

    if (N <= 1 || N > 1000) {
        printf("dimensao invalida\n");
        return 0;
    }

    int matriz[1000][1000];

    // Leitura da matriz
    for (i = 0; i < N; i++) {
        for (j = 0; j < N; j++) {
            scanf("%d", &matriz[i][j]);
        }
    }

    // Ordenação de cada coluna
    for (col = 0; col < N; col++) {
        ordena_coluna(matriz, N, col);
    }

    // Impressão da matriz ordenada
    for (i = 0; i < N; i++) {
        for (j = 0; j < N; j++) {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }

    return 0;
}
