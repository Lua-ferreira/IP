#include <stdio.h>
#include <string.h>

void str_clean(char *str, char *clr) {
    int i, j, k, remover;
    char c;

    // Iterar sobre a string original
    for (i = 0, j = 0; str[i] != '\0'; i++) {
        c = str[i];
        remover = 0;

        // Verificar se o caractere atual está na lista de caracteres a serem removidos
        for (k = 0; clr[k] != '\0'; k++) {
            if (c == clr[k]) {
                remover = 1;
                break;
            }
        }

        // Se não estiver na lista, manter o caractere na string
        if (!remover) {
            str[j++] = c;
        }
    }

    // Finalizar a string limpa
    str[j] = '\0';
}

#define N 256

int main() {
    char str[N]; // String original
    char clr[N]; // Lista de caracteres indesejados

    // Leitura das strings
    scanf("%[^\n]%*c", str);
    scanf("%[^\n]%*c", clr);

    // Processar a string para remover os caracteres indesejados
    str_clean(str, clr);

    // Imprimir a string modificada
    printf("%s\n", str);

    return 0;
}
