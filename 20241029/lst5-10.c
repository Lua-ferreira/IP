#include <stdio.h>

int main() {
    int n, m;
    scanf("%d %d", &n, &m);

    int matriz[n][m];
    int i, j, cima, baixo, esquerda, direita;
    int wally_encontrado = 0;
    int pos_i = -1, pos_j = -1;

    // Leitura da matriz
    for (i = 0; i < n; i++) {
        for (j = 0; j < m; j++) {
            scanf("%d", &matriz[i][j]);
        }
    }

    // Procura pela camisa do Wally (1111) com as extremidades ao redor
    for (i = 0; i < n && !wally_encontrado; i++) {
        for (j = 0; j < m && !wally_encontrado; j++) {
            if (matriz[i][j] == 1111) {
                // Verificar as extremidades de Wally em uma matriz circular
                cima = matriz[(i - 1 + n) % n][j];
                baixo = matriz[(i + 1) % n][j];
                esquerda = matriz[i][(j - 1 + m) % m];
                direita = matriz[i][(j + 1) % m];

                if (cima == 4 && baixo == 8 && esquerda == 0 && direita == 0) {
                    pos_i = i;
                    pos_j = j;
                    wally_encontrado = 1;
                }
            }
        }
    }

    // Saída do resultado
    if (wally_encontrado) {
        printf("%d %d\n", pos_i, pos_j);
    } else {
        printf("WALLY NAO ESTA NA MATRIZ\n");
    }

    return 0;
}
