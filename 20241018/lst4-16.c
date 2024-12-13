#include <stdio.h>

int TA, TB; // Tamanhos dos conjuntos A e B
int A[100], B[100]; // Conjuntos A e B

// Função para verificar se um elemento está em um conjunto
int contem(int conjunto[], int tamanho, int elemento) {
    int i;
    for (i = 0; i < tamanho; i++) {
        if (conjunto[i] == elemento) {
            return 1; // Elemento encontrado
        }
    }
    return 0; // Elemento não encontrado
}

// Função para ler os elementos de um conjunto, evitando duplicatas
void ler_conjunto(int conjunto[], int tamanho) {
    int elemento, i = 0;
    while (i < tamanho) {
        scanf("%d", &elemento);
        if (!contem(conjunto, i, elemento)) { // Apenas adiciona se não for duplicado
            conjunto[i] = elemento;
            i++;
        }
    }
}

// Função para imprimir um conjunto
void imprimir_conjunto(int conjunto[], int tamanho) {
    int i;
    printf("(");
    for (i = 0; i < tamanho; i++) {
        printf("%d", conjunto[i]);
        if (i < tamanho - 1) printf(",");
    }
    printf(")\n");
}

// Função para imprimir A - B
void diferenca(int A[], int TA, int B[], int TB) {
    int i, primeira = 1;
    printf("(");
    for (i = 0; i < TA; i++) {
        if (!contem(B, TB, A[i])) {
            if (!primeira) printf(",");
            printf("%d", A[i]);
            primeira = 0;
        }
    }
    printf(")\n");
}

// Função para imprimir A x B
void produto_cartesiano(int A[], int TA, int B[], int TB) {
    int i, j, primeira = 1;
    printf("(");
    for (i = 0; i < TA; i++) {
        for (j = 0; j < TB; j++) {
            if (!primeira) printf(",");
            printf("(%dx%d)", A[i], B[j]);
            primeira = 0;
        }
    }
    printf(")\n");
}

int main() {
    // Leitura dos tamanhos dos conjuntos A e B
    do {
        scanf("%d", &TA);
    } while (TA < 1 || TA > 100);

    do {
        scanf("%d", &TB);
    } while (TB < 1 || TB > 100);

    // Leitura dos conjuntos A e B
    ler_conjunto(A, TA);
    ler_conjunto(B, TB);

    // Impressão dos conjuntos A e B
    imprimir_conjunto(A, TA);
    imprimir_conjunto(B, TB);

    // Impressão da diferença A - B
    diferenca(A, TA, B, TB);

    // Impressão do produto cartesiano A x B
    produto_cartesiano(A, TA, B, TB);

    return 0;
}
