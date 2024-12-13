#include <stdio.h>
#include <string.h>
#include <ctype.h>

int contar_aliteracoes(char *linha) {
    char *palavra_atual, *palavra_anterior = NULL;
    int aliteracoes = 0;
    int alit_ativa = 0;

    // Divide a linha em palavras
    palavra_atual = strtok(linha, " ");
    while (palavra_atual != NULL) {
        if (palavra_anterior != NULL) {
            // Verifica se a letra inicial das palavras consecutivas é a mesma (ignora maiúsculas e minúsculas)
            if (tolower(palavra_atual[0]) == tolower(palavra_anterior[0])) {
                if (!alit_ativa) {
                    aliteracoes++;
                    alit_ativa = 1; // Marca que estamos em uma aliteração ativa
                }
            } else {
                alit_ativa = 0; // Reseta a aliteração ativa se as letras iniciais diferirem
            }
        }
        // Move para a próxima palavra
        palavra_anterior = palavra_atual;
        palavra_atual = strtok(NULL, " ");
    }

    return aliteracoes;
}

int main() {
    char linha[510];

    // Lê cada linha até o fim do arquivo
    while (fgets(linha, sizeof(linha), stdin) != NULL) {
        linha[strcspn(linha, "\n")] = '\0'; // Remove o '\n' ao final da linha, se houver
        printf("%d\n", contar_aliteracoes(linha));
    }

    return 0;
}
