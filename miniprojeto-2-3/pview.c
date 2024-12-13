#include "poly.h"

int main(int argc, char* argv[]) {
    if (argc != 2) {
        fprintf(stderr, "Uso: ./pview <file_name>\n");
        return EXIT_FAILURE;
    }

    const char* file_name = argv[1];
    Poly* poly = load_poly(file_name);
    if (!poly) {
        fprintf(stderr, "Erro ao carregar o polinômio do arquivo.\n");
        return EXIT_FAILURE;
    }

    print_poly(poly);
    free_poly(poly);

    return EXIT_SUCCESS;
}
