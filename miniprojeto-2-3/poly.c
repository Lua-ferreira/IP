#include "poly.h"

Poly* create_poly(int p) {
    Poly* poly = (Poly*)malloc(sizeof(Poly));
    if (!poly) {
        fprintf(stderr, "Erro ao alocar memória para o polinômio.\n");
        exit(EXIT_FAILURE);
    }
    strncpy(poly->code, "poly", ID_SIZE);
    poly->p = p;
    poly->coef = (double*)calloc(p, sizeof(double));
    if (!poly->coef) {
        free(poly);
        fprintf(stderr, "Erro ao alocar memória para os coeficientes.\n");
        exit(EXIT_FAILURE);
    }
    return poly;
}

void free_poly(Poly* poly) {
    if (poly) {
        free(poly->coef);
        free(poly);
    }
}

void save_poly(const char* filename, Poly* poly) {
    FILE* file = fopen(filename, "wb");
    if (!file) {
        fprintf(stderr, "Erro ao abrir o arquivo para escrita: %s\n", filename);
        exit(EXIT_FAILURE);
    }
    fwrite(poly->code, sizeof(char), ID_SIZE, file);
    fwrite(&poly->p, sizeof(int), 1, file);
    fwrite(poly->coef, sizeof(double), poly->p, file);
    fclose(file);
}
