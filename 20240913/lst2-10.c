#include <stdio.h>

int main (){
    int n, k=0, d1, d2;

    scanf("%d", &n);

    for(d1=1; d1<7; d1++){
        for(d2=1; d2<7; d2++){
            if(d1+d2==n && d1!=d2){
                    printf("D1: %d, D2: %d\n", d1, d2);
                    k++;  
            }
        }
    }
    if(k==0)
        printf("Combinacao impossivel\n");
    else
        printf("Ha %d possibilidades\n", k);

    return 0;
}