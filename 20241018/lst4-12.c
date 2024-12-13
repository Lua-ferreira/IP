#include <stdio.h>
#include <stdlib.h>

int comparador(const void *a, const void *b) {
    long long int val_a = *(long long int*)a;
    long long int val_b = *(long long int*)b;
    return (val_a > val_b) - (val_a < val_b);
}

int main() {
    int N, i;
    scanf("%d", &N);

    long long int *dados = malloc(N * sizeof(long long int));
    if (dados == NULL) {
        fprintf(stderr, "Erro de alocação de memoria.\n");
        return 1;
    }

    for (i = 0; i < N; i++) {
        scanf("%lld", &dados[i]);
    }

    // Ordena os dados
    qsort(dados, N, sizeof(long long int), comparador);

    double mediana;
    if (N % 2 == 1) {
        // Número ímpar de elementos
        mediana = dados[N / 2];
    } else {
        // Número par de elementos
        mediana = (dados[N / 2 - 1] + dados[N / 2]) / 2.0;
    }

    printf("%.2lf\n", mediana);

    free(dados);
    return 0;
}

/*Explicação do Código
Função de Comparação:

A função comparador é usada pelo qsort para ordenar os elementos. Compara dois valores inteiros longos (long long int), retornando -1, 0, ou 1, conforme necessário.
Leitura dos Dados:

Lemos o número de elementos N.
Alocamos dinamicamente memória para um array dados de tamanho N para armazenar os elementos. Em seguida, lemos cada elemento.
Ordenação:

Usamos qsort para ordenar o array dados.
Cálculo da Mediana:

Se N é ímpar, a mediana é o elemento do meio.
Se N é par, a mediana é a média dos dois elementos centrais.
Impressão do Resultado:

A mediana é impressa com duas casas decimais.
Liberação da Memória:

free(dados) é usado para liberar a memória alocada dinamicamente para dados.*/