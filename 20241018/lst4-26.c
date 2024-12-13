#include <stdio.h>

#define MAX_APOSTAS 50000
#define TAM_SORTEIO 6

// Função para contar quantos números coincidem entre duas listas
int conta_acertos(int sorteados[], int aposta[]) {
    int i, j, acertos = 0;
    for (i = 0; i < TAM_SORTEIO; i++) {
        for (j = 0; j < TAM_SORTEIO; j++) {
            if (sorteados[i] == aposta[j]) {
                acertos++;
            }
        }
    }
    return acertos;
}

int main() {
    int sorteados[TAM_SORTEIO];
    int n, i, j;
    int sena = 0, quina = 0, quadra = 0;

    // Ler os números sorteados
    for (i = 0; i < TAM_SORTEIO; i++) {
        scanf("%d", &sorteados[i]);
    }

    // Ler a quantidade de apostas
    scanf("%d", &n);

    // Processar cada aposta
    for (i = 0; i < n; i++) {
        int aposta[TAM_SORTEIO];
        
        // Ler uma aposta
        for (j = 0; j < TAM_SORTEIO; j++) {
            scanf("%d", &aposta[j]);
        }

        // Contar os acertos da aposta
        int acertos = conta_acertos(sorteados, aposta);

        if (acertos == 6) {
            sena++;
        } else if (acertos == 5) {
            quina++;
        } else if (acertos == 4) {
            quadra++;
        }
    }

    // Exibir resultados
    if (sena > 0) {
        printf("Houve %d acertador(es) da sena\n", sena);
    } else {
        printf("Nao houve acertador para sena\n");
    }

    if (quina > 0) {
        printf("Houve %d acertador(es) da quina\n", quina);
    } else {
        printf("Nao houve acertador para quina\n");
    }

    if (quadra > 0) {
        printf("Houve %d acertador(es) da quadra\n", quadra);
    } else {
        printf("Nao houve acertador para quadra\n");
    }

    return 0;
}
