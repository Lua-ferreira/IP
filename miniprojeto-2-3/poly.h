#ifndef POLY_H
#define POLY_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define ID_SIZE 4  // Tamanho do código 'poly'

typedef struct {
    char code[ID_SIZE];  // Identificador do arquivo
    int p;               // Potência máxima
    double* coef;        // Vetor de coeficientes
} Poly;

// Funções auxiliares
Poly* create_poly(int p);
void free_poly(Poly* poly);
void save_poly(const char* filename, Poly* poly);
Poly* load_poly(const char* filename);
void print_poly(Poly* poly);
Poly* add_poly(Poly* a, Poly* b);
Poly* subtract_poly(Poly* a, Poly* b);
Poly* parse_poly_string(const char* poly_string);

#endif
