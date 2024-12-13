#include <stdio.h>

int main() {
    int N, M, i, j, valor;
    scanf("%d %d", &N, &M);

    if (N <= 1 || M <= 1 || N > 1000 || M > 1000) {
        printf("dimensao invalida\n");
        return 0;
    }

    int matriz[N][M];
    int menor = 1001, maior = -1; // Valores iniciais fora do intervalo permitido (0 a 1000)
    int cont_menor = 0, cont_maior = 0, total_elementos = N * M;

    // Leitura da matriz e cálculo do maior e menor valor
    for (i = 0; i < N; i++) {
        for (j = 0; j < M; j++) {
            scanf("%d", &matriz[i][j]);
            int valor = matriz[i][j];

            // Atualiza menor valor e contagem
            if (valor < menor) {
                menor = valor;
                cont_menor = 1; // Reinicia a contagem do menor
            } else if (valor == menor) {
                cont_menor++;
            }

            // Atualiza maior valor e contagem
            if (valor > maior) {
                maior = valor;
                cont_maior = 1; // Reinicia a contagem do maior
            } else if (valor == maior) {
                cont_maior++;
            }
        }
    }

    // Cálculo das porcentagens
    double perc_menor = (cont_menor * 100.0) / total_elementos;
    double perc_maior = (cont_maior * 100.0) / total_elementos;

    // Saída dos resultados com duas casas decimais
    printf("%d %.2lf%%\n", menor, perc_menor);
    printf("%d %.2lf%%\n", maior, perc_maior);

    return 0;
}
