#include <stdio.h>

int ehPermutacao( int matriz[500][500], int n, int *soma ){
    int i, j;
    int verifica[500], permuta=0, somalinha, somacoluna;

    *soma=0;

    for(i=0; i<n; i++){
        somalinha=0;
        somacoluna=0;
        for(j=0; j<n; j++){
            //nesses dois ifs ja verifica se tem algum elemento diferente de 0 ou 1
            if(matriz[i][j]!=1){
                if(matriz[i][j]!=0){
                    permuta=1;
                }
            }
            if(matriz[j][i]!=1){
                if(matriz[j][i]!=0){
                    permuta=1;
                }
            }
            somalinha+=matriz[i][j];
            somacoluna+=matriz[j][i];
        }
        *soma+=somalinha;
        if(somalinha!=1 || somacoluna!=1)    permuta=1;
    }
    return permuta;
}

int main(){
    int i, j, n, permuta, soma, matriz[500][500];

    scanf("%d", &n);
    for(i=0; i<n; i++){
        for(j=0; j<n; j++){
            scanf("%d", &matriz[i][j]);
        }
    }

    permuta = ehPermutacao(matriz, n, &soma);

    printf("%d\n", n);
    if(permuta==0) printf("PERMUTACAO\n");
    if(permuta==1) printf("NAO EH PERMUTACAO\n");
    printf("%d\n", soma);
    
    return 0;
}