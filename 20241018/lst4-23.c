#include <stdio.h>
#include <string.h>

void dancante(char *str) {
    int i, maiuscula = 1; // Flag para alternar entre maiúscula e minúscula
    char c;

    for (i = 0; str[i] != '\0'; i++) {
        c = str[i];

        if (c >= 'A' && c <= 'Z') { // Verifica se é uma letra maiúscula
            if (maiuscula) {
                maiuscula = 0; // Alterna para minúscula
            } else {
                str[i] = c + ('a' - 'A'); // Converte para minúscula
                maiuscula = 1; // Alterna para maiúscula
            }
        } else if (c >= 'a' && c <= 'z') { // Verifica se é uma letra minúscula
            if (maiuscula) {
                str[i] = c - ('a' - 'A'); // Converte para maiúscula
                maiuscula = 0; // Alterna para minúscula
            } else {
                maiuscula = 1; // Alterna para maiúscula
            }
        }
        // Espaços são ignorados, não alteram a flag `maiuscula`
    }
}

int main() {
    char str[51]; // Cada sentença pode conter até 50 caracteres

    // Ler entradas até o fim do arquivo
    while (scanf("%[^\n]%*c", str) != EOF) {
        dancante(str);
        printf("%s\n", str);
    }

    return 0;
}
