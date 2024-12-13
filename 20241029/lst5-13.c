#include <stdio.h>

int main() {
    int n, i, j;
    scanf("%d", &n);

    // Verifica se o valor de n está no intervalo válido
    if (n < 1 || n > 10) {
        printf("dimensao invalida\n");
        return 0;
    }

    int matriz[n][n];

    // Leitura da matriz
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            scanf("%d", &matriz[i][j]);
        }
    }

    // Verificação da simetria em ambas as diagonais
    int bissimetrica = 1;
    for (i = 0; i < n && bissimetrica; i++) {
        for (j = 0; j < n; j++) {
            // Verifica a simetria em relação à diagonal principal
            if (matriz[i][j] != matriz[j][i]) {
                bissimetrica = 0;
                break;
            }
            // Verifica a simetria em relação à diagonal secundária
            if (matriz[i][j] != matriz[n - j - 1][n - i - 1]) {
                bissimetrica = 0;
                break;
            }
        }
    }

    // Saída do resultado
    if (bissimetrica) {
        printf("bissimetrica\n");
    } else {
        printf("nao bissimetrica\n");
    }

    return 0;
}
