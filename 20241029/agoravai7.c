#include <stdio.h>
#define MAX 99

void printamatriz(char matriz[MAX][MAX], int tam) {
    int i, j;
    for (i = 0; i < tam; i++) {
        for (j = 0; j < tam; j++) {
            printf("%c ", matriz[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int tam, l, c, fim;
    char borda, centro;
    char matriz[MAX][MAX];

    // Leitura dos valores de entrada
    scanf("%d%*c%c%*c%c", &tam, &borda, &centro);

    //dimensão
    if (tam < 1 || tam > 99 || tam % 2 == 0) {
        printf("Dimensao invalida!\n");
        return 0;
    }

    //preenchimento inicial da matriz com espaços
    for (l = 0; l < tam; l++) {
        for (c = 0; c < tam; c++) {
            matriz[l][c] = ' ';
        }
    }

    // Preenchimento da borda do losango
    for (l = 0; l < tam; l++) {
        for (c = 0; c < tam; c++) {
            if (l <= (tam / 2) && c <= (tam / 2)) {
                matriz[l][(tam / 2) - l] = borda;
            } else if (l <= (tam / 2) && c > (tam / 2)) {
                matriz[l][(tam / 2) + l] = borda;
            } else if (l > (tam / 2) && c > (tam / 2)) {
                matriz[l][(tam / 2) - (tam - l - 1)] = borda;
            } else if (l > (tam / 2) && c <= (tam / 2)) {
                matriz[l][(tam / 2) + (tam - l - 1)] = borda;
            }
        }
    }

    // Preenchimento do interior do losango
    for (l = 1; l < (tam - 1); l++) {
        fim = 0;
        for (c = (tam - 1); fim == 0; c--) {
            if (matriz[l][c] == borda) {
                fim = c;
            }
        }
        for (c = 0; c < (fim - 1); c++) {
            if (matriz[l][c] != ' ') {
                matriz[l][c + 1] = centro;
            }
        }
    }

    // Impressão da matriz final
    printamatriz(matriz, tam);

    return 0;
}


