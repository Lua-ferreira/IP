#include <stdio.h>
#include <string.h>

#define MAX_TEXTO 2048
#define MAX_PALAVRA 128

// Função para verificar se o caractere é delimitador
int e_delimitador(char c) {
    return (c == ' ' || c == '.' || c == ',' || c == '!' || c == '?' ||
            c == '(' || c == ')' || c == '[' || c == ']' || c == '{' || c == '}');
}

// Função para calcular a frequência de uma palavra no texto
int calcula_frequencia(const char *palavra, const char *texto) {
    int i = 0, j = 0, frequencia = 0;
    char palavra_atual[MAX_PALAVRA];

    while (texto[i] != '\0') {
        if (!e_delimitador(texto[i])) {
            palavra_atual[j++] = texto[i];
        } else if (j > 0) {
            palavra_atual[j] = '\0'; // Finaliza a palavra
            j = 0;
            if (strcmp(palavra_atual, palavra) == 0) {
                frequencia++;
            }
        }
        i++;
    }

    // Verifica a última palavra
    if (j > 0) {
        palavra_atual[j] = '\0';
        if (strcmp(palavra_atual, palavra) == 0) {
            frequencia++;
        }
    }

    return frequencia;
}

// Função para exibir palavras com suas frequências
void conta_palavras(char *texto) {
    char palavra_atual[MAX_PALAVRA];
    int i = 0, j = 0;

    while (texto[i] != '\0') {
        if (!e_delimitador(texto[i])) {
            palavra_atual[j++] = texto[i]; // Constrói a palavra atual
        } else if (j > 0) {
            palavra_atual[j] = '\0'; // Finaliza a palavra
            j = 0;
            int frequencia = calcula_frequencia(palavra_atual, texto); // Calcula a frequência da palavra
            printf("(%s)%d\n", palavra_atual, frequencia);
        }
        i++;
    }

    // Exibe a última palavra, se houver
    if (j > 0) {
        palavra_atual[j] = '\0';
        int frequencia = calcula_frequencia(palavra_atual, texto);
        printf("(%s)%d\n", palavra_atual, frequencia);
    }
}

int main() {
    char texto[MAX_TEXTO];

    // Ler a entrada usando scanf até nova linha
    scanf("%[^\n]%*c", texto);

    // Contar palavras e suas frequências
    conta_palavras(texto);

    return 0;
}
