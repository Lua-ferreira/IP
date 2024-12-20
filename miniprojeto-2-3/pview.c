#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define ID_SIZE 4

struct {
    char code[ID_SIZE];
    int p;
    double* coef;
} typedef Poly;

int main(int argc, char* argv[]) {
    if (argc != 2) {
        fprintf(stderr, "Uso: %s <arquivo_binario>\n", argv[0]);
        return 1;
    }

    FILE* arq = fopen(argv[1], "rb");
    if (!arq) {
        perror("Erro ao abrir o arquivo");
        return 1;
    }

    Poly p;

    // Lê o código e a potência do arquivo binário
    fread(p.code, sizeof(char), ID_SIZE, arq);
    fread(&p.p, sizeof(int), 1, arq);

    // Aloca memória para os coeficientes
    p.coef = (double*)malloc(p.p * sizeof(double));
    fread(p.coef, sizeof(double), p.p, arq);

    fclose(arq);

    // Verifica se o arquivo é válido
    if (strncmp(p.code, "poly", ID_SIZE) != 0) {
        fprintf(stderr, "Arquivo inválido ou corrompido.\n");
        free(p.coef);
        return 1;
    }

    // Imprime o polinômio no formato humano legível
    printf("Polinômio do arquivo '%s':\n", argv[1]);
    for (int i = 0; i < p.p; i++) {
        if (i > 0 && p.coef[i] >= 0) {
            printf("+");
        }
        printf("%.2lfX^%d ", p.coef[i], i);
    }
    printf("\n");

    free(p.coef);
    return 0;
}
