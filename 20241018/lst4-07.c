#include <stdio.h>
#include <string.h>
#define N 20

int main(){
	int i, n, m, soma, tamanho, validos;
	char numero[N], semzero[N];
	

    while(1){
        scanf("%d%d", &n, &m);
            
        if(n==m && n==0) break;
        
        sprintf(numero, "%d", m+n);
        
        for(i=0; numero[i]!='\0'; i++){
            if(numero[i]!='0'){
                printf("%c",numero[i]);
            }
        }
        printf("\n");
    }
    
    return 0;
}