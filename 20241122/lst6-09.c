#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//função para achar o mdc
int mdc(int a, int b) {
    int temp;
    while (b != 0) {
        temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

//função para simplificar as frações
void simplifica(int *num, int *den) {
    int divisor;
    divisor = mdc(*num, *den);
    *num /= divisor;
    *den /= divisor;
}

int main() {
    int n, i, j, l;
    int num1, num2, den1, den2;
    int encontraEquivalente;
    char linha[1000]; //buffer para armazenar a linha de frações

    scanf("%d%*c", &n); //quantidade de casos de teste

    //loop para cada caso de teste
    for (i = 1; i <= n; i++) {
        fgets(linha, sizeof(linha), stdin); //leitura da linha de frações

        //conta o número de frações na linha
        int m = 0;
        for (j = 0; linha[j] != '\0'; j++) {
            if (linha[j] == ' ') {
                m++;
            }
        }
        m++; //incrementa para incluir a última fração

        //aloca memória para armazenar as frações
        char **fracoes = (char **)malloc(m * sizeof(char *));
        char *token = strtok(linha, " ");
        for (j = 0; j < m && token != NULL; j++) {
            fracoes[j] = (char *)malloc((strlen(token) + 1) * sizeof(char));
            strcpy(fracoes[j], token);
            token = strtok(NULL, " ");
        }

        printf("Caso de teste %d\n", i);
        encontraEquivalente = 0; //verificador

        //loop para comparar as frações
        for (j = 0; j < m; j++) {
            for (l = j + 1; l < m; l++) {
                //converte as frações de string para inteiros
                sscanf(fracoes[j], "%d/%d", &num1, &den1);
                sscanf(fracoes[l], "%d/%d", &num2, &den2);

                simplifica(&num1, &den1);
                simplifica(&num2, &den2);

                //compara as frações simplificadas
                if (num1 == num2 && den1 == den2) {
                    printf("%s equivalente a %s\n", fracoes[j], fracoes[l]);
                    encontraEquivalente = 1; //marca as equivalentes
                }
            }
        }

        if (!encontraEquivalente) {
            printf("Nao ha fracoes equivalentes na sequencia\n");
        }

        //libera a memória das frações
        for (j = 0; j < m; j++) {
            free(fracoes[j]); //libera cada string da matriz
        }
        free(fracoes); //libera a matriz de ponteiros
    }

    return 0;
}
