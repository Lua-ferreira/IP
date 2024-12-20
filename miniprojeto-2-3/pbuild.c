#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define ID_SIZE 4

struct {
    char code[ID_SIZE];
    int p;
    double* coef;
} typedef Poly;

int main(int argc, char* argv[]) {
    if (argc != 3) {
        fprintf(stderr, "Uso: %s \"<polinômio>\" <nome_do_arquivo>\n", argv[0]);
        return 1;
    }

    char* polinomio = argv[1];  // Polinômio como string
    char nome_arquivo[100];    // Nome do arquivo de saída

    // Constrói o nome do arquivo com extensão .bin
    snprintf(nome_arquivo, sizeof(nome_arquivo), "%s.bin", argv[2]);

    // Inicializa o polinômio
    Poly p = {"poly", 0, NULL};
    p.coef = (double*)malloc(10 * sizeof(double));  // Suporte para até 10 termos (ajuste conforme necessário)

    // Parse do polinômio (exemplo: "2x^2 + 3x^1 - 5x^0")
    char* token = strtok(polinomio, "+-");
    int i = 0;
    while (token != NULL) {
        double coef;
        int exp;
        sscanf(token, "%lfx^%d", &coef, &exp);
        p.coef[exp] = coef;
        if (exp >= p.p) {
            p.p = exp + 1;  // Atualiza o grau do polinômio
        }
        token = strtok(NULL, "+-");
        i++;
    }

    // Criação do arquivo binário
    FILE* arq = fopen(nome_arquivo, "wb");
    if (!arq) {
        perror("Erro ao criar o arquivo binário");
        free(p.coef);
        return 1;
    }

    // Escreve o conteúdo no arquivo
    fwrite(p.code, sizeof(char), ID_SIZE, arq);
    fwrite(&p.p, sizeof(int), 1, arq);
    fwrite(p.coef, sizeof(double), p.p, arq);

    fclose(arq);
    free(p.coef);

    printf("Arquivo '%s' criado com sucesso.\n", nome_arquivo);
    return 0;
}
