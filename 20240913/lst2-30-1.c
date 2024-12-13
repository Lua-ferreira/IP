#include <stdio.h>
#define linhas 15

void printIntVetor(int * v, int tamanho)
{
    for (int i = 0; i < tamanho; i++)
    {
        printf("%d ",v[i]);
    }
    printf("\n");
}

int main()
{
    int tamanho = 1;
    int * tripascal = new int[tamanho];        // cria a primeira linha
    tripascal[0] = 1;                        // inicia a primeira linha

    for (; tamanho < linhas; tamanho++)
    {
        printIntVetor(tripascal, tamanho);

        int * aux = new int[tamanho + 1];    // cria um novo vetor para a proxima linha
        aux[0] = 1;                            // inicia o 1º campo com 1
        aux[tamanho] = 1;                    // inicia o ultimo campo com 1

        for (int i = 0; i < tamanho -1; i++)                // 
        {                                                    // calcula o centro
            aux[i + 1] = tripascal[i] + tripascal[i + 1];    //
        }                                                    //

        tripascal = aux;                    // passa o vetor aux para o tripascal
    }

    getchar();
    return 0;
}