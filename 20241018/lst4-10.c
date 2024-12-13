#include <stdio.h>

void decimal_para_binario(int n) {
    if (n == 0) {
        printf("0\n");
        return;
    }
    
    int binario[32];
    int i = 0, j;

    // Armazena os bits em um array (do menos significativo para o mais significativo)
    while (n > 0) {
        binario[i] = n % 2;
        n /= 2;
        i++;
    }

    // Imprime o binário na ordem correta (do mais significativo para o menos significativo)
    for (j = i - 1; j >= 0; j--) {
        printf("%d", binario[j]);
    }
    printf("\n");
}

int main() {
    int n;

    // Lê até o fim do arquivo (EOF)
    while (scanf("%d", &n) != EOF) {
        decimal_para_binario(n);
    }

    return 0;
}
