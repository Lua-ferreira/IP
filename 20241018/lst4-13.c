#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Função para obter o prefixo da string
char* obter_prefixo(int n, const char* s) {
    int len = strlen(s);
    int prefix_len = (n > len) ? len : n; // Definir o tamanho do prefixo
    char* prefixo = (char*)malloc((prefix_len + 1) * sizeof(char)); // Alocar espaço para o prefixo
    
    if (prefixo == NULL) {
        return NULL; // Retorna NULL se a alocação falhar
    }
    
    strncpy(prefixo, s, prefix_len); // Copia os n primeiros caracteres
    prefixo[prefix_len] = '\0';      // Adiciona o terminador de string
    
    return prefixo;
}

int main() {
    int N, n, i;
    char s[500];
    
    // Leitura do número de casos de teste
    scanf("%d", &N);
    getchar(); // Consumir o '\n' após o número de casos de teste
    
    for (i = 0; i < N; i++) {
        // Leitura do valor n e da string s
        scanf("%d ", &n);
        fgets(s, sizeof(s), stdin);
        
        // Remover o '\n' do final de s, se houver
        s[strcspn(s, "\n")] = '\0';
        
        // Obter o prefixo chamando a função
        char* prefixo = obter_prefixo(n, s);
        
        // Verificar se o prefixo foi alocado com sucesso
        if (prefixo != NULL) {
            printf("%s\n", prefixo); // Imprime o prefixo
            free(prefixo);           // Libera o espaço alocado
        }
    }
    
    return 0;
}

/*Explicação do Código
Função obter_prefixo:

A função recebe um inteiro n e uma string s.
Calcula o tamanho real do prefixo (prefix_len), que será o menor valor entre n e o comprimento da string s.
Aloca memória para o prefixo com malloc.
Usa strncpy para copiar os n primeiros caracteres (ou o comprimento da string, se n for maior).
Retorna NULL se a alocação falhar; caso contrário, retorna o ponteiro para o prefixo alocado.
Função main:

Lê o número de casos de teste N.
Para cada caso, lê o valor de n e a string s.
Remove o caractere de nova linha (\n) que fgets pode adicionar ao final de s.
Chama a função obter_prefixo para obter o prefixo de tamanho n.
Se a alocação for bem-sucedida, imprime o prefixo e libera a memória alocada.*/
