#include <stdio.h>
#include <string.h>

long int string2int(const char *str) {
    long int num = 0;
    int i = 0, negativo = 0;

    // Verificar se o número é negativo
    if (str[0] == '-') {
        negativo = 1;
        i++; // Ignorar o sinal de menos
    }

    // Converter cada caractere numérico para o inteiro correspondente
    for (; str[i] != '\0'; i++) {
        num = num * 10 + (str[i] - '0');
    }

    // Ajustar para negativo, se necessário
    if (negativo) {
        num = -num;
    }

    return num;
}

int main() {
    char str[129]; // String de entrada com até 128 caracteres + '\0'
    long int n;

    // Ler entradas até o final do arquivo
    while (scanf("%s", str) != EOF) {
        n = string2int(str); // Converter a string para inteiro
        printf("%ld %ld\n", n, n * 2); // Imprimir o número e o dobro
    }

    return 0;
}
