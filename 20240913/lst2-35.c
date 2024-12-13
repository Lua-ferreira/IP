#include <stdio.h>
#include <math.h>
    
unsigned long int soma_divisores(unsigned long int n){
    unsigned long int soma=1;
    int i;
    for(i=2; i<=(n/2); i++){
        if(n%i==0){
            soma+=i;
        }
    }
    return soma;
}
    
int main(){
    int pares, i;
    unsigned long int numero1, numero2, soma1, soma2, temp1=220, temp2=0, cont=0;
    
    scanf("%d", &pares);
    
        for(numero1=temp1; cont<pares; numero1++){
            if(numero1>temp2){

                    soma1=soma_divisores(numero1);
                    numero2=soma1;
                    soma2=soma_divisores(numero2);
                    if(soma2==numero1 && numero1<numero2){
                        printf("(%lu,%lu)\n", numero1, numero2);
                        temp1=numero1;
                        temp2=numero2;
                        cont++;
                    }  
                
            }
        }        
    return 0;
}