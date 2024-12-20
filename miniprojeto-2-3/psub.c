#include "poly.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char* argv[]) {
    if (argc != 4) {
        fprintf(stderr, "Uso: %s <arquivo1> <arquivo2> <arquivo_saida>\n", argv[0]);
        return 1;
    }

    Poly* p1 = load_poly(argv[1]);
    Poly* p2 = load_poly(argv[2]);

    if (!p1 || !p2) {
        fprintf(stderr, "Erro ao carregar os polinômios.\n");
        return 1;
    }

    int max_p = (p1->p > p2->p) ? p1->p : p2->p;
    Poly result = { .p = max_p, .coef = (double*)calloc(max_p, sizeof(double)) };
    strncpy(result.code, "poly", ID_SIZE);

    for (int i = 0; i < max_p; i++) {
        if (i < p1->p) result.coef[i] += p1->coef[i];
        if (i < p2->p) result.coef[i] -= p2->coef[i];
    }

    save_poly(argv[3], &result);

    printf("Arquivo '%s' criado com sucesso.\n", argv[3]);

    free_poly(p1);
    free_poly(p2);
    free(result.coef);
    return 0;
}
