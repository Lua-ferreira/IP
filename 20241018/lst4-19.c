#include <stdio.h>
#include <string.h>

int main() {
    int T, i, j;
    char A[10001], B[10001];

    // Leitura do número de casos de teste
    scanf("%d", &T);

    for (i = 0; i < T; i++) {
        // Leitura das strings A e B
        scanf("%s %s", A, B);
        
        int operacoes = 0;
        int len = strlen(A);

        // Cálculo do número mínimo de operações para cada posição
        for (j = 0; j < len; j++) {
            int diff = B[j] - A[j];
            if (diff < 0) {
                diff += 26; // Considera o avanço circular
            }
            operacoes += diff;
        }

        // Impressão do resultado para o caso de teste atual
        printf("%d\n", operacoes);
    }

    return 0;
}
