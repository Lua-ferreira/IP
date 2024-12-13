#include <stdio.h>
#include <stdlib.h>

// Função para trocar dois elementos de lugar
void troca(int *xp, int *yp) {
    int temp = *xp;
    *xp = *yp;
    *yp = temp;
}

// Função que implementa o algoritmo Bubble Sort
void bubbleSort(int arr[], int n) {
    int i, j;
    int trocou;

    // Loop para passar por todo o array
    for (i = 0; i < n-1; i++) {
        trocou = 0;
        // A cada iteração completa do loop externo, o i-ésimo maior elemento é colocado na posição correta ao final do array,
        // então as comparações subsequentes podem ignorar essa parte já ordenada do array.
        for (j = 0; j < n-i-1; j++) {
            if (arr[j] > arr[j+1]) {
                troca(&arr[j], &arr[j+1]);
                trocou = 1; // Marca que uma troca foi realizada
            }
        }

        // Se não houve nenhuma troca, o array já está ordenado
        if (trocou == 0)
            break;
    }
}

// Tira os elementos repetidos do vetor
void unico(int *n, int arr[]) {
    int i, j = 0;

    for (i = 0; i < *n - 1; i++) {
        if (arr[i] != arr[i + 1]) {
            arr[j] = arr[i];
            j++;
        }
    }
    arr[j++] = arr[*n - 1]; // Adiciona o último elemento único
    *n = j; // Atualiza o tamanho do array
}

int main(){
    int n, i, numeros[1000];

    scanf("%d", &n);

    for(i=0; i<n; i++){
        scanf("%d", &numeros[i]);
    }

    bubbleSort(numeros, n);
    unico(&n, numeros);

    for(i=0; i<n; i++){
        printf("%d\n", numeros[i]);
    }
}