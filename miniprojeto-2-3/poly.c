#include "poly.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Carregar um polinômio de um arquivo binário
Poly* load_poly(const char* filename) {
    FILE* file = fopen(filename, "rb");
    if (!file) {
        perror("Erro ao abrir o arquivo");
        return NULL;
    }

    Poly* p = (Poly*)malloc(sizeof(Poly));
    fread(p->code, sizeof(char), ID_SIZE, file);
    fread(&p->p, sizeof(int), 1, file);

    p->coef = (double*)malloc(p->p * sizeof(double));
    fread(p->coef, sizeof(double), p->p, file);

    fclose(file);
    return p;
}

// Salvar um polinômio em um arquivo binário
void save_poly(const char* filename, const Poly* p) {
    FILE* file = fopen(filename, "wb");
    if (!file) {
        perror("Erro ao abrir o arquivo para escrita");
        return;
    }

    fwrite(p->code, sizeof(char), ID_SIZE, file);
    fwrite(&p->p, sizeof(int), 1, file);
    fwrite(p->coef, sizeof(double), p->p, file);

    fclose(file);
}

// Liberar a memória de um polinômio
void free_poly(Poly* p) {
    free(p->coef);
    free(p);
}
