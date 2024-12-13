#include <stdio.h>
#include <string.h>

double string2double(const char *str) {
    double resultado = 0.0, fator = 1.0;
    int i = 0, negativo = 0, parte_decimal = 0;
    
    // Verificar se o número é negativo
    if (str[i] == '-') {
        negativo = 1;
        i++;
    }

    // Processar a parte inteira e fracionária
    while (str[i] != '\0') {
        if (str[i] == '.') {
            parte_decimal = 1; // Começar a processar a parte decimal
            i++;
            continue;
        }

        if (parte_decimal) {
            fator /= 10.0;
            resultado += (str[i] - '0') * fator;
        } else {
            resultado = resultado * 10.0 + (str[i] - '0');
        }
        i++;
    }

    // Ajustar para negativo, se necessário
    if (negativo) {
        resultado = -resultado;
    }

    return resultado;
}

int main() {
    char str[129]; // String de entrada com no máximo 128 caracteres
    double n;

    // Ler entradas até o final do arquivo
    while (scanf("%s", str) != EOF) {
        n = string2double(str); // Converter a string para double
        printf("%.3lf %.3lf\n", n, n + n); // Imprimir o número e seu dobro
    }

    return 0;
}
