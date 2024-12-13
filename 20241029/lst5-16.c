#include <stdio.h>

#define NOCON -1 //valor para indicar a ausência de conexão

int main() {
    //definindo a matriz de distâncias entre as cidades
    int distancias[6][6] = {
        {0, 63, 210, 190, NOCON, 190},
        {63, 0, 160, 150, 95, 10},
        {210, 160, 0, 10, 1, 10},
        {190, 150, 10, 0, 10, 20},
        {10, 95, 7, 21, 0, 80},
        {190, 2, NOCON, 41, 80, 0}
    };

    int n, i, j;
    int rota[100], distancia_total = 0, rota_valida = 1, origem, destino;

    //digitar o tamanho da rota
    scanf("%d", &n);

    if (n<=0 || n>100) {
        printf("rota invalida!\n");
        return 0;
    }

    //pega a informaçao das cidades
    for (i=0; i<n; i++) {
        scanf("%d", &rota[i]);
        if (rota[i] < 0 || rota[i] > 5) {
            printf("rota invalida!\n");
            return 0;
        }
    }

    //calcula a distância total da rota
    for (i=0; i< n-1; i++) {
        origem = rota[i];
        destino = rota[i + 1];
        if (distancias[origem][destino] == NOCON) {
            rota_valida = 0;
            break;
        }
        distancia_total += distancias[origem][destino];
    }

    // Exibe o resultado
    if (rota_valida) {
        printf("%d\n", distancia_total);
    } else {
        printf("rota invalida!\n");
    }

    return 0;
}
