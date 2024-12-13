#include <stdio.h>

void printamatriz(int matriz[99][99], int tam){
    int i, j;

    for (i=tam/2; i>=0; i--){
        printf("                    ");
        for (j=0; j<=tam; j++) {
            if(j==tam) printf("%c", matriz[i][j]);
            else printf("%c ", matriz[i][j]);
        }
        printf("\n");
    }

    for (i=1; i<=tam/2; i++){
        printf("                                        ");
        for (j=0; j<=tam; j++) {
            if(j==tam) printf("%c", matriz[i][j]);
            else printf("%c ", matriz[i][j]);
        }
        printf("\n");
    }
}

int main(){
    int i, j, tam, meio;
    char borda, centro;
    int losango[99][99];

    scanf("%d%*c%c%*c%c%*c", &tam, &borda, &centro);

    if(tam<1 || tam>99 || tam%2==0){
        printf("Dimensao invalida!\n");
        return 0;
    }

    meio=tam/2;

    for (i=0; i<tam; i++){
        for(j=0; j<tam; j++){
            losango[i][j] = ' ';
        }
    }

    for (i=0; i<=meio; i++) {
        losango[meio-i][meio-i] = borda;
        losango[meio-i][meio+i] = borda;
        losango[meio+i][meio-i] = borda;
        losango[meio+i][meio+i] = borda;

        //printf("1   --  \n");
        //printamatriz(losango, tam);
            
        for (j=meio-i+1; j<=meio+i-1; j++) {
            losango[meio-i][j] = centro;
            losango[meio+i][j] = centro;
        }
        //printf("2   --  \n");
        //printamatriz(losango, tam);
        //printf("\n");
    }

    printamatriz(losango, tam);

    return 0;
}