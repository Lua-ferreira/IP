#include <stdio.h>
#include <stdbool.h>

bool primo(long long int n){
    int i, k=0;
    bool b = true;

    if(n>1){
        for(i=2; i<n; i++){
            if (n == 2){
                b = true;
                break;
            }
            if(n%i==0){
                b = false;
                k++;
                break;
            }
        }
        if(k==0)
            b = true;
    }
    else if(n == 0 || n == 1)
        b = false;
    else
        b = false;

    return b;
}

int main (){
    int i, k;
    long long int n, div;

    while((scanf("%lld", &n)) != EOF){
        k=0;
        if(n>1){
            printf("%lld = ", n);
            div=2;
            for(i=1; n>=1; i++){
                if(primo(div)==true && (n%div)==0){
                    if(k==0){
                        printf("%lld", div);
                    }
                    else
                        printf(" x %lld", div);

                    n=n/div;
                    if(n%div!=0)
                        div++;
                    k++;
                }
                else
                    div++;
                if(n==1){
                    printf("\n");
                    break;
                }
            }
        }
        else{
            printf("Fatoracao nao e possivel para o numero %lld!\n", n);
        }
    }
    return 0;
}