#include <stdio.h>

int main(){
    int l, c, mat[7][7], numero, soma, maiorsoma;

    for(l=0; l<6; l++){
        for(c=0; c<6; c++){
            scanf("%d", &numero);
            mat[l][c]=numero;
        }
    }

    for(l=0; l<4; l++){
        for(c=0; c<4; c++){
            if(mat[l][c]!=0){
                soma= mat[l][c] + mat[l][c+1] + mat[l][c+2] + mat[l+1][c+1] + mat[l+2][c] + mat[l+2][c+1] + mat[l+2][c+2];
                if(l==0 && c==0)
                    maiorsoma=soma;
                if(soma>maiorsoma)
                    maiorsoma=soma;
            }
        }
    }
    
    printf("%d\n", maiorsoma);

    return 0;
}