#include <stdio.h>
#include <string.h>

void printBits(void* ptr, size_t size) {
    unsigned char* bytePtr = (unsigned char*)ptr;
    for (size_t i = 0; i < size; i++) {
        for (int j = 7; j >= 0; j--) {
            printf("%d", (bytePtr[i] >> j) & 1);
        }
        printf(" ");
    }
}

int main() {
    double num;
    printf("Digite um número real (double): ");
    scanf("%lf", &num);

    // Conversão para diferentes tipos
    unsigned char uc = (unsigned char)num;
    unsigned short us = (unsigned short)num;
    unsigned int ui = (unsigned int)num;
    float f = (float)num;

    // Exibição dos bits
    printf("Bits de unsigned char: ");
    printBits(&uc, sizeof(uc));
    printf("\n");

    printf("Bits de unsigned short: ");
    printBits(&us, sizeof(us));
    printf("\n");

    printf("Bits de unsigned int: ");
    printBits(&ui, sizeof(ui));
    printf("\n");

    printf("Bits de float: ");
    printBits(&f, sizeof(f));
    printf("\n");

    printf("Bits de double: ");
    printBits(&num, sizeof(num));
    printf("\n");

    return 0;
}
