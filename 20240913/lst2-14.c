#include <stdio.h>

int main (){
    int i, k=0;
    long long int n;

    scanf("%lld", &n);
    if(n>1){
        for(i=2; i<=n/2; i++){
            if (n == 2){
                printf("PRIMO\n");
                break;
            }
            if(n%i==0){
                printf("NAO PRIMO\n");
                k++;
                break;
            }
        }
        if(k==0)
            printf("PRIMO\n");
    }
    else if(n == 0 || n == 1)
        printf("NAO PRIMO\n");
    else
        printf("Numero invalido!\n");

    return 0;
}