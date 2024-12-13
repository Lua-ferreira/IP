#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdbool.h>

#define MAX_WORDS 200
#define MAX_WORD_LEN 65

// Função para verificar se um caractere é um separador
bool is_separator(char ch, char *sep) {
    while (*sep) {
        if (ch == *sep) return true;
        sep++;
    }
    return false;
}

// Função para separar palavras com base nos separadores
int str_split(char *str, char m[][MAX_WORD_LEN], char *sep) {
    int word_count = 0;
    int word_len = 0;
    char word[MAX_WORD_LEN] = {0};

    while (*str) {
        if (!is_separator(*str, sep) && word_len < MAX_WORD_LEN - 1) {
            // Constrói a palavra
            word[word_len++] = *str;
        } else if (word_len > 0) {
            // Salva a palavra na matriz
            word[word_len] = '\0';
            strcpy(m[word_count++], word);
            word_len = 0;
            memset(word, 0, sizeof(word)); // Limpa a palavra temporária
        }
        str++;
    }
    // Adiciona a última palavra se houver
    if (word_len > 0) {
        word[word_len] = '\0';
        strcpy(m[word_count++], word);
    }
    return word_count;
}

// Função principal para processar a entrada e saída
int main() {
    char text[1001];
    char separators[100];
    char words[MAX_WORDS][MAX_WORD_LEN];
    int i, word_count;

    // Leitura do texto e dos separadores
    scanf("%[^\n]", text);
    getchar(); // Limpa o '\n' restante no buffer
    scanf("%[^\n]", separators);

    // Chama a função de separação
    word_count = str_split(text, words, separators);

    // Calcula o comprimento de cada palavra e encontra o máximo
    int max_len = 0;
    for (i = 0; i < word_count; i++) {
        int len = strlen(words[i]);
        if (len > max_len) max_len = len;
        printf("(%d)%s\n", len, words[i]);
    }

    // Conta as palavras com o comprimento igual ao máximo
    int max_len_count = 0;
    for (i = 0; i < word_count; i++) {
        if (strlen(words[i]) == max_len) max_len_count++;
    }

    // Exibe o resultado final
    printf("%d\n", max_len_count);

    return 0;
}
