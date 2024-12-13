#include <stdio.h>
#include <string.h>

void processaTexto(char *texto) {
    int frequencia[26] = {0};
    int i, maxFreq = 0;
    char resultado[27] = ""; // Para armazenar as letras de maior frequência (no máximo 26 letras + '\0')

    // Contar a frequência de cada letra
    for (i=0; texto[i] != '\0'; i++) {
        char ch = texto[i];
        // Verificar se é uma letra (manual)
        if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z')) {
            // Converter para minúscula (manual)
            if (ch >= 'A' && ch <= 'Z') {
                ch = ch + ('a' - 'A'); // 'A' para 'a' é um deslocamento de 32 no código ASCII
            }
            frequencia[ch - 'a']++;
            if (frequencia[ch - 'a'] > maxFreq) {
                maxFreq = frequencia[ch - 'a'];
            }
        }
    }

    // Identificar as letras com frequência máxima
    for (i=0; i<26; i++) {
        if (frequencia[i] == maxFreq) {
            char letra = 'a' + i;
            strncat(resultado, &letra, 1);
        }
    }

    // Imprimir o resultado
    printf("%s\n", resultado);
}

int main() {
    int n, i;
    char linha[201];

    // Ler o número de casos de teste
    scanf("%d\n", &n);

    for (i = 0; i < n; i++) {
        fgets(linha, sizeof(linha), stdin);
        linha[strcspn(linha, "\n")] = '\0'; // Remover o caractere de nova linha, se presente
        processaTexto(linha);
    }

    return 0;
}
