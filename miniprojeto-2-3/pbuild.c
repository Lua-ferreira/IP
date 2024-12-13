#include "poly.h"

int main(int argc, char* argv[]) {
    if (argc != 3) {
        fprintf(stderr, "Uso: ./pbuild <poly_string> <file_name>\n");
        return EXIT_FAILURE;
    }

    const char* poly_string = argv[1];
    const char* file_name = argv[2];

    Poly* poly = parse_poly_string(poly_string);
    save_poly(file_name, poly);
    free_poly(poly);

    return EXIT_SUCCESS;
}
