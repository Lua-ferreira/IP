#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//função para achar o mdc
int mdc(int a, int b){
    int temp;

    while(b!=0){
        temp = b;
        b = a%b;
        a = temp;
    }

    return a;
}

//função para simplificar as frações
void simplifica(int *num, int *den){
    int divisor;

    divisor = mdc(*num, *den);
    *num /= divisor;
    *den /= divisor;
}

int main(){
    int n, m, i, j, l;
    int num1, num2, den1, den2;
    int encontraEquivalente=0;

    scanf("%d", &n); //qde de casos de teste

    //loop para cada caso de teste
    for(i=1; i<=n; i++){
        scanf("%d", &m); //tamanho sequencia frações para cada caso de teste

        //alocar memoria para armazenar as frações
        char **fracoes = (char **)malloc(m * sizeof(char *));
        for(j=0; j<m; j++){
            fracoes[j] = (char *)malloc(20 * sizeof(char)); //aloca até 20 caracteres para cada fração
            scanf("%s", fracoes[j]);
        }

        printf("Caso de teste %d\n", i);
        encontraEquivalente=0; //verificador

        //loop para comparar as frações
        for(j=0; j<m; j++){
            for(l = j+1; l<m; l++){

                //muda as frações de string para inteiro já no formato certo de numerador e denominador
                sscanf(fracoes[j], "%d/%d", &num1, &den1);
                sscanf(fracoes[l], "%d/%d", &num2, &den2);

                simplifica(&num1, &den1);
                simplifica(&num2, &den2);

                //compara as frações simplificadas
                if(num1==num2 && den1==den2){
                    printf("%s equivalente a %s\n", fracoes[j], fracoes[l]);
                    encontraEquivalente=1; //marca as equivalentes
                }
            }
        }

        if(!encontraEquivalente){
            printf("Nao ha fracoes equivalentes na sequencia\n");
        }

        //libera a memoria das frações
        for(j=0; j<m; j++){
            free(fracoes[j]); //libera cada string da matriz
        }
        free(fracoes); //libera a matriz de ponteiros
    }

    return 0;
}