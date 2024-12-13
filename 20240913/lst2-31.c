#include <stdio.h>

int main (){
    int n, f1, f2, i, f, k=0;

    scanf("%d%d%d", &n, &f1, &f2);


    for(i=0; i<n; i++){
        scanf("%d", &f);
        if(i==0 && f!=f1){
            k++;
            break;
        }
        if(i==1 && f!=f2){
            k++;
            break;
        }
        if(i>1 && f!=(f1+f2)){
            k++;
            break;
        }
        printf("OK\n");
            
        if(i>1 && i%2==0)
            f1=f;
        if(i>1 && i%2!=0)
            f2=f;            
    }
    if(k==0)
        printf("A serie informada e de Fibonacci\n");
    else
        printf("Nao e Fibonacci\n");


    return 0;
}