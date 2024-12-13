#include <stdio.h>
#include <string.h>
#include <ctype.h>

void criptografar(char *linha) {
    int len = strlen(linha);
    int i;

    // Primeira passada: desloca 3 posições para a direita para letras maiúsculas e minúsculas
    for (i = 0; i < len; i++) {
        if (isalpha(linha[i])) {
            linha[i] += 3;
        }
    }

    // Segunda passada: inverte a linha
    for (i = 0; i < len / 2; i++) {
        char temp = linha[i];
        linha[i] = linha[len - i - 1];
        linha[len - i - 1] = temp;
    }

    // Terceira passada: desloca uma posição para a esquerda nos caracteres da metade em diante
    for (i = len / 2; i < len; i++) {
        linha[i] -= 1;
    }
}

int main() {
    int N, i;
    scanf("%d%*c", &N);  // Lê o número de linhas e ignora o '\n'

    char linha[1001];

    for (i = 0; i < N; i++) {
        fgets(linha, 1001, stdin);
        linha[strcspn(linha, "\n")] = '\0';  // Remove o '\n' do final da linha, se existir

        criptografar(linha);

        printf("%s\n", linha);
    }

    return 0;
}
