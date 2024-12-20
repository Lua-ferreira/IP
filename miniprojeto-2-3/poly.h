#ifndef POLY_H
#define POLY_H

#define ID_SIZE 4

typedef struct {
    char code[ID_SIZE];
    int p;
    double* coef;
} Poly;

// Funções auxiliares
Poly* load_poly(const char* filename);
void save_poly(const char* filename, const Poly* p);
void free_poly(Poly* p);

#endif
