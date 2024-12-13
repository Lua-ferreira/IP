#include <stdio.h>

int main (){
    int x, y;

    scanf("%d%d", &x, &y);

    if (x%2==0){
        while (y>0){
            printf("%d ", x);
            x += 2;
            y--;
        }
    }
    else
        printf("O PRIMEIRO NUMERO NAO E PAR");
    
    printf("\n");

    return 0;
}