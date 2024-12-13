#include <stdio.h>

int main (){
    int n, i, x, y, k, c;
    k=1;
    c=1;
    scanf("%d", &n);

    scanf("%d", &y);
    for(i=1; i<n; i++){
        scanf("%d", &x);
        if(x>y){
            k += 1;
            if(c<k) 
                c=k;
        }
        else
            k=1;
        y=x;
    }
    printf("O comprimento do segmento crescente maximo e: %d\n", c);

    return 0;
}