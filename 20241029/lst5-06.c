#include <stdio.h>

int main(){
    int largura, altura, cor, borda, i, j;

    scanf("%d%d%d%d", &altura, &largura, &borda, &cor);

    printf("P2\n%d %d\n255\n", altura, largura);
    
    for(i=1; i<=largura; i++){
        for(j=1; j<=altura; j++){
            if(i<=borda || i>(largura-borda)){
                printf("%d ", cor);
            }
            else if(j<=borda || j>(altura-borda))
                printf("%d ", cor);
            else{
                printf("0 ");
            }
        }
        printf("\n");
    }

    return 0;
}