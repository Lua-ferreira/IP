#include <stdio.h>

int main() {
    int nl, nc;
    scanf("%d %d", &nl, &nc);

    if (nl < 1 || nl > 10 || nc < 1 || nc > 10) {
        printf("dimensao invalida\n");
        return 0;
    }

    int matriz[nl][nc];
    int contagem[1001] = {0};  // Assume valores de 0 a 100 para simplificação
    int elementos_unicos[1000]; // Vetor para armazenar elementos únicos
    int indice_unico = 0, i, j, valor;

    // Leitura da matriz e contagem de ocorrências
    for (i = 0; i < nl; i++) {
        for (j = 0; j < nc; j++) {
            scanf("%d", &matriz[i][j]);
            contagem[matriz[i][j]]++;  // Incrementa a contagem do valor na matriz
        }
    }

    // Identificação dos elementos únicos na ordem de aparição
    for (i = 0; i < nl; i++) {
        for (j = 0; j < nc; j++) {
            valor = matriz[i][j];
            if (contagem[valor] == 1) {  // Verifica se o elemento é único
                elementos_unicos[indice_unico++] = valor;
            }
        }
    }

    // Saída dos elementos únicos ou mensagem "sem elementos unicos"
    if (indice_unico == 0) {
        printf("sem elementos unicos\n");
    } else {
        for (i = 0; i < indice_unico; i++) {
            if (i > 0) printf(",");  // Imprime vírgula entre os elementos
            printf("%d", elementos_unicos[i]);
        }
        printf("\n");
    }

    return 0;
}
