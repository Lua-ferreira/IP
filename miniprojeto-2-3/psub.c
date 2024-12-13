#include "poly.h"

int main(int argc, char* argv[]) {
    if (argc != 4) {
        fprintf(stderr, "Uso: ./psub <file_name_1> <file_name_2> <file_name_out>\n");
        return EXIT_FAILURE;
    }

    Poly* poly1 = load_poly(argv[1]);
    Poly* poly2 = load_poly(argv[2]);

    Poly* result = subtract_poly(poly1, poly2);
    save_poly(argv[3], result);

    free_poly(poly1);
    free_poly(poly2);
    free_poly(result);

    return EXIT_SUCCESS;
}
