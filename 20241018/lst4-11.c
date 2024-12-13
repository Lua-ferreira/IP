#include <stdio.h>

#define MAX_VALOR 101

int main() {
    int N, num, i;
    int frequencias[MAX_VALOR] = {0};  // Vetor para contar frequências de 0 a 100

    // Leitura da quantidade de números
    scanf("%d", &N);

    // Leitura dos números e contagem de frequências
    for (i = 0; i < N; i++) {
        scanf("%d", &num);
        frequencias[num]++;
    }

    // Determinação do número com maior frequência
    int maior_frequencia = 0;
    int valor_com_maior_frequencia = 0;
    for (i = 0; i < MAX_VALOR; i++) {
        if (frequencias[i] > maior_frequencia) {
            maior_frequencia = frequencias[i];
            valor_com_maior_frequencia = i;
        } else if (frequencias[i] == maior_frequencia && i < valor_com_maior_frequencia) {
            valor_com_maior_frequencia = i;
        }
    }

    // Exibição do resultado
    printf("%d\n", valor_com_maior_frequencia);
    printf("%d\n", maior_frequencia);

    return 0;
}
